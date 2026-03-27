void __thiscall sub_6258D0(Actor *this)
{
  TESForm *ActorBaseForm; // eax
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // esi
  unsigned __int8 (__thiscall *v7)(char *); // edx
  char *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax

  ActorBaseForm = Actor_GetActorBaseForm(this, 0);
  v3 = OblivionDynamicCast(
         ActorBaseForm,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
         &TESCreature `RTTI Type Descriptor',
         0);
  if ( v3 )
  {
    v4 = (int)this->vtbl->super.super.GetAnimData((TESObjectREFR *)this);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 0x98);
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 0x7C);
        v7 = *(unsigned __int8 (__thiscall **)(char *))(v3[9] + 0x18);
        v8 = (char *)(v3 + 9);
        if ( v7(v8) )
        {
          v9 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v6 + 0x4C))(v6, "Bip01 L UpperArm");
          sub_536740(v9);
        }
        if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)v8 + 0x1C))(v8) )
        {
          v10 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v6 + 0x4C))(v6, "Bip01 R UpperArm");
          sub_536740(v10);
        }
        if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)v8 + 0x20))(v8) )
        {
          v11 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v6 + 0x4C))(v6, "Bip01 Head");
          sub_536740(v11);
        }
      }
    }
  }
}
