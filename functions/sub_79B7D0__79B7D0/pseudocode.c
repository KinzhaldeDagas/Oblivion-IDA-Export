_DWORD *__cdecl sub_79B7D0(int a1, int a2)
{
  _DWORD *result; // eax

  if ( a1 )
  {
    result = sub_79AD70((_DWORD *)a1, a2);
    *(float *)(a1 + 0x10) = *(float *)(a2 + 0x10);
    *(float *)(a1 + 0x14) = *(float *)(a2 + 0x14);
    LOBYTE(result) = *(_BYTE *)(a2 + 0x18);
    *(_BYTE *)(a1 + 0x18) = (_BYTE)result;
    *(float *)(a1 + 0x1C) = *(float *)(a2 + 0x1C);
    *(float *)(a1 + 0x20) = *(float *)(a2 + 0x20);
    *(float *)(a1 + 0x24) = *(float *)(a2 + 0x24);
    *(_DWORD *)(a1 + 0x28) = *(_DWORD *)(a2 + 0x28);
    *(_DWORD *)(a1 + 0x2C) = *(_DWORD *)(a2 + 0x2C);
  }
  return result;
}
