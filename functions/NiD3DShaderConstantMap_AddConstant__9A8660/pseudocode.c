// DeferredRendering: NiD3DShaderConstantMap::AddConstant routes by high nibble of flags; constant bindings are map metadata, not runtime light values.
// DX11 writer ABI audit 2026-10-01: AddConstant is thiscall with TEN raw DWORD stack arguments and RET28h. It can insert/replace entries and their backing allocation. A seven-word observer packet is insufficient; preserve all10 words and complete the call/unwind before closing mutation activity.
// Verified family correlation 2026-10-01: AddEntry dispatcher corresponds to Fallout821FE3C0 through category mask F0000000 and six virtual family branches. Oblivion duplicate-name status is80000020 and unsupported category80000040; Fallout uses plain32/64 and an extra comparison of existing entry Extra. Oblivion case20000000 calls AddPredefinedEntry9A8800 with four arguments. Existing full hook ABI remains ten raw DWORDs and RET28h.
int __thiscall NiD3DShaderConstantMap::AddConstant(
        NiD3DShaderConstantMap *this,
        char *constName,
        int flags,
        int extra,
        int register_1,
        int boh,
        char *sawEmpty,
        int size,
        int number,
        void *a10,
        int a11)
{
  void (__thiscall *sub_9A8DD0)(NiD3DShaderConstantMap *); // edx
  int result; // eax
  unsigned int v14; // ecx
  NiD3DSCM_Pixel *vtbl; // ebx
  int v16; // eax

  sub_9A8DD0 = this->_vtbl->sub_9A8DD0; /*0x9a8665*/
  this->Unk24 = 0; /*0x9a866e*/
  if ( ((int (__stdcall *)(char *))sub_9A8DD0)(constName) ) /*0x9a8675*/
  {
    this->Unk24 = 0x80000020; /*0x9a8681*/
    return 0x80000020; /*0x9a867b*/
  }
  else
  {
    v14 = flags & 0xF0000000; /*0x9a868e*/
    if ( (flags & 0xF0000000) == 0x30000000 ) /*0x9a869a*/
    {
      result = ((int (__thiscall *)(NiD3DShaderConstantMap *, char *, int, int, int, int, char *, int, int, void *, int))this->_vtbl->sub_9A8890)( /*0x9a86cd*/
                 this,
                 constName,
                 flags,
                 extra,
                 register_1,
                 boh,
                 sawEmpty,
                 size,
                 number,
                 a10,
                 a11);
      this->Unk24 = result; /*0x9a86d0*/
    }
    else
    {
      switch ( v14 ) /*0x9a86dd*/
      {
        case 0x10000000u: /*0x9a86dd*/
          result = ((int (__thiscall *)(NiD3DShaderConstantMap *, char *, int, int, int, int, char *, int, int, void *, int))this->_vtbl->sub_9A8C40)( /*0x9a8710*/
                     this,
                     constName,
                     flags,
                     extra,
                     register_1,
                     boh,
                     sawEmpty,
                     size,
                     number,
                     a10,
                     a11);
          this->Unk24 = result; /*0x9a8713*/
          break;
        case 0x20000000u: /*0x9a86dd*/
          result = ((int (__thiscall *)(NiD3DShaderConstantMap *, char *, int, int, char *))this->_vtbl->sub_9A8800)( /*0x9a8739*/
                     this,
                     constName,
                     extra,
                     register_1,
                     sawEmpty);
          this->Unk24 = result; /*0x9a873c*/
          break;
        case 0x40000000u: /*0x9a86dd*/
          result = ((int (__thiscall *)(NiD3DShaderConstantMap *, char *, int, int, int, int, char *, int, int, void *, int))this->_vtbl->sub_9A8940)( /*0x9a877c*/
                     this,
                     constName,
                     flags,
                     extra,
                     register_1,
                     boh,
                     sawEmpty,
                     size,
                     number,
                     a10,
                     a11);
          this->Unk24 = result; /*0x9a877f*/
          break;
        case 0x50000000u: /*0x9a86dd*/
          result = ((int (__thiscall *)(NiD3DShaderConstantMap *, char *, int, int, int, int, char *))this->_vtbl->sub_9A8A50)( /*0x9a87ab*/
                     this,
                     constName,
                     flags,
                     extra,
                     register_1,
                     boh,
                     sawEmpty);
          this->Unk24 = result; /*0x9a87ae*/
          break;
        case 0x60000000u: /*0x9a86dd*/
          vtbl = this->_vtbl; /*0x9a87be*/
          v16 = sub_9A2450(flags); /*0x9a87c1*/
          result = ((int (__thiscall *)(NiD3DShaderConstantMap *, char *, int, char *, int, int))vtbl->sub_9A8AE0)( /*0x9a87df*/
                     this,
                     constName,
                     register_1,
                     sawEmpty,
                     extra,
                     v16);
          this->Unk24 = result; /*0x9a87e3*/
          break;
        default:
          this->Unk24 = 0x80000040; /*0x9a87ea*/
          return this->Unk24; /*0x9a87f1*/
      }
    }
  }
  return result; /*0x9a8680*/
}
