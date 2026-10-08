// Restores BSAnimGroupSequence timing/state, rebases local time against load clock, resets +0x4C/+0x50 sentinels, and resamples native active states 1..3.
void __thiscall BSAnimGroupSequence_LoadState(float *this, float a2)
{
  int v3; // edi
  size_t v4; // [esp+4h] [ebp-10h]
  size_t v5; // [esp+4h] [ebp-10h]
  size_t v6; // [esp+4h] [ebp-10h]
  size_t v7; // [esp+4h] [ebp-10h]
  size_t v8; // [esp+4h] [ebp-10h]
  float Dst; // [esp+10h] [ebp-4h] BYREF
  float v10; // [esp+18h] [ebp+4h]

  LODWORD(v4) = 4; /*0x49f5f3*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v4); /*0x49f602*/
  LODWORD(v5) = 4; /*0x49f60d*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, this + 0x11, v5); /*0x49f613*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x71u ) /*0x49f622*/
  {
    LODWORD(v6) = 4; /*0x49f624*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v6); /*0x49f62b*/
  }
  LODWORD(v6) = 4; /*0x49f634*/
  *(this + 0x12) = Dst - a2; /*0x49f63e*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, this + 0xD, v6); /*0x49f647*/
  LODWORD(v7) = 4; /*0x49f64c*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, this + 0xE, v7); /*0x49f658*/
  LODWORD(v8) = 4; /*0x49f663*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, this + 0x15, v8); /*0x49f669*/
  v3 = *((_DWORD *)this + 0x11); /*0x49f674*/
  *(this + 0x13) = -flt_A7DEB4; /*0x49f678*/
  *(this + 0x14) = -flt_A7DEB4; /*0x49f689*/
  if ( (unsigned int)(v3 - 1) <= 2 ) /*0x49f68c*/
  {
    v10 = *(this + 0x12) + a2; /*0x49f69a*/
    NiControllerSequence_AdvanceTime((int)this, v10, 1); /*0x49f6a5*/
  }
}
