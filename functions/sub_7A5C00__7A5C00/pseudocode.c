void __thiscall __noreturn sub_7A5C00(_DWORD *this, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  char *v10; // edi
  int v11; // eax
  char *v12; // eax
  int v13; // ecx
  char *v14; // ecx
  _DWORD v15[6]; // [esp+0h] [ebp-88h] BYREF
  char *v16; // [esp+18h] [ebp-70h]
  unsigned int v17; // [esp+1Ch] [ebp-6Ch]
  float v18[23]; // [esp+20h] [ebp-68h] BYREF
  int v19; // [esp+84h] [ebp-4h]

  LODWORD(v18[0x16]) = v15;
  v16 = (char *)this;
  sub_7A2850(v18, a5);
  v6 = *(this + 1);
  v7 = 0;
  v19 = 0;
  if ( v6 )
    v7 = (*(this + 3) - v6) / 0x54;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(this + 2) - v6) / 0x54;
    else
      v8 = 0;
    if ( 0x30C30C3 - v8 < a4 )
      sub_790B90(v7);
    if ( v6 )
      v9 = (*(this + 2) - v6) / 0x54;
    else
      v9 = 0;
    if ( v7 < a4 + v9 )
    {
      if ( 0x30C30C3 - (v7 >> 1) >= v7 )
        v10 = (char *)((v7 >> 1) + v7);
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(this + 2) - v6) / 0x54;
      else
        v11 = 0;
      if ( (unsigned int)v10 < a4 + v11 )
        v10 = (char *)(a4 + sub_7876A0(this));
      v12 = (char *)sub_7A2560(v10);
      v13 = *(this + 1);
      LOBYTE(v17) = 0;
      v15[4] = v12;
      v15[5] = v12;
      LOBYTE(v19) = 1;
      sub_7A3BD0(v13, a3, v12);
    }
    v14 = (char *)*(this + 2);
    v17 = (unsigned int)v14;
    if ( (int)&v14[-a3] / 0x54 < a4 )
    {
      v17 = 0x54 * a4;
      sub_7A4BF0(a3, (int)v14, (char *)(a3 + 0x54 * a4));
    }
    v16 = &v14[0xFFFFFFAC * a4];
    sub_7A4BF0((int)v16, (int)v14, v14);
  }
  if ( LODWORD(v18[0xB]) >= 0x10 )
    FormHeapFree(LODWORD(v18[6]));
}
