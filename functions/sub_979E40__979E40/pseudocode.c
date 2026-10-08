signed int __thiscall sub_979E40(int this, float *a2, float *a3, int a4, int a5, int a6, int a7)
{
  signed int result; // eax
  int v9; // ecx
  int v10; // ecx

  if ( a7 != *(_DWORD *)(this + 0x88) ) /*0x979e4e*/
  {
    sub_97AEC0((NiPoint3 *)(this + 4), (NiTransform *)(a6 + 0x64)); /*0x979e5b*/
    *(_DWORD *)(this + 0x88) = a7; /*0x979e60*/
  }
  result = sub_9803B0((float *)(this + 4), a2, a3); /*0x979e73*/
  if ( result ) /*0x979e7a*/
  {
    v9 = *(_DWORD *)(this + 0x80); /*0x979e81*/
    if ( !v9 /*0x979eb1*/
      || (result = (*(int (__thiscall **)(int, float *, float *, int, int, int, int))(*(_DWORD *)v9 + 0x10))(
                     v9,
                     a2,
                     a3,
                     a4,
                     a5,
                     a6,
                     a7),
          result < 1) )
    {
      v10 = *(_DWORD *)(this + 0x84); /*0x979eb3*/
      if ( !v10 ) /*0x979ebb*/
        return 0; /*0x979ebb*/
      result = (*(int (__thiscall **)(int, float *, float *, int, int, int, int))(*(_DWORD *)v10 + 0x10))( /*0x979ed4*/
                 v10,
                 a2,
                 a3,
                 a4,
                 a5,
                 a6,
                 a7);
      if ( result < 1 ) /*0x979ed9*/
        return 0; /*0x979edb*/
    }
  }
  return result; /*0x979e7c*/
}
