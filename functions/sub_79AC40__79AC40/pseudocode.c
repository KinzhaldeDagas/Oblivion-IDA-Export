_DWORD *__cdecl sub_79AC40(int a1, int a2)
{
  _DWORD *result; // eax

  result = 0;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 0x18) = 0xF;
    *(_DWORD *)(a1 + 0x14) = 0;
    *(_BYTE *)(a1 + 4) = 0;
    result = sub_414420(a1, (_DWORD *)a2, 0, 0xFFFFFFFF);
    *(float *)(a1 + 0x1C) = *(float *)(a2 + 0x1C);
    *(float *)(a1 + 0x20) = *(float *)(a2 + 0x20);
    *(float *)(a1 + 0x24) = *(float *)(a2 + 0x24);
    *(float *)(a1 + 0x28) = *(float *)(a2 + 0x28);
  }
  return result;
}
