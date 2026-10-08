// Verified (Oblivion): only the unregistered-code fallback is handled here. Registered DIWE/DIAR codes are dispatched through NiTMap_AECreatorFuncs before this fallback switch.
void __usercall ActiveEffect_Base_CreateDynamic_::SwitchEffectCode(
        _DWORD *a1@<esi>,
        int a2,
        int a3,
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
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27)
{
  int v27; // ecx
  int v28; // eax

  v27 = a1[7]; /*0x68eb12*/
  v28 = *(_DWORD *)(v27 + 0x98); /*0x68eb15*/
  if ( v28 > 0x48535246 ) /*0x68eb20*/
  {
    ActiveEffect_Base_CreateDynamic_::SwitchEffectCodes_2( /*0x68eb20*/
      v28,
      v27,
      (int)a1,
      a2,
      a3,
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
      a27);
    return; /*0x68eb20*/
  }
  if ( v28 == 0x48535246 ) /*0x68eb26*/
    goto LABEL_10;                              // Verified (Oblivion fallback code): FRSH and SHLD both allocate ShieldEffect; registered codes in NiTMap are handled before this switch. /*0x68eb26*/
  if ( v28 > 0x45484241 ) /*0x68eb2d*/
  {
    ActiveEffect_Base_CreateDynamic_::SwitchEffectCode_2( /*0x68eb2d*/
      (int)a1,
      v28,
      v27,
      a2,
      a3,
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
      a27);
  }
  else
  {                                             // Verified (Oblivion fallback codes): ABHE and ABFA select AbsorbEffect; CUPA selects the CureEffect paralysis constructor path. The code names and dispatched classes are direct; the hidden internal subtype values remain Unknown unless separately commented.
    switch ( v28 ) /*0x68eb3a*/
    {
      case 0x45484241: /*0x68eb3a*/
      case 0x41464241: /*0x68eb3a*/
        ActiveEffect_Base_CreateDynamic_::Alloc_Absorb( /*0x68eb2f*/
          a2,
          a3,
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
          a26);
        break;
      case 0x41505543: /*0x68eb3a*/
        ActiveEffect_Base_CreateDynamic_::Alloc_CureParalysis( /*0x68eb45*/
          (EffectItem *)a1,
          a2,
          a3,
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
          a15,
          a16,
          a17,
          a18,
          a19,
          a20,
          a21,
          a22,
          a23,
          (MagicCaster *)a24,
          (MagicItem *)a25,
          a26,
          a27);
        break;
      case 0x444C4853: /*0x68eb3a*/
LABEL_10:
        ActiveEffect_Base_CreateDynamic_::Alloc_Shield( /*0x68eb26*/
          a1,
          a2,
          a3,
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
          a27);
        return; /*0x68eb26*/
      default:
        ActiveEffect_Base_CreateDynamic_::CheckUseCreature( /*0x68eb4e*/
          (int)a1,
          v27,
          a2,
          a3,
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
          a27);
        return; /*0x68eb4e*/
    }
  }
}
