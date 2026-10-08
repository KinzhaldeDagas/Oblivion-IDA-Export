// Frees every queued eight-byte attribute-bonus bucket and the BSSimpleList head, then clears PlayerCharacter::attributeBonuses. Used before loading a replacement queue.
void __thiscall Player_ClearAttributeBonusBuckets(PlayerCharacter *this)
{
  unsigned int *attributeBonuses; // eax
  UInt8 **v3; // eax
  UInt8 **v4; // ecx

  if ( this->attributeBonuses ) /*0x663983*/
  {
    do /*0x6639d4*/
    {
      attributeBonuses = (unsigned int *)this->attributeBonuses; /*0x663990*/
      if ( !attributeBonuses[1] && !*attributeBonuses ) /*0x66399c*/
        break; /*0x66399f*/
      FormHeapFree(*attributeBonuses); /*0x6639a4*/
      v3 = this->attributeBonuses; /*0x6639a9*/
      v4 = (UInt8 **)v3[1]; /*0x6639af*/
      if ( v4 ) /*0x6639b7*/
      {
        v3[1] = v4[1]; /*0x6639bc*/
        *v3 = *v4; /*0x6639c2*/
        FormHeapFree((unsigned int)v4); /*0x6639c4*/
      }
      else
      {
        *v3 = 0; /*0x6639ce*/
      }
    }
    while ( this->attributeBonuses ); /*0x6639d4*/
    FormHeapFree((unsigned int)this->attributeBonuses); /*0x6639e4*/
    this->attributeBonuses = 0; /*0x6639ec*/
  }
}
