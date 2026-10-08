void __thiscall NiDevImageConverter::~NiDevImageConverter(NiDevImageConverter *this)
{
  char *v2; // esi
  int *v3; // eax
  int v4; // ecx
  bool v5; // zf
  void (__thiscall ***v6)(_DWORD, int); // edi

  *(_DWORD *)this = &NiDevImageConverter::`vftable'; /*0x71f75b*/
  if ( *((_DWORD *)this + 0x227) ) /*0x71f762*/
  {
    v2 = (char *)this + 0x890; /*0x71f776*/
    do /*0x71f7b3*/
    {
      v3 = *((int **)this + 0x225); /*0x71f780*/
      v4 = *v3; /*0x71f783*/
      v5 = *v3 == 0; /*0x71f785*/
      *((_DWORD *)this + 0x225) = *v3; /*0x71f787*/
      if ( v5 ) /*0x71f78a*/
        *((_DWORD *)this + 0x226) = 0; /*0x71f791*/
      else
        *(_DWORD *)(v4 + 4) = 0; /*0x71f78c*/
      v6 = (void (__thiscall ***)(_DWORD, int))v3[2]; /*0x71f796*/
      (*(void (__thiscall **)(char *, int *))(*(_DWORD *)v2 + 8))((char *)this + 0x890, v3); /*0x71f79f*/
      --*((_DWORD *)this + 0x227); /*0x71f7a1*/
      if ( v6 ) /*0x71f7a7*/
        (**v6)(v6, 1); /*0x71f7b1*/
    }
    while ( *((_DWORD *)this + 0x227) ); /*0x71f7b3*/
  }
  NiTPointerList<NiImageReader *>::~NiTPointerList<NiImageReader *>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x890)); /*0x71f7c6*/
  Shared_NoOpVirtual_60D0A0((char *)this + 0x680); /*0x71f7d5*/
  NiImageConverter::~NiImageConverter((_RTL_CRITICAL_SECTION_0 *)this); /*0x71f7e4*/
}
