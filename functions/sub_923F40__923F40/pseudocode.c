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

  v4 = a2;
  v5 = a2[0xF];
  v6 = a2[0x13];
  v7 = a3;
  v12 = a2[0xB];
  v8 = a3 + 4 * a4;
  v9 = a2[0x12];
  v13 = v5;
  if ( a3 < v8 )
  {
    do
    {
      (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)v7 + 0xC) + 0x20))(
        *(_DWORD *)(*(_DWORD *)v7 + 0xC),
        v14);
      v9 += v14[1];
      v6 += 4 * v14[3];
      v10 = *(_BYTE *)(*(_DWORD *)v7 + 0x18) >= 4u;
      v7 += 4;
      *(&v12 + v10) += v14[2];
    }
    while ( v7 < v8 );
    v4 = a2;
  }
  if ( v9 > v4[6] || v6 > v4[8] || (unsigned int)(v12 + 4) > v4[0xA] || (unsigned int)(v13 + 4) > v4[0xE] )
  {
    *a1 = 0;
    return a1;
  }
  else
  {
    *a1 = 1;
    return a1;
  }
}
