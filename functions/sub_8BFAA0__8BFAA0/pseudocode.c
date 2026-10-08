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

  result = (*(int (__thiscall **)(_DWORD *, char *))(*this + 0x74))(this, (char *)&v7 + 3); /*0x8bfad6*/
  if ( result ) /*0x8bfadc*/
    v4 = (_DWORD *)(result - 4); /*0x8bfade*/
  else
    v4 = 0; /*0x8bfae3*/
  if ( a2[1] >= 6u ) /*0x8bfaed*/
  {
    sub_8A0320(this, a2); /*0x8bfb6f*/
    sub_7124D0(a2); /*0x8bfb76*/
    sub_7124A0(a2); /*0x8bfb7d*/
    return sub_7124A0(a2); /*0x8bfb84*/
  }
  else if ( v4 ) /*0x8bfaf1*/
  {
    v5 = (_DWORD *)sub_7124A0(a2); /*0x8bfaf9*/
    if ( v5 ) /*0x8bfb00*/
    {
      v8 = &hkConstraintCinfo::`vftable'; /*0x8bfb02*/
      v9 = 0; /*0x8bfb0a*/
      v11 = 0; /*0x8bfb0e*/
      v12 = 0; /*0x8bfb12*/
      v10 = 1; /*0x8bfb16*/
      v13 = 0; /*0x8bfb25*/
      sub_8A07E0(v5, &v8); /*0x8bfb29*/
      sub_8BEF00(v4, v9); /*0x8bfb35*/
      v6 = v11; /*0x8bfb3e*/
      v4[4] = v12; /*0x8bfb42*/
      v4[3] = v6; /*0x8bfb4a*/
      v13 = 0xFFFFFFFF; /*0x8bfb4d*/
      v8 = &hkConstraintCinfo::`vftable'; /*0x8bfb55*/
      sub_8A0200(&v8, 0); /*0x8bfb5d*/
    }
    return sub_89D6C0(this, (int)a2); /*0x8bfb65*/
  }
  return result; /*0x8bfb89*/
}
