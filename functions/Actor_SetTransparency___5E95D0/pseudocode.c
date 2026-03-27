void __thiscall Actor_SetTransparency_(Actor *this, bool a2, float a3)
{
  double v4; // st7
  LowProcess *process; // ecx
  NiNode *v6; // eax
  float a5; // [esp+8h] [ebp-14h]
  float v8; // [esp+18h] [ebp-4h]

  v8 = a3;
  if ( a2 )
  {
    v4 = 0.0;
    if ( a3 <= 0.0 )
    {
      process = this->members.super.process;
      if ( process )
      {
        v8 = ((double (__thiscall *)(LowProcess *))process->Unk_10D)(process);
        v4 = 0.0;
      }
    }
  }
  else
  {
    v4 = 0.0;
  }
  if ( a2 && v8 <= v4 )
    a2 = 0;
  a5 = v4;
  v6 = this->vtbl->super.super.GetNiNode(this);
  sub_7D92C0(v6, a2, v8, 0, a5);
  if ( this != (Actor *)0xFFFFFFBC )
    ExtraDataList_ToggleRefractionProperty(&this->members.super.super.baseExtraList, a2, a3);
}
