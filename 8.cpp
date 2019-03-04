/*В цивилизованных странах на железнодорожном вокзале работают k касс, однако очередь в них всего одна. Обслуживание происходит следующим образом. Изначально, когда все кассы свободны, первые k человек из очереди подходят к кассам. Остальные ждут своей очереди. Как только кто-нибудь будет обслужен и соответствующая касса освободится, следующий человек из очереди подходит к этой кассе. Так продолжается до тех пор, пока не будут обслужены все клиенты.

Определите время, за которое будут обслужены все клиенты.
*/

#include <iostream>
#include <stdio.h>
#include <vector>
#include <functional>
#include <queue>
using namespace std;
int main() {
	int time, N, X;
	priority_queue<long long, vector<long long>, greater<long long>> station;
	scanf("%d %d", &N, &X);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &time);
		if (station.size() != X) station.push(time);
		else {
			long long temp = station.top(); station.pop();
			station.push(temp + time);
		}
	}
	while (station.size() > 1) station.pop();
	printf("%lld\n", station.top());
	return 0;}
