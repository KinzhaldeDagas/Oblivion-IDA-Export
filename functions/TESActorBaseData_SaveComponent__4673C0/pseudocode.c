void *__thiscall TESActorBaseData_SaveComponent(_DWORD *this)
{
  void *result; // eax
  int v3; // esi
  size_t v4; // [esp-4h] [ebp-8h]

  LODWORD(v4) = 0x10; /*0x4673c3*/
  result = TESForm_PutFormRecordChunkData(0x53424341, this + 1, v4); /*0x4673ce*/
  v3 = *(this + 5); /*0x4673d3*/
  if ( v3 ) /*0x4673db*/
    return TESForm_PutCurrentChunkData4(0x4D414E49, *(_DWORD *)(v3 + 0xC)); /*0x4673e6*/
  return result; /*0x4673ee*/
}
