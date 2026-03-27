double __usercall sub_7A7460@<st0>(float *this@<ecx>, float *a2@<edi>)
{
  double v3; // st7
  bool v4; // c0
  bool v5; // c3
  double v6; // st7
  int v7; // edi
  double v8; // st7
  double v9; // st6
  float v11; // [esp+Ch] [ebp-10h]
  float v12; // [esp+Ch] [ebp-10h]
  float v13; // [esp+Ch] [ebp-10h]
  float v14; // [esp+Ch] [ebp-10h]
  float v15; // [esp+10h] [ebp-Ch]
  float v16; // [esp+14h] [ebp-8h]

  if ( *((_BYTE *)this + 0x10) )
    sub_7A71D0(this, 1);
  while ( 1 )
  {
    v15 = 1.0;
    v11 = sub_7A6FD0((int)a2);
    v3 = flt_A3D65C;
    v4 = v11 < v3;
    v5 = v11 == v3;
    v6 = v11;
    if ( !v4 && !v5 )
    {
      v15 = flt_A30634;
      v12 = 1.0 - v6;
      v6 = v12;
    }
    v7 = Double_To_SInt32(v6 * *(this + 1));
    v13 = *(float *)(*((_DWORD *)this + 2) + 4 * v7);
    v8 = sub_7A6FD0(v7);
    v9 = *(float *)(*((_DWORD *)this + 2) + 4 * v7 + 4);
    a2 = (float *)(*((_DWORD *)this + 3) + 4 * v7);
    v14 = v13 + (v9 - v13) * v8;
    v16 = sub_7A6FD0((int)a2) * *a2;
    if ( a2[1] > (double)v16 )
      break;
    if ( ((double (__thiscall *)(float *, _DWORD))*(_DWORD *)(*(_DWORD *)this + 0xC))(this, LODWORD(v14)) > v16 )
      return (float)(v14 * v15);
  }
  return (float)(v14 * v15);
}
