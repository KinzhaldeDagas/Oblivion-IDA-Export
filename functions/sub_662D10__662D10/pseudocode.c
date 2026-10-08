void __fastcall sub_662D10(_DWORD *this, int a2)
{
  _DWORD *v3; // esi
  void *v4; // eax
  _DWORD *v5; // eax
  int v6; // eax

  v3 = (_DWORD *)*(this + 0x7F); /*0x662d14*/
  if ( v3 ) /*0x662d1c*/
  {
    while ( 1 ) /*0x662d24*/
    {
      v4 = (void *)*v3; /*0x662d24*/
      if ( !v3[1] ) /*0x662d20*/
        break; /*0x662d20*/
      if ( v4 ) /*0x662d30*/
        goto LABEL_6; /*0x662d30*/
LABEL_11:
      v3 = (_DWORD *)v3[1]; /*0x662d6c*/
      if ( !v3 ) /*0x662d71*/
      {
LABEL_12:
        BSSimpleList_Clear((_DWORD *)*(this + 0x7F)); /*0x662d73*/
        FormHeapFree(*(this + 0x7F)); /*0x662d85*/
        *(this + 0x7F) = 0; /*0x662d8d*/
        return; /*0x662d8d*/
      }
    }
    if ( !v4 ) /*0x662d2a*/
      goto LABEL_12; /*0x662d2a*/
LABEL_6:
    v5 = OblivionDynamicCast( /*0x662d32*/
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESEnchantableForm `RTTI Type Descriptor',
           0);
    if ( v5 ) /*0x662d4b*/
      v6 = v5[1]; /*0x662d4d*/
    else
      v6 = 0; /*0x662d52*/
    if ( v6 ) /*0x662d56*/
      (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*(this + 0x17) + 8))(this + 0x17, v6 + 0x18, *v3, 0); /*0x662d6a*/
    goto LABEL_11; /*0x662d6a*/
  }
}
