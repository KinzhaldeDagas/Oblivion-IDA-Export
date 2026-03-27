double __usercall sub_7A73A0@<st0>(float *this@<ecx>, float *a2@<edi>)
{
  int v3; // edi
  double v4; // st7
  double v5; // st6
  float v7; // [esp+10h] [ebp-Ch]
  float v8; // [esp+10h] [ebp-Ch]
  float v9; // [esp+10h] [ebp-Ch]
  float v10; // [esp+14h] [ebp-8h]

  if ( *((_BYTE *)this + 0x10) )
    sub_7A71D0(this, 0);
  while ( 1 )
  {
    v7 = sub_7A6FD0((int)a2);
    v3 = Double_To_SInt32(v7 * *(this + 1));
    v8 = *(float *)(*((_DWORD *)this + 2) + 4 * v3);
    v4 = sub_7A6FD0(v3);
    v5 = *(float *)(*((_DWORD *)this + 2) + 4 * v3 + 4);
    a2 = (float *)(*((_DWORD *)this + 3) + 4 * v3);
    v9 = v8 + (v5 - v8) * v4;
    v10 = sub_7A6FD0((int)a2) * *a2;
    if ( a2[1] > (double)v10 )
      break;
    if ( ((double (__thiscall *)(float *, _DWORD))*(_DWORD *)(*(_DWORD *)this + 0xC))(this, LODWORD(v9)) > v10 )
      return v9;
  }
  return v9;
}
