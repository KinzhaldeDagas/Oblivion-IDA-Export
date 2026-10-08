void __thiscall TESModel_ClearReferences(_DWORD *this)
{
  if ( *(this + 5) ) /*0x46d4d3*/
  {
    FormHeapFree(*(this + 5)); /*0x46d4db*/
    *(this + 5) = 0; /*0x46d4e3*/
  }
  *((_BYTE *)this + 0x10) = 0; /*0x46d4ea*/
}
