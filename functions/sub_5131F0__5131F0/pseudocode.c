char __cdecl sub_5131F0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // eax
  _WORD *v10; // eax
  UInt16 v11[2]; // [esp+4h] [ebp-20h] BYREF
  int v12; // [esp+8h] [ebp-1Ch] BYREF
  int v13; // [esp+Ch] [ebp-18h]
  int v14; // [esp+10h] [ebp-14h]
  float v15; // [esp+14h] [ebp-10h]

  if ( !Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11) || !a4 )
    return 0;
  GetNiNode = a4->vtbl->GetNiNode;
  v15 = *(float *)v11;
  v12 = 0;
  v14 = 0xF;
  LOBYTE(v13) = 1;
  v10 = (_WORD *)GetNiNode(a4);
  sub_88BBE0(v10, (int)&v12, (void (__cdecl *)(int, int))sub_513160);
  return 1;
}
