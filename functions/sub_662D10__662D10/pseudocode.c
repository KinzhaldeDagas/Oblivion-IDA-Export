void __fastcall sub_662D10(_DWORD *this, int a2)
{
  _DWORD *v3; // esi
  void *v4; // eax
  _DWORD *v5; // eax
  int v6; // eax

  v3 = (_DWORD *)*(this + 0x7F);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = (void *)*v3;
      if ( !v3[1] )
        break;
      if ( v4 )
        goto LABEL_6;
LABEL_11:
      v3 = (_DWORD *)v3[1];
      if ( !v3 )
      {
LABEL_12:
        BSSimpleList_Clear((_DWORD *)*(this + 0x7F));
        FormHeapFree(*(this + 0x7F));
        *(this + 0x7F) = 0;
        return;
      }
    }
    if ( !v4 )
      goto LABEL_12;
LABEL_6:
    v5 = OblivionDynamicCast(
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESEnchantableForm `RTTI Type Descriptor',
           0);
    if ( v5 )
      v6 = v5[1];
    else
      v6 = 0;
    if ( v6 )
      (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*(this + 0x17) + 8))(this + 0x17, v6 + 0x18, *v3, 0);
    goto LABEL_11;
  }
}
