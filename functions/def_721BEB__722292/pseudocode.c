// positive sp value has been detected, the output may be wrong!
float *__userpurge def_721BEB@<eax>(int a1@<ebx>, float *a2@<ebp>, int a3)
{
  float *result; // eax
  unsigned int v4; // esi
  int v5; // ecx
  float v6; // [esp-ECh] [ebp-F0h] BYREF
  float v7; // [esp-28h] [ebp-2Ch] BYREF

  result = NiMAtrix33_Multiply(a2, &v7, &v6);
  qmemcpy(a2, result, 0x24u);
  v4 = 0;
  if ( *(_WORD *)(a1 + 0xB6) )
  {
    do
    {
      v5 = *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * v4);
      if ( v5 )
        (*(void (__cdecl **)(_DWORD, bool))(*(_DWORD *)v5 + 0x60))(
          *(float *)(a1 + 0xE0),
          (*(_BYTE *)(a1 + 0xDC) & 8) != 0);
      result = (float *)*(unsigned __int16 *)(a1 + 0xB6);
      ++v4;
    }
    while ( v4 < (unsigned int)result );
  }
  return result;
}
