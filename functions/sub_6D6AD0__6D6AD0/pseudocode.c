int __thiscall sub_6D6AD0(int this, float *a2)
{
  int result; // eax

  if ( !*(_BYTE *)(this + 0x1C) && *a2 == *(float *)(this + 0xC) && a2[1] == *(float *)(this + 0x10) )
  {
    *(_BYTE *)(this + 0x1C) = 0;
    result = *(_DWORD *)a2;
    *(float *)(this + 0xC) = *a2;
    *(float *)(this + 0x10) = a2[1];
  }
  else
  {
    *(_BYTE *)(this + 0x1C) = 1;
    result = *(_DWORD *)a2;
    *(float *)(this + 0xC) = *a2;
    *(float *)(this + 0x10) = a2[1];
  }
  return result;
}
