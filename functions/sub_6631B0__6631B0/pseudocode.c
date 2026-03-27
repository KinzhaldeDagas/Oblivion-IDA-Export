void __thiscall sub_6631B0(TESObjectREFR *this, int a2, float arg4)
{
  double v4; // st7
  int v5; // ecx
  NiNode *NiNode; // eax
  float a5; // [esp+8h] [ebp-14h]
  float a3; // [esp+18h] [ebp-4h]

  a3 = arg4;
  if ( (_BYTE)a2 )
  {
    v4 = 0.0;
    if ( arg4 <= 0.0 )
    {
      v5 = *((_DWORD *)this + 0x16);
      if ( v5 )
      {
        a3 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v5 + 0x438))(v5);
        v4 = 0.0;
      }
    }
  }
  else
  {
    v4 = 0.0;
  }
  if ( (_BYTE)a2 )
  {
    if ( a3 <= v4 )
      LOBYTE(a2) = 0;
  }
  a5 = v4;
  sub_7D92C0(*((NiNode **)this + 0x174), a2, a3, 0, a5);
  NiNode = TESObjectREFR::GetNiNode(this);
  sub_7D92C0(NiNode, a2, a3, 0, 0.0);
  if ( this != (TESObjectREFR *)0xFFFFFFBC )
    ExtraDataList_ToggleRefractionProperty(&this->member.baseExtraList, a2, arg4);
}
