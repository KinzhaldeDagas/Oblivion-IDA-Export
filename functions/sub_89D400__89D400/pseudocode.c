int __thiscall sub_89D400(_DWORD *this, int a2)
{
  int (__thiscall *v3)(_DWORD *, int); // edx
  int result; // eax

  if ( *(this + 2) != a2 ) /*0x89d40b*/
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 0x50))(this, 0); /*0x89d414*/
    v3 = *(int (__thiscall **)(_DWORD *, int))(*this + 0x50); /*0x89d418*/
    *(this + 2) = a2; /*0x89d41f*/
    return v3(this, 1); /*0x89d422*/
  }
  return result; /*0x89d424*/
}
