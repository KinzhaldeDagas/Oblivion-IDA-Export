const char *__thiscall sub_940F60(int *this, unsigned int a2, _DWORD *a3, const char *a4)
{
  const char *result; // eax
  _DWORD *v6; // esi
  unsigned int v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  const char *v11; // [esp-10h] [ebp-14h]
  const char *v12; // [esp-10h] [ebp-14h]
  const char *v13; // [esp-10h] [ebp-14h]

  result = (const char *)sub_8B1550(this + 0x15, a2, 0xFFFFFFFF);
  if ( result == (const char *)0xFFFFFFFF )
  {
    v6 = a3;
    result = (const char *)sub_8B1550(this + 0x18, (unsigned int)a3, 0xFFFFFFFF);
    if ( result == (const char *)0xFFFFFFFF )
    {
      while ( 1 )
      {
        v7 = sub_90D1F0(v6);
        v6 = (_DWORD *)v7;
        if ( !v7 )
          break;
        result = (const char *)sub_8B1550(this + 0x18, v7, 0xFFFFFFFF);
        if ( result != (const char *)0xFFFFFFFF )
          return result;
      }
      v11 = (const char *)sub_90D1E0(&unk_BA8788);
      v8 = (const char *)sub_90D1E0(a3);
      if ( !sub_8B1770(v8, v11) )
        sub_940EF0(this, off_B30594);
      v12 = (const char *)sub_90D1E0(&unk_BA8764);
      v9 = (const char *)sub_90D1E0(a3);
      if ( !sub_8B1770(v9, v12) )
        sub_940EF0(this, off_B30594);
      v13 = (const char *)sub_90D1E0(&unk_BA871C);
      v10 = (const char *)sub_90D1E0(a3);
      if ( sub_8B1770(v10, v13) )
        return sub_940EF0(this, a4);
      else
        return sub_940EF0(this, off_B30594);
    }
  }
  return result;
}
