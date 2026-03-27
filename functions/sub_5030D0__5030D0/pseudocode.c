char __usercall sub_5030D0@<al>(
        int ebx0@<ebx>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a5,
        Script *a6,
        ScriptEventList *l,
        double *a8,
        UInt32 *a3)
{
  char result; // al
  TESChildCELL *v10; // [esp+4h] [ebp-8h] BYREF
  UInt16 v11[2]; // [esp+8h] [ebp-4h] BYREF

  v10 = 0;
  *(_DWORD *)v11 = 0;
  result = Script_ExtractArgs(a1, arg4, a3, a4, a5, a6, l, v11, &v10);
  if ( result )
    return sub_4F6D70(ebx0, a4, *(TESForm **)v11, v10, a8);
  return result;
}
