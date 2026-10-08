// DeferredRendering: NiD3DShaderConstantMap::SetConstantValue allocates a 0x38 entry, copies key/constant names, stores shader register at +0x1C, and adds it to the map.
// DX11 writer ABI audit 2026-10-01: SetConstantValue is thiscall with FOUR raw DWORD stack arguments, RET10h. Observe the whole entry replacement operation; retained map/entry objects do not freeze contents.
// Verified naming correction 2026-10-01: the former SetConstantValue label was misleading. This allocates a0x38 entry, copies key and variable names, stores extra at+18/register+1C, sets type20000000 at+14, validates via virtual+64 and inserts via+60. It is AddPredefinedEntry, correlated with Fallout827C7AB8 and confirmed by Oblivion AddEntry9A8660 case20000000. Oblivion has FOUR arguments and no additional data-size/stride/source/copy parameters present in Fallout; do not transplant that signature. This constructs binding metadata, not a GPU constant value.
unsigned int __thiscall NiD3DShaderConstantMap_AddPredefinedEntry(
        NiD3DShaderConstantMap *this,
        const char *keyName,
        unsigned int extra,
        unsigned int shaderRegister,
        const char *variableName)
{
  NiD3DShaderConstantMapEntry *v6; // eax
  NiD3DShaderConstantMapEntry *v7; // esi
  UInt32 v8; // eax
  unsigned int result; // eax

  v6 = (NiD3DShaderConstantMapEntry *)FormHeapAlloc(0x38u); /*0x9a8806*/
  if ( v6 ) /*0x9a8810*/
    v7 = sub_9A84B0(v6); /*0x9a8819*/
  else
    v7 = 0; /*0x9a881d*/
  NiD3DShaderConstantMapEntry::SetKeyStringCopy(v7, (char *)keyName); /*0x9a8826*/
  v7->Extra = extra; /*0x9a8837*/
  v7->ShaderRegister = shaderRegister; /*0x9a883d*/
  sub_9A85C0((unsigned int *)v7, (char *)variableName); /*0x9a8840*/
  v7->Flags = 0x20000000; /*0x9a8845*/
  v8 = ((int (__thiscall *)(NiD3DShaderConstantMap *, NiD3DShaderConstantMapEntry *))this->_vtbl->sub_9A26F0)(this, v7); /*0x9a8854*/
  this->Unk24 = v8; /*0x9a8858*/
  if ( v8 ) /*0x9a885b*/
  {
    (*(void (__thiscall **)(NiD3DShaderConstantMapEntry *, int))v7->_vtbl)(v7, 1); /*0x9a8877*/
    return this->Unk24; /*0x9a8879*/
  }
  else
  {
    result = ((int (__thiscall *)(NiD3DShaderConstantMap *, NiD3DShaderConstantMapEntry *))this->_vtbl->sub_9A9AD0)( /*0x9a8865*/
               this,
               v7);
    this->Unk24 = result; /*0x9a8867*/
  }
  return result; /*0x9a886a*/
}
