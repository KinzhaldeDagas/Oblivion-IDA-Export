int __fastcall sub_8B9BE0(_DWORD *a1, int a2, char a3)
{
  int v4; // ebp
  _DWORD *v5; // ecx
  int HavokObject; // eax
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  int v10; // esi

  if ( a1 ) /*0x8b9be7*/
    v4 = a1[2]; /*0x8b9be9*/
  else
    v4 = 0; /*0x8b9bee*/
  if ( a3 ) /*0x8b9bf6*/
  {
    if ( a1 && (v5 = (_DWORD *)a1[2]) != 0 && (HavokObject = bhkCollisionWrapper_GetHavokObject(v5)) != 0 ) /*0x8b9c0a*/
      v7 = *(_DWORD *)(HavokObject + 0xC); /*0x8b9c0c*/
    else
      v7 = 0; /*0x8b9c11*/
    if ( v7 ) /*0x8b9c15*/
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x8b9c1b*/
  }
  else
  {
    if ( a1 && (v8 = (_DWORD *)a1[2]) != 0 && (v9 = bhkCollisionWrapper_GetHavokObject(v8)) != 0 ) /*0x8b9c36*/
      v10 = *(_DWORD *)(v9 + 0xC); /*0x8b9c38*/
    else
      v10 = 0; /*0x8b9c3d*/
    if ( v10 ) /*0x8b9c41*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x8b9c47*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x8b9c59*/
    }
  }
  if ( v4 )
    *(_DWORD *)(v4 + 0xB0) = a3 != 0 ? a1 : 0;
  return sub_89D430(a1, a3); /*0x8b9c76*/
}
