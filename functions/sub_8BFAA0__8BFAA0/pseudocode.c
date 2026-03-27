int __thiscall sub_8BFAA0(_DWORD *this, _DWORD *a2)
{
  int result; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // [esp+14h] [ebp-24h] BYREF
  void **v8; // [esp+18h] [ebp-20h] BYREF
  int v9; // [esp+1Ch] [ebp-1Ch]
  int v10; // [esp+20h] [ebp-18h]
  int v11; // [esp+24h] [ebp-14h]
  int v12; // [esp+28h] [ebp-10h]
  unsigned int v13; // [esp+34h] [ebp-4h]

  result = (*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, (char *)&v7 + 3);
  if ( result )
    v4 = (_DWORD *)(result - 4);
  else
    v4 = 0;
  if ( a2[1] >= 6u )
  {
    sub_8A0320(this, a2);
    sub_7124D0(a2);
    sub_7124A0(a2);
    return sub_7124A0(a2);
  }
  else if ( v4 )
  {
    v5 = (_DWORD *)sub_7124A0(a2);
    if ( v5 )
    {
      v8 = &hkConstraintCinfo::`vftable';
      v9 = 0;
      v11 = 0;
      v12 = 0;
      v10 = 1;
      v13 = 0;
      sub_8A07E0(v5, &v8);
      sub_8BEF00(v4, v9);
      v6 = v11;
      v4[4] = v12;
      v4[3] = v6;
      v13 = 0xFFFFFFFF;
      v8 = &hkConstraintCinfo::`vftable';
      sub_8A0200(&v8, 0);
    }
    return sub_89D6C0(this, (int)a2);
  }
  return result;
}
