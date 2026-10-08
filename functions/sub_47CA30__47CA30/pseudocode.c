void __thiscall sub_47CA30(NiNode *this, NiNode *a2, NiNode *a3)
{
  NiInterpController *i; // esi
  NiRTTI *rtti; // eax
  char v5; // al
  NiInterpController *v6; // eax

  for ( i = this->members.super.super.m_controller; i; i = (NiInterpController *)i->member.next )
  {
    rtti = i->vtbl->super.super.GetType((NiObject *)i); /*0x47ca44*/
    if ( rtti ) /*0x47ca48*/
    {
      while ( rtti != &stru_B3CD7C ) /*0x47ca55*/
      {
        rtti = rtti->parent; /*0x47ca57*/
        if ( !rtti ) /*0x47ca5c*/
          goto LABEL_5; /*0x47ca5c*/
      }
      v5 = 1; /*0x47ca84*/
    }
    else
    {
LABEL_5:
      v5 = 0; /*0x47ca5e*/
    }
    v6 = v5 != 0 ? i : 0;
    if ( v6 ) /*0x47ca66*/
      sub_47C740((NiMultiTargetTransformController *)v6, a2, a3); /*0x47ca73*/
  }
}
