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

  v2 = 0;
  v3 = this->Entries.capacity == 0;
  this->_vtbl = (NiD3DSCM_Pixel *)&NiD3DShaderConstantMap::`vftable';
  if ( !v3 )
  {
    do
    {
      v4 = *((_DWORD *)&this->Entries.data->_vtbl + v2);
      if ( v4 )
      {
        InterlockedIncrement((volatile LONG *)(v4 + 4));
        if ( (*(_DWORD *)(v4 + 0x14) & 0xF0000000) == 0x40000000 )
          sub_77CB50(*(_DWORD *)(v4 + 0xC));
        if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      }
      ++v2;
    }
    while ( v2 < this->Entries.capacity );
  }
  sub_9A4310(&this->Entries);
  Device = this->Device;
  this->Renderer = 0;
  if ( Device )
    Device->lpVtbl->Release(Device);
  this->Device = 0;
  this->RenderState = 0;
  data = this->Entries.data;
  this->Entries._vtbl = &NiTArray<NiPointer<NiD3DShaderConstantMapEntry>>::`vftable';
  if ( data )
  {
    v7 = *(_DWORD *)&data[0xFFFFFFFF].Unk34;
    p_Unk34 = (unsigned int)&data[0xFFFFFFFF].Unk34;
    v9 = &data->_vtbl + v7;
    v10 = v7 - 1;
    v12 = &data[0xFFFFFFFF].Unk34;
    if ( v10 >= 0 )
    {
      do
      {
        v11 = v9[0xFFFFFFFF];
        v9 += 0xFFFFFFFF;
        if ( v11 )
        {
          if ( !InterlockedDecrement((volatile LONG *)v11 + 1) )
            (*(void (__thiscall **)(void **, int))*v11)(v11, 1);
        }
        --v10;
      }
      while ( v10 >= 0 );
      p_Unk34 = (unsigned int)v12;
    }
    FormHeapFree(p_Unk34);
  }
  this->_vtbl = (NiD3DSCM_Pixel *)&NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
