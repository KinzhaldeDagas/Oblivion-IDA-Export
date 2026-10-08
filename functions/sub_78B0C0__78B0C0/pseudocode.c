void __thiscall CSpeedTreeRT__DeleteTransientData(OB_CSpeedTreeRT_010201A0 *this)
{
  OB_CTreeEngine_010201A0 *treeEngine; // ecx

  treeEngine = this->treeEngine; /*0x78b0c0*/
  if ( treeEngine->transientDataIntact ) /*0x78b0c2*/
    OB_CTreeEngine_FreeTransientData_010201A0(treeEngine); /*0x78b0c8*/
  else
    OB_stString28_AssignBytes_010201A0( /*0x78b0d9*/
      &OB_g_strError_010201A0,
      "DeleteTransientData() called with no intact transient data",
      0x3Au);
}
