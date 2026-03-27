void __thiscall sub_773470(_DWORD *this)
{
  _DWORD *v2; // esi

  if ( *this )
    FormHeapFree(*this - 4);
  v2 = (_DWORD *)*(this + 2);
  if ( v2 )
  {
    sub_773470(v2);
    FormHeapFree((unsigned int)v2);
  }
}
