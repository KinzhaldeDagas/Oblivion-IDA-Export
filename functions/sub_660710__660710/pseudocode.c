void __thiscall sub_660710(_DWORD *this, int a2)
{
  double v3; // st6
  int v4; // eax
  float v5; // [esp+8h] [ebp+4h]

  if ( a2 > 0 )
    *(this + 0x1BF) += a2;
  v5 = (float)(int)*(this + 0x1BF);
  v3 = fInfamyBountyMod;
  if ( v3 <= v5 )
  {
    v4 = Double_To_SInt32(v5 - v3);
    ++*(this + 0x1BE);
    *(this + 0x1BF) = v4;
  }
}
