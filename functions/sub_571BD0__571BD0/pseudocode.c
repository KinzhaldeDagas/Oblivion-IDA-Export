_DWORD *__cdecl sub_571BD0(int a1, int a2, int a3, _DWORD *a4)
{
  unsigned int v5; // edi
  _DWORD *v6; // ebp
  _DWORD *v7; // esi
  int v8; // eax

  if ( !a1 )
    return 0;
  v5 = 0;
  v6 = 0;
  while ( v5 < *(unsigned __int16 *)(a1 + 0x14) )
  {
    v7 = *(_DWORD **)(*(_DWORD *)(a1 + 0x10) + 4 * (unsigned __int16)v5++);
    if ( v7 )
    {
      v8 = (*(int (__thiscall **)(_DWORD *))(*v7 + 4))(v7);
      if ( v8 )
      {
        while ( (_UNKNOWN *)v8 != &unk_B3A6A8 )
        {
          v8 = *(_DWORD *)(v8 + 4);
          if ( !v8 )
            goto LABEL_11;
        }
        *a4 = v7[7];
        v6 = v7;
        if ( a3 == v7[6] )
          return v6;
        v6 = 0;
      }
    }
LABEL_11:
    ;
  }
  return v6;
}
