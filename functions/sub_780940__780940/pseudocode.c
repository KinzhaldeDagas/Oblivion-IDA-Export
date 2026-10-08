int __thiscall sub_780940(_BYTE *this, int a2)
{
  int result; // eax

  if ( *(this + 4) ) /*0x780940*/
  {
    *(this + 4) = 0; /*0x78094a*/
    return (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)a2 + 0xC4))(a2, *(_DWORD *)this); /*0x78095a*/
  }
  return result; /*0x78095c*/
}
