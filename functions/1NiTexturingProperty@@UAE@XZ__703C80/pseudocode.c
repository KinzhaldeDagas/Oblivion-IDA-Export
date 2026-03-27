void __thiscall NiTexturingProperty::~NiTexturingProperty(NiTexturingProperty *this)
{
  unsigned int i; // edi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  UInt32 unk02C; // eax
  unsigned int v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  NiTexturingProperty_Map *data; // [esp-4h] [ebp-20h]

  this->vtbl = &NiTexturingProperty::`vftable';
  for ( i = 0; i < this->unk01C.end; ++i )
  {
    v3 = *((void (__thiscall ****)(_DWORD, int))&this->unk01C.data->vtbl + i);
    if ( v3 )
      (**v3)(v3, 1);
  }
  unk02C = this->unk02C;
  if ( unk02C )
  {
    v5 = 0;
    if ( *(_WORD *)(unk02C + 0xA) )
    {
      do
      {
        v6 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)(this->unk02C + 4) + 4 * v5);
        if ( v6 )
          (**v6)(v6, 1);
        ++v5;
      }
      while ( v5 < *(unsigned __int16 *)(this->unk02C + 0xA) );
    }
    v7 = (void (__thiscall ***)(_DWORD, int))this->unk02C;
    if ( v7 )
      (**v7)(v7, 1);
  }
  data = this->unk01C.data;
  this->unk01C._vtbl = &NiTArray<NiTexturingProperty::Map *>::`vftable';
  FormHeapFree((unsigned int)data);
  NiDitherProperty::~NiDitherProperty((NiDitherProperty *)this);
}
