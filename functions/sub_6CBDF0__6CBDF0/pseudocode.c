char __thiscall sub_6CBDF0(int this, float a2, int a3, int a4)
{
  float v5; // edx
  float v6; // eax
  float v7[4]; // [esp+10h] [ebp-10h] BYREF

  if ( (*(_BYTE *)(this + 0xC) & 1) != 0 )
    a2 = *(float *)(this + 0x20);
  if ( flt_A79F00 == a2 )
  {
    *(float *)a4 = -flt_A7DEB4;
    *(float *)(a4 + 0x10) = -flt_A7DEB4;
    *(float *)(a4 + 0x1C) = -flt_A7DEB4;
    return 0;
  }
  else if ( (*(unsigned __int8 (__stdcall **)(_DWORD, int, int))(**(_DWORD **)(this + 0x18) + 0x4C))(
              LODWORD(a2),
              a3,
              a4) )
  {
    if ( -flt_A7DEB4 != *(float *)(a4 + 0x10) )
    {
      v5 = *(float *)(a4 + 0x10);
      v6 = *(float *)(a4 + 0x14);
      v7[0] = *(float *)(a4 + 0xC);
      v7[3] = *(float *)(a4 + 0x18);
      v7[1] = v5;
      v7[2] = v6;
      sub_715340(v7);
      sub_471430((_DWORD *)a4, v7);
    }
    return 1;
  }
  else
  {
    *(float *)a4 = -flt_A7DEB4;
    *(float *)(a4 + 0x10) = -flt_A7DEB4;
    *(float *)(a4 + 0x1C) = -flt_A7DEB4;
    return 0;
  }
}
