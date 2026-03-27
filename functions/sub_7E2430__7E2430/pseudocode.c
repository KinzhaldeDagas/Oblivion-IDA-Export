void __thiscall sub_7E2430(int this, float a2)
{
  if ( *(float *)(this + 0x20) >= 1.0 && a2 < 1.0 )
  {
    *(_DWORD *)(this + 0x24) = 0;
    *(float *)(this + 0x20) = a2;
  }
  else if ( *(float *)(this + 0x20) >= 1.0 || a2 < 1.0 )
  {
    *(float *)(this + 0x20) = a2;
  }
  else
  {
    *(_DWORD *)(this + 0x24) = 0;
    *(float *)(this + 0x20) = a2;
  }
}
