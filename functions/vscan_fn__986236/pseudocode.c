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

  v6 = strlen(v8); /*0x98623e*/
  if ( a2 && a4 ) /*0x98626a*/
  {
    v12 = 0x49; /*0x986273*/
    v11 = a2; /*0x98627a*/
    v9 = a2; /*0x98627d*/
    v10 = 0x7FFFFFFF; /*0x986280*/
    if ( v6 <= 0x7FFFFFFF ) /*0x986283*/
      v10 = v6; /*0x986285*/
    return a3(&v9, a4, a5, a6); /*0x986295*/
  }
  else
  {
    *_errno() = 0x16; /*0x986254*/
    _invalid_parameter(a1, 0, a2); /*0x98625a*/
    return 0xFFFFFFFF; /*0x986262*/
  }
}
