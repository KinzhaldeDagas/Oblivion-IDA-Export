void __usercall VideoMenu::~VideoMenu(VideoMenu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  *(_DWORD *)this = &VideoMenu::`vftable';
  NiTList<VideoMenu::VideoRes>::~NiTList<VideoMenu::VideoRes>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x100));
  Menu::~Menu((Menu *)this, a2, a3, a4);
}
