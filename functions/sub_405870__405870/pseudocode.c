int __thiscall sub_405870(NiTexturingProperty *this, int a2)
{
  NiTexturingProperty_Map_Vtbl *vtbl; // esi
  _WORD *v4; // eax
  NiTexturingProperty_Map_Vtbl *v5; // eax
  _DWORD v7[4]; // [esp+Ch] [ebp-10h] BYREF

  vtbl = this->unk01C.data->vtbl;
  if ( !vtbl )
  {
    v4 = (_WORD *)FormHeapAlloc(0x10u);
    v7[0] = v4;
    v7[3] = 0;
    if ( v4 )
      v5 = (NiTexturingProperty_Map_Vtbl *)sub_704100(v4);
    else
      v5 = 0;
    vtbl = v5;
    v7[0] = v5;
    NiTArray_SetAt(&this->unk01C, 0, v7);
  }
  LOWORD(vtbl->Unk04) = ((_WORD)a2 << 0xC) | (int)vtbl->Unk04 & 0xCFFF;
  return a2 << 0xC;
}
