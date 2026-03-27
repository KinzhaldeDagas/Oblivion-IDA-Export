void __thiscall sub_65A760(Actor *this, float a2)
{
  bhkCharacterProxy *CharProxy; // eax

  CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
  if ( CharProxy )
    sub_894BD0((int)CharProxy, a2);
}
