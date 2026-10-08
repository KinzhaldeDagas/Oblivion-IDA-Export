int __thiscall sub_8DA510(_DWORD *this)
{
  int result; // eax

  result = *(this + 0x704); /*0x8da513*/
  if ( result ) /*0x8da51e*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)unk_BA7D98 + 4))(unk_BA7D98, result); /*0x8da529*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)unk_BA7D98 + 4))(unk_BA7D98, *(this + 0x705)); /*0x8da53b*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)unk_BA7D98 + 4))(unk_BA7D98, *(this + 0x706)); /*0x8da54d*/
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)unk_BA7D98 + 4))(unk_BA7D98, *(this + 0x707)); /*0x8da55f*/
    *(this + 0x704) = 0; /*0x8da562*/
    *(this + 0x705) = 0; /*0x8da568*/
    *(this + 0x706) = 0; /*0x8da56e*/
    *(this + 0x707) = 0; /*0x8da574*/
  }
  return result; /*0x8da57a*/
}
