int __thiscall sub_6D6A90(int this, float a2)
{
  if ( *(_BYTE *)(this + 0x1C) || a2 != *(float *)(this + 8) )
  {
    *(float *)(this + 8) = a2;
    *(_BYTE *)(this + 0x1C) = 1;
    return 1;
  }
  else
  {
    *(float *)(this + 8) = a2;
    *(_BYTE *)(this + 0x1C) = 0;
    return 0;
  }
}
