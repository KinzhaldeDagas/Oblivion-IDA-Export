char __cdecl sub_493ED0(int a1, _BYTE *a2, int a3)
{
  int v3; // ebp
  void (__cdecl *v5)(int, int *, int, int *, int); // edx
  void (__cdecl *v6)(int, unsigned __int16 *, int, int *, int); // edx
  unsigned __int16 v8; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h] BYREF

  v3 = a3; /*0x493ed4*/
  if ( !a3 ) /*0x493eda*/
    return 1; /*0x493f59*/
  do /*0x493f4d*/
  {
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(a1 + 4); /*0x493ef0*/
    v9 = 1; /*0x493f00*/
    v5(a1, &a3, 1, &v9, 1); /*0x493f04*/
    if ( (_BYTE)a3 ) /*0x493f0f*/
    {
      *a2++ = a3; /*0x493f11*/
      --v3; /*0x493f15*/
    }
    else
    {
      v6 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(a1 + 4); /*0x493f19*/
      v9 = 1; /*0x493f2a*/
      v6(a1, &v8, 2, &v9, 1); /*0x493f2e*/
      _memset((int)a2, 0, v8); /*0x493f39*/
      a2 += v8; /*0x493f46*/
      v3 -= 3; /*0x493f48*/
    }
  }
  while ( v3 ); /*0x493f4d*/
  return 1; /*0x493f54*/
}
