UInt16 __thiscall NiTexturingProperty_SetBaseMapFilterMode(NiTexturingProperty *this, char a2)
{
  NiTexturingProperty_Map_Vtbl *vtbl; // esi
  _WORD *v4; // eax
  NiTexturingProperty_Map_Vtbl *v5; // eax
  UInt16 result; // ax
  _DWORD v7[4]; // [esp+Ch] [ebp-10h] BYREF

  vtbl = this->unk01C.data->vtbl; /*0x405928*/
  if ( !vtbl ) /*0x40592c*/
  {
    v4 = (_WORD *)FormHeapAlloc(0x10u); /*0x405930*/
    v7[0] = v4; /*0x405938*/
    v7[3] = 0; /*0x40593e*/
    if ( v4 ) /*0x405942*/
      v5 = (NiTexturingProperty_Map_Vtbl *)sub_704100(v4); /*0x405946*/
    else
      v5 = 0; /*0x40594d*/
    vtbl = v5; /*0x405954*/
    v7[0] = v5; /*0x40595b*/
    NiTArray_SetAt(&this->unk01C, 0, v7); /*0x40595f*/
  }
  LOBYTE(result) = 0; /*0x405968*/
  HIBYTE(result) = a2; /*0x40596a*/
  LOWORD(vtbl->Unk04) = result | (int)vtbl->Unk04 & 0xF0FF; /*0x405976*/
  return result; /*0x40597a*/
}
