char __cdecl sub_4F5C50(Actor *a1, int a2, int a3, double *a4)
{
  bool v4; // zf
  char result; // al

  *a4 = 0.0;
  if ( !a1 || !a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
    return 1;
  v4 = !Actor::IsNoRumor(a1);
  result = 1;
  if ( !v4 )
    *a4 = 1.0;
  return result;
}
