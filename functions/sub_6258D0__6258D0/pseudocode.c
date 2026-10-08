// BloodOnDeath decode 2026-05-26: vanilla creature/dismember helper resolves named Bip01 limb bones through the actor animation node manager. Confirmed anchors: Bip01 L UpperArm, Bip01 R UpperArm, Bip01 Head; use named Bip01 runtime bones for per-limb death blood.
void __thiscall sub_6258D0(Actor *this)
{
  TESForm *ActorBaseForm; // eax
  _DWORD *v3; // edi
  ActorAnimData *v4; // eax
  NiControllerManager *manager; // eax
  int v6; // esi
  unsigned __int8 (__thiscall *v7)(char *); // edx
  char *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax

  ActorBaseForm = Actor_GetActorBaseForm(this, 0); /*0x6258e4*/
  v3 = OblivionDynamicCast( /*0x6258ef*/
         ActorBaseForm,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
         &TESCreature `RTTI Type Descriptor',
         0);
  if ( v3 ) /*0x6258f6*/
  {
    v4 = this->vtbl->super.super.GetAnimData(this); /*0x625906*/
    if ( v4 ) /*0x62590a*/
    {
      manager = v4->manager; /*0x62590c*/
      if ( manager ) /*0x625914*/
      {
        v6 = *((_DWORD *)manager + 0x1F); /*0x625916*/
        v7 = *(unsigned __int8 (__thiscall **)(char *))(v3[9] + 0x18); /*0x62591c*/
        v8 = (char *)(v3 + 9); /*0x62591f*/
        if ( v7(v8) ) /*0x625924*/
        {
          v9 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v6 + 0x4C))(v6, "Bip01 L UpperArm"); /*0x625936*/
          sub_536740(v9); /*0x625939*/
        }
        if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)v8 + 0x1C))(v8) ) /*0x625948*/
        {
          v10 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v6 + 0x4C))(v6, "Bip01 R UpperArm"); /*0x62595a*/
          sub_536740(v10); /*0x62595d*/
        }
        if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)v8 + 0x20))(v8) ) /*0x62596c*/
        {
          v11 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v6 + 0x4C))(v6, "Bip01 Head"); /*0x62597e*/
          sub_536740(v11); /*0x625981*/
        }
      }
    }
  }
}
