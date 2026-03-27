void __thiscall sub_612CF0(int this)
{
  float v1; // [esp+0h] [ebp-4h]

  if ( !*(_BYTE *)(this + 0x15A) )
  {
    v1 = flt_B37290;
    *(float *)(this + 0x164) = *(float *)(this + 0x44);
    *(float *)(this + 0x168) = v1;
    *(float *)(this + 0x16C) = flt_A30634;
    *(_BYTE *)(this + 0x15A) = 1;
  }
}
