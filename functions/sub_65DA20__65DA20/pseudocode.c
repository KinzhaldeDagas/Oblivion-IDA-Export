void __thiscall sub_65DA20(int this)
{
  if ( *(_BYTE *)(this + 0x600) ) /*0x65da20*/
  {
    if ( flt_A31E2C < (double)*(float *)(this + 0x604) ) /*0x65da3a*/
    {
      *(_BYTE *)(this + 0x600) = 0; /*0x65da3e*/
      *(float *)(this + 0x604) = 0.0; /*0x65da45*/
    }
  }
}
