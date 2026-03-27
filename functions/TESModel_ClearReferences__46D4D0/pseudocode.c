void __thiscall TESModel_ClearReferences(_DWORD *this)
{
  if ( *(this + 5) )
  {
    FormHeapFree(*(this + 5));
    *(this + 5) = 0;
  }
  *((_BYTE *)this + 0x10) = 0;
}
