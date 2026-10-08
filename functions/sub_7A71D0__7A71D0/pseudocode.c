// Oblivion PosGen::Build. Allocates sx/sfx as two 60-float tables, integrates density with 0.01 symmetric or 0.02 positive increments, enforces a 50..59 sample span, and records xi for rejection sampling.
void __thiscall OB_PosGen_Build_010201A0(OB_PosGen_010201A0 *this, bool symmetric)
{
  double v3; // st7
  int v4; // edi
  double v5; // st7
  rsize_t v6; // [esp+0h] [ebp-B4h]
  float v7; // [esp+14h] [ebp-A0h]
  float v8; // [esp+18h] [ebp-9Ch]
  float v9; // [esp+1Ch] [ebp-98h]
  int v10; // [esp+20h] [ebp-94h] BYREF
  char v11; // [esp+24h] [ebp-90h]
  int v12; // [esp+34h] [ebp-80h]
  int v13; // [esp+38h] [ebp-7Ch]
  int v14; // [esp+3Ch] [ebp-78h] BYREF
  char v15; // [esp+40h] [ebp-74h]
  int v16; // [esp+50h] [ebp-64h]
  int v17; // [esp+54h] [ebp-60h]
  _DWORD v18[3]; // [esp+58h] [ebp-5Ch] BYREF
  _BYTE v19[20]; // [esp+64h] [ebp-50h] BYREF
  int v20; // [esp+78h] [ebp-3Ch]
  int v21; // [esp+7Ch] [ebp-38h]
  _BYTE v22[40]; // [esp+80h] [ebp-34h] BYREF
  int v23; // [esp+B0h] [ebp-4h]

  this->notReady = 0; /*0x7a7205*/
  this->sx = (float *)FormHeapAlloc(0xF0u); /*0x7a7212*/
  v8 = 0.0; /*0x7a721f*/
  this->sfx = (float *)FormHeapAlloc(0xF0u); /*0x7a722a*/
  if ( symmetric ) /*0x7a722d*/
    v3 = flt_A34BA0; /*0x7a722f*/
  else
    v3 = flt_A57604; /*0x7a7237*/
  v9 = v3; /*0x7a723d*/
  v4 = 0; /*0x7a7241*/
  while ( 1 )
  {
    this->sx[v4] = v8; /*0x7a724a*/
    v7 = ((double (__thiscall *)(OB_PosGen_010201A0 *, _DWORD))*((_DWORD *)this->vftable + 3))(this, LODWORD(v8)); /*0x7a725a*/
    this->sfx[v4] = v7; /*0x7a7265*/
    if ( v7 <= 0.0 ) /*0x7a7271*/
      break; /*0x7a7271*/
    ++v4; /*0x7a727b*/
    v8 = v9 / v7 + v8; /*0x7a7285*/
    if ( v4 >= 0x3C )
    {
      LODWORD(v6) = 0x16; /*0x7a728b*/
      v17 = 0xF; /*0x7a729b*/
      v16 = 0; /*0x7a729f*/
      v15 = 0; /*0x7a72a3*/
      OB_stString28_AssignBytes_010201A0(&v14, v4, "Newran: area too large", v6);
      v23 = 0; /*0x7a72b0*/
      std::exception::exception((std::exception *)v18); /*0x7a72b7*/
      LOBYTE(v23) = 1; /*0x7a72c8*/
      v18[0] = &std::runtime_error::`vftable'; /*0x7a72d0*/
      v21 = 0xF; /*0x7a72d8*/
      v20 = 0; /*0x7a72df*/
      v19[4] = 0; /*0x7a72e6*/
      OB_stString28_AssignSubstring_010201A0((int)v19, &v14, 0, 0xFFFFFFFF); /*0x7a72ea*/
      LOBYTE(v23) = 0; /*0x7a72f9*/
      ThrowException__((DWORD)v18, &_TI2_AVruntime_error_std__); /*0x7a7300*/
    }
  }
  if ( v4 < 0x32 )
  {
    LODWORD(v6) = 0x16; /*0x7a7310*/
    v13 = 0xF; /*0x7a731b*/
    v12 = 0; /*0x7a7323*/
    v11 = 0; /*0x7a7327*/
    OB_stString28_AssignBytes_010201A0(&v10, v4, "Newran: area too small", v6);
    v23 = 2; /*0x7a733c*/
    OB_std_runtime_error_CtorFromString_010201A0((std::exception *)v22, &v10); /*0x7a7347*/
    ThrowException__((DWORD)v22, &_TI2_AVruntime_error_std__); /*0x7a7359*/
  }
  if ( symmetric ) /*0x7a7365*/
    v5 = (double)v4 + (double)v4; /*0x7a736b*/
  else
    v5 = (double)v4; /*0x7a7372*/
  this->xi = v5; /*0x7a736d*/
}
