# TinyALSA
Create by Buddy Zhang
Date 5-19 2016
TinyAlas base on Linux ALSA format,for this project we can record and play .wav stream.
1. How to start compiler project.
-> In order to use this project,we need add alsa-lib,so we should install alsa lib first.use cmd
       apt-get install alsa-base, alsa-utils, alsa-source,libasound2-dev
-> Update the record code.
       vi capture.c
       make 
-> Update the player code
       vi playback.c
       make run
2. How to record and play you sound.
   -> Record the sound.
       ./record
   -> Play sound
       ./player
