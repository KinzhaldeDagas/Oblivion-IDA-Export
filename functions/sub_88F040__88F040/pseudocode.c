void __thiscall sub_88F040(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax

  v2 = (_DWORD *)*(this + 4); /*0x88f044*/
  if ( v2 ) /*0x88f049*/
  {
    if ( *(this + 7) == 6 /*0x88f081*/
      && ((v3 = v2[2]) == 0
       || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 0x50) + 8))(*(_DWORD *)(v3 + 0x50)) != 6)
      || *(this + 7) == 1
      && ((v4 = v2[2]) == 0
       || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 0x50) + 8))(*(_DWORD *)(v4 + 0x50)) >= 6) )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x9C))(v2, *(this + 7)); /*0x88f091*/
    }
  }
}
