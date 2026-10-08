// Oblivion PosGen::Next positive rejection sampler. Lazily builds nonsymmetric tables, interpolates one sx interval, tests against sfx and the virtual Density function, and returns an accepted nonnegative sample.
float __thiscall OB_PosGen_Next_010201A0(OB_PosGen_010201A0 *this)
{
  int v2; // edi
  double v3; // st7
  double v4; // st6
  float *v5; // edi
  float _010201A0; // [esp+10h] [ebp-Ch]
  float v9; // [esp+10h] [ebp-Ch]
  float v10; // [esp+10h] [ebp-Ch]
  float v11; // [esp+14h] [ebp-8h]

  if ( this->notReady ) /*0x7a73ac*/
    OB_PosGen_Build_010201A0(this, 0); /*0x7a73b5*/
  while ( 1 ) /*0x7a73c7*/
  {
    _010201A0 = OB_Random_Next_010201A0((OB_Random_010201A0 *)this); /*0x7a73c7*/
    v2 = Double_To_SInt32(_010201A0 * this->xi); /*0x7a73d7*/
    v9 = this->sx[v2]; /*0x7a73e1*/
    v3 = OB_Random_Next_010201A0((OB_Random_010201A0 *)this); /*0x7a73e5*/
    v4 = this->sx[v2 + 1]; /*0x7a73ed*/
    v5 = &this->sfx[v2]; /*0x7a73fc*/
    v10 = v9 + (v4 - v9) * v3; /*0x7a7407*/
    v11 = OB_Random_Next_010201A0((OB_Random_010201A0 *)this) * *v5; /*0x7a7412*/
    if ( v5[1] > (double)v11 ) /*0x7a7424*/
      break; /*0x7a7424*/
    if ( ((double (__thiscall *)(OB_PosGen_010201A0 *, _DWORD))*((_DWORD *)this->vftable + 3))(this, LODWORD(v10)) > v11 ) /*0x7a7444*/
      return v10; /*0x7a7453*/
  }
  return v10; /*0x7a744e*/
}
