NiTexturingProperty_Map *__thiscall NiTexturingProperty::SetUnk08(NiTexturingProperty *this, NiRenderedTexture *a2)
{
  NiTexturingProperty_Map *result; // eax
  NiTexturingProperty_Map_Vtbl *vtbl; // edi
  NiTexturingProperty_Map_Vtbl *v5; // eax
  NiTexturingProperty_Map_Vtbl *v6; // eax
  NiRenderedTexture *Unk08; // esi
  NiTexturingProperty_Map_Vtbl *v8; // [esp+10h] [ebp-10h] BYREF
  unsigned int v9; // [esp+1Ch] [ebp-4h]

  result = this->unk01C.data;
  vtbl = result->vtbl;
  if ( !result->vtbl )
  {
    v5 = (NiTexturingProperty_Map_Vtbl *)FormHeapAlloc(0x10u);
    v8 = v5;
    v9 = 0;
    if ( v5 )
      v6 = (NiTexturingProperty_Map_Vtbl *)sub_704100(v5);
    else
      v6 = 0;
    vtbl = v6;
    v9 = 0xFFFFFFFF;
    v8 = v6;
    result = (NiTexturingProperty_Map *)NiTArray_SetAt(&this->unk01C, 0, &v8);
  }
  Unk08 = (NiRenderedTexture *)vtbl->Unk08;
  if ( Unk08 != a2 )
  {
    if ( Unk08 )
    {
      result = (NiTexturingProperty_Map *)InterlockedDecrement((volatile LONG *)&Unk08->member);
      if ( !result )
        result = (NiTexturingProperty_Map *)((int (__thiscall *)(NiRenderedTexture *, int))Unk08->__vftable->super.super.super.Destructor)(
                                              Unk08,
                                              1);
    }
    vtbl->Unk08 = (UInt32 (__thiscall *)(NiTexturingProperty_Map *, UInt32))a2;
    if ( a2 )
      return (NiTexturingProperty_Map *)InterlockedIncrement((volatile LONG *)&a2->member);
  }
  return result;
}
