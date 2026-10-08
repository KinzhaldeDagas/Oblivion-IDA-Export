// CSpeedTreeRT::DeleteFrondGeometry. After Compute, deletes frond geometry only for non-instance trees when the shared instance refcount is exactly one; MakeBase calls this after TES4 render-resource build.
void __thiscall CSpeedTreeRT__DeleteFrondGeometry(OB_CSpeedTreeRT_010201A0 *this)
{
  bool v2; // zf
  OB_CIndexedGeometry_010201A0 *frondGeometry; // edi
  unsigned int *sharedInstanceRefcount; // eax
  int v5; // [esp+0h] [ebp-5Ch] BYREF
  int *v6; // [esp+4Ch] [ebp-10h]
  int v7; // [esp+58h] [ebp-4h]

  v6 = &v5; /*0x789ee8*/
  v2 = this->treeComputedFlag == 0; /*0x789eef*/
  v7 = 0; /*0x789ef2*/
  if ( !v2 ) /*0x789ef5*/
  {
    frondGeometry = this->frondGeometry; /*0x789ef7*/
    if ( frondGeometry ) /*0x789efc*/
    {
      if ( !this->instanceData ) /*0x789efe*/
      {
        sharedInstanceRefcount = this->sharedInstanceRefcount; /*0x789f03*/
        if ( sharedInstanceRefcount ) /*0x789f08*/
        {
          if ( *sharedInstanceRefcount == 1 ) /*0x789f0d*/
          {
            OB_CIndexedGeometry_dtor_010201A0(this->frondGeometry); /*0x789f11*/
            FormHeapFree((unsigned int)frondGeometry); /*0x789f17*/
            this->frondGeometry = 0; /*0x789f1f*/
          }
        }
      }
    }
  }
}
