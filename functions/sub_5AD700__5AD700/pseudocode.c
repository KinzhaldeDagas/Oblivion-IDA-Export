void __thiscall sub_5AD700(int *this, TESObjectCELL *a2)
{
  int v3; // edi

  if ( *(this + 0x14) ) /*0x5ad703*/
  {
    do /*0x5ad724*/
    {
      v3 = *(_DWORD *)(*(this + 0x14) + 4); /*0x5ad713*/
      FormHeapFree(*(this + 0x14)); /*0x5ad717*/
      *(this + 0x14) = v3; /*0x5ad721*/
    }
    while ( v3 ); /*0x5ad724*/
  }
  *(this + 0x13) = 0; /*0x5ad72d*/
  sub_5AD440(this, a2); /*0x5ad734*/
  *(this + 0x11) = (int)a2; /*0x5ad739*/
}
