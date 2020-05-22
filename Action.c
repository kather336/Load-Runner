Action()
{
//This is my first GIT pull and commit
	
	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_cookie("XSRF-TOKEN=eyJpdiI6IldXVGhyeVluY2E1NEY2d0FRQ21GRVE9PSIsInZhbHVlIjoibll3OW5Gelo3OHFlOG4zNkk3Y2g3V3hWdmsyaFd2MkRHUEdubzRXSCtoVVFYQm1KSmFtaytDVTJHdnk0RHhIVyIsIm1hYyI6IjNjYTFlYjQ1NTgyMDY5YWU4YTJlNmZmZDgzNDU3YmQ3MzdjNjI3MzEwZWJlYjc3OGZlODA2YmQxMWExYmZjNDUifQ%3D%3D; DOMAIN=blazedemo.com");

	web_add_cookie("laravel_session=eyJpdiI6InE1TUlrdmdaeDRrNDFxYm9JcE9tbVE9PSIsInZhbHVlIjoiZ2YwY2xaVFFcLzQzVmxqQ3NyUjYyd1wvSU5PMnhCMFpqVlBWd1NLYkN1QWZcL0dNUjQzeHVDTm43dzZMaEx6d3NlYSIsIm1hYyI6ImRjZDRiYzU0MDFjNTcwYjc0YjMyMDIzNzA3ZDVkNTFlMmM2YzM4NmI2ZmJjMDExOTFiNjFjZDVhNzYwNzM0ZmQifQ%3D%3D; DOMAIN=blazedemo.com");

	web_add_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");

	web_url("blazedemo.com", 
		"URL=http://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Cache-Control", 
		"max-age=0");

	web_add_auto_header("Origin", 
		"https://blazedemo.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	lr_think_time(8);

	web_submit_form("reserve.php", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=fromPort", "Value=Boston", ENDITEM, 
		"Name=toPort", "Value=London", ENDITEM, 
		LAST);

	web_submit_form("purchase.php", 
		"Ordinal=1", 
		"Snapshot=t5.inf", 
		ITEMDATA, 
		LAST);

	return 0;
}