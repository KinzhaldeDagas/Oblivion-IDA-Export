// Verified base save payload includes the HitEffectNode chain at ActiveEffect+0x34 for version >=0x2A: writes a count byte, then each hit effect's virtual type ID (+0x54) and per-type payload (+0x78). Earlier versions skip that list and use the older +0x14 payload branch.
int __thiscall ActiveEffect_Base_SaveEffect(
        int this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char a11)
{
  size_t v13; // [esp-4h] [ebp-20h]
  size_t v14; // [esp-4h] [ebp-20h]
  size_t v15; // [esp-4h] [ebp-20h]
  size_t v16; // [esp-4h] [ebp-20h]
  size_t v17; // [esp-4h] [ebp-20h]
  size_t v18; // [esp-4h] [ebp-20h]

  LODWORD(v13) = 4; /*0x68dadd*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, (void *)(this + 4), v13); /*0x68dae3*/
  LODWORD(v14) = 1; /*0x68dae8*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, (void *)(this + 0x10), v14); /*0x68daf4*/
  LODWORD(v15) = 1; /*0x68daff*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, (void *)(this + 0x11), v15); /*0x68db05*/
  LODWORD(v16) = 1; /*0x68db10*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, (void *)(this + 0x13), v16); /*0x68db16*/
  LODWORD(v17) = 4; /*0x68db1b*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, (void *)(this + 0x18), v17); /*0x68db27*/
  LODWORD(v18) = 4; /*0x68db32*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, (void *)(this + 0x1C), v18);// OBMEFix correction 2026-05-26: base active-effect SaveEffect writes duration from this+0x1C after timeElapsed/applied/terminated/pad13/magnitude. OBMEFix uses this serialized position to avoid dropping harmless non-duration SEFF records. /*0x68db38*/
  return ActiveEffect_Base_SaveEffect_::SaveCaster(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
