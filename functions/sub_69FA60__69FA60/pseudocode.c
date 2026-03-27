int __usercall sub_69FA60@<eax>(ActorVtbl *a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  Data *Unk_16; // ecx
  int v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // esi
  TESForm::ModReferenceList *GetDescription; // eax
  const char **v10; // ecx
  int v11; // eax
  _DWORD v13[2]; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v14; // [esp+1Ch] [ebp-4h]

  v13[1] = a1;
  a1->super.super.super.super.InitializeComponent = (void (__thiscall *)(BaseFormComponent *))&MagicProjectile::`vftable'{for `MagicProjectile'};
  a1->super.super.super.Unk_06 = (void (__thiscall *)(TESForm *))&MagicProjectile::`vftable'{for `TESChildCell'};
  Unk_16 = (Data *)a1->super.super.super.Unk_16;
  v14 = 0;
  if ( Unk_16 )
  {
    v7 = (*(int (__thiscall **)(Data *))(Unk_16->errorState + 8))(Unk_16);
    sub_674550((int)a1, v7);
  }
  if ( a1->super.super.super.Unk_0F )
  {
    MagicProjectileRoot->vtbl->RemoveObject(
      MagicProjectileRoot,
      (NiAVObject **)v13,
      (NiAVObject *)a1->super.super.super.Unk_0F);
    v8 = (void (__thiscall ***)(_DWORD, int))v13[0];
    if ( v13[0] )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13[0] + 4)) )
      {
        if ( v8 )
          (**v8)(v8, 1);
      }
    }
  }
  GetDescription = (TESForm::ModReferenceList *)a1->super.super.super.GetDescription;
  if ( GetDescription )
  {
    v10 = (const char **)&GetDescription[3];
    LOWORD(GetDescription) = GetDescription[4].data;
    if ( (_WORD)GetDescription == 0xFFFF )
      GetDescription = (TESForm::ModReferenceList *)strlen(v10[1]);
    else
      GetDescription = (TESForm::ModReferenceList *)(unsigned __int16)GetDescription;
    if ( GetDescription )
    {
      v11 = (*((int (__thiscall **)(const char **))*v10 + 5))(v10);
      QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, v11, 0, 1);
    }
  }
  if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
    sub_65A050(a1, 0);
  v14 = 0xFFFFFFFF;
  return MobileObject_destr((TESForm *)a1, a2, a3, a4, a5);
}
