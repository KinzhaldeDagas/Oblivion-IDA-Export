// positive sp value has been detected, the output may be wrong!
int __usercall MagicCaster_ApplyActiveMagicItem_::EffectLoop_ApplyOnTouch_AOE@<eax>(
        TESObjectREFR *a1@<ecx>,
        void (__thiscall ***a2)(_DWORD, int)@<edi>,
        char *a3@<esi>,
        TESObjectREFR *a4@<ebx>,
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
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        __int64 a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35)
{
  int v35; // eax
  UInt32 DwordAtOffset40; // [esp-24h] [ebp-24h]
  int v38; // [esp-20h] [ebp-20h]
  int v39; // [esp-1Ch] [ebp-1Ch]
  int v40; // [esp-18h] [ebp-18h]
  int (__thiscall ***v41)(int (__stdcall ***)(void *, int, int, int), void *, int, int, int); // [esp-14h] [ebp-14h]
  int v42; // [esp-10h] [ebp-10h]
  float **v43; // [esp-Ch] [ebp-Ch]
  char *v44; // [esp-8h] [ebp-8h]
  float v45; // [esp-4h] [ebp-4h]

  DwordAtOffset40 = Shared_GetDwordAtOffset40(a1); /*0x69b5b9*/
  v35 = (*(int (__thiscall **)(char *))(*(_DWORD *)a3 + 0x30))(a3); /*0x69b5c0*/
  MagicCaster_ApplyAOE__(a3, v35, (int)a2, DwordAtOffset40, v38, v39, v40, v41, v42, v43, v44, v45); /*0x69b5c5*/
  if ( BYTE2(a9) ) /*0x69b5cf*/
    LOBYTE(a9) = 0; /*0x69b5d1*/
  return MagicCaster_ApplyActiveMagicItem_::EffectLoop_DestroyActvEff(
           a4,
           a2,
           (int)a3,
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
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35);
}
