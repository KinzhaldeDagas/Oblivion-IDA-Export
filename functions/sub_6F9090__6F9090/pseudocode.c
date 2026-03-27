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

  std::_Lockit::_Lockit((std::_Lockit *)v12, 0);
  v1 = dword_B32A88 == 0;
  v2 = (struct std::locale::facet *)dword_B3F174;
  v14 = 0;
  v10 = v2;
  if ( v1 )
  {
    std::_Lockit::_Lockit((std::_Lockit *)v11, 0);
    if ( !dword_B32A88 )
    {
      v3 = dword_BA9B60 + 1;
      dword_BA9B60 = v3;
      dword_B32A88 = v3;
    }
    std::_Lockit::~_Lockit((std::_Lockit *)v11);
  }
  v4 = dword_B32A88;
  v5 = *a1;
  if ( (unsigned int)dword_B32A88 >= *(_DWORD *)(*a1 + 0xC) )
  {
    v6 = 0;
  }
  else
  {
    v6 = *(struct std::locale::facet **)(*(_DWORD *)(v5 + 8) + 4 * v4);
    if ( v6 )
      goto LABEL_17;
  }
  if ( !*(_BYTE *)(v5 + 0x14) )
    goto LABEL_10;
  v7 = sub_98083E();
  if ( v4 < *(_DWORD *)(v7 + 0xC) )
  {
    v6 = *(struct std::locale::facet **)(*(_DWORD *)(v7 + 8) + 4 * v4);
LABEL_10:
    if ( v6 )
      goto LABEL_17;
  }
  if ( v2 )
  {
    v6 = v2;
  }
  else
  {
    if ( sub_6F8FC0(v4, &v10) == 0xFFFFFFFF )
    {
      std::bad_cast::bad_cast((std::bad_cast *)v13, "bad cast");
      ThrowException__((int)v13, &_TI2_AVbad_cast_std__);
    }
    v6 = v10;
    v8 = v10;
    dword_B3F174 = (int)v10;
    sub_6F6D90(v8);
    std::locale::facet::facet_Register(v6);
  }
LABEL_17:
  v14 = 0xFFFFFFFF;
  std::_Lockit::~_Lockit((std::_Lockit *)v12);
  return v6;
}
