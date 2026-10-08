double __userpurge sub_602050@<st0>(
        Actor *this@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        double result@<st0>,
        TESObjectREFR a5)
{
  TESObjectREFRVtbl *vtbl; // esi
  char *niNode; // edi
  ActorAnimData *AnimDataByPerspective; // ebx
  void *v10; // eax
  CHAR *FormModelPAth; // eax
  int v12; // esi
  TESObjectREFR *v13; // edi
  int v14; // ebx
  NiNode *NodeByPerspective; // eax
  int vtbl_high; // esi
  NiNode *v17; // eax
  MobileObject *v18; // ecx
  NiObjectNET *v19; // ebx
  bhkCharacterProxy *CharProxy; // eax
  void (__thiscall *Unk_0F)(TESForm *); // [esp+54h] [ebp-30h]
  ActorAnimData *v24; // [esp+58h] [ebp-2Ch]
  float *v25; // [esp+5Ch] [ebp-28h]
  float v26; // [esp+64h] [ebp-20h]
  float v27; // [esp+64h] [ebp-20h]
  float v28[7]; // [esp+68h] [ebp-1Ch] BYREF

  vtbl = a5.vtbl; /*0x602055*/
  if ( a5.vtbl ) /*0x60205d*/
  {
    niNode = (char *)this->members.super.super.niNode; /*0x60206a*/
    Unk_0F = a5.vtbl->super.Unk_0F; /*0x60206d*/
    v24 = (ActorAnimData *)(*((int (__usercall **)@<eax>(TESObjectREFRVtbl *@<ecx>, double@<st0>))a5.vtbl->super.super.InitializeComponent /*0x602082*/
                            + 0x59))(
                             a5.vtbl,
                             result);
    AnimDataByPerspective = this->vtbl->super.super.GetAnimData(this); /*0x602098*/
    if ( this == (Actor *)reference ) /*0x60209a*/
    {
      niNode = (char *)PlayerCharacter_GetNodeByPerspective(reference, 0); /*0x6020b4*/
      AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(reference, 0); /*0x6020b8*/
    }
    if ( Unk_0F ) /*0x6020c0*/
    {
      if ( niNode ) /*0x6020c8*/
      {
        if ( (*(int (__userpurge **)@<eax>(const char *, double@<st0>))(*(_DWORD *)Unk_0F + 0x58))( /*0x6020d8*/
               "ActorParent",
               result) )
        {
          v26 = 1.0 / ((double (__thiscall *)(Actor *, int, int))this->vtbl->super.super.GetScale)(this, a3, a2); /*0x602128*/
          v27 = fabs(v26); /*0x602132*/
          v25[0x18] = v27; /*0x60213a*/
          ((void (__thiscall *)(LowProcess *, int, _DWORD))this->members.super.process->Unk_B0)( /*0x602148*/
            this->members.super.process,
            0x400,
            0);
          sub_65AC20((MobileObject *)this, 1); /*0x60214e*/
          if ( this->members.super.process ) /*0x602153*/
            ((void (__thiscall *)(LowProcess *, int, _DWORD))this->members.super.process->Unk_B0)( /*0x602168*/
              this->members.super.process,
              0x30,
              0);
          ((void (__thiscall *)(Actor *, _DWORD))this->vtbl->super.Unk_7A)(this, 0.0); /*0x60217b*/
          qmemcpy(niNode + 0x30, sub_4D7AF0((float *)this, (NiMatrix33 *)v28), 0x24u); /*0x602195*/
          AnimDataByPerspective->unk0C = LODWORD(g_zeroNiPoint3.x); /*0x60219d*/
          AnimDataByPerspective->unk10 = LODWORD(g_zeroNiPoint3.y); /*0x6021a5*/
          AnimDataByPerspective->unk14 = LODWORD(g_zeroNiPoint3.z); /*0x6021af*/
          ActorAnimData_ClearSlot(AnimDataByPerspective, 0, 0.0); /*0x6021b9*/
          AnimDataByPerspective->unkC4 = 1; /*0x6021c2*/
          v12 = (*(int (**)(void))(*(_DWORD *)v25 + 8))(); /*0x6021d0*/
          (*(void (__thiscall **)(int, ActorAnimData *, int))(*(_DWORD *)v12 + 0x84))(v12, v24, 1); /*0x6021e3*/
          v13 = (TESObjectREFR *)a5.vtbl; /*0x6021ef*/
          v24->unk94 = AnimDataByPerspective->unk94; /*0x6021f3*/
          sub_5E13D0(v13, 1); /*0x6021fd*/
          this->members.super.process->SetSleepState(this->members.super.process, this, 4, 0, 0x7F); /*0x602214*/
          if ( this == (Actor *)reference ) /*0x60221e*/
          {
            v14 = *(_DWORD *)v12; /*0x602220*/
            NodeByPerspective = PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x602226*/
            (*(void (__thiscall **)(int, NiNode *, int))(v14 + 0x84))(v12, NodeByPerspective, 1); /*0x602234*/
            vtbl_high = HIWORD(MobileObject_GetCollisionFilterInfo((MobileObject *)reference, &a5)->vtbl); /*0x602248*/
            v17 = v13->vtbl->GetNiNode(v13); /*0x602254*/
            v18 = (MobileObject *)v13; /*0x602256*/
          }
          else
          {
            vtbl_high = HIWORD(MobileObject_GetCollisionFilterInfo((MobileObject *)v13, &a5)->vtbl); /*0x602269*/
            v17 = this->vtbl->super.super.GetNiNode(this); /*0x602275*/
            v18 = (MobileObject *)this; /*0x602277*/
          }
          v19 = (NiObjectNET *)v17; /*0x602279*/
          CharProxy = MobileObject_GetCharProxy(v18); /*0x60227b*/
          if ( CharProxy ) /*0x602282*/
          {
            if ( v19 ) /*0x602286*/
            {
              sub_5EA350(CharProxy, vtbl_high); /*0x60228b*/
              sub_88D0E0(v19, vtbl_high, 1, 0); /*0x602296*/
            }
          }
          result = 0.0; /*0x60229e*/
          ActorAnimData_ClearSlot(v24, 5, 0.0); /*0x6022ac*/
          v24->unkC4 = 1; /*0x6022b1*/
          if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x6022be*/
            Actor_ProcessAction((Actor *)v13, 1.0, 1.0); /*0x6022d5*/
        }
        else
        {
          v10 = (void *)(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x5C))(vtbl); /*0x6020ec*/
          FormModelPAth = GetFormModelPAth(v10); /*0x6020ef*/
          PrintError("Missing 'ActorParent' node for horse '%s'.", FormModelPAth); /*0x6020fa*/
        }
      }
    }
  }
  return result; /*0x602104*/
}
