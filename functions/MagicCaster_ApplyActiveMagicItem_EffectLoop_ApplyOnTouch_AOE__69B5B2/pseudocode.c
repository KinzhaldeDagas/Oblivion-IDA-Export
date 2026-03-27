// positive sp value has been detected, the output may be wrong!
int __usercall MagicCaster_ApplyActiveMagicItem_::EffectLoop_ApplyOnTouch_AOE@<eax>(
        TESObjectREFR *a1@<ecx>,
        int a2@<edi>,
        char *a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  int v15; // eax
  TESObjectCELL *ParentCell; // [esp-24h] [ebp-24h]
  int v18; // [esp-20h] [ebp-20h]
  int v19; // [esp-1Ch] [ebp-1Ch]
  int v20; // [esp-18h] [ebp-18h]
  int (__thiscall ***v21)(int (__stdcall ***)(void *, int, int, int), void *, int, int, int); // [esp-14h] [ebp-14h]
  int v22; // [esp-10h] [ebp-10h]
  float **v23; // [esp-Ch] [ebp-Ch]
  char *v24; // [esp-8h] [ebp-8h]
  float v25; // [esp-4h] [ebp-4h]

  ParentCell = TESObjectREFR_GetParentCell(a1);
  v15 = (*(int (__thiscall **)(char *))(*(_DWORD *)a3 + 0x30))(a3);
  MagicCaster_ApplyAOE__(a3, v15, a2, (int)ParentCell, v18, v19, v20, v21, v22, v23, v24, v25);
  if ( BYTE2(a8) )
    LOBYTE(a8) = 0;
  return MagicCaster_ApplyActiveMagicItem_::EffectLoop_DestroyActvEff(
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15);
}
