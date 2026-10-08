int __thiscall sub_89D6C0(_DWORD *this, int a2)
{
  int result; // eax

  nullsub_returnvVoid_1arg(a2); /*0x89d6c8*/
  result = *(this + 3); /*0x89d6cd*/
  if ( result ) /*0x89d6d2*/
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x70))(this, *(this + 3)); /*0x89d6dc*/
  return result; /*0x89d6de*/
}
