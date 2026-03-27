char __thiscall sub_7262A0(
        int this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned __int16 a6,
        int a7,
        int a8)
{
  int v9; // edx
  _DWORD *v10; // eax

  if ( a6 != *(_WORD *)(this + 0xC) )
    return 0;
  if ( a2 >= *(_DWORD *)(this + 0x10) )
    return 0;
  v9 = *(_DWORD *)(this + 0x14);
  if ( !v9 )
    return 0;
  if ( a3 > *(unsigned __int16 *)(this + 0x26) )
    return 0;
  v10 = (_DWORD *)(v9 + 0x1C * a2);
  v10[1] = a5;
  v10[5] = a3;
  v10[6] = a4;
  v10[4] = a8;
  v10[2] = a7;
  v10[3] = a7 * a6;
  return 1;
}
