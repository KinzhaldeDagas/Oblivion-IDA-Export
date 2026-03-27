int __thiscall sub_472690(_DWORD *this, int a2)
{
  bool v3; // bl
  int v4; // eax
  unsigned int i; // edi
  int v6; // esi
  int result; // eax
  int v8; // eax
  char v9; // al

  v3 = a2 == 0;
  v4 = *(this + 0x26);
  for ( i = 0; i < *(unsigned __int16 *)(v4 + 0x46); ++i )
  {
    v6 = *(_DWORD *)(*(_DWORD *)(v4 + 0x40) + 4 * i);
    result = 0;
    if ( v6 )
    {
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
      if ( v8 )
      {
        while ( (char *)v8 != dword_B35270 )
        {
          v8 = *(_DWORD *)(v8 + 4);
          if ( !v8 )
            goto LABEL_6;
        }
        v9 = 1;
      }
      else
      {
LABEL_6:
        v9 = 0;
      }
      result = v9 != 0 ? v6 : 0;
    }
    if ( v3 )
    {
      if ( result && *(_DWORD *)(result + 0x44) )
        return result;
    }
    else
    {
      v3 = result == a2;
    }
    v4 = *(this + 0x26);
  }
  return 0;
}
