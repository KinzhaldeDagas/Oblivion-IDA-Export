// CSpeedTreeRT::GetSeed. While transient data is intact, returns CTreeEngine+0x48; otherwise reports the same misleading SetTreeSize/DeleteTransientData error present in local 4.1 source.
unsigned int __thiscall CSpeedTreeRT__GetSeed(const OB_CSpeedTreeRT_010201A0 *this)
{
  OB_CTreeEngine_010201A0 *treeEngine; // eax
  bool v2; // zf
  int v4; // [esp+0h] [ebp-60h] BYREF
  unsigned int v5; // [esp+4Ch] [ebp-14h]
  int *v6; // [esp+50h] [ebp-10h]
  int v7; // [esp+5Ch] [ebp-4h]

  v6 = &v4; /*0x78b248*/
  treeEngine = this->treeEngine; /*0x78b24b*/
  v2 = this->treeEngine->transientDataIntact == 0; /*0x78b24f*/
  v5 = 0; /*0x78b252*/
  v7 = 0; /*0x78b255*/
  if ( !v2 ) /*0x78b258*/
    return treeEngine->treeRandomSeed; /*0x78b25d*/
  OB_stString28_AssignBytes_010201A0( /*0x78b281*/
    &OB_g_strError_010201A0,
    "SetTreeSize() has no effect after DeleteTransientData() has been called",
    0x47u);
  return v5; /*0x78b263*/
}
