// Shared four-byte accessor returning *(this+0x7C). Verified contexts include TESWorldSpace::parentWorldspace and ArrowProjectile::arrowEnch; class-specific naming is unsafe.
void *__thiscall Shared_GetPointerAtOffset7C(void *this)
{
  return *((void **)this + 0x1F); /*0x4ef1a3*/
}
