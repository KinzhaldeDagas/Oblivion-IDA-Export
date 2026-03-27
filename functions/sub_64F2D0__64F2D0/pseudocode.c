char __userpurge sub_64F2D0@<al>(void **this@<ecx>, double a2@<st1>, TESObjectREFR *a3, int a4)
{
  int v5; // ebp
  TESObjectREFR *v6; // esi
  int v7; // eax
  int v9; // [esp+Ch] [ebp-10h]

  v5 = Double_To_SInt32(flt_B36C68 * dbl_A3C800);
  if ( !*(this + 0xB) )
    (*((void (__thiscall **)(void **, TESObjectREFR *))*this + 0x156))(this, a3);
  v6 = (TESObjectREFR *)OblivionDynamicCast(
                          *(this + 0xB),
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  v7 = (int)*(this + 0xB);
  if ( !v7 || (*(_DWORD *)(v7 + 8) & 0x800) != 0 )
  {
    a3->vtbl[1].IsDead(a3, (char)v6);
    sub_5EAE70((Actor *)a3, (int)this, (int)a3, v9);
  }
  else
  {
    if ( v6 && TesObjectREF_GetDistance(a3, v6, 0) < dbl_A529C0 && v6[1].vtbl )
    {
      for ( ; v5; --v5 )
      {
        if ( a3->vtbl->IsDead(a3, 0) )
          break;
        a3->vtbl[1].GetKnockedState(a3);
        if ( !v6->vtbl->IsDead(v6, 0) )
          v6->vtbl[1].GetKnockedState(v6);
      }
    }
    else
    {
      sub_64EC50((TESObjectREFR **)this, a2, flt_A71E4C, (Actor *)a3, SLODWORD(flt_A71E4C), 0);
    }
    if ( v6 && !v6->vtbl->IsDead(v6, 0) )
    {
      (*((void (__thiscall **)(TESObjectREFRVtbl *))v6[1].vtbl->super.super.InitializeComponent + 8))(v6[1].vtbl);
      return 0;
    }
  }
  return 0;
}
