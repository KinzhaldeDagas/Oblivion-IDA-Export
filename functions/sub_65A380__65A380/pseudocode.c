char __thiscall sub_65A380(Actor *this)
{
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v2; // esi

  CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x65a384*/
  v2 = CharProxy; /*0x65a389*/
  if ( !CharProxy ) /*0x65a38d*/
    return 0; /*0x65a3a5*/
  sub_893950(CharProxy); /*0x65a391*/
  sub_895060(v2, 0); /*0x65a39a*/
  return 1; /*0x65a39f*/
}
