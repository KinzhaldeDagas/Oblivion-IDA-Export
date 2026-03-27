int __thiscall sub_65AC50(_DWORD *this, int a2, char a3, int a4, char a5)
{
  _DWORD **sound; // ebp
  int result; // eax
  int *v8; // esi
  float *v9; // eax

  sound = (_DWORD **)OSGlobals->sound;
  result = 0;
  if ( sound )
  {
    if ( *(this + 0xF) )
    {
      OSGLobals_PlaySound(a2, a4, a5);
      v8 = (int *)result;
      if ( result )
      {
        if ( (a4 & 2) != 0 )
        {
          v9 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 0x174))(this);
          sub_6B7360(v8, *v9, v9[1], v9[2]);
          sub_6AC3E0(sound, *v8, (LONG)this);
        }
        sub_6B7190(v8, a3);
        return (int)v8;
      }
    }
  }
  return result;
}
