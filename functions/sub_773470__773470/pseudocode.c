void __thiscall sub_773470(_DWORD *this)
{
  _DWORD *v2; // esi

  if ( *this ) /*0x773473*/
    FormHeapFree(*this - 4); /*0x77347d*/
  v2 = (_DWORD *)*(this + 2); /*0x773485*/
  if ( v2 ) /*0x77348a*/
  {
    sub_773470(v2); /*0x77348e*/
    FormHeapFree((unsigned int)v2); /*0x773494*/
  }
}
