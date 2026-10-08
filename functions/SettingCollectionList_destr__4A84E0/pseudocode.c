void __thiscall SettingCollectionList_destr(unsigned int *this)
{
  unsigned int v2; // edi

  *this = (unsigned int)&SettingCollectionList_vtbl; /*0x4a84e3*/
  if ( *(this + 0x44) ) /*0x4a84e9*/
  {
    do /*0x4a850d*/
    {
      v2 = *(_DWORD *)(*(this + 0x44) + 4); /*0x4a84f9*/
      FormHeapFree(*(this + 0x44)); /*0x4a84fd*/
      *(this + 0x44) = v2; /*0x4a8507*/
    }
    while ( v2 ); /*0x4a850d*/
  }
  *(this + 0x43) = 0; /*0x4a8510*/
  *this = (unsigned int)&SettingCollection<Setting>::`vftable'; /*0x4a851a*/
}
