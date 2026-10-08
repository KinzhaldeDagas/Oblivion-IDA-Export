int __thiscall sub_713720(_DWORD *this, const char *a2)
{
  const char *v2; // edi
  int (__cdecl *v4)(int, const char **, int, int *, int); // eax
  int result; // eax
  int (__cdecl *v6)(int, const char *, const char *, int *, int); // eax
  int v7; // [esp-14h] [ebp-20h]
  int v8; // [esp-14h] [ebp-20h]
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x713723*/
  if ( a2 ) /*0x71372b*/
    a2 = (const char *)strlen(a2); /*0x71372f*/
  else
    a2 = 0; /*0x713743*/
  v7 = *(this + 0x88); /*0x71375f*/
  v4 = *(int (__cdecl **)(int, const char **, int, int *, int))(v7 + 8); /*0x713760*/
  v9 = 4; /*0x713763*/
  result = v4(v7, &a2, 4, &v9, 1); /*0x71376b*/
  if ( a2 ) /*0x713776*/
  {
    v8 = *(this + 0x88); /*0x713787*/
    v6 = *(int (__cdecl **)(int, const char *, const char *, int *, int))(v8 + 8); /*0x713788*/
    v9 = 1; /*0x71378b*/
    return v6(v8, v2, a2, &v9, 1); /*0x713793*/
  }
  return result; /*0x713798*/
}
