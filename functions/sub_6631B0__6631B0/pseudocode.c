void __thiscall sub_6631B0(TESObjectREFR *this, int a2, float a3)
{
  double v4; // st7
  int v5; // ecx
  NiNode *NiNode; // eax
  float a5; // [esp+8h] [ebp-14h]
  float v8; // [esp+18h] [ebp-4h]

  v8 = a3; /*0x6631ba*/
  if ( (_BYTE)a2 ) /*0x6631c6*/
  {
    v4 = 0.0; /*0x6631cc*/
    if ( a3 <= 0.0 ) /*0x6631d1*/
    {
      v5 = *((_DWORD *)this + 0x16); /*0x6631d3*/
      if ( v5 ) /*0x6631d8*/
      {
        v8 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v5 + 0x438))(v5); /*0x6631e6*/
        v4 = 0.0; /*0x6631ea*/
      }
    }
  }
  else
  {
    v4 = 0.0; /*0x6631ee*/
  }
  if ( (_BYTE)a2 ) /*0x6631fa*/
  {
    if ( v8 <= v4 ) /*0x663203*/
      LOBYTE(a2) = 0; /*0x663205*/
  }
  a5 = v4; /*0x663217*/
  NiAVObject_SetShaderRefractionStateRecursive(*((NiNode **)this + 0x174), a2, v8, 0, a5); /*0x663222*/
  NiNode = TESObjectREFR::GetNiNode(this); /*0x66322c*/
  NiAVObject_SetShaderRefractionStateRecursive(NiNode, a2, v8, 0, 0.0); /*0x663243*/
  if ( this != (TESObjectREFR *)0xFFFFFFBC ) /*0x663250*/
    ExtraDataList_ToggleRefractionProperty(&this->member.baseExtraList, a2, a3); /*0x66325b*/
}
