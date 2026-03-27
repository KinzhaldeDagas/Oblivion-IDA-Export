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

  v5 = *a3;
  v6 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a1 + 8))(*a1);
  v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2);
  if ( *((_BYTE *)a3 + 0xC) )
  {
    v8 = v7 + 0x20 * v6;
    v9 = *(unsigned __int8 *)(v8 + v5 + 0x1294);
    v10 = v5 + v8;
  }
  else
  {
    v11 = v7 + 0x20 * v6;
    v9 = *(unsigned __int8 *)(v11 + v5 + 0xE94);
    v10 = v11 + v5;
  }
  v12 = *(_DWORD *)(0x34 * v9 + v5 + 0x16C4) == 2;
  if ( v9 == 1 )
    v12 = *(_BYTE *)(v5 + 0x14 * *(unsigned __int8 *)(v10 + 0x190) + 0x9A0) != 0;
  *a5 = v12;
  if ( v12 )
  {
    v13 = v6 + 0x20 * v7;
    if ( *((_BYTE *)a3 + 0xC) )
      result = (_DWORD *)*(unsigned __int8 *)(v13 + v5 + 0x1294);
    else
      result = (_DWORD *)*(unsigned __int8 *)(v13 + v5 + 0xE94);
    *a4 = result;
  }
  else
  {
    *a4 = v9;
    return a4;
  }
  return result;
}
