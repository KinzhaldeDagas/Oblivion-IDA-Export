int __thiscall sub_713720(_DWORD *this, const char *a2)
{
  const char *v2; // edi
  int (__cdecl *v4)(int, const char **, int, int *, int); // eax
  int result; // eax
  int (__cdecl *v6)(int, const char *, const char *, int *, int); // eax
  int v7; // [esp-14h] [ebp-20h]
  int v8; // [esp-14h] [ebp-20h]
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  if ( a2 )
    a2 = (const char *)strlen(a2);
  else
    a2 = 0;
  v7 = *(this + 0x88);
  v4 = *(int (__cdecl **)(int, const char **, int, int *, int))(v7 + 8);
  v9 = 4;
  result = v4(v7, &a2, 4, &v9, 1);
  if ( a2 )
  {
    v8 = *(this + 0x88);
    v6 = *(int (__cdecl **)(int, const char *, const char *, int *, int))(v8 + 8);
    v9 = 1;
    return v6(v8, v2, a2, &v9, 1);
  }
  return result;
}
