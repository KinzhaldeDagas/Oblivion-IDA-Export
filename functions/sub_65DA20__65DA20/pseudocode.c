void __thiscall sub_65DA20(int this)
{
  if ( *(_BYTE *)(this + 0x600) )
  {
    if ( flt_A31E2C < (double)*(float *)(this + 0x604) )
    {
      *(_BYTE *)(this + 0x600) = 0;
      *(float *)(this + 0x604) = 0.0;
    }
  }
}
