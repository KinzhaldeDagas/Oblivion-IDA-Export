int __thiscall sub_901D70(_DWORD *this, int a2)
{
  int result; // eax
  int i; // esi
  int v5; // ecx
  int v6; // [esp+Ch] [ebp-8h] BYREF

  *(_DWORD *)a2 = 0; /*0x901d7a*/
  *(_BYTE *)(a2 + 4) = 1; /*0x901d82*/
  result = *(this + 5); /*0x901d86*/
  for ( i = 0; i < result; ++i ) /*0x901d8d*/
  {
    v5 = *(_DWORD *)(*(this + 4) + 8 * i); /*0x901d93*/
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v5 + 0x1C))(v5, &v6); /*0x901d9d*/
    *(_DWORD *)a2 += v6; /*0x901da8*/
    result = *(this + 5); /*0x901daa*/
  }
  return result; /*0x901db2*/
}
