void __thiscall OB_NiTexturingProperty_SetBaseTexture_010201A0(NiTexturingProperty *this, NiTexture *texture)
{
  NiTexturingProperty_Map_Vtbl *vtbl; // edi
  NiTexturingProperty_Map_Vtbl *v4; // eax
  NiTexturingProperty_Map_Vtbl *v5; // eax
  NiTexture *Unk08; // esi
  NiTexturingProperty_Map_Vtbl *v7; // [esp+10h] [ebp-10h] BYREF
  unsigned int v8; // [esp+1Ch] [ebp-4h]

  vtbl = this->unk01C.data->vtbl; /*0x4057d9*/
  if ( !vtbl ) /*0x4057dd*/
  {
    v4 = (NiTexturingProperty_Map_Vtbl *)FormHeapAlloc(0x10u); /*0x4057e1*/
    v7 = v4; /*0x4057e9*/
    v8 = 0; /*0x4057ef*/
    if ( v4 ) /*0x4057f3*/
      v5 = (NiTexturingProperty_Map_Vtbl *)sub_704100(v4); /*0x4057f7*/
    else
      v5 = 0; /*0x4057fe*/
    vtbl = v5; /*0x405805*/
    v8 = 0xFFFFFFFF; /*0x40580c*/
    v7 = v5; /*0x405814*/
    NiTArray_SetAt(&this->unk01C, 0, &v7); /*0x405818*/
  }
  Unk08 = (NiTexture *)vtbl->Unk08; /*0x40581d*/
  if ( Unk08 != texture ) /*0x405826*/
  {
    if ( Unk08 ) /*0x40582a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Unk08->members) ) /*0x405830*/
        Unk08->__vftable->super.super.Destructor((NiRefObject *)Unk08, 1); /*0x405846*/
    }
    vtbl->Unk08 = (UInt32 (__thiscall *)(NiTexturingProperty_Map *, UInt32))texture; /*0x40584a*/
    if ( texture ) /*0x40584d*/
      InterlockedIncrement((volatile LONG *)&texture->members); /*0x405853*/
  }
}
