bhkRigidBody *__thiscall bhkRigidBody::`scalar deleting destructor'(bhkRigidBody *this, char a2)
{
  bhkRigidBody::~bhkRigidBody(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
