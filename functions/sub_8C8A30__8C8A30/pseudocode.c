int __thiscall sub_8C8A30(void *this, int a2)
{
  int v2; // edi
  int result; // eax
  int v5; // esi

  v2 = a2; /*0x8c8a32*/
  sub_8AEAB0(a2); /*0x8c8a39*/
  result = (*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 0x74))(this, &a2); /*0x8c8a4a*/
  v5 = result; /*0x8c8a4c*/
  if ( result ) /*0x8c8a50*/
  {
    *(float *)(result + 4) = flt_B2EFC4; /*0x8c8a5c*/
    sub_8E83B0(v2, result + 8); /*0x8c8a60*/
    return sub_8E83B0(v2, v5 + 0x14); /*0x8c8a6a*/
  }
  return result; /*0x8c8a72*/
}
