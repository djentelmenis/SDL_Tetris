#include "Sound.h"

Mix_Music* Sound::musicIntro = nullptr;
Mix_Music* Sound::musicGame = nullptr;
Mix_Music* Sound::musicEnd = nullptr;
Mix_Chunk* Sound::soundEnd = nullptr;
Mix_Chunk* Sound::soundLine = nullptr;
Mix_Chunk* Sound::soundRotate = nullptr;
Mix_Chunk* Sound::soundRotateFail = nullptr;
Mix_Chunk* Sound::soundLock = nullptr;

void Sound::initSound(){
	musicIntro	= Mix_LoadMUS("res/audio/music/intro.wav");
	musicGame	= Mix_LoadMUS("res/audio/music/game.wav");
	musicEnd	= Mix_LoadMUS("res/audio/music/intro.wav");

	soundEnd		= Mix_LoadWAV("res/audio/sound/done.wav");
	soundLine		= Mix_LoadWAV("res/audio/sound/skrrra.wav");
	soundRotate		= Mix_LoadWAV("res/audio/sound/pak.wav");
	soundRotateFail = Mix_LoadWAV("res/audio/sound/hot.wav");
	soundLock		= Mix_LoadWAV("res/audio/sound/boom.wav");
}


void Sound::closeSound(){
	Mix_FreeMusic(musicIntro);
	Mix_FreeMusic(musicGame);
	Mix_FreeMusic(musicEnd);

	Mix_FreeChunk(soundEnd);
	Mix_FreeChunk(soundLine);
	Mix_FreeChunk(soundRotate);
	Mix_FreeChunk(soundLock);

	Mix_CloseAudio();
}
