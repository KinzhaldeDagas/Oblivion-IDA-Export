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

  sub_9A8DD0 = this->_vtbl->sub_9A8DD0;
  this->Unk24 = 0;
  if ( ((int (__stdcall *)(char *))sub_9A8DD0)(constName) )
  {
    this->Unk24 = 0x80000020;
    return 0x80000020;
  }
  else
  {
    v14 = flags & 0xF0000000;
    if ( (flags & 0xF0000000) == 0x30000000 )
    {
      result = ((int (__thiscall *)(NiD3DShaderConstantMap *, char *, int, int, int, int, char *, int, int, void *, int))this->_vtbl->sub_9A8890)(
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
      this->Unk24 = result;
    }
    else
    {
      switch ( v14 )
      {
        case 0x10000000u:
          result = ((int (__thiscall *)(NiD3DShaderConstantMap *, char *, int, int, int, int, char *, int, int, void *, int))this->_vtbl->sub_9A8C40)(
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
          this->Unk24 = result;
          break;
        case 0x20000000u:
          result = ((int (__thiscall *)(NiD3DShaderConstantMap *, char *, int, int, char *))this->_vtbl->sub_9A8800)(
                     this,
                     constName,
                     extra,
                     register_1,
                     sawEmpty);
          this->Unk24 = result;
          break;
        case 0x40000000u:
          result = ((int (__thiscall *)(NiD3DShaderConstantMap *, char *, int, int, int, int, char *, int, int, void *, int))this->_vtbl->sub_9A8940)(
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
          this->Unk24 = result;
          break;
        case 0x50000000u:
          result = ((int (__thiscall *)(NiD3DShaderConstantMap *, char *, int, int, int, int, char *))this->_vtbl->sub_9A8A50)(
                     this,
                     constName,
                     flags,
                     extra,
                     register_1,
                     boh,
                     sawEmpty);
          this->Unk24 = result;
          break;
        case 0x60000000u:
          vtbl = this->_vtbl;
          v16 = sub_9A2450(flags);
          result = ((int (__thiscall *)(NiD3DShaderConstantMap *, char *, int, char *, int, int))vtbl->sub_9A8AE0)(
                     this,
                     constName,
                     register_1,
                     sawEmpty,
                     extra,
                     v16);
          this->Unk24 = result;
          break;
        default:
          this->Unk24 = 0x80000040;
          return this->Unk24;
      }
    }
  }
  return result;
}
