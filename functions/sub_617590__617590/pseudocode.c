char __cdecl sub_617590(TESObjectREFR *actor, TESObjectREFR *a2, char a3)
{
  float *v3; // eax
  float *v5; // [esp-4h] [ebp-58h]
  float v6; // [esp+0h] [ebp-54h]
  char v7; // [esp+1Bh] [ebp-39h]
  float segmentQuery[11]; // [esp+1Ch] [ebp-38h] BYREF
  unsigned int v9; // [esp+50h] [ebp-4h]

  v7 = 0; /*0x6175bd*/
  if ( actor ) /*0x6175c2*/
  {
    if ( a2 ) /*0x6175ce*/
    {
      if ( sub_5E34B0(actor) && ((int (__thiscall *)(TESObjectREFR *))actor->vtbl[1].IsMobileObject)(actor) && a3 ) /*0x6175f4*/
        return 1; /*0x6175f4*/
      if ( sub_689230((TESChildCELL *)actor, (NiPoint3 *)actor->member.pos, a2->member.pos) ) /*0x617603*/
        return 1; /*0x617603*/
      sub_67D760(segmentQuery); /*0x617617*/
      v9 = 0; /*0x617625*/
      if ( ConnectedPointGraph_CanTraverseSegment( /*0x61762d*/
             segmentQuery,
             (const NiPoint3 *)actor->member.pos,
             (const NiPoint3 *)a2->member.pos,
             actor,
             0.0) )
      {
        if ( sub_67D650((int)segmentQuery, actor) ) /*0x61763b*/
          v7 = 1; /*0x617644*/
      }
      v9 = 0xFFFFFFFF; /*0x61764d*/
      Shared_NoOpVirtual_60D0A0(segmentQuery); /*0x617655*/
      if ( !v7 && a2 != (TESObjectREFR *)reference ) /*0x617667*/
      {
        v6 = flt_A57A64; /*0x61767a*/
        v5 = a2->vtbl->GetPos(a2); /*0x61767f*/
        v3 = actor->vtbl->GetPos(actor); /*0x61768a*/
        if ( sub_480520(v3, v5, v6) < 0 ) /*0x617697*/
        {
          if ( a3 ) /*0x61769e*/
            return 1; /*0x6176a0*/
        }
      }
    }
  }
  return v7; /*0x6176a9*/
}
