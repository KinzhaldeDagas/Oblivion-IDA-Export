int __thiscall sub_72EFB0(_DWORD *this)
{
  unsigned int v2; // ebx
  int v3; // edi
  int result; // eax

  if ( *(this + 0x11) ) /*0x72efb3*/
  {
    v2 = 0; /*0x72efba*/
    if ( *(this + 0x10) ) /*0x72efbc*/
    {
      v3 = 0; /*0x72efc2*/
      do /*0x72efe8*/
      {
        FormHeapFree(*(_DWORD *)(v3 + *(this + 0x11) + 0x44)); /*0x72efcc*/
        *(_DWORD *)(v3 + *(this + 0x11) + 0x44) = 0; /*0x72efd4*/
        ++v2; /*0x72efdc*/
        v3 += 0x4C; /*0x72efe2*/
      }
      while ( v2 < *(this + 0x10) ); /*0x72efe8*/
    }
  }
  return result; /*0x72efec*/
}
