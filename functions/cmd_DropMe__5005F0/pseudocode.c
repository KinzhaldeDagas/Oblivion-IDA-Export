double __usercall cmd_DropMe@<st0>(double result@<st0>, int a2, int a3, PlayerCharacter *a4, TESObjectREFR *a5)
{
  TESObjectREFRVtbl *vtbl; // ebx
  int v6; // eax
  double v7; // st7

  if ( a4 ) /*0x5005f8*/
  {
    if ( a5 ) /*0x500600*/
    {
      vtbl = a5->vtbl; /*0x50060b*/
      v6 = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, _DWORD, int, _DWORD, int, _DWORD, _DWORD, _DWORD, int, _DWORD, double@<st0>))a4->vtbl->super.super.super.GetBaseForm)( /*0x500621*/
             a4,
             0,
             1,
             0,
             1,
             0,
             0,
             0,
             1,
             0,
             result);
      v7 = ((double (__thiscall *)(TESObjectREFR *, int))vtbl->RemoveItem)(a5, v6); /*0x50062c*/
      return sub_665260((TESObjectREFR *)reference, v7, a4); /*0x500635*/
    }
  }
  return result; /*0x50063b*/
}
