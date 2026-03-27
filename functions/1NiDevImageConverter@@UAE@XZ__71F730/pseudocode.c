void __thiscall NiDevImageConverter::~NiDevImageConverter(NiDevImageConverter *this)
{
  char *v2; // esi
  int *v3; // eax
  int v4; // ecx
  bool v5; // zf
  void (__thiscall ***v6)(_DWORD, int); // edi

  *(_DWORD *)this = &NiDevImageConverter::`vftable';
  if ( *((_DWORD *)this + 0x227) )
  {
    v2 = (char *)this + 0x890;
    do
    {
      v3 = *((int **)this + 0x225);
      v4 = *v3;
      v5 = *v3 == 0;
      *((_DWORD *)this + 0x225) = *v3;
      if ( v5 )
        *((_DWORD *)this + 0x226) = 0;
      else
        *(_DWORD *)(v4 + 4) = 0;
      v6 = (void (__thiscall ***)(_DWORD, int))v3[2];
      (*(void (__thiscall **)(char *, int *))(*(_DWORD *)v2 + 8))((char *)this + 0x890, v3);
      --*((_DWORD *)this + 0x227);
      if ( v6 )
        (**v6)(v6, 1);
    }
    while ( *((_DWORD *)this + 0x227) );
  }
  NiTPointerList<NiImageReader *>::~NiTPointerList<NiImageReader *>((NiTPointerList__BSImageSpaceShader *)((char *)this + 0x890));
  TESTexture::ClearComponentReferences((char *)this + 0x680);
  NiImageConverter::~NiImageConverter((_RTL_CRITICAL_SECTION_0 *)this);
}
