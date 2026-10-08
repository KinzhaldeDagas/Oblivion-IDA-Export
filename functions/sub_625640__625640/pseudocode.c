int __thiscall sub_625640(Actor *this, int actorValue, float delta, int a4)
{
  int v4; // eax

  v4 = actorValue; /*0x625640*/
  if ( (unsigned int)(actorValue - 0xC) <= 6 || actorValue == 0x1C ) /*0x62564f*/
  {
    v4 = 0xC; /*0x625697*/
  }
  else
  {
    if ( (unsigned int)(actorValue - 0x13) <= 6 ) /*0x625657*/
      return Actor_ForceModCurAVf(this, 0x13, delta, a4); /*0x625671*/
    if ( (unsigned int)(actorValue - 0x1A) <= 6 ) /*0x62567a*/
      return Actor_ForceModCurAVf(this, 0x1A, delta, a4); /*0x625694*/
  }
  return Actor_ForceModCurAVf(this, v4, delta, a4); /*0x625671*/
}
