// Verified: repaired erroneous internal-basic-block function boundaries; all merged entry xrefs are local branches/fallthroughs using shared stack frame. ECX-only receiver, no stack or extra register arguments. Called by actor-base mask 0x10000000 at complete object +0xD0. Labels preserved, executable bytes unchanged.
// Verified: reads UInt16 count. Version >=0x34 uses 5-byte serialized entries (ID byte + float); older versions read 8-byte runtime-shaped entries. Allocates 8-byte entries and forwards to AVCollection_Add. Unknown: complete insertion/allocation-failure policy is outside this serialization pass.
// Verified continuation 2026-10-04: constructor/insert/remove/clear/copy are now connected; Add 65C8F0 fragmentation repaired. Prior insertion-fragmentation boundary is superseded. Probable corresponding Fallout ModifierList serialization at 826B6B88/826B6CD0/826B7500; dynamic map and endian handling differ, no schema copied.
void __thiscall AVCollection_Load(AVCollection *self)
{
  unsigned int i; // edi
  int v3; // eax
  AVCollectionEntry *v4; // esi
  float *v5; // eax
  char destination; // [esp+Bh] [ebp-Dh] BYREF
  unsigned __int16 Dst; // [esp+Ch] [ebp-Ch] BYREF
  float v8; // [esp+10h] [ebp-8h] BYREF
  float v9; // [esp+14h] [ebp-4h]

  SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 2u); /*0x65cbc4*/
  for ( i = 0; i < Dst; ++i )
  {
    if ( g_TESSaveLoadGame->currentVersion < 0x34u
      || ((SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 1u),
           SaveLoad_LoadData(g_TESSaveLoadGame, &v8, 4u),
           (v3 = FormHeapAlloc(8u)) == 0)
        ? (v3 = 0)
        : (v9 = v8, *(_BYTE *)v3 = destination, *(float *)(v3 + 4) = v9),
          v4 = (AVCollectionEntry *)v3,
          g_TESSaveLoadGame->currentVersion < 0x34u) )
    {
      v5 = (float *)FormHeapAlloc(8u); /*0x65cc41*/
      if ( v5 ) /*0x65cc4b*/
      {
        *(_BYTE *)v5 = 0; /*0x65cc4f*/
        v5[1] = 0.0; /*0x65cc52*/
      }
      else
      {
        v5 = 0; /*0x65cc57*/
      }
      v4 = (AVCollectionEntry *)v5; /*0x65cc62*/
      SaveLoad_LoadData(g_TESSaveLoadGame, v5, 8u); /*0x65cc64*/
    }
    AVCollection_Add(self, v4); /*0x65cc6c*/
  }
}
/* Orphan comments:
MEF v51 bridge-stack audit: direct JMP preserves entry ESP; AVCollection UInt16 count is exactly [ESP+0Ch]. Bridge helper push/add pair restores ESP before replaying compare.
*/
