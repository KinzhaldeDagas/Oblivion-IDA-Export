// Returns actor/proxy collision filter identity by calling 0x57E270 on MobileObject_GetCharProxy(this). Callers keep high 16 bits and OR in the chosen collision layer.
TESObjectREFR *__thiscall MobileObject_GetCollisionFilterInfo(MobileObject *this, TESObjectREFR *a2)
{
  bhkCharacterProxy *CharProxy; // eax
  TESObjectREFRVtbl *v3; // edx
  MobileObject *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x65abe0*/
  CharProxy = MobileObject_GetCharProxy(this); /*0x65abe1*/
  if ( CharProxy ) /*0x65abe8*/
  {
    v3 = (TESObjectREFRVtbl *)*bhkCharacterProxy_GetCollisionFilterInfo(CharProxy, &v5); /*0x65abf5*/
    a2->vtbl = v3; /*0x65abfb*/
    return a2; /*0x65abf7*/
  }
  else
  {
    a2->vtbl = 0; /*0x65ac11*/
    return a2; /*0x65ac0d*/
  }
}
