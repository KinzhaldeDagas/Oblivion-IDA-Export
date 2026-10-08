bhkRigidBody *__thiscall bhkRigidBody::`scalar deleting destructor'(bhkRigidBody *this, char a2)
{
  bhkRigidBody::~bhkRigidBody(this); /*0x533363*/
  if ( (a2 & 1) != 0 ) /*0x53336d*/
    FormHeapFree((unsigned int)this); /*0x533370*/
  return this; /*0x53337a*/
}
