int __thiscall sub_530020(TESTopic *this, Actor *a3, TESObjectREFR *a4)
{
  int v3; // eax
  char a2; // [esp+1h] [ebp-1h] BYREF

  a2 = 0;
  v3 = sub_52F010(this, &a2, a3, a4, 0, 0, 0);
  return a2 == 0 ? v3 : 0;
}
