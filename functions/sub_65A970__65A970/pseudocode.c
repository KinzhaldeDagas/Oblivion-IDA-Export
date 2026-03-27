void __thiscall sub_65A970(void *this, _BYTE *a2, char a3, int a4, char a5)
{
  _DWORD **sound; // edi
  int v7; // eax
  int *v8; // eax
  int *v9; // esi
  float *v10; // eax

  sound = (_DWORD **)OSGlobals->sound;
  if ( sound )
  {
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x154))(this) )
    {
      v7 = sub_447490(a2);
      if ( v7 )
      {
        OSGLobals_PlaySound(*(_DWORD *)(v7 + 0xC), a4, a5);
        v9 = v8;
        if ( v8 )
        {
          if ( (a4 & 2) != 0 )
          {
            v10 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x174))(this);
            sub_6B7360(v9, *v10, v10[1], v10[2]);
            sub_6AC3E0(sound, *v9, (LONG)this);
          }
          sub_6B7280(v9, 1.0);
          sub_6B7190(v9, a3);
        }
      }
    }
  }
}
