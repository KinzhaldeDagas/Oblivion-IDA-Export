char __cdecl sub_4F5DF0(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  bool (__thiscall *IsActor)(TESObjectREFR *); // edx
  bool v5; // zf
  char result; // al

  IsActor = a1->vtbl->IsActor; /*0x4f5df9*/
  *a4 = 0.0; /*0x4f5e06*/
  if ( !IsActor(a1) ) /*0x4f5e08*/
    return 1; /*0x4f5e22*/
  v5 = !Actor::IsEssential((Actor *)a1); /*0x4f5e15*/
  result = 1; /*0x4f5e17*/
  if ( !v5 ) /*0x4f5e19*/
    *a4 = 1.0; /*0x4f5e1d*/
  return result; /*0x4f5e1f*/
}
