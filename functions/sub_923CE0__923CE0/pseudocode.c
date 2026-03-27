int __cdecl sub_923CE0(int *a1, unsigned int a2, int a3)
{
  int result; // eax
  unsigned int v4; // edi
  _DWORD *v5; // ecx
  int v6; // edx
  int v7; // ebx

  result = a1[0x11];
  v4 = a2;
  if ( result == a1[3] )
  {
    *(_BYTE *)result = 1;
    *(_OWORD *)(result + 0x30) = 0;
    *(_OWORD *)(result + 0x10) = 0;
    *(_OWORD *)(result + 0x20) = 0;
    *(_OWORD *)(result + 0x40) = 0;
    *(_OWORD *)(result + 0x50) = 0;
    *(_OWORD *)(result + 0x60) = 0;
    *(_OWORD *)(result + 0x70) = 0;
    result += 0x80;
    a1[0x11] = result;
  }
  if ( a2 < a2 + 4 * a3 )
  {
    do
    {
      v5 = *(_DWORD **)(*(_DWORD *)v4 + 0x50);
      v6 = result - a1[3];
      v7 = *a1;
      if ( v5[2] != v6 )
        v5[2] = v6;
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*v5 + 0x14))(v5, v7, result);
      v4 += 4;
      a1[0x11] = result;
    }
    while ( v4 < a2 + 4 * a3 );
  }
  *(_BYTE *)result = 2;
  return result;
}
