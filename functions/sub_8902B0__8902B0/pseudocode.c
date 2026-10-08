// TES4 authoritative: high-level controller manifold update wrapper. Builds bhkCharacterPointCollector, calls low-level hkpCharacterProxy_MoveAndUpdateManifold, then cleans stale collector contacts.
int __thiscall bhkCharacterController_UpdateCollisionManifold(__m128 **this, int moveInfo)
{
  __m128 *v3; // ebx
  int (__thiscall *v4)(__m128 **); // eax
  __m128 *v5; // eax
  int collector[119]; // [esp+14h] [ebp-1F0h] BYREF
  unsigned int v8; // [esp+200h] [ebp-4h]

  bhkRefObject_UpdateHavokObject(this); /*0x8902f9*/
  if ( this ) /*0x890300*/
  {
    v3 = *(this + 2); /*0x890302*/
    if ( v3 ) /*0x890307*/
    {
      bhkCharacterPointCollector::bhkCharacterPointCollector((bhkCharacterPointCollector *)collector, (int)(this + 4));// Stack bhkCharacterPointCollector uses controller collector state at this+0x10 / proxy+0x10 as its persistent state block. /*0x890311*/
      v4 = (int (__thiscall *)(__m128 **))(*this)[5].m128_i32[2]; /*0x890318*/
      v8 = 0; /*0x89031d*/
      v5 = (__m128 *)v4(this); /*0x890328*/
      hkpCharacterProxy_MoveAndUpdateManifold(v3, moveInfo, v5 + 2, collector, (int)(this + 4));// Runs low-level character proxy move/manifold update using the stack collector and persistent collector state. /*0x89033b*/
      bhkCharacterPointCollector_CleanupStaleContacts((int)(this + 4));// Cleans/compacts stale contacts in the persistent collector state after low-level manifold update. /*0x890342*/
      v8 = 0xFFFFFFFF; /*0x89034b*/
      bhkCharacterPointCollector::~bhkCharacterPointCollector((bhkCharacterPointCollector *)collector); /*0x890356*/
    }
  }
  return bhkRefObject_UpdateHavokObject(this); /*0x890362*/
}
