float *__thiscall sub_67C830(int this, float *a2)
{
  _DWORD *v3; // ecx
  int v4; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // ecx
  float v9; // edx

  if ( *(_DWORD *)(this + 0x3C) )
  {
    sub_67C310((int ****)this);
    v3 = *(_DWORD **)(this + 0x3C);
    v4 = v3[5];
    v3 += 5;
    *(_DWORD *)a2 = v4;
    v6 = v3[1];
    v7 = v3[2];
    *((_DWORD *)a2 + 1) = v6;
    *((_DWORD *)a2 + 2) = v7;
    return a2;
  }
  else
  {
    v8 = *((_DWORD *)&Vector3_InitValue_ + 1);
    *a2 = Vector3_InitValue_;
    v9 = dword_B3F9B0;
    *((_DWORD *)a2 + 1) = v8;
    a2[2] = v9;
    return a2;
  }
}
