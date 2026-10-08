void __thiscall sub_6635E0(_DWORD *this, int a2)
{
  int *v3; // ecx
  float *v4; // eax
  _DWORD **sound; // ecx
  int SchoolFailureSound; // eax

  v3 = (int *)*(this + a2 + 0x1DA); /*0x6635eb*/
  if ( v3 ) /*0x6635f4*/
  {
    sub_6B7240(v3); /*0x6635f6*/
    v4 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 0x174))(this); /*0x663605*/
    sub_6B7360((int *)*(this + a2 + 0x1DA), *v4, v4[1], v4[2]); /*0x66363c*/
    sound = (_DWORD **)MEMORY[0xB33398]->sound; /*0x663647*/
    if ( sound ) /*0x66364c*/
      sub_6AC3E0(sound, *(_DWORD *)*(this + a2 + 0x1DA), (LONG)this); /*0x663659*/
    sub_6B7190((int *)*(this + a2 + 0x1DA), 0); /*0x663667*/
  }
  else
  {
    SchoolFailureSound = Magic_GetSchoolFailureSound(a2); /*0x663675*/
    if ( SchoolFailureSound ) /*0x66367f*/
      *(this + a2 + 0x1DA) = sub_65AC50(this, *(_DWORD *)(SchoolFailureSound + 0xC), 0, 2, 1); /*0x663692*/
  }
}
