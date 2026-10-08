void __thiscall Actor_SetTransparency_(Actor *this, bool a2, float a3)
{
  double v4; // st7
  LowProcess *process; // ecx
  NiNode *v6; // eax
  float a5; // [esp+8h] [ebp-14h]
  float power; // [esp+18h] [ebp-4h]

  power = a3; /*0x5e95da*/
  if ( a2 ) /*0x5e95e6*/
  {
    v4 = 0.0; /*0x5e95ec*/
    if ( a3 <= 0.0 ) /*0x5e95f1*/
    {
      process = this->members.super.process; /*0x5e95f3*/
      if ( process ) /*0x5e95f8*/
      {
        power = ((double (__thiscall *)(LowProcess *))process->Unk_10D)(process); /*0x5e9606*/
        v4 = 0.0; /*0x5e960a*/
      }
    }
  }
  else
  {
    v4 = 0.0; /*0x5e960e*/
  }
  if ( a2 && power <= v4 ) /*0x5e9623*/
    a2 = 0; /*0x5e9625*/
  a5 = v4; /*0x5e9639*/
  v6 = this->vtbl->super.super.GetNiNode(this); /*0x5e9645*/
  NiAVObject_SetShaderRefractionStateRecursive(v6, a2, power, 0, a5); /*0x5e9648*/
  if ( this != (Actor *)0xFFFFFFBC ) /*0x5e9655*/
    ExtraDataList_ToggleRefractionProperty(&this->members.super.super.baseExtraList, a2, a3); /*0x5e9660*/
}
