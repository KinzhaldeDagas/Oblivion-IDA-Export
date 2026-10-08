int __thiscall sub_91DF60(_DWORD *this)
{
  int result; // eax
  int i; // esi

  result = *(this + 7); /*0x91df63*/
  if ( result ) /*0x91df68*/
  {
    for ( i = 0; i < *(_DWORD *)(result + 0x60); ++i ) /*0x91df72*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))*(this + 6))(this + 6, *(_DWORD *)(*(_DWORD *)(result + 0x5C) + 4 * i)); /*0x91df83*/
      result = *(this + 7); /*0x91df85*/
    }
  }
  return result; /*0x91df92*/
}
