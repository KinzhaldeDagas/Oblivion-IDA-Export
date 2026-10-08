void __thiscall sub_59FE30(_DWORD *this, unsigned int *a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax

  v2 = *(this + 0x1E); /*0x59fe30*/
  if ( v2 ) /*0x59fe36*/
  {
    v3 = *(_DWORD *)(v2 + 0x74); /*0x59fe38*/
  }
  else
  {
    v4 = *(this + 0x1F); /*0x59fe3d*/
    if ( !v4 ) /*0x59fe42*/
      return; /*0x59fe42*/
    v3 = *(_DWORD *)(v4 + 0x28); /*0x59fe44*/
  }
  EffectItemList_RemoveItem((int *)(v3 + 0x24), a2); /*0x59fe4f*/
  if ( a2 ) /*0x59fe56*/
  {
    EffectItem_destr(a2); /*0x59fe5a*/
    FormHeapFree((unsigned int)a2); /*0x59fe60*/
  }
}
