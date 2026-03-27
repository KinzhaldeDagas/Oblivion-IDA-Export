RaceSexMenu *__thiscall RaceSexMenu::RaceSexMenu(RaceSexMenu *this)
{
  float v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int *v9; // ecx

  Menu::Menu((Menu *)this);
  *(_DWORD *)this = &RaceSexMenu::`vftable';
  ArrayConstructor((char *)this + 0x930, 8u, 0x10, (int)BSStringT_constr, (void (__thiscall *)(void *))BSStringT_Clear);
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xF) = 0;
  memset((char *)this + 0x94, 0, 0x7D0u);
  *((float *)this + 0x226) = 0.0;
  *((float *)this + 0x228) = 0.0;
  *((_BYTE *)this + 0x894) = 0;
  *((float *)this + 0x229) = Vector3_InitValue_;
  *((float *)this + 0x22A) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 0x22B) = dword_B3F9B0;
  *((_DWORD *)this + 0x22C) = 0;
  *((float *)this + 0x22D) = Vector3_InitValue_;
  *((float *)this + 0x22E) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 0x22F) = dword_B3F9B0;
  *((float *)this + 0x230) = Vector3_InitValue_;
  *((float *)this + 0x231) = *(&Vector3_InitValue_ + 1);
  v2 = dword_B3F9B0;
  *((float *)this + 0x233) = 0.0;
  dword_B3B5D4 = 0xC8;
  *((float *)this + 0x232) = v2;
  *((_BYTE *)this + 0x8D0) = 0;
  v3 = (_DWORD *)FormHeapAlloc(0x64u);
  if ( v3 )
  {
    v4 = v3 + 1;
    *v3 = 4;
    ArrayConstructor(v3 + 1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  }
  else
  {
    v4 = 0;
  }
  *((_DWORD *)this + 0x235) = v4;
  v5 = (_DWORD *)FormHeapAlloc(0x64u);
  if ( v5 )
  {
    v6 = v5 + 1;
    *v5 = 4;
    ArrayConstructor(v5 + 1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  }
  else
  {
    v6 = 0;
  }
  *((float *)this + 0x237) = 0.0;
  *((float *)this + 0x238) = 0.0;
  *((_DWORD *)this + 0x236) = v6;
  *((float *)this + 0x21D) = 0.0;
  *((_BYTE *)this + 0x868) = 1;
  *((float *)this + 0x220) = 0.0;
  *((_DWORD *)this + 0x21B) = 0;
  *((float *)this + 0x221) = 0.0;
  *((_DWORD *)this + 0x21C) = 0;
  *((_DWORD *)this + 0x21E) = 0;
  *((_DWORD *)this + 0x21F) = 0;
  v7 = (_DWORD *)FormHeapAlloc(0x28u);
  if ( v7 )
    v8 = sub_57FE70(v7);
  else
    v8 = 0;
  *((_DWORD *)this + 0x23B) = v8;
  *((_DWORD *)this + 0x219) = 0;
  v9 = (int *)ModelLoaderPtr;
  byte_B3B4C9 = 0;
  byte_B3B4C8 = 0;
  byte_B3B5D8 = 0;
  sub_439EB0(v9, "Characters\\_Male\\Skeleton.nif", 0, 0, 1);
  sub_439EB0((int *)ModelLoaderPtr, "Characters\\_Male\\SkeletonBeast.nif", 0, 0, 1);
  return this;
}
