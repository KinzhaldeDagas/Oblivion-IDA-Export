char __thiscall sub_726320(
        int this,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        _WORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  int v9; // eax
  int v10; // edx
  _DWORD *v11; // eax
  unsigned int v12; // edx
  int v13; // ecx
  unsigned int v14; // eax

  if ( a2 >= *(_DWORD *)(this + 0x10) ) /*0x726327*/
    return 0; /*0x726327*/
  v9 = *(_DWORD *)(this + 0x14); /*0x72632e*/
  if ( !v9 ) /*0x726333*/
    return 0; /*0x726329*/
  v10 = *(_DWORD *)(v9 + 0x1C * a2 + 4); /*0x72633f*/
  v11 = (_DWORD *)(v9 + 0x1C * a2); /*0x726345*/
  *a4 = v10; /*0x72634c*/
  if ( !v10 ) /*0x72634e*/
    return 0; /*0x72634e*/
  *a5 = *(_WORD *)(this + 0xC); /*0x726358*/
  *a6 = v11[3]; /*0x726362*/
  *a7 = v11[2]; /*0x72636b*/
  *a8 = v11[4]; /*0x726374*/
  v12 = v11[5]; /*0x72637a*/
  if ( v12 > *(unsigned __int16 *)(this + 0x26) ) /*0x72637f*/
    return 0; /*0x72637f*/
  v13 = *(_DWORD *)(*(_DWORD *)(this + 0x20) + 4 * v12); /*0x726384*/
  if ( !v13 ) /*0x726389*/
    return 0; /*0x726389*/
  v14 = v11[6]; /*0x72638b*/
  if ( *(_DWORD *)(v13 + 4) < v14 ) /*0x726391*/
    return 0; /*0x7263a4*/
  *a3 = v14 + *(_DWORD *)(v13 + 8); /*0x72639c*/
  return 1; /*0x72632b*/
}
