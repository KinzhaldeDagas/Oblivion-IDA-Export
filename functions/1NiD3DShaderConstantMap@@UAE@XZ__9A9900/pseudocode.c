//
// DX11 child-pin audit 2026-10-01: Lighting30 constructor7FAC40 and destructor7FAF20 establish +4 NiRef ownership of cached maps at shader+7C/+80/+84/+88 and declaration alternatives+8C/+90/+94/+98. Base shader owns active maps+2C/+30 and declaration+24. Definition factory7FC7D0 supplies four NiDX9ShaderDeclaration objects (six/eight/four/eight elements) to constructor call7FCBC4. Constant-map destructor9A9900 owns all capacity slots of the NiPointer entry array, not just the logical end; data+10 and capacity/end/live/grow at+14/+16/+18/+1A. Entries use+4 refs and vtableAB348C. New DX11 pin collection retains these child objects individually and seals bindings/array contents, but does NOT preserve the raw array allocation or exclude its mutation by itself. Pooled passes use a different +60 counter and remain separate.
void __thiscall NiD3DShaderConstantMap::~NiD3DShaderConstantMap(NiD3DShaderConstantMap *this)
{
  unsigned int v2; // ebp
  bool v3; // zf
  int v4; // esi
  IDirect3DDevice9 *Device; // eax
  NiD3DShaderConstantMapEntry *data; // eax
  int v7; // ebp
  unsigned int p_Unk34; // ecx
  void ***v9; // ebx
  int v10; // ebp
  void **v11; // esi
  UInt8 *v12; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x9a9907*/
  v3 = this->Entries.capacity == 0; /*0x9a9909*/
  this->_vtbl = (NiD3DSCM_Pixel *)&NiD3DShaderConstantMap::`vftable'; /*0x9a990d*/
  if ( !v3 ) /*0x9a9913*/
  {
    do /*0x9a9964*/
    {
      v4 = *((_DWORD *)&this->Entries.data->_vtbl + v2); /*0x9a9918*/
      if ( v4 ) /*0x9a991d*/
      {
        InterlockedIncrement((volatile LONG *)(v4 + 4)); /*0x9a9923*/
        if ( (*(_DWORD *)(v4 + 0x14) & 0xF0000000) == 0x40000000 ) /*0x9a9938*/
          sub_77CB50(*(_DWORD *)(v4 + 0xC)); /*0x9a993e*/
        if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x9a9947*/
          (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x9a9959*/
      }
      ++v2; /*0x9a995f*/
    }
    while ( v2 < this->Entries.capacity ); /*0x9a9964*/
  }
  sub_9A4310(&this->Entries); /*0x9a996b*/
  Device = this->Device; /*0x9a9970*/
  this->Renderer = 0; /*0x9a9977*/
  if ( Device ) /*0x9a997a*/
    Device->lpVtbl->Release(Device); /*0x9a9982*/
  this->Device = 0; /*0x9a9984*/
  this->RenderState = 0; /*0x9a9987*/
  data = this->Entries.data; /*0x9a998a*/
  this->Entries._vtbl = &NiTArray<NiPointer<NiD3DShaderConstantMapEntry>>::`vftable'; /*0x9a998f*/
  if ( data ) /*0x9a9995*/
  {
    v7 = *(_DWORD *)&data[0xFFFFFFFF].Unk34; /*0x9a9997*/
    p_Unk34 = (unsigned int)&data[0xFFFFFFFF].Unk34; /*0x9a999a*/
    v9 = &data->_vtbl + v7; /*0x9a999d*/
    v10 = v7 - 1; /*0x9a99a0*/
    v12 = &data[0xFFFFFFFF].Unk34; /*0x9a99a3*/
    if ( v10 >= 0 ) /*0x9a99a7*/
    {
      do /*0x9a99d9*/
      {
        v11 = v9[0xFFFFFFFF]; /*0x9a99b0*/
        v9 += 0xFFFFFFFF; /*0x9a99b3*/
        if ( v11 ) /*0x9a99b8*/
        {
          if ( !InterlockedDecrement((volatile LONG *)v11 + 1) ) /*0x9a99be*/
            (*(void (__thiscall **)(void **, int))*v11)(v11, 1); /*0x9a99d4*/
        }
        --v10; /*0x9a99d6*/
      }
      while ( v10 >= 0 ); /*0x9a99d9*/
      p_Unk34 = (unsigned int)v12; /*0x9a99db*/
    }
    FormHeapFree(p_Unk34); /*0x9a99e0*/
  }
  this->_vtbl = (NiD3DSCM_Pixel *)&NiRefObject::`vftable'; /*0x9a99ed*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x9a99f3*/
}
