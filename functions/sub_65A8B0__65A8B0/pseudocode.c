int *__thiscall sub_65A8B0(void *this, char *a2, char a3, int a4)
{
  int *sound; // ebp
  int *result; // eax
  int *v7; // esi
  float *v8; // eax

  sound = (int *)MEMORY[0xB33398]->sound; /*0x65a8b9*/
  if ( !sound || !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x154))(this) ) /*0x65a8d2*/
    return 0; /*0x65a965*/
  result = sub_6AE370(sound, a2, a4, 0, COERCE_INT(0.0)); /*0x65a8f0*/
  v7 = result; /*0x65a8f5*/
  if ( result ) /*0x65a8f9*/
  {
    if ( (a4 & 2) != 0 ) /*0x65a8fe*/
    {
      v8 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x174))(this); /*0x65a90a*/
      sub_6B7360(v7, *v8, v8[1], v8[2]); /*0x65a93c*/
      sub_6AC3E0((_DWORD **)sound, *v7, (LONG)this); /*0x65a947*/
    }
    sub_6B7190(v7, a3); /*0x65a953*/
    return v7; /*0x65a958*/
  }
  return result; /*0x65a95b*/
}
