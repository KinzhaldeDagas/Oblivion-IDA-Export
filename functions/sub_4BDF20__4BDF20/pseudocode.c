void __userpurge sub_4BDF20(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  TESForm *v5; // eax
  TESForm *v6; // eax
  TESForm *v7; // eax
  TESObjectLAND *v8; // eax
  int v9; // edi
  int *v10; // eax

  if ( a5 )
  {
    if ( !*(_DWORD *)(a5 + 0xC) )
    {
      v5 = sub_4F1630(*(TESWorldSpace **)(a5 + 8), a2, a3, a4, *(_DWORD *)a5, *(_DWORD *)(a5 + 4));
      *(_DWORD *)(a5 + 0xC) = v5;
      if ( !v5 )
      {
        v6 = (TESForm *)FormHeapAlloc(0x58u);
        if ( v6 )
          v7 = TESObjectCELL_constr(v6);
        else
          v7 = 0;
        *(_DWORD *)(a5 + 0xC) = v7;
        sub_4C9F90(v7, 1);
        TESObjectCELL::SetIsInterior(*(TESObjectCELL **)(a5 + 0xC), 0);
        sub_4CA710(*(TESObjectCELL **)(a5 + 0xC));
        sub_4C9AC0(*(TESObjectCELL **)(a5 + 0xC), *(_DWORD *)a5, *(_DWORD *)(a5 + 4));
        sub_4EFEF0(*(void **)(a5 + 8), *(_DWORD *)(a5 + 0xC));
      }
    }
    sub_4D58B0(*(_DWORD *)(a5 + 0xC));
    v8 = sub_4CE3C0(*(TESObjectCELL **)(a5 + 0xC));
    v9 = (int)v8;
    if ( v8 )
    {
      sub_4C79A0((int)v8, a1, a2, a3, a4, 1);
      sub_4C5BA0(v9, TES->CellBorders);
    }
    v10 = (int *)sub_4AF170(*(_DWORD **)(a5 + 0xC));
    if ( v10 )
      sub_4E7610(v10);
    *(_BYTE *)(a5 + 0x10) = 1;
  }
}
