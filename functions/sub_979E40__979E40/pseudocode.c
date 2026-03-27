signed int __thiscall sub_979E40(int this, float *a2, float *a3, int a4, int a5, int a6, int a7)
{
  signed int result; // eax
  int v9; // ecx
  int v10; // ecx

  if ( a7 != *(_DWORD *)(this + 0x88) )
  {
    sub_97AEC0((float *)(this + 4), (float *)(a6 + 0x64));
    *(_DWORD *)(this + 0x88) = a7;
  }
  result = sub_9803B0((float *)(this + 4), a2, a3);
  if ( result )
  {
    v9 = *(_DWORD *)(this + 0x80);
    if ( !v9
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
      v10 = *(_DWORD *)(this + 0x84);
      if ( !v10 )
        return 0;
      result = (*(int (__thiscall **)(int, float *, float *, int, int, int, int))(*(_DWORD *)v10 + 0x10))(
                 v10,
                 a2,
                 a3,
                 a4,
                 a5,
                 a6,
                 a7);
      if ( result < 1 )
        return 0;
    }
  }
  return result;
}
