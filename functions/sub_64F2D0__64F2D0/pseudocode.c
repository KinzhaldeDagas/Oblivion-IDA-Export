double __userpurge sub_64F2D0@<st0>(
        void **this@<ecx>,
        double a2@<st4>,
        double a3@<st2>,
        double result@<st0>,
        Actor *a5,
        int a6)
{
  int v8; // ebp
  TESObjectREFR *v9; // esi
  int v10; // eax
  int v11; // [esp+Ch] [ebp-10h]

  v8 = Double_To_SInt32(result); /*0x64f2ef*/
  if ( !*(this + 0xB) ) /*0x64f2e7*/
    (*((void (__thiscall **)(void **, Actor *))*this + 0x156))(this, a5); /*0x64f2fe*/
  v9 = (TESObjectREFR *)OblivionDynamicCast( /*0x64f317*/
                          *(this + 0xB),
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  v10 = (int)*(this + 0xB); /*0x64f319*/
  if ( !v10 || (*(_DWORD *)(v10 + 8) & 0x800) != 0 ) /*0x64f330*/
  {
    ((void (__usercall *)(Actor *@<ecx>, TESObjectREFR *, double@<st0>))a5->vtbl->Unk_D0)(a5, v9, result); /*0x64f3eb*/
    sub_5EAE70(a5, (int)this, (int)a5, v11); /*0x64f3ef*/
  }
  else
  {
    if ( v9 && TesObjectREF_GetDistance((TESObjectREFR *)a5, v9, 0) < dbl_A529C0 && v9[1].vtbl ) /*0x64f351*/
    {
      for ( ; v8; --v8 ) /*0x64f359*/
      {
        if ( a5->vtbl->super.super.IsDead((TESObjectREFR *)a5, 0) ) /*0x64f36c*/
          break; /*0x64f370*/
        ((void (__usercall *)(Actor *@<ecx>, double@<st0>))a5->vtbl->Unk_D1)(a5, result); /*0x64f37c*/
        if ( !v9->vtbl->IsDead(v9, 0) ) /*0x64f38a*/
          v9->vtbl[1].GetKnockedState(v9); /*0x64f39a*/
      }
    }
    else
    {
      sub_64EC50((TESObjectREFR **)this, flt_A71E4C, result, a2, a3, (TESForm *)a5, SLODWORD(flt_A71E4C), 0); /*0x64f3b2*/
    }
    if ( v9 ) /*0x64f3b9*/
    {
      if ( !v9->vtbl->IsDead(v9, 0) ) /*0x64f3c7*/
        (*((void (__thiscall **)(TESObjectREFRVtbl *))v9[1].vtbl->super.super.InitializeComponent + 8))(v9[1].vtbl); /*0x64f3d5*/
    }
  }
  return result; /*0x64f3d7*/
}
