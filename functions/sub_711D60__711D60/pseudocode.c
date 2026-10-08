//
// [Collision v143 publication] Attach writes collisionObject+08 target then435CE0 installs the scene collision smart pointer, releasing the old collision and retaining the new one. The plugin creates the collision detached, binds its ready phantom using897670, then publishes here after all shape construction succeeds.
void __thiscall sub_711D60(volatile LONG *this, NiAVObject *a2)
{
  *((_DWORD *)this + 2) = a2; /*0x711d68*/
  if ( a2 ) /*0x711d6b*/
  {
    if ( a2->members.m_spCollision != this ) /*0x711d73*/
      sub_435CE0(a2, this); /*0x711d79*/
  }
}
