// TES4 authoritative: returns pointer to bhk collision object's velocity vector at object+0x10. 0x896000 copies this into proxy +0x2E0 before state update.
char *__thiscall bhkWorldObject_GetLinearVelocityPtr(char *this)
{
  return this + 0x10; /*0x8ac0a3*/
}
