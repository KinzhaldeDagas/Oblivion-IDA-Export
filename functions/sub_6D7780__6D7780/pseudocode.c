// Loads base NiExtraData, reads a 32-bit key count, allocates count header-backed 0x08-byte records, then loads each float time and owned string.
NiPropertyState *__userpurge NiTextKeyExtraData_LoadBinary@<eax>(NiRenderer *this@<ecx>, size_t Size)
{
  signed int v3; // ebp
  void (__cdecl *v4)(int, size_t *, int, int *, int); // eax
  NiPropertyState *result; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  NiDynamicEffectState *v9; // edi
  unsigned int v10; // esi
  int *v11; // edi
  int v12; // [esp-14h] [ebp-3Ch]
  size_t v13; // [esp-4h] [ebp-2Ch]
  NiDynamicEffectState *v14; // [esp+14h] [ebp-14h]
  int v15; // [esp+18h] [ebp-10h] BYREF
  unsigned int v16; // [esp+24h] [ebp-4h]

  v3 = Size; /*0x6d77a9*/
  LODWORD(v13) = Size; /*0x6d77ad*/
  sub_721610(this, v13); /*0x6d77ae*/
  v12 = *(_DWORD *)(v3 + 0x21C); /*0x6d77c7*/
  v4 = *(void (__cdecl **)(int, size_t *, int, int *, int))(v12 + 4); /*0x6d77c8*/
  v15 = 4; /*0x6d77cb*/
  v4(v12, &Size, 4, &v15, 1); /*0x6d77d3*/
  result = (NiPropertyState *)Size; /*0x6d77d5*/
  if ( (_DWORD)Size )
  {
    v6 = Size; /*0x6d77e4*/
    v7 = (unsigned __int64)(unsigned int)Size >> 0x1D != 0 ? 0xFFFFFFFF : 8 * Size;
    v8 = FormHeapAlloc(__CFADD__(v7, 4) ? 0xFFFFFFFF : v7 + 4);
    v16 = 0; /*0x6d7813*/
    if ( v8 ) /*0x6d7817*/
    {
      v9 = (NiDynamicEffectState *)(v8 + 4); /*0x6d7824*/
      *(_DWORD *)v8 = v6; /*0x6d782a*/
      ArrayConstructor( /*0x6d782c*/
        (char *)(v8 + 4),
        8u,
        v6,
        (void (__thiscall *)(char *))NiTextKey_Construct,
        (void (__thiscall *)(void *))NiTextKey_Destroy);
      v14 = v9; /*0x6d7831*/
    }
    else
    {
      v14 = 0; /*0x6d7837*/
    }
    result = (NiPropertyState *)Size; /*0x6d783b*/
    v10 = 0; /*0x6d783f*/
    v16 = 0xFFFFFFFF; /*0x6d7843*/
    if ( (_DWORD)Size ) /*0x6d784b*/
    {
      v11 = (int *)v14; /*0x6d784d*/
      do /*0x6d7865*/
      {
        NiTextKey_LoadBinary(v11, v3); /*0x6d7854*/
        result = (NiPropertyState *)Size; /*0x6d7859*/
        ++v10; /*0x6d785d*/
        v11 += 2; /*0x6d7860*/
      }
      while ( v10 < (unsigned int)Size ); /*0x6d7865*/
    }
    this->members.propertyState = result; /*0x6d786b*/
    this->members.dynamicEffectState = v14; /*0x6d786e*/
  }
  return result; /*0x6d7871*/
}
