void __thiscall NiTexturingProperty::~NiTexturingProperty(NiTexturingProperty *this)
{
  unsigned int i; // edi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  UInt32 unk02C; // eax
  unsigned int v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  NiTexturingProperty_Map *data; // [esp-4h] [ebp-20h]

  this->vtbl = &NiTexturingProperty::`vftable'; /*0x703ca9*/
  for ( i = 0; i < this->unk01C.end; ++i ) /*0x703cb1*/
  {
    v3 = *((void (__thiscall ****)(_DWORD, int))&this->unk01C.data->vtbl + i); /*0x703cc3*/
    if ( v3 ) /*0x703cc8*/
      (**v3)(v3, 1); /*0x703cd0*/
  }
  unk02C = this->unk02C; /*0x703cdd*/
  if ( unk02C ) /*0x703ce2*/
  {
    v5 = 0; /*0x703ce4*/
    if ( *(_WORD *)(unk02C + 0xA) ) /*0x703ce6*/
    {
      do /*0x703d11*/
      {
        v6 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)(this->unk02C + 4) + 4 * v5); /*0x703cf6*/
        if ( v6 ) /*0x703cfb*/
          (**v6)(v6, 1); /*0x703d03*/
        ++v5; /*0x703d0c*/
      }
      while ( v5 < *(unsigned __int16 *)(this->unk02C + 0xA) ); /*0x703d11*/
    }
    v7 = (void (__thiscall ***)(_DWORD, int))this->unk02C; /*0x703d13*/
    if ( v7 ) /*0x703d18*/
      (**v7)(v7, 1); /*0x703d20*/
  }
  data = this->unk01C.data; /*0x703d25*/
  this->unk01C._vtbl = &NiTArray<NiTexturingProperty::Map *>::`vftable'; /*0x703d26*/
  FormHeapFree((unsigned int)data); /*0x703d2d*/
  NiDitherProperty::~NiDitherProperty((NiDitherProperty *)this); /*0x703d3f*/
}
