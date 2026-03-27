char __thiscall sub_76E320(NiDX9ShaderDeclaration *this, NiDX9Renderer *a2, int a3, int a4)
{
  IDirect3DDevice9 *device; // eax
  void *v6; // eax
  UInt32 v7; // edi
  bool v8; // zf
  UInt32 Unk01C; // ebp
  int v10; // eax
  int v11; // ebx
  _DWORD *v12; // edi
  bool v13; // cf
  NiDX9Renderer *a2a; // [esp+14h] [ebp+4h]
  int a3a; // [esp+18h] [ebp+8h]
  int a4a; // [esp+1Ch] [ebp+Ch]

  this->members.super.Renderer = a2;
  this->members.super.BufferManager = a2->member.vertexBufferMgr;
  device = a2->member.device;
  this->members.super.Device = device;
  device->lpVtbl->AddRef(device);
  this->members.super.Unk01C = a3;
  this->members.super.StreamCount = a4;
  v6 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)a4 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * a4);
  v7 = (UInt32)v6;
  if ( v6 )
    sub_401080(v6, 0x10, a4, (void *(__thiscall *)(void *))sub_76E260);
  else
    v7 = 0;
  v8 = this->members.super.StreamCount == 0;
  this->members.super.Unk024 = v7;
  a2a = 0;
  if ( !v8 )
  {
    a3a = 0;
    do
    {
      Unk01C = this->members.super.Unk01C;
      v10 = FormHeapAlloc((0x1C * (unsigned __int64)Unk01C) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * Unk01C);
      a4a = v10;
      if ( v10 )
      {
        v11 = Unk01C - 1;
        v12 = (_DWORD *)v10;
        if ( (int)(Unk01C - 1) >= 0 )
        {
          do
          {
            sub_76FB00(v12);
            v12 += 7;
            --v11;
          }
          while ( v11 >= 0 );
          v10 = a4a;
        }
      }
      else
      {
        v10 = 0;
      }
      *(_DWORD *)(a3a + this->members.super.Unk024 + 8) = v10;
      v13 = (unsigned int)&a2a->__vftable + 1 < this->members.super.StreamCount;
      a2a = (NiDX9Renderer *)((char *)a2a + 1);
      a3a += 0x10;
    }
    while ( v13 );
  }
  return 1;
}
