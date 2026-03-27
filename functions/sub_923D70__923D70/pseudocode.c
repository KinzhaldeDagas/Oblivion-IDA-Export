_BYTE *__cdecl sub_923D70(_BYTE *a1, _DWORD *a2, unsigned int a3, int a4)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // ebp
  unsigned int v7; // ebx

  v4 = a2[0x11];
  v5 = a3;
  v6 = a3 + 4 * a4;
  if ( v4 == a2[3] )
    v4 += 0x80;
  v7 = a2[4] - 0x10;
  if ( a3 >= v6 )
  {
LABEL_6:
    *a1 = 1;
    return a1;
  }
  else
  {
    while ( 1 )
    {
      v4 += (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)v5 + 0x50) + 0x1C))(*(_DWORD *)(*(_DWORD *)v5 + 0x50));
      if ( v4 > v7 )
        break;
      v5 += 4;
      if ( v5 >= v6 )
        goto LABEL_6;
    }
    *a1 = 0;
    return a1;
  }
}
