// positive sp value has been detected, the output may be wrong!
NiMatrix33 *__userpurge def_721BEB@<eax>(int a1@<ebx>, NiMatrix33 *a2@<ebp>, int a3)
{
  NiMatrix33 *result; // eax
  unsigned int v4; // esi
  int v5; // ecx
  NiMatrix33 v6; // [esp-ECh] [ebp-F0h] BYREF
  NiMatrix33 v7; // [esp-28h] [ebp-2Ch] BYREF

  result = NiMAtrix33_Multiply(a2, &v7, &v6); /*0x7222a1*/
  qmemcpy(a2, result, sizeof(NiMatrix33)); /*0x7222af*/
  v4 = 0; /*0x7222b1*/
  if ( *(_WORD *)(a1 + 0xB6) ) /*0x7222b3*/
  {
    do /*0x7222fa*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * v4); /*0x7222c6*/
      if ( v5 ) /*0x7222cb*/
        (*(void (__cdecl **)(_DWORD, bool))(*(_DWORD *)v5 + 0x60))( /*0x7222ec*/
          *(float *)(a1 + 0xE0),
          (*(_BYTE *)(a1 + 0xDC) & 8) != 0);
      result = (NiMatrix33 *)*(unsigned __int16 *)(a1 + 0xB6); /*0x7222ee*/
      ++v4; /*0x7222f5*/
    }
    while ( v4 < (unsigned int)result ); /*0x7222fa*/
  }
  return result; /*0x722305*/
}
