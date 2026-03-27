void __thiscall NiD3DShaderDeclaration::~NiD3DShaderDeclaration(NiD3DShaderDeclaration *this)
{
  bool v2; // zf
  UInt32 v3; // edi
  int v4; // ebx
  UInt32 v5; // eax
  IDirect3DDevice9 *Device; // eax

  v2 = this->member.Unk024 == 0;
  this->__vftable = (#9279 *)&NiD3DShaderDeclaration::`vftable';
  if ( !v2 )
  {
    v3 = 0;
    if ( this->member.StreamCount )
    {
      v4 = 0;
      do
      {
        v5 = v4 + this->member.Unk024;
        if ( v5 )
          FormHeapFree(*(_DWORD *)(v5 + 8));
        ++v3;
        v4 += 0x10;
      }
      while ( v3 < this->member.StreamCount );
    }
    FormHeapFree(this->member.Unk024);
  }
  Device = this->member.Device;
  this->member.Unk024 = 0;
  this->member.Renderer = 0;
  Device->lpVtbl->Release(Device);
  this->member.Device = 0;
  NiRefObject_destr(this);
}
