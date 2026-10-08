// TES4 authoritative: player camera collision phantom segment cast. Converts TES/world endpoints to Havok units, calls the first camera bhkSimpleShapePhantom hk object vfunc +0x30 with hkAllCdPointCollector, sorts hits, skips layer 0x14 hits that resolve to swimming MobileObjects, copies first usable 0x30 hit entry to caller, and rewrites the end point to hit position in TES/world units.
bool __thiscall PlayerCameraCollisionPhantomPair_CastSegment(_DWORD *this, float *a2, float *a3, __m128 *a4)
{
  _DWORD *v4; // esi
  int v5; // ebx
  bool result; // al
  double v7; // rt0
  int v8; // edi
  int v9; // edi
  NiAVObject *v10; // eax
  PlayerCharacter *v11; // eax
  MobileObject *v12; // esi
  bhkCharacterProxy *CharProxy; // eax
  bool v14; // [esp+1Bh] [ebp-1F9h]
  float v15[4]; // [esp+24h] [ebp-1F0h] BYREF
  float v16[4]; // [esp+34h] [ebp-1E0h] BYREF
  float v17; // [esp+44h] [ebp-1D0h]
  float v18; // [esp+48h] [ebp-1CCh]
  int v19[4]; // [esp+54h] [ebp-1C0h] BYREF
  char *v20; // [esp+64h] [ebp-1B0h]
  int v21; // [esp+68h] [ebp-1ACh]
  unsigned int v22; // [esp+6Ch] [ebp-1A8h]
  char v23; // [esp+74h] [ebp-1A0h] BYREF
  unsigned int v24; // [esp+210h] [ebp-4h]

  v4 = (_DWORD *)*this; /*0x5326f3*/
  v5 = 0; /*0x5326fc*/
  result = 0; /*0x5326fe*/
  if ( *this ) /*0x5326f3*/
  {
    *(float *)&v19[1] = flt_A55910; /*0x532716*/
    v19[0] = (int)&hkAllCdPointCollector::`vftable'; /*0x53271a*/
    v20 = &v23; /*0x532722*/
    v22 = 0x80000008; /*0x532726*/
    v21 = 0; /*0x53272e*/
    v17 = flt_A5590C; /*0x53273b*/
    v18 = v17; /*0x53273f*/
    v24 = 0; /*0x532743*/
    v7 = hkFactor; /*0x532754*/
    v15[0] = *a2 * v7; /*0x532756*/
    v15[1] = a2[1] * v7; /*0x53275f*/
    v15[2] = a2[2] * v7; /*0x532768*/
    v16[0] = *a3 * v7; /*0x532770*/
    v16[1] = a3[1] * v7; /*0x532779*/
    v16[2] = v7 * a3[2]; /*0x532780*/
    v8 = v4[2];                                 // Uses (*this)->hkObject at +0x08; this function is tied to the camera collision phantom pair, not the actor controller capsule. /*0x532784*/
    if ( v8 ) /*0x532789*/
    {
      bhkRefObject_UpdateHavokObject(v4); /*0x53278d*/
      (*(void (__thiscall **)(int, float *, float *, int *, _DWORD))(*(_DWORD *)v8 + 0x30))(v8, v15, v16, v19, 0);// Shape/phantom linear cast: hk object vfunc +0x30(startHavok, endHavok, hkAllCdPointCollector, 0). /*0x5327a9*/
      bhkRefObject_UpdateHavokObject(v4); /*0x5327ad*/
    }
    v14 = v21 > 0; /*0x5327c0*/
    if ( v21 > 0 ) /*0x5327c4*/
    {
      hkpCdPointCollector_SortHitsByDistance(v19);// Sort collected hits by entry+0x1C before choosing the first usable hit. /*0x5327ce*/
      v9 = 0; /*0x5327d3*/
      while ( v5 < v21 ) /*0x5327d9*/
      {                                         // Layer 0x14 gets special filtering; swimming mobile-object hits on this layer are skipped.
        if ( (*(_BYTE *)(*(_DWORD *)&v20[v9 + 0x28] + 0x1C) & 0x3F) != 0x14 /*0x532835*/
          || (v10 = bhkCollidable_ResolveNiAVObject(*(_DWORD *)&v20[v9 + 0x28])) == 0
          || (v11 = sub_4DC270((int)v10), (v12 = (MobileObject *)v11) == 0)
          || !v11->vtbl->super.super.super.IsMobileObject((TESObjectREFR *)v11)
          || (CharProxy = MobileObject_GetCharProxy(v12)) == 0
          || (*((_DWORD *)CharProxy + 0x7D) & 0x800) == 0 )
        {
          hkpCdPoint_CopyHitEntry30(a4, (int)&v20[0x30 * v5]);// Copies selected 0x30-byte contact entry to caller output. /*0x532850*/
          HavokVector_ToWorldVector(a3, a4);    // Converts selected hit position from Havok to TES/world units and stores it back into the caller's end point. /*0x53285b*/
          break; /*0x53285b*/
        }
        ++v5; /*0x532837*/
        v9 += 0x30; /*0x53283a*/
      }
    }
    v24 = 0xFFFFFFFF; /*0x532863*/
    hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)v19); /*0x532872*/
    return v14;                                 // Returns whether any raw hit was collected. If all hits were skipped by the layer 0x14 swimming-object filter, caller output may not contain a selected usable hit; do not treat return value alone as a general clearance result. /*0x532877*/
  }
  return result; /*0x53287b*/
}
