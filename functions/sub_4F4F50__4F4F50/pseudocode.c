char __cdecl sub_4F4F50(Actor *a1, int a2, int a3, double *a4)
{
  int v8; // [esp+8h] [ebp-8h]

  *a4 = 0.0;
  if ( a1 )
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
      *a4 = (double)(unsigned __int16)Actor_GetLevel(a1, v8);
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetLevel >> %0.2f", *a4);
  return 1;
}
