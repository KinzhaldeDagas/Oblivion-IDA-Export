int *__cdecl sub_91BA70(int *a1)
{
  int v1; // esi
  int v2; // eax
  _DWORD *i; // edx
  int v5; // [esp+4h] [ebp-8h] BYREF

  v1 = a1[0x12]; /*0x91ba78*/
  v2 = 0; /*0x91ba7b*/
  if ( v1 <= 0 ) /*0x91ba7f*/
    return a1 + 5; /*0x91ba94*/
  for ( i = (_DWORD *)a1[0x11]; *i != 0x1134; i += 4 ) /*0x91ba81*/
  {
    if ( ++v2 >= v1 ) /*0x91ba92*/
      return a1 + 5; /*0x91ba92*/
  }
  return (int *)*sub_47F990(a1, &v5, 0x1134); /*0x91ba97*/
}
