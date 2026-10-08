int __thiscall sub_7C2DF0(char **this, _DWORD *a2, int a3)
{
  int v4; // edi
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int result; // eax

  j_BSShaderProperty_CopyCloneMembers(this, (int)a2, a3); /*0x7c2e00*/
  v4 = a2[0x28]; /*0x7c2e05*/
  v5 = InterlockedDecrement; /*0x7c2e11*/
  if ( (char *)v4 != *(this + 0x28) ) /*0x7c2e17*/
  {
    if ( v4 ) /*0x7c2e1b*/
    {
      if ( !v5((volatile LONG *)(v4 + 4)) ) /*0x7c2e21*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7c2e33*/
    }
    v6 = (int)*(this + 0x28); /*0x7c2e35*/
    a2[0x28] = v6; /*0x7c2e3d*/
    if ( v6 ) /*0x7c2e43*/
      InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x7c2e49*/
  }
  v7 = a2[0x29]; /*0x7c2e4f*/
  if ( (char *)v7 != *(this + 0x29) ) /*0x7c2e5b*/
  {
    if ( v7 ) /*0x7c2e5f*/
    {
      if ( !v5((volatile LONG *)(v7 + 4)) ) /*0x7c2e65*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7c2e77*/
    }
    v8 = (int)*(this + 0x29); /*0x7c2e79*/
    a2[0x29] = v8; /*0x7c2e81*/
    if ( v8 ) /*0x7c2e87*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x7c2e8d*/
  }
  a2[0x2A] = *(this + 0x2A); /*0x7c2e99*/
  a2[0x2B] = *(this + 0x2B); /*0x7c2ea6*/
  result = (int)*(this + 0x27); /*0x7c2eac*/
  a2[0x27] = result; /*0x7c2eb4*/
  return result; /*0x7c2ea5*/
}
