// Pushes a non-null Actor into HighProcess.recentSocialTargets. If the inline head is occupied, moves the old head into a newly allocated 8-byte node before replacing it.
void __thiscall HighProcess::RememberSocialTarget(HighProcess *this, Actor *target)
{
  Node190 *v3; // eax

  if ( target ) /*0x63009a*/
  {
    if ( this->recentSocialTargets.data ) /*0x63009c*/
    {
      v3 = (Node190 *)FormHeapAlloc(8u); /*0x6300a7*/
      if ( v3 ) /*0x6300b1*/
      {
        v3->data = this->recentSocialTargets.data; /*0x6300b9*/
        v3->next = 0; /*0x6300bb*/
      }
      else
      {
        v3 = 0; /*0x6300c4*/
      }
      v3->next = this->recentSocialTargets.next; /*0x6300cc*/
      this->recentSocialTargets.next = v3; /*0x6300cf*/
    }
    this->recentSocialTargets.data = target; /*0x6300d5*/
  }
}
