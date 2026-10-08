_DWORD *__cdecl sub_8E6490(_DWORD *a1, _DWORD *a2, int *a3, _DWORD *a4, BOOL *a5)
{
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // ebp
  int v10; // ecx
  int v11; // edx
  BOOL v12; // edx
  int v13; // eax
  _DWORD *result; // eax

  v5 = *a3; /*0x8e649f*/
  v6 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a1 + 8))(*a1); /*0x8e64a5*/
  v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2); /*0x8e64af*/
  if ( *((_BYTE *)a3 + 0xC) ) /*0x8e64b2*/
  {
    v8 = v7 + 0x20 * v6; /*0x8e64be*/
    v9 = *(unsigned __int8 *)(v8 + v5 + 0x1294); /*0x8e64c0*/
    v10 = v5 + v8; /*0x8e64c8*/
  }
  else
  {
    v11 = v7 + 0x20 * v6; /*0x8e64d1*/
    v9 = *(unsigned __int8 *)(v11 + v5 + 0xE94); /*0x8e64d3*/
    v10 = v11 + v5; /*0x8e64db*/
  }
  v12 = *(_DWORD *)(0x34 * v9 + v5 + 0x16C4) == 2; /*0x8e64f3*/
  if ( v9 == 1 ) /*0x8e64f5*/
    v12 = *(_BYTE *)(v5 + 0x14 * *(unsigned __int8 *)(v10 + 0x190) + 0x9A0) != 0; /*0x8e650d*/
  *a5 = v12; /*0x8e6516*/
  if ( v12 ) /*0x8e6518*/
  {
    v13 = v6 + 0x20 * v7; /*0x8e6524*/
    if ( *((_BYTE *)a3 + 0xC) ) /*0x8e651e*/
      result = (_DWORD *)*(unsigned __int8 *)(v13 + v5 + 0x1294); /*0x8e652a*/
    else
      result = (_DWORD *)*(unsigned __int8 *)(v13 + v5 + 0xE94); /*0x8e653d*/
    *a4 = result; /*0x8e6539*/
  }
  else
  {
    *a4 = v9; /*0x8e6556*/
    return a4; /*0x8e6550*/
  }
  return result; /*0x8e6536*/
}
