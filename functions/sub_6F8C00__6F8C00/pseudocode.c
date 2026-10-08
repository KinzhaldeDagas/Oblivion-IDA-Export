struct std::locale::facet *__cdecl sub_6F8C00(int *a1)
{
  bool v1; // zf
  struct std::locale::facet *v2; // ebx
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  struct std::locale::facet *v6; // esi
  int v7; // eax
  struct std::locale::facet *v8; // ecx
  struct std::locale::facet *v10; // [esp+10h] [ebp-24h] BYREF
  _BYTE v11[4]; // [esp+14h] [ebp-20h] BYREF
  _BYTE v12[4]; // [esp+18h] [ebp-1Ch] BYREF
  _BYTE v13[12]; // [esp+1Ch] [ebp-18h] BYREF
  unsigned int v14; // [esp+30h] [ebp-4h]

  std::_Lockit::_Lockit((std::_Lockit *)v12, 0); /*0x6f8c2c*/
  v1 = unk_BA9B64 == 0; /*0x6f8c31*/
  v2 = *(struct std::locale::facet **)&destination[0x104]; /*0x6f8c38*/
  v14 = 0; /*0x6f8c3e*/
  v10 = v2; /*0x6f8c46*/
  if ( v1 ) /*0x6f8c4a*/
  {
    std::_Lockit::_Lockit((std::_Lockit *)v11, 0); /*0x6f8c52*/
    if ( !unk_BA9B64 ) /*0x6f8c57*/
    {
      v3 = unk_BA9B60 + 1; /*0x6f8c65*/
      unk_BA9B60 = v3; /*0x6f8c68*/
      unk_BA9B64 = v3; /*0x6f8c6d*/
    }
    std::_Lockit::~_Lockit((std::_Lockit *)v11); /*0x6f8c76*/
  }
  v4 = unk_BA9B64; /*0x6f8c7f*/
  v5 = *a1; /*0x6f8c85*/
  if ( (unsigned int)unk_BA9B64 >= *(_DWORD *)(*a1 + 0xC) ) /*0x6f8c8a*/
  {
    v6 = 0; /*0x6f8cb8*/
  }
  else
  {
    v6 = *(struct std::locale::facet **)(*(_DWORD *)(v5 + 8) + 4 * v4); /*0x6f8c8f*/
    if ( v6 ) /*0x6f8c94*/
      goto LABEL_17; /*0x6f8c94*/
  }
  if ( !*(_BYTE *)(v5 + 0x14) ) /*0x6f8c9a*/
    goto LABEL_10; /*0x6f8c9a*/
  v7 = sub_98083E(); /*0x6f8c9c*/
  if ( v4 < *(_DWORD *)(v7 + 0xC) ) /*0x6f8ca4*/
  {
    v6 = *(struct std::locale::facet **)(*(_DWORD *)(v7 + 8) + 4 * v4); /*0x6f8ca9*/
LABEL_10:
    if ( v6 ) /*0x6f8cae*/
      goto LABEL_17; /*0x6f8cae*/
  }
  if ( v2 ) /*0x6f8cb2*/
  {
    v6 = v2; /*0x6f8cb4*/
  }
  else
  {
    if ( sub_6F8920(&v10) == 0xFFFFFFFF ) /*0x6f8ccc*/
    {
      std::bad_cast::bad_cast((std::bad_cast *)v13, "bad cast"); /*0x6f8cd7*/
      ThrowException__((DWORD)v13, &_TI2_AVbad_cast_std__); /*0x6f8ce6*/
    }
    v6 = v10; /*0x6f8ceb*/
    v8 = v10; /*0x6f8cef*/
    *(_DWORD *)&destination[0x104] = v10; /*0x6f8cf1*/
    sub_6F6D90(v8); /*0x6f8cf7*/
    std::locale::facet::facet_Register(v6); /*0x6f8cfd*/
  }
LABEL_17:
  v14 = 0xFFFFFFFF; /*0x6f8d05*/
  std::_Lockit::~_Lockit((std::_Lockit *)v12); /*0x6f8d11*/
  return v6; /*0x6f8d18*/
}
