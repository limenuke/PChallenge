#include <curl/curl.h>

void main(int argc, char* argv[])
{

	curl_global_init(CURL_GLOBAL_ALL);

	CURL *handle = curl_easy_init();
	curl_easy_setopt(handle, CURLOPT_URL, http://earthquake.usgs.gov/earthquakes/feed/v1.0/summary/all_month.geojson);
	if (curl) printf("curl_easy_init() succeeded!\n");
	else fprintf(stderr, "Error calling curl_easy_init().\n");
}