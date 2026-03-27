void __thiscall sub_772840(unsigned int *this)
{
  _DWORD *v2; // esi

  FormHeapFree(*this);
  v2 = (_DWORD *)*(this + 2);
  if ( v2 )
  {
    sub_772840(v2);
    FormHeapFree((unsigned int)v2);
  }
}
