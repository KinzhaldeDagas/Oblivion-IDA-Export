// Oblivion NiDX9 declaration initializer. Binds renderer, buffer manager, and D3D device, then allocates stream descriptors and elementCount 0x1C-byte element records for each stream.
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

  this->members.super.Renderer = a2; /*0x76e329*/
  this->members.super.BufferManager = a2->member.vertexBufferMgr; /*0x76e332*/
  device = a2->member.device; /*0x76e335*/
  this->members.super.Device = device; /*0x76e33b*/
  device->lpVtbl->AddRef(device); /*0x76e345*/
  this->members.super.MaxStreamEntryCount = a3; /*0x76e34f*/
  this->members.super.StreamCount = a4; /*0x76e360*/
  v6 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)a4 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * a4);
  v7 = (UInt32)v6; /*0x76e36d*/
  if ( v6 ) /*0x76e376*/
    sub_401080(v6, 0x10, a4, (void *(__thiscall *)(void *))sub_76E260); /*0x76e381*/
  else
    v7 = 0; /*0x76e388*/
  v8 = this->members.super.StreamCount == 0; /*0x76e38a*/
  this->members.super.StreamEntries = v7; /*0x76e38d*/
  a2a = 0; /*0x76e390*/
  if ( !v8 )
  {
    a3a = 0; /*0x76e396*/
    do
    {
      Unk01C = this->members.super.MaxStreamEntryCount; /*0x76e3a0*/
      v10 = FormHeapAlloc((0x1C * (unsigned __int64)Unk01C) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * Unk01C);
      a4a = v10; /*0x76e3c0*/
      if ( v10 ) /*0x76e3c4*/
      {
        v11 = Unk01C - 1; /*0x76e3c6*/
        v12 = (_DWORD *)v10; /*0x76e3cb*/
        if ( (int)(Unk01C - 1) >= 0 ) /*0x76e3cd*/
        {
          do /*0x76e3dd*/
          {
            sub_76FB00(v12); /*0x76e3d2*/
            v12 += 7; /*0x76e3d7*/
            --v11; /*0x76e3da*/
          }
          while ( v11 >= 0 ); /*0x76e3dd*/
          v10 = a4a; /*0x76e3df*/
        }
      }
      else
      {
        v10 = 0; /*0x76e3e5*/
      }
      *(_DWORD *)(a3a + this->members.super.StreamEntries + 8) = v10; /*0x76e3ee*/
      v13 = (unsigned int)&a2a->__vftable + 1 < this->members.super.StreamCount; /*0x76e3fc*/
      a2a = (NiDX9Renderer *)((char *)a2a + 1); /*0x76e3ff*/
      a3a += 0x10; /*0x76e403*/
    }
    while ( v13 );
  }
  return 1; /*0x76e409*/
}
