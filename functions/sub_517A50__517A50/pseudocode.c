// Load one SLSD into VariableInfo with GetChunkData(max=24). No exact-size predicate; malformed sizes follow generic no-op/short/truncation rules.
void __thiscall sub_517A50(char *this, Data *a1)
{
  if ( a1 ) /*0x517a5a*/
  {
    if ( TESFile_GetChunkType(a1) == 0x44534C53 ) /*0x517a68*/
      TESFile_GetChunkData(a1, this, 0x18u); /*0x517a6f*/
  }
}
