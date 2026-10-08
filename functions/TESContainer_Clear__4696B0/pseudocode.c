unsigned int __thiscall TESContainer_Clear(_DWORD *this)
{
  unsigned int result; // eax
  _DWORD *v3; // eax

  for ( result = *(this + 2); result; result = *(this + 2) ) /*0x4696b8*/
  {
    FormHeapFree(result); /*0x4696bb*/
    v3 = (_DWORD *)*(this + 3); /*0x4696c0*/
    if ( v3 ) /*0x4696c8*/
    {
      *(this + 3) = v3[1]; /*0x4696cd*/
      *(this + 2) = *v3; /*0x4696d3*/
      FormHeapFree((unsigned int)v3); /*0x4696d6*/
    }
    else
    {
      *(this + 2) = 0; /*0x4696e0*/
    }
  }
  return result; /*0x4696ee*/
}
