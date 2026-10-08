int __thiscall sub_95F900(_WORD *this)
{
  unsigned int i; // edi
  int v3; // ecx
  int result; // eax
  int v5; // edx

  for ( i = 0; i < (unsigned __int16)*(this + 7); ++i ) /*0x95f909*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * i); /*0x95f913*/
    if ( v3 ) /*0x95f918*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 8))(v3, 1); /*0x95f921*/
  }
  for ( result = 0; (unsigned __int16)result < *(this + 7); *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v5) = 0 ) /*0x95f930*/
    v5 = (unsigned __int16)result++; /*0x95f939*/
  *(this + 8) = 0; /*0x95f949*/
  *(this + 7) = 0; /*0x95f94d*/
  return result; /*0x95f948*/
}
