char __cdecl sub_4F5DF0(Actor *a1, int a2, int a3, double *a4)
{
  bool (__thiscall *IsActor)(TESObjectREFR *); // edx
  bool v5; // zf
  char result; // al

  IsActor = a1->vtbl->super.super.IsActor;
  *a4 = 0.0;
  if ( !IsActor((TESObjectREFR *)a1) )
    return 1;
  v5 = !Actor::IsEssential(a1);
  result = 1;
  if ( !v5 )
    *a4 = 1.0;
  return result;
}
