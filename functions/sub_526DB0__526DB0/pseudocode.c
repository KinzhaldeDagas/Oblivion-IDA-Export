LONG __userpurge sub_526DB0@<eax>(
        BSExtraDataVtbl *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        PlayerCharacter *a5)
{
  int v7; // eax
  PlayerCharacter *v8; // ecx
  NiAVObject *niNode; // esi
  char *v10; // ebx
  LONG result; // eax
  int v12; // [esp+20h] [ebp+4h]

  v7 = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->super.super.super.Unk_5A)(
         a5,
         a4,
         a3,
         a2);
  v8 = TESDataHandler_g_PlayerRef;
  niNode = (NiAVObject *)a5->super.super.super.super.niNode;
  v10 = (char *)v7;
  v12 = 1;
  if ( a5 != TESDataHandler_g_PlayerRef )
    goto LABEL_7;
  v12 = 2;
  while ( 1 )
  {
    if ( a5 == v8 && v12 == 1 )
    {
      v10 = (char *)sub_6600D0(v8, v8->isThirdPerson);
      niNode = (NiAVObject *)PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
    }
LABEL_7:
    sub_5268D0(a1, a2, a3, a4, (TESObjectREFR *)a5, v10);
    result = sub_47BC40(v10, a2, a3, a4);
    if ( niNode )
    {
      NiAVObject_InitializePropertyState(niNode);
      NiNode_UpdateDynamicEffectState((NiNode *)niNode);
      niNode->vtbl->UpdateWorldBound(niNode);
      a4 = 0.0;
      result = NiAVObject_UpdateNiAVObject(niNode, 0.0, 0);
    }
    if ( !--v12 )
      break;
    v8 = TESDataHandler_g_PlayerRef;
  }
  return result;
}
