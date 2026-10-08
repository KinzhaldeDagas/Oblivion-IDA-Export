void __usercall VideoMenu::~VideoMenu(VideoMenu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  *(_DWORD *)this = &VideoMenu::`vftable'; /*0x587c88*/
  NiTList<VideoMenu::VideoRes>::~NiTList<VideoMenu::VideoRes>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x100)); /*0x587c9c*/
  Menu::~Menu((Menu *)this, a2, a3, a4); /*0x587cab*/
}
