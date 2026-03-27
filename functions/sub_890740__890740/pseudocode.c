void __thiscall sub_890740(int this)
{
  int v1; // eax

  *(float *)(this + 0x324) = *(float *)(this + 0x324) + *(float *)(this + 0x2D8);
  if ( flt_B2E778 > -*(float *)(this + 0x2E8)
    || (v1 = *(_DWORD *)(this + 0x1F4), (v1 & 0x100) != 0)
    || (v1 & 0x200) != 0 )
  {
    *(float *)(this + 0x320) = 0.0;
  }
  else
  {
    *(float *)(this + 0x320) = *(float *)(this + 0x320) + *(float *)(this + 0x2D8);
  }
}
