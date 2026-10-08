// bhk collision wrapper accessor: returns stored low-level Havok object pointer at wrapper+0x30.
int __thiscall bhkCollisionWrapper_GetHavokObject(_DWORD *this)
{
  return *(this + 0xC); /*0x8ac0c3*/
}
