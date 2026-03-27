double __usercall cmd_DropMe@<st0>(double result@<st0>, int a2, int a3, PlayerCharacter *a4, TESObjectREFR *a5)
{
  TESObjectREFRVtbl *vtbl; // ebx
  int v6; // eax
  double v7; // st7
  int v8; // edx

  if ( a4 )
  {
    if ( a5 )
    {
      vtbl = a5->vtbl;
      v6 = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, _DWORD, int, _DWORD, int, _DWORD, _DWORD, _DWORD, int, _DWORD, double@<st0>))a4->vtbl->super.super.super.GetBaseForm)(
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
      v7 = ((double (__thiscall *)(TESObjectREFR *, int))vtbl->RemoveItem)(a5, v6);
      return sub_665260((TESObjectREFR *)TESDataHandler_g_PlayerRef, v7, v8, a4);
    }
  }
  return result;
}
