int __cdecl sub_923C80(int a1, unsigned int a2, int a3, int a4)
{
  int result; // eax
  unsigned int v5; // esi
  unsigned int v6; // edi
  _DWORD *v7; // ecx
  _OWORD *v8; // [esp-Ch] [ebp-14h]

  result = a3;
  v5 = a2;
  v6 = a2 + 4 * a3;
  if ( a2 < v6 )
  {
    do
    {
      v7 = *(_DWORD **)(*(_DWORD *)v5 + 0x50);
      v8 = (_OWORD *)(a4 + v7[2]);
      v8[4] = v8[1];
      v8[5] = v8[2];
      result = (*(int (__thiscall **)(_DWORD *, int, int, _OWORD *))(*v7 + 0x18))(v7, a1, 0x3F800000, v8);
      v5 += 4;
    }
    while ( v5 < v6 );
  }
  return result;
}
