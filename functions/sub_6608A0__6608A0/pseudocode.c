void __userpurge sub_6608A0(
        TESObjectREFR *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5,
        int a6,
        char a7)
{
  int *v8; // [esp+4h] [ebp-4h] BYREF

  if ( !Actor_IsSneaking(a1) )
  {
    v8 = (int *)(*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent + 0xCF))(
                  a1[1].vtbl,
                  0);
    sub_616530(a2, a4, a3, &v8, a1, a5, a6, a7);
  }
}
