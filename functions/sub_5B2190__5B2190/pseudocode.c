_DWORD *__thiscall sub_5B2190(_DWORD *this, int a2)
{
  float v4; // [esp+8h] [ebp+4h]

  *this = a2;
  if ( !a2 || (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0xC) + 0x1C) + 0x58) & 0x100) != 0 )
  {
    *(this + 1) = Double_To_SInt32(flt_A30634);
    return this;
  }
  else
  {
    v4 = fabs(*(float *)(a2 + 0x18));
    *(this + 1) = Double_To_SInt32(v4);
    return this;
  }
}
