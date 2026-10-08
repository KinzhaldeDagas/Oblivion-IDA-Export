signed int __cdecl sub_40F880(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // ecx
  _DWORD v15[2]; // [esp+14h] [ebp-8h] BYREF

  v7 = a1[5]; /*0x40f888*/
  if ( v7 >= a1[8] /*0x40f8af*/
    || (v8 = *(_DWORD *)(a1[0x10] + 4 * v7),
        (*(int (__stdcall **)(int, _DWORD, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v8 + 0x4C))(v8, 0, v15, 0, 0) < 0) )
  {
    a1[5] = 0; /*0x40f958*/
    return 0; /*0x40f95f*/
  }
  else
  {
    if ( a2 ) /*0x40f8bb*/
      *a2 = v15[1]; /*0x40f8c1*/
    if ( a3 ) /*0x40f8c9*/
      *a3 = v15[0]; /*0x40f8cf*/
    v9 = a1[5]; /*0x40f8d1*/
    v10 = a1[9] + (a1[0xB] != 0); /*0x40f8e2*/
    v11 = v9 / v10; /*0x40f8e6*/
    v12 = v9 % v10; /*0x40f8ed*/
    if ( a4 ) /*0x40f8f5*/
      *a4 = v12 * a1[0xF]; /*0x40f8fd*/
    if ( a5 ) /*0x40f905*/
      *a5 = v11 * a1[0xF]; /*0x40f90d*/
    if ( a6 ) /*0x40f916*/
    {
      if ( v12 < a1[9] ) /*0x40f91b*/
        v13 = a1[0xF]; /*0x40f922*/
      else
        v13 = a1[0xB]; /*0x40f91d*/
      *a6 = v13; /*0x40f925*/
    }
    if ( a7 ) /*0x40f92d*/
    {
      if ( v11 >= a1[0xA] ) /*0x40f932*/
      {
        *a7 = a1[0xC]; /*0x40f937*/
        ++a1[5]; /*0x40f93e*/
        return 1; /*0x40f945*/
      }
      *a7 = a1[0xF]; /*0x40f949*/
    }
    ++a1[5]; /*0x40f950*/
    return 1; /*0x40f94b*/
  }
}
