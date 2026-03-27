char __thiscall sub_6C9CB0(int this, float a2, char a3)
{
  if ( !*(_DWORD *)(this + 0x44) )
    return 0;
  if ( a2 <= 0.0 )
  {
    if ( -flt_A7DEB4 != *(float *)(this + 0x34) )
      *(float *)(this + 0x48) = *(float *)(this + 0x38) / *(float *)(this + 0x28)
                              - *(float *)(this + 0x34)
                              + *(float *)(this + 0x48);
    *(_DWORD *)(this + 0x44) = 0;
    *(_DWORD *)(this + 0x58) = 0;
    *(float *)(this + 0x54) = -flt_A7DEB4;
    sub_6C6AC0((_DWORD *)this);
    return 1;
  }
  else
  {
    *(_DWORD *)(this + 0x44) = (a3 != 0) + 3;
    *(float *)(this + 0x4C) = -flt_A7DEB4;
    *(float *)(this + 0x50) = a2;
    return 1;
  }
}
