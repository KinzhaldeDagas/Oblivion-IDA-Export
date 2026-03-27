_DWORD *__cdecl sub_513160(_DWORD *a1, int a2)
{
  _DWORD *result; // eax
  int v3; // esi
  int v4; // eax
  char v5; // al
  _DWORD *v6; // esi
  _DWORD **v7; // ecx
  _DWORD **v8; // ecx

  result = a1;
  v3 = a1[4];
  if ( v3 )
  {
    v4 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 4))(a1[4]);
    if ( v4 )
    {
      while ( (char *)v4 != dword_BA7D84 )
      {
        v4 = *(_DWORD *)(v4 + 4);
        if ( !v4 )
          goto LABEL_5;
      }
      v5 = 1;
    }
    else
    {
LABEL_5:
      v5 = 0;
    }
    result = v5 != 0 ? (_DWORD *)v3 : 0;
    v6 = result;
    if ( result )
    {
      v7 = (_DWORD **)result[2];
      if ( v7 )
        result = (_DWORD *)sub_8A9900(v7);
      v8 = (_DWORD **)v6[2];
      if ( v8 )
      {
        result = (_DWORD *)sub_8A98D0(v8);
        if ( result )
          return (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*result + 0x20))(result, *(float *)(a2 + 0xC));
      }
    }
  }
  return result;
}
