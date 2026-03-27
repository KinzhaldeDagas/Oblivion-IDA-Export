char __thiscall sub_65A380(Actor *this)
{
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v2; // esi

  CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
  v2 = CharProxy;
  if ( !CharProxy )
    return 0;
  sub_893950(CharProxy);
  sub_895060(v2, 0);
  return 1;
}
