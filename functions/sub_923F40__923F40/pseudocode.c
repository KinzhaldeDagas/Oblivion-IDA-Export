_BYTE *__cdecl sub_923F40(_BYTE *a1, _DWORD *a2, unsigned int a3, int a4)
{
  _DWORD *v4; // eax
  int v5; // edx
  unsigned int v6; // ebp
  unsigned int v7; // esi
  unsigned int v8; // ebx
  unsigned int v9; // edi
  BOOL v10; // eax
  int v12; // [esp+10h] [ebp-18h]
  int v13; // [esp+14h] [ebp-14h]
  _DWORD v14[4]; // [esp+18h] [ebp-10h] BYREF

  v4 = a2; /*0x923f43*/
  v5 = a2[0xF]; /*0x923f4a*/
  v6 = a2[0x13]; /*0x923f4f*/
  v7 = a3; /*0x923f53*/
  v12 = a2[0xB]; /*0x923f57*/
  v8 = a3 + 4 * a4; /*0x923f5f*/
  v9 = a2[0x12]; /*0x923f65*/
  v13 = v5; /*0x923f68*/
  if ( a3 < v8 ) /*0x923f6c*/
  {
    do /*0x923fad*/
    {
      (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)v7 + 0xC) + 0x20))( /*0x923f7c*/
        *(_DWORD *)(*(_DWORD *)v7 + 0xC),
        v14);
      v9 += v14[1]; /*0x923f8b*/
      v6 += 4 * v14[3]; /*0x923f8f*/
      v10 = *(_BYTE *)(*(_DWORD *)v7 + 0x18) >= 4u; /*0x923f9b*/
      v7 += 4; /*0x923fa6*/
      *(&v12 + v10) += v14[2]; /*0x923fab*/
    }
    while ( v7 < v8 ); /*0x923fad*/
    v4 = a2; /*0x923faf*/
  }
  if ( v9 > v4[6] || v6 > v4[8] || (unsigned int)(v12 + 4) > v4[0xA] || (unsigned int)(v13 + 4) > v4[0xE] ) /*0x923fd7*/
  {
    *a1 = 0; /*0x923fef*/
    return a1; /*0x923fe8*/
  }
  else
  {
    *a1 = 1; /*0x923fe0*/
    return a1; /*0x923fd9*/
  }
}
