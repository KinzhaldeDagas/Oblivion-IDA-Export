_DWORD *__thiscall sub_6AE370(int *this, char *a2, int a3, int a4, int a5)
{
  char *v6; // eax
  char *v8; // edx
  char *v9; // esi
  char *v10; // eax
  _DWORD *v11; // edi
  int v12; // [esp-4h] [ebp-24h]
  int v13; // [esp+0h] [ebp-20h]

  if ( !bSoundEnabled_Audio )
  {
    v6 = (char *)FormHeapAlloc(4u);
    a2 = v6;
    if ( v6 )
      return unknown_libname_1(v6, 0);
    return 0;
  }
  v8 = a2;
  if ( !a2 )
    return 0;
  if ( !strcmp(a2, EmptyString) )
    return 0;
  a2 = 0;
  v13 = *(this + 0x2D);
  v12 = a3;
  *(this + 0x2D) = v13 + 1;
  if ( sub_6AC610(this, (unsigned int **)&a2, v8, v12, v13) )
    return 0;
  v9 = a2;
  sub_6ACCA0(this, a2, *((_DWORD *)a2 + 3));
  v10 = (char *)FormHeapAlloc(4u);
  a2 = v10;
  if ( v10 )
    v11 = unknown_libname_1(v10, *((_DWORD *)v9 + 3));
  else
    v11 = 0;
  sub_6B6F20((float *)v9, 1.0);
  return v11;
}
