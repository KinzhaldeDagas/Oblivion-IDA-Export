void __thiscall sub_6088B0(unsigned int *this, int a2)
{
  UInt32 v3; // eax

  MobileObject_PreLoadModifiedForm(a2);
  v3 = SaveLoad_CurrentSavegame->unk030[5];
  if ( v3 == 0x1FFFF000 || v3 == 0x7FFFF000 )
  {
    if ( *(this + 0x17) )
      FormHeapFree(*(this + 0x17));
    *(this + 0x17) = 0;
  }
}
