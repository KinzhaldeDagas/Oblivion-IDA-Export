bhkRigidBodyT *__thiscall bhkRigidBodyT::`scalar deleting destructor'(bhkRigidBodyT *this, char a2)
{
  bhkRigidBodyT::~bhkRigidBodyT(this); /*0x8b9123*/
  if ( (a2 & 1) != 0 ) /*0x8b912d*/
  {
    if ( this ) /*0x8b9131*/
      MemoryHeap_Free_checked((char *)this - *((unsigned __int8 *)this + 0xFFFFFFFF)); /*0x8b9141*/
  }
  return this; /*0x8b9148*/
}
