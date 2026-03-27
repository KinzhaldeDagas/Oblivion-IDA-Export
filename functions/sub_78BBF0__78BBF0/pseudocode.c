double __userpurge sub_78BBF0@<st0>(float **this@<ecx>, int a2@<edi>, float a3, float a4, float a5)
{
  double v6; // st6
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  rsize_t v12; // [esp+8h] [ebp-64h] BYREF
  float v13; // [esp+58h] [ebp-14h]
  char *v14; // [esp+5Ch] [ebp-10h]
  int v15; // [esp+68h] [ebp-4h]
  float v16; // [esp+7Ch] [ebp+10h]

  v14 = (char *)&v12 + 4;
  v13 = 0.0;
  v15 = 0;
  if ( a3 < 0.0 )
  {
    LODWORD(v12) = 0x32;
    sub_414500(&dword_B2B614, a2, "SetWindStrength() expects new wind strength >= 0.0", v12);
  }
  else
  {
    v6 = flt_A30634;
    if ( v6 == a4 )
      a4 = (*(this + 4))[1];
    if ( v6 == a5 )
      a5 = **(this + 4);
    v16 = sub_793B90(*(this + 4), a3, a4, a5);
    v7 = *((_DWORD *)*(this + 4) + 2);
    v13 = v16;
    if ( v7 == 1 )
    {
      v8 = (int)*(this + 1);
      if ( v8 )
        *(_BYTE *)(v8 + 0x12) = 0;
    }
    if ( *((_DWORD *)*(this + 4) + 3) == 1 )
    {
      v9 = (int)*(this + 0x18);
      if ( v9 )
        *(_BYTE *)(v9 + 0x12) = 0;
    }
    v10 = (int)*(this + 4);
    if ( *(_DWORD *)(v10 + 0x10) == 1 || *(_BYTE *)(v10 + 0x14) )
      sub_7982D0((int)*(this + 2));
  }
  return v13;
}
