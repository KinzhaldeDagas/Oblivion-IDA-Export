int __thiscall NiD3DShaderConstantMap::SetConstantValue(
        NiD3DShaderConstantMap *this,
        char *keyName,
        int flags,
        int register_1,
        char *constName)
{
  NiD3DShaderConstantMapEntry *v6; // eax
  NiD3DShaderConstantMapEntry *v7; // esi
  UInt32 v8; // eax
  int result; // eax

  v6 = (NiD3DShaderConstantMapEntry *)FormHeapAlloc(0x38u);
  if ( v6 )
    v7 = sub_9A84B0(v6);
  else
    v7 = 0;
  NiD3DShaderConstantMapEntry::SetKeyStringCopy(v7, keyName);
  v7->Extra = flags;
  v7->ShaderRegister = register_1;
  sub_9A85C0(v7, constName);
  v7->Flags = 0x20000000;
  v8 = ((int (__thiscall *)(NiD3DShaderConstantMap *, NiD3DShaderConstantMapEntry *))this->_vtbl->sub_9A26F0)(this, v7);
  this->Unk24 = v8;
  if ( v8 )
  {
    (*(void (__thiscall **)(NiD3DShaderConstantMapEntry *, int))v7->_vtbl)(v7, 1);
    return this->Unk24;
  }
  else
  {
    result = ((int (__thiscall *)(NiD3DShaderConstantMap *, NiD3DShaderConstantMapEntry *))this->_vtbl->sub_9A9AD0)(
               this,
               v7);
    this->Unk24 = result;
  }
  return result;
}
