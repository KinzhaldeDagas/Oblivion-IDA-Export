int __usercall vscan_fn@<eax>(
        int a1@<ebx>,
        int a2@<esi>,
        int (__cdecl *a3)(int *, int, int, int),
        int a4,
        int a5,
        int a6)
{
  unsigned int v6; // eax
  const char *v8; // [esp+0h] [ebp-28h]
  int v9; // [esp+8h] [ebp-20h] BYREF
  int v10; // [esp+Ch] [ebp-1Ch]
  int v11; // [esp+10h] [ebp-18h]
  int v12; // [esp+14h] [ebp-14h]

  v6 = strlen(v8);
  if ( a2 && a4 )
  {
    v12 = 0x49;
    v11 = a2;
    v9 = a2;
    v10 = 0x7FFFFFFF;
    if ( v6 <= 0x7FFFFFFF )
      v10 = v6;
    return a3(&v9, a4, a5, a6);
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(a1, 0, a2);
    return 0xFFFFFFFF;
  }
}
