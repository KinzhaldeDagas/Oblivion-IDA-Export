// Verified from byte construction and referenced model getter: emits 'Textures\\Trees\\Billboards\\' + model path basename through first dot + '.dds'. If model path has no dot, suffix isn't appended; path truncation/long-path handling not established.
char *__thiscall OB_TESObjectTREE_BuildBillboardTexturePath_010201A0(TESObjectTREE_BillboardTail *this, char *outPath)
{
  char *v2; // esi
  char v3; // al
  char *result; // eax
  char i; // cl
  _BYTE *v6; // esi

  v2 = outPath; /*0x4b9c41*/
  v3 = 0x54; /*0x4b9c4a*/
  do /*0x4b9c5b*/
  {
    *v2 = v3; /*0x4b9c50*/
    v3 = (v2++)["Textures\\Trees\\Billboards" - outPath + 1]; /*0x4b9c52*/
  }
  while ( v3 ); /*0x4b9c5b*/
  result = (char *)(*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)&this->prefix_000_077[0x24] + 0x14))(&this->prefix_000_077[0x24]); /*0x4b9c66*/
  for ( i = *result; *result != 0x2E; ++v2 ) /*0x4b9c6d*/
  {
    if ( !i ) /*0x4b9c72*/
      break; /*0x4b9c72*/
    ++result; /*0x4b9c74*/
    *v2 = i; /*0x4b9c77*/
    i = *result; /*0x4b9c79*/
  }
  if ( *result == 0x2E ) /*0x4b9c86*/
  {
    *v2 = 0x2E; /*0x4b9c88*/
    v6 = v2 + 1; /*0x4b9c8b*/
    *v6++ = 0x64; /*0x4b9c8e*/
    *v6++ = 0x64; /*0x4b9c94*/
    *v6 = 0x73; /*0x4b9c9a*/
    v2 = v6 + 1; /*0x4b9c9d*/
  }
  *v2 = 0; /*0x4b9ca0*/
  return result; /*0x4b9ca3*/
}
