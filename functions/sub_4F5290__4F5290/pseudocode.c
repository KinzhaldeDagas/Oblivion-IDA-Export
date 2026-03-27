char __cdecl sub_4F5290(Actor *a1, int a2, int a3, double *a4)
{
  double v8; // [esp+10h] [ebp-8h]

  *a4 = 0.0;
  if ( a1 )
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
    {
      v8 = (double)sub_5E4420(a1);
      a1->vtbl->Unk_94(a1);
      if ( v8 >= 0.0 )
        *a4 = 1.0;
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Can Pay Crime Gold >> %0.2f", *a4);
  return 1;
}
