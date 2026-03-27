void __thiscall sub_662C70(unsigned int *this, _BYTE *a2, int a3)
{
  char v3; // al
  _DWORD *v5; // eax
  int v6; // eax
  _DWORD *v7; // eax

  v3 = a2[4];
  if ( v3 == 0x14 || v3 == 0x16 )
  {
    if ( *(this + 0x7F) )
    {
      v5 = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESEnchantableForm `RTTI Type Descriptor',
             0);
      if ( v5 )
        v6 = v5[1];
      else
        v6 = 0;
      if ( v6 )
      {
        if ( (unsigned __int8)MagicTarget_HasMagicItem(this + 0x1A, v6 + 0x18) )
          MagicTarget_RemoveBoundObj(a2, 0);
        BSSimpleList_Remove((int *)*(this + 0x7F), (int)a2);
        v7 = (_DWORD *)*(this + 0x7F);
        if ( !v7[1] && !*v7 )
        {
          FormHeapFree(*(this + 0x7F));
          *(this + 0x7F) = 0;
        }
      }
    }
  }
}
