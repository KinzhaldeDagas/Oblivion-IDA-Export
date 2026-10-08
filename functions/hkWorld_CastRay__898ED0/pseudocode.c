int __thiscall hkWorld::CastRay(hkWorld *this, hkWorldRayCastInput *a2, hkWorldRayCastOutput *a6)
{
  hkBroadPhase *m_broadPhase; // [esp-14h] [ebp-54h]
  hkCollisionFilter *m_collisionFilter; // [esp-Ch] [ebp-4Ch]
  int (__stdcall **v6[16])(char); // [esp+0h] [ebp-40h] BYREF

  v6[0xC] = 0; /*0x898ee3*/
  v6[0xD] = 0; /*0x898ee7*/
  m_collisionFilter = this->m_collisionFilter; /*0x898eee*/
  m_broadPhase = this->m_broadPhase; /*0x898ef3*/
  v6[0] = &off_A96AD4; /*0x898ef8*/
  return sub_8D95A0(v6, m_broadPhase, a2, m_collisionFilter, 0, a6); /*0x898f05*/
}
