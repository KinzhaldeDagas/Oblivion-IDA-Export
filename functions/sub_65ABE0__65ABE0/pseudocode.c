TESObjectREFR *__thiscall sub_65ABE0(MobileObject *this, TESObjectREFR *a2)
{
  bhkCharacterProxy *CharProxy; // eax
  TESObjectREFRVtbl *v3; // edx
  MobileObject *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this;
  CharProxy = MobileObject_GetCharProxy(this);
  if ( CharProxy )
  {
    v3 = (TESObjectREFRVtbl *)*sub_57E270(CharProxy, &v5);
    a2->vtbl = v3;
    return a2;
  }
  else
  {
    a2->vtbl = 0;
    return a2;
  }
}
