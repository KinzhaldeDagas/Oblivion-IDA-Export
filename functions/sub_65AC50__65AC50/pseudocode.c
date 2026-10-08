int __thiscall sub_65AC50(_DWORD *this, int a2, char a3, int a4, char a5)
{
  int *sound; // ebp
  int result; // eax
  int *v8; // esi
  float *v9; // eax

  sound = (int *)MEMORY[0xB33398]->sound; /*0x65ac5d*/
  result = 0; /*0x65ac60*/
  if ( sound ) /*0x65ac64*/
  {
    if ( *(this + 0xF) ) /*0x65ac6a*/
    {
      result = (int)OSGLobals_PlaySound(sound, (void *)a2, a4, a5); /*0x65ac82*/
      v8 = (int *)result; /*0x65ac87*/
      if ( result ) /*0x65ac8b*/
      {
        if ( (a4 & 2) != 0 ) /*0x65ac90*/
        {
          v9 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 0x174))(this); /*0x65ac9c*/
          sub_6B7360(v8, *v9, v9[1], v9[2]); /*0x65acce*/
          sub_6AC3E0((_DWORD **)sound, *v8, (LONG)this); /*0x65acd9*/
        }
        sub_6B7190(v8, a3); /*0x65ace5*/
        return (int)v8; /*0x65acea*/
      }
    }
  }
  return result; /*0x65acee*/
}
