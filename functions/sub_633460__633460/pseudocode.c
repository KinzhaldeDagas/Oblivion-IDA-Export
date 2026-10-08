void __thiscall sub_633460(float *this)
{
  int (*v2)(void); // edx

  if ( *(this + 0x78) > 0.0 ) /*0x633470*/
  {
    v2 = *(int (**)(void))(*(_DWORD *)this + 0x36C); /*0x633480*/
    *(this + 0x78) = *(this + 0x78) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x633486*/
    if ( !v2() ) /*0x63348c*/
      *((_WORD *)this + 0xFE) |= *((char *)this + 0x1E4); /*0x63349a*/
    if ( *(this + 0x78) <= 0.0 ) /*0x6334ae*/
      (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)this + 0x2C4))(this, 0x30, 0); /*0x6334be*/
  }
}
