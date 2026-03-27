char __cdecl sub_4F4E20(TESObjectREFR *a1, TESObjectREFR *a2, int a3, double *a4)
{
  TESObjectREFR *v6; // esi
  TESObjectREFR *v7; // edi
  double v8; // st5
  char *v9; // eax
  char *Name; // [esp+0h] [ebp-18h]
  double v12; // [esp+4h] [ebp-14h]

  *a4 = 0.0;
  v6 = 0;
  if ( a1 )
  {
    if ( a1->vtbl->IsActor(a1) )
      v6 = a1;
  }
  v7 = 0;
  if ( a2 )
  {
    if ( a2->vtbl->IsActor(a2) )
      v7 = a2;
  }
  if ( v6 )
  {
    if ( v7 )
    {
      if ( v6 == (TESObjectREFR *)dword_B36180 && v7 == (TESObjectREFR *)dword_B36184 )
      {
        *a4 = flt_B36188;
      }
      else
      {
        v8 = (double)((int (__thiscall *)(TESObjectREFR *, TESObjectREFR *))v6->vtbl[1].super.Unk_1F)(v6, v7);
        dword_B36184 = (int)v7;
        dword_B36180 = (int)v6;
        *a4 = v8;
        flt_B36188 = v8;
      }
      if ( IsConsoleMode )
      {
        v12 = *a4;
        Name = TESObjectREFR_GetName(v7);
        v9 = TESObjectREFR_GetName(v6);
        Interface_ConsolePrint("%.20s disposition to %.20s is %.1f", v9, Name, v12);
      }
    }
  }
  return 1;
}
