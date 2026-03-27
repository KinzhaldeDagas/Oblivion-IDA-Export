void __thiscall sub_47CA30(NiNode *this, NiNode *a2, NiNode *a3)
{
  NiInterpController *i; // esi
  NiRTTI *rtti; // eax
  char v5; // al
  NiInterpController *v6; // eax

  for ( i = this->members.super.super.m_controller; i; i = (NiInterpController *)i->member.next )
  {
    rtti = i->vtbl->super.super.GetType((NiObject *)i);
    if ( rtti )
    {
      while ( rtti != (NiRTTI *)dword_B3CD7C )
      {
        rtti = rtti->parent;
        if ( !rtti )
          goto LABEL_5;
      }
      v5 = 1;
    }
    else
    {
LABEL_5:
      v5 = 0;
    }
    v6 = v5 != 0 ? i : 0;
    if ( v6 )
      sub_47C740((NiMultiTargetTransformController *)v6, a2, a3);
  }
}
