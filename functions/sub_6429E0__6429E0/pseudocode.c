int __thiscall sub_6429E0(_DWORD *this)
{
  int v2; // ecx

  v2 = *(_DWORD *)(*(this + 0xA) + 0x58); /*0x6429e6*/
  if ( v2 ) /*0x6429eb*/
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 0x264))(v2, *(this + 0xB)); /*0x6429f9*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(this + 0xA) + 0x58) + 0x254))( /*0x642a0b*/
      *(_DWORD *)(*(this + 0xA) + 0x58),
      0);
    if ( !*(this + 0xB) ) /*0x642a0d*/
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 0xA) + 0x58) + 0x258))( /*0x642a23*/
        *(_DWORD *)(*(this + 0xA) + 0x58),
        1);
  }
  return (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 0xC) + 0x10))(*(this + 0xC), *(this + 0xA)); /*0x642a33*/
}
