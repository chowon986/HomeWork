#pragma once
class TextScreen
{
public:
	int Width_;
	int Height_;
	char* PixelData_;
	char DefaultPixel_[3];

public:
	void CreateScreen(int _Width, int _Height, const char* _DefaultValue);
	void PrintScreen();

public:
		TextScreen();     //持失切 (constructor)
		~TextScreen();    //社瑚切 (destructor)
		TextScreen(const TextScreen& _Other) = delete;
		TextScreen(TextScreen&& _Other) noexcept = delete;
		TextScreen& operator = (const TextScreen& _Other) = delete;
		TextScreen& operator=(const TextScreen&& _Other) noexcept = delete;
}
;