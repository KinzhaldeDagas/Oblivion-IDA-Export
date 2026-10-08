struct std::locale::facet *__cdecl sub_6F9090(int *a1)
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

  std::_Lockit::_Lockit((std::_Lockit *)v12, 0); /*0x6f90bc*/
  v1 = dword_B32A88 == 0; /*0x6f90c1*/
  v2 = *(struct std::locale::facet **)&destination[0x108]; /*0x6f90c8*/
  v14 = 0; /*0x6f90ce*/
  v10 = v2; /*0x6f90d6*/
  if ( v1 ) /*0x6f90da*/
  {
    std::_Lockit::_Lockit((std::_Lockit *)v11, 0); /*0x6f90e2*/
    if ( !dword_B32A88 ) /*0x6f90e7*/
    {
      v3 = unk_BA9B60 + 1; /*0x6f90f5*/
      unk_BA9B60 = v3; /*0x6f90f8*/
      dword_B32A88 = v3; /*0x6f90fd*/
    }
    std::_Lockit::~_Lockit((std::_Lockit *)v11); /*0x6f9106*/
  }
  v4 = dword_B32A88; /*0x6f910f*/
  v5 = *a1; /*0x6f9115*/
  if ( (unsigned int)dword_B32A88 >= *(_DWORD *)(*a1 + 0xC) ) /*0x6f911a*/
  {
    v6 = 0; /*0x6f9148*/
  }
  else
  {
    v6 = *(struct std::locale::facet **)(*(_DWORD *)(v5 + 8) + 4 * v4); /*0x6f911f*/
    if ( v6 ) /*0x6f9124*/
      goto LABEL_17; /*0x6f9124*/
  }
  if ( !*(_BYTE *)(v5 + 0x14) ) /*0x6f912a*/
    goto LABEL_10; /*0x6f912a*/
  v7 = sub_98083E(); /*0x6f912c*/
  if ( v4 < *(_DWORD *)(v7 + 0xC) ) /*0x6f9134*/
  {
    v6 = *(struct std::locale::facet **)(*(_DWORD *)(v7 + 8) + 4 * v4); /*0x6f9139*/
LABEL_10:
    if ( v6 ) /*0x6f913e*/
      goto LABEL_17; /*0x6f913e*/
  }
  if ( v2 ) /*0x6f9142*/
  {
    v6 = v2; /*0x6f9144*/
  }
  else
  {
    if ( sub_6F8FC0(&v10) == 0xFFFFFFFF ) /*0x6f915c*/
    {
      std::bad_cast::bad_cast((std::bad_cast *)v13, "bad cast"); /*0x6f9167*/
      ThrowException__((DWORD)v13, &_TI2_AVbad_cast_std__); /*0x6f9176*/
    }
    v6 = v10; /*0x6f917b*/
    v8 = v10; /*0x6f917f*/
    *(_DWORD *)&destination[0x108] = v10; /*0x6f9181*/
    sub_6F6D90(v8); /*0x6f9187*/
    std::locale::facet::facet_Register(v6); /*0x6f918d*/
  }
LABEL_17:
  v14 = 0xFFFFFFFF; /*0x6f9195*/
  std::_Lockit::~_Lockit((std::_Lockit *)v12); /*0x6f91a1*/
  return v6; /*0x6f91a8*/
}
