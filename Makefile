# Update the record code
auto:
	@gcc capture.c -I/usr/include/alsa -lasound -o record
# Update the player code
run:
	@gcc playback.c -I/usr/include/alsa -lasound -o player	
# Update data into github/LozziStation/TinyALSA
push:
	@git push TinyALSA master
# Download the data from github/LozziStation/TinyALSA
pull:
	@git pull TinyALSA master
