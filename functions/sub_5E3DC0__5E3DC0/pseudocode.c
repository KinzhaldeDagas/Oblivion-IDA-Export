int __thiscall sub_5E3DC0(_DWORD *this)
{
  int v1; // eax

  if ( *(this + 0x16) && (v1 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x184))(*(this + 0x16))) != 0 )
    return *(_DWORD *)(v1 + 0x24);
  else
    return 0;
}
