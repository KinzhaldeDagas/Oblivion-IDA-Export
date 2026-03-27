char __cdecl sub_617590(TESObjectREFR *a1, TESObjectREFR *a2, char a3)
{
  float *v3; // eax
  float *v5; // [esp-4h] [ebp-58h]
  float v6; // [esp+0h] [ebp-54h]
  char v7; // [esp+1Bh] [ebp-39h]
  int v8[11]; // [esp+1Ch] [ebp-38h] BYREF
  unsigned int v9; // [esp+50h] [ebp-4h]

  v7 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( sub_5E34B0(a1) && ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1) && a3 )
        return 1;
      if ( sub_689230(a1, a1->member.pos, a2->member.pos) )
        return 1;
      sub_67D760(v8);
      v9 = 0;
      if ( sub_67EB60((float *)v8, (int)a1->member.pos, (int)a2->member.pos, (int)a1, 0.0) )
      {
        if ( sub_67D650((int)v8, (int)a1) )
          v7 = 1;
      }
      v9 = 0xFFFFFFFF;
      TESTexture::ClearComponentReferences(v8);
      if ( !v7 && a2 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      {
        v6 = flt_A57A64;
        v5 = a2->vtbl->GetPos(a2);
        v3 = a1->vtbl->GetPos(a1);
        if ( sub_480520(v3, v5, v6) < 0 )
        {
          if ( a3 )
            return 1;
        }
      }
    }
  }
  return v7;
}
