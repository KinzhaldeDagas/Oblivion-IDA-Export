int *__thiscall sub_65A8B0(void *this, const char *a2, char a3, int a4)
{
  _DWORD *sound; // ebp
  int *result; // eax
  int *v7; // esi
  float *v8; // eax

  sound = OSGlobals->sound;
  if ( !sound || !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x154))(this) )
    return 0;
  result = sub_6AE370(sound, a2, a4, 0, COERCE_INT(0.0));
  v7 = result;
  if ( result )
  {
    if ( (a4 & 2) != 0 )
    {
      v8 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x174))(this);
      sub_6B7360(v7, *v8, v8[1], v8[2]);
      sub_6AC3E0((_DWORD **)sound, *v7, (LONG)this);
    }
    sub_6B7190(v7, a3);
    return v7;
  }
  return result;
}
