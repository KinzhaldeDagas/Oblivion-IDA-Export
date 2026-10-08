// Oblivion SymGen::Next symmetric rejection sampler. Lazily builds symmetric tables, folds the uniform selector around 0.5, performs the same density rejection test, and restores the selected sign.
float __thiscall OB_SymGen_Next_010201A0(OB_SymGen_010201A0 *this)
{
  double v2; // st7
  bool v3; // c0
  bool v4; // c3
  double v5; // st7
  int v6; // edi
  double v7; // st7
  double v8; // st6
  float *v9; // edi
  float _010201A0; // [esp+Ch] [ebp-10h]
  float v13; // [esp+Ch] [ebp-10h]
  float v14; // [esp+Ch] [ebp-10h]
  float v15; // [esp+Ch] [ebp-10h]
  float v16; // [esp+10h] [ebp-Ch]
  float v17; // [esp+14h] [ebp-8h]

  if ( this->notReady ) /*0x7a746c*/
    OB_PosGen_Build_010201A0((OB_PosGen_010201A0 *)this, 1); /*0x7a7475*/
  while ( 1 ) /*0x7a747e*/
  {
    v16 = 1.0; /*0x7a747e*/
    _010201A0 = OB_Random_Next_010201A0((OB_Random_010201A0 *)this); /*0x7a7487*/
    v2 = kHeadBodyNormalMatchRadius; /*0x7a748b*/
    v3 = _010201A0 < v2; /*0x7a7495*/
    v4 = _010201A0 == v2; /*0x7a7495*/
    v5 = _010201A0; /*0x7a7499*/
    if ( !v3 && !v4 ) /*0x7a749b*/
    {
      v16 = kTerrainLODQuadRayDirectionZ; /*0x7a74a6*/
      v13 = 1.0 - v5; /*0x7a74ae*/
      v5 = v13; /*0x7a74b2*/
    }
    v6 = Double_To_SInt32(v5 * this->xi); /*0x7a74be*/
    v14 = this->sx[v6]; /*0x7a74c8*/
    v7 = OB_Random_Next_010201A0((OB_Random_010201A0 *)this); /*0x7a74cc*/
    v8 = this->sx[v6 + 1]; /*0x7a74d4*/
    v9 = &this->sfx[v6]; /*0x7a74e3*/
    v15 = v14 + (v8 - v14) * v7; /*0x7a74ee*/
    v17 = OB_Random_Next_010201A0((OB_Random_010201A0 *)this) * *v9; /*0x7a74f9*/
    if ( v9[1] > (double)v17 ) /*0x7a750b*/
      break; /*0x7a750b*/
    if ( ((double (__thiscall *)(OB_SymGen_010201A0 *, _DWORD))*((_DWORD *)this->vftable + 3))(this, LODWORD(v15)) > v17 ) /*0x7a752b*/
      return v15 * v16; /*0x7a7546*/
  }
  return v15 * v16; /*0x7a7541*/
}
