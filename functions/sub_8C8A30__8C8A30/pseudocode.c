int __thiscall sub_8C8A30(void *this, int a2)
{
  int v2; // edi
  int result; // eax
  int v5; // esi

  v2 = a2;
  sub_8AEAB0(a2);
  result = (*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 0x74))(this, &a2);
  v5 = result;
  if ( result )
  {
    *(float *)(result + 4) = flt_B2EFC4;
    sub_8E83B0(v2, result + 8);
    return sub_8E83B0(v2, v5 + 0x14);
  }
  return result;
}
