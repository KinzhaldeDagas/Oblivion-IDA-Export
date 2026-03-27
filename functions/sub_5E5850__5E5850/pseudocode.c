double __thiscall sub_5E5850(TESObjectREFR *this, int a2)
{
  int v3; // eax
  ActorAnimData *v4; // eax
  int v5; // eax
  int v7; // [esp-8h] [ebp-10h]
  float v8; // [esp+4h] [ebp-4h]

  v8 = 0.0;
  if ( this->vtbl->GetAnimData(this) )
  {
    if ( Actor_LoadAnimGroup_(this, a2, 0, 0) )
    {
      LOWORD(v3) = Actor_LoadAnimGroup_(this, a2, 0, 0);
      v7 = v3;
      v4 = this->vtbl->GetAnimData(this);
      v5 = sub_4729B0(v4, v7);
      if ( v5 )
        return (float)sub_51AE20(v5, 1u);
    }
  }
  return v8;
}
