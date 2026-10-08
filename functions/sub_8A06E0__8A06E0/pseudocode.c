char __thiscall sub_8A06E0(int *this, int *a2)
{
  int v3; // ebp
  int v4; // eax
  int v5; // ebx

  if ( this ) /*0x8a06e7*/
    v3 = *(this + 2); /*0x8a06e9*/
  else
    v3 = 0; /*0x8a06ee*/
  if ( !v3 ) /*0x8a06f4*/
    return 0; /*0x8a074e*/
  v4 = *this; /*0x8a06f6*/
  if ( a2 ) /*0x8a06ff*/
  {
    v5 = (*(int (**)(void))(v4 + 0x58))(); /*0x8a0706*/
    if ( v5 == (*(int (__thiscall **)(int *))(*a2 + 0x58))(a2) ) /*0x8a0713*/
    {
      return 0; /*0x8a0757*/
    }
    else
    {
      (*(void (__thiscall **)(int *))(*this + 0x60))(this); /*0x8a071c*/
      (*(void (__thiscall **)(int *, int *, int))(*this + 0x90))(this, a2, 1); /*0x8a072b*/
      sub_88C330(a2, v3, v3); /*0x8a0730*/
      return 1; /*0x8a0738*/
    }
  }
  else
  {
    (*(void (**)(void))(v4 + 0x60))(); /*0x8a0741*/
    return 0; /*0x8a0746*/
  }
}
