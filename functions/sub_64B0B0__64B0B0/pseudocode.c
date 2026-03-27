char __thiscall sub_64B0B0(HighProcess *a1, TESObjectREFR *a5)
{
  AnimSequenceSingle *v6; // ebx
  unsigned __int8 **v7; // eax
  UInt32 v8; // edi
  UInt32 v9; // eax

  v6 = (AnimSequenceSingle *)a5->vtbl->GetAnimData(a5);
  v7 = sub_521450((TESObjectREFR *)g_idleAnimationMap, a5, a1->furniture);
  v8 = (UInt32)v7;
  if ( !v7 || !v6 )
    return 0;
  v9 = sub_520200(v7);
  sub_4762B0(v6, v8, a5, v9);
  return 1;
}
