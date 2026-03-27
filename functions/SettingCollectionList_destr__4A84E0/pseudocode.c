void __thiscall SettingCollectionList_destr(unsigned int *this)
{
  unsigned int v2; // edi

  *this = (unsigned int)&SettingCollectionList_vtbl;
  if ( *(this + 0x44) )
  {
    do
    {
      v2 = *(_DWORD *)(*(this + 0x44) + 4);
      FormHeapFree(*(this + 0x44));
      *(this + 0x44) = v2;
    }
    while ( v2 );
  }
  *(this + 0x43) = 0;
  *this = (unsigned int)&SettingCollection<Setting>::`vftable';
}
