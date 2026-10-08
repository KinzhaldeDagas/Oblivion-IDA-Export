int __thiscall sub_728A00(_DWORD *this, int a2, __int16 a3, int a4, int a5)
{
  unsigned __int16 v6; // bp
  unsigned __int16 v7; // di
  int result; // eax
  unsigned __int16 v9; // di
  bool v10; // sf
  unsigned __int16 v11; // [esp+1Ch] [ebp+Ch]

  v6 = *(_WORD *)(a2 + 2 * ((a4 + a5) >> 1)); /*0x728a1a*/
  v11 = *(_WORD *)(a2 + 2 * a4); /*0x728a27*/
  if ( sub_728440(this, v11, v6, a3) < 0 ) /*0x728a33*/
  {
    v7 = *(_WORD *)(a2 + 2 * a5); /*0x728a39*/
    if ( sub_728440(this, v6, v7, a3) >= 0 ) /*0x728a48*/
    {
      if ( sub_728440(this, v11, v7, a3) >= 0 ) /*0x728a5a*/
        return v11; /*0x728a69*/
      else
        return v7; /*0x728a5c*/
    }
    return v6; /*0x728aa6*/
  }
  v9 = *(_WORD *)(a2 + 2 * a5); /*0x728a74*/
  if ( sub_728440(this, v11, v9, a3) < 0 ) /*0x728a87*/
    return v11; /*0x728a92*/
  v10 = sub_728440(this, v6, v9, a3) < 0; /*0x728a9f*/
  result = v9; /*0x728aa1*/
  if ( !v10 ) /*0x728aa4*/
    return v6; /*0x728aa4*/
  return result; /*0x728a5f*/
}
