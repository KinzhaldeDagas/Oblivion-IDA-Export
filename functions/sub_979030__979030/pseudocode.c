bool __thiscall sub_979030(float *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v10; // eax

  if ( a7 != *((_DWORD *)this + 0x22) ) /*0x979040*/
  {
    sub_97AEC0((NiPoint3 *)(this + 1), (NiTransform *)(a3 + 0x64)); /*0x97904d*/
    *((_DWORD *)this + 0x22) = a7; /*0x979052*/
  }
  if ( a8 != *(_DWORD *)(a2 + 0x88) ) /*0x979066*/
  {
    sub_97AEC0((NiPoint3 *)(a2 + 4), (NiTransform *)(a4 + 0x64)); /*0x979073*/
    *(_DWORD *)(a2 + 0x88) = a8; /*0x979078*/
  }
  if ( !sub_97AFC0((int)(this + 1), a2 + 4) ) /*0x979085*/
    return 0; /*0x979091*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2) ) /*0x97909e*/
    return 1; /*0x97909e*/
  if ( !a6 ) /*0x9790ae*/
    return 1; /*0x9790ae*/
  v10 = *(_DWORD *)(a2 + 0x80); /*0x9790b0*/
  if ( !v10 && !*(_DWORD *)(a2 + 0x84) ) /*0x9790ba*/
    return 1; /*0x97912b*/
  return (*(unsigned __int8 (__thiscall **)(float *, int, int, int, int, int, int, int))(*(_DWORD *)this + 8))( /*0x97908e*/
           this,
           v10,
           a3,
           a4,
           a5,
           a6 - 1,
           a7,
           a8)
      || (*(unsigned __int8 (__thiscall **)(float *, _DWORD, int, int, int, int, int, int))(*(_DWORD *)this + 8))(
           this,
           *(_DWORD *)(a2 + 0x84),
           a3,
           a4,
           a5,
           a6 - 1,
           a7,
           a8);
}
