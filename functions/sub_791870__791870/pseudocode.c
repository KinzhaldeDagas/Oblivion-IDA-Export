unsigned int __thiscall sub_791870(void *this)
{
  char *v1; // eax
  char *v2; // edi
  char *v3; // ebx
  char *v4; // eax
  char *v5; // ecx
  char *v6; // ebx
  char *v7; // edi
  int v8; // ebp
  unsigned int v9; // edi
  int v10; // esi
  unsigned int result; // eax
  int v12; // eax
  bool v13; // zf
  unsigned int *v14; // ecx
  int i; // [esp+10h] [ebp-Ch]
  int v16[2]; // [esp+14h] [ebp-8h] BYREF

  v1 = (char *)dword_B429F4;
  v2 = (char *)dword_B429F0;
  v3 = (char *)dword_B429F4;
  if ( dword_B429F0 > dword_B429F4 )
  {
    _invalid_parameter_noinfo();
    v1 = (char *)dword_B429F4;
    v2 = (char *)dword_B429F0;
  }
  if ( v2 > v1 )
    _invalid_parameter_noinfo();
  sub_439050(&dword_B429EC, (int)v3, v16, (int)&dword_B429EC, v2, (int)&dword_B429EC, v3);
  v4 = (char *)dword_B429D4;
  v5 = (char *)dword_B429D0;
  v6 = (char *)dword_B429D4;
  if ( dword_B429D0 > dword_B429D4 )
  {
    _invalid_parameter_noinfo();
    v4 = (char *)dword_B429D4;
    v5 = (char *)dword_B429D0;
  }
  v7 = v5;
  if ( v5 > v4 )
    _invalid_parameter_noinfo();
  sub_439050(&dword_B429CC, (int)v6, v16, (int)&dword_B429CC, v7, (int)&dword_B429CC, v6);
  v8 = 0;
  v9 = 0;
  for ( i = 0; ; i += 0x54 )
  {
    v10 = dword_B429B8;
    result = *(_DWORD *)(dword_B429B8 + 0x14);
    if ( !result )
      break;
    result = (int)(*(_DWORD *)(v10 + 0x18) - result) / 0x54;
    if ( v9 >= result )
      break;
    v12 = *(_DWORD *)(v10 + 0x14);
    if ( !v12 || v9 >= (*(_DWORD *)(v10 + 0x18) - v12) / 0x54 )
      _invalid_parameter_noinfo();
    v13 = *(_BYTE *)(i + *(_DWORD *)(v10 + 0x14)) == 0;
    v16[0] = v8;
    if ( v13 )
    {
      sub_791770(&dword_B429CC, v16);
      v14 = &dword_B429CC;
    }
    else
    {
      sub_791770(&dword_B429EC, v16);
      v14 = &dword_B429EC;
    }
    v16[0] = v8 + 1;
    sub_791770(v14, v16);
    ++v9;
    v8 += 2;
  }
  return result;
}
