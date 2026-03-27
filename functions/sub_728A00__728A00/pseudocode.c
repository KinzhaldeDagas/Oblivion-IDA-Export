int __thiscall sub_728A00(_DWORD *this, int a2, __int16 a3, int a4, int a5)
{
  unsigned __int16 v6; // bp
  unsigned __int16 v7; // di
  int result; // eax
  unsigned __int16 v9; // di
  bool v10; // sf
  unsigned __int16 v11; // [esp+1Ch] [ebp+Ch]

  v6 = *(_WORD *)(a2 + 2 * ((a4 + a5) >> 1));
  v11 = *(_WORD *)(a2 + 2 * a4);
  if ( sub_728440(this, v11, v6, a3) < 0 )
  {
    v7 = *(_WORD *)(a2 + 2 * a5);
    if ( sub_728440(this, v6, v7, a3) >= 0 )
    {
      if ( sub_728440(this, v11, v7, a3) >= 0 )
        return v11;
      else
        return v7;
    }
    return v6;
  }
  v9 = *(_WORD *)(a2 + 2 * a5);
  if ( sub_728440(this, v11, v9, a3) < 0 )
    return v11;
  v10 = sub_728440(this, v6, v9, a3) < 0;
  result = v9;
  if ( !v10 )
    return v6;
  return result;
}
