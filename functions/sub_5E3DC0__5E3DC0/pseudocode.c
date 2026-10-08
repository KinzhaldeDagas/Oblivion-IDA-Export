int __thiscall sub_5E3DC0(_DWORD *this)
{
  int v1; // eax

  if ( *(this + 0x16) && (v1 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x184))(*(this + 0x16))) != 0 ) /*0x5e3dd5*/
    return *(_DWORD *)(v1 + 0x24); /*0x5e3dd7*/
  else
    return 0; /*0x5e3ddb*/
}
