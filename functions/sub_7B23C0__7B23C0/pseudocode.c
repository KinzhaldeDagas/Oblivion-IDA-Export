int __thiscall sub_7B23C0(char **this, _DWORD *a2, int a3)
{
  int v4; // edi
  int v5; // eax
  int result; // eax

  j_BSShaderProperty_CopyCloneMembers(this, (int)a2, a3); /*0x7b23cf*/
  v4 = a2[0x28]; /*0x7b23d4*/
  if ( (char *)v4 != *(this + 0x28) ) /*0x7b23e0*/
  {
    if ( v4 ) /*0x7b23e4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x7b23ea*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7b2400*/
    }
    v5 = (int)*(this + 0x28); /*0x7b2402*/
    a2[0x28] = v5; /*0x7b240a*/
    if ( v5 ) /*0x7b2410*/
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x7b2416*/
  }
  a2[0x29] = *(this + 0x29); /*0x7b2422*/
  a2[0x2A] = *(this + 0x2A); /*0x7b242e*/
  result = (int)*(this + 0x27); /*0x7b2434*/
  a2[0x27] = result; /*0x7b243c*/
  return result; /*0x7b243a*/
}
