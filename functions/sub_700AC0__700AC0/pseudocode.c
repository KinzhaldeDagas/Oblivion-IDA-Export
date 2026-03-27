int __thiscall sub_700AC0(int *this, unsigned int *a2)
{
  unsigned int *v2; // esi
  int result; // eax
  int (__cdecl *v4)(unsigned int, unsigned int **, int, int *, int); // eax
  unsigned int v5; // [esp-14h] [ebp-1Ch]
  int v6; // [esp+4h] [ebp-4h] BYREF

  v2 = a2;
  result = sub_6FFCE0(this, a2);
  if ( v2[0x36] < 0xA000102 )
  {
    v5 = v2[0x87];
    v4 = *(int (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v5 + 4);
    v6 = 2;
    result = v4(v5, &a2, 2, &v6, 1);
    *((_WORD *)v2 + 0x12E) = (_WORD)a2;
  }
  return result;
}
