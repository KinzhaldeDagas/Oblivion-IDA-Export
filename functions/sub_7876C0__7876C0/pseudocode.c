// Oblivion collision-vector size helper: returns (end-begin)/0x1C. The 28-byte stride is authoritative; RT4.1's later 40-byte SShape adds Euler angles and is only a version contrast.
unsigned int __thiscall OB_stVector_CollisionObject_Size_010201A0(const OB_stVector_CollisionObject_010201A0 *this)
{
  unsigned int result; // eax

  result = (unsigned int)this->begin; /*0x7876c0*/
  if ( result ) /*0x7876c5*/
    return (int)((int)this->end - result) / 0x1C; /*0x7876de*/
  return result; /*0x7876c7*/
}
