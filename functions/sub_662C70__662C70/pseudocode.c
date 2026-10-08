double __userpurge sub_662C70@<st0>(
        unsigned int *this@<ecx>,
        char a2@<bpl>,
        double result@<st0>,
        TESBoundObject *a4,
        int a5)
{
  TESForm::FormType type; // al
  _DWORD *v7; // eax
  int v8; // eax
  _DWORD *v9; // eax

  type = a4->member.super.type; /*0x662c75*/
  if ( type == kFormType_Armor || type == kFormType_Clothing ) /*0x662c81*/
  {
    if ( *(this + 0x7F) ) /*0x662c83*/
    {
      v7 = OblivionDynamicCast( /*0x662c9b*/
             a4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESEnchantableForm `RTTI Type Descriptor',
             0);
      if ( v7 ) /*0x662ca5*/
        v8 = v7[1]; /*0x662ca7*/
      else
        v8 = 0; /*0x662cac*/
      if ( v8 ) /*0x662cb0*/
      {
        if ( (unsigned __int8)MagicTarget_HasMagicItem(this + 0x1A, v8 + 0x18) ) /*0x662cbc*/
          result = MagicTarget_RemoveBoundObj((int)(this + 0x1A), a2, result, a4, 0); /*0x662cca*/
        BSSimpleList_Remove((int *)*(this + 0x7F), (int)a4); /*0x662cd6*/
        v9 = (_DWORD *)*(this + 0x7F); /*0x662cdb*/
        if ( !v9[1] && !*v9 ) /*0x662ce8*/
        {
          FormHeapFree(*(this + 0x7F)); /*0x662cee*/
          *(this + 0x7F) = 0; /*0x662cf6*/
        }
      }
    }
  }
  return result; /*0x662d00*/
}
