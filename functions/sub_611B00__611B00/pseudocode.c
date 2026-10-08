void __thiscall sub_611B00(_DWORD *this, int a2)
{
  unsigned int v7; // esi

  v7 = *(this + 0x41); /*0x611b09*/
  if ( v7 ) /*0x611b11*/
  {
    if ( v7 == a2 ) /*0x611b15*/
      return; /*0x611b15*/
    sub_47AB80((ActorSkinInfo *)*(this + 0x41)); /*0x611b19*/
    FormHeapFree(v7); /*0x611b1f*/
  }
  *(this + 0x41) = a2; /*0x611b27*/
}
