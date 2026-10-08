// CSpeedTreeRT::SetTreeSize. Requires intact CTreeEngine transient data and positive size, then writes CTreeEngine+0x4C/+0x50 through 0x7A2420.
void __thiscall CSpeedTreeRT__SetTreeSize(OB_CSpeedTreeRT_010201A0 *this, float size, float variance)
{
  int v3; // edi
  OB_CTreeEngine_010201A0 *treeEngine; // ecx
  bool v5; // zf
  rsize_t v6[2]; // [esp+4h] [ebp-60h] BYREF
  char *v7; // [esp+54h] [ebp-10h]
  int v8; // [esp+60h] [ebp-4h]

  v7 = (char *)v6 + 4; /*0x78b108*/
  treeEngine = this->treeEngine; /*0x78b10b*/
  v5 = treeEngine->transientDataIntact == 0; /*0x78b10d*/
  v8 = 0; /*0x78b111*/
  if ( v5 ) /*0x78b118*/
  {
    LODWORD(v6[0]) = 0x47; /*0x78b177*/
    OB_stString28_AssignBytes_010201A0( /*0x78b17e*/
      &OB_g_strError_010201A0,
      v3,
      "SetTreeSize() has no effect after DeleteTransientData() has been called",
      v6[0]);
  }
  else if ( size <= 0.0 ) /*0x78b128*/
  {
    LODWORD(v6[0]) = 0x3C; /*0x78b150*/
    OB_stString28_AssignBytes_010201A0( /*0x78b15e*/
      &OB_g_strError_010201A0,
      v3,
      "SetTreeSize() is only valid for size values greater than 0.0",
      v6[0]);
  }
  else
  {
    CTreeEngine__SetSize(treeEngine, size, variance); /*0x78b137*/
  }
}
