int __thiscall sub_8A9390(_DWORD *this, int a2)
{
  int v3; // esi
  int v4; // eax
  char v5; // al
  int result; // eax

  if ( a2 )
    v3 = *(_DWORD *)(a2 + 0xC);
  else
    v3 = 0;
  if ( !v3 )
    return 0;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
  if ( v4 )
  {
    while ( (char *)v4 != dword_BA7D84 )
    {
      v4 = *(_DWORD *)(v4 + 4);
      if ( !v4 )
        goto LABEL_8;
    }
    v5 = 1;
  }
  else
  {
LABEL_8:
    v5 = 0;
  }
  result = v5 != 0 ? v3 : 0;
  if ( !result || (*(_DWORD *)(result + 0x18) & *(this + 1)) == 0 )
    return 0;
  return result;
}
