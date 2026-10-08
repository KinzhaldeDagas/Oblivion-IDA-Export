int __thiscall NiTMap_Clear(_DWORD *this)
{
  unsigned int v2; // ebx
  int result; // eax
  int v4; // ecx
  _DWORD *v5; // edi

  v2 = 0; /*0x7c2a44*/
  if ( *(this + 1) ) /*0x7c2a46*/
  {
    do /*0x7c2a90*/
    {
      for ( result = *(this + 2); *(_DWORD *)(result + 4 * v2); result = *(this + 2) ) /*0x7c2a53*/
      {
        v4 = *(this + 2); /*0x7c2a60*/
        v5 = *(_DWORD **)(v4 + 4 * v2); /*0x7c2a63*/
        *(_DWORD *)(v4 + 4 * v2) = *v5; /*0x7c2a6b*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x10))(this, v5); /*0x7c2a75*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x18))(this, v5); /*0x7c2a7f*/
      }
      ++v2; /*0x7c2a8a*/
    }
    while ( v2 < *(this + 1) ); /*0x7c2a90*/
    *(this + 3) = 0; /*0x7c2a93*/
  }
  else
  {
    *(this + 3) = 0; /*0x7c2a9d*/
  }
  return result; /*0x7c2a9a*/
}
