MagicBoltProjectile *__userpurge MagicBoltProjectile::`scalar deleting destructor'@<eax>(
        MagicBoltProjectile *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5)
{
  MagicBoltProjectile::~MagicBoltProjectile(this, a2, a3, a4); /*0x699033*/
  if ( (a5 & 1) != 0 ) /*0x69903d*/
    FormHeapFree((unsigned int)this); /*0x699040*/
  return this; /*0x69904a*/
}
