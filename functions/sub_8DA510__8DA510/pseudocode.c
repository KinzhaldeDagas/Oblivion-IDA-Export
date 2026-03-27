int __thiscall sub_8DA510(_DWORD *this)
{
  int result; // eax

  result = *(this + 0x704);
  if ( result )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_BA7D98 + 4))(dword_BA7D98, result);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_BA7D98 + 4))(dword_BA7D98, *(this + 0x705));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_BA7D98 + 4))(dword_BA7D98, *(this + 0x706));
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_BA7D98 + 4))(dword_BA7D98, *(this + 0x707));
    *(this + 0x704) = 0;
    *(this + 0x705) = 0;
    *(this + 0x706) = 0;
    *(this + 0x707) = 0;
  }
  return result;
}
