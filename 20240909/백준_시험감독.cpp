/**
백준 13458 시험감독
BFS 
*/
#include <iostream>
#include <queue> 

using namespace std;

int main() {
  long N = 0; long B = 0; long C = 0;
  long input = 0;
  cin >> N; // 총 N 개의 방과 감독관
  long ans =  N; // N명이 이미 감독 했다는 가정.
  queue<long> q;

  // 각 큐에 학생 수를 넣는다
  for (int i = 0 ; i< N ; i++) {
    cin >> input;
    q.push(input);
  }

  cin >> B >> C;
  int cnt = N; // 감독관의 수

  while (!q.empty()) {
    long left = q.front(); q.pop();
    if(cnt-- > 0) { // 감독관이 먼저 본애들은 제외한다.
      if ((left - B) > 0) {
        q.push(left-B);
      }
    }else { // 부감독 - 남은 학생 수를 나눈다.
      if (left % C != 0) ans++;
      ans += left / C;
    }
  } // end of while

  cout << ans;
  return 0;
}
