// Verified relevant local role: visits actor-process level lists0..3, clears process package pointers matching argument and clears matching ExtraPackage references; conditional process/package re-evaluation follows. Called by AlarmPackage destructor; no Crime payload deallocation observed. Probable semantic name DetachPackageReferences; existing name retained pending complete actor/process typing audit.
Actor *__thiscall sub_675090(ActorProcessManager *this, TESPackage *a2)
{
  ActorProcessManager *v2; // esi
  int v3; // ebx
  Actor *ListHead; // eax
  Actor *result; // eax
  Actor *v6; // edi
  ActorVtbl *vtbl; // esi
  void (__thiscall *Unk_16)(TESForm *); // ecx
  BSExtraDataVtbl *v9; // ebx
  void (__thiscall *v10)(TESForm *); // ecx
  void (__thiscall *v11)(TESForm *); // edi
  TESPackage *v12; // ecx
  void (__thiscall *v13)(TESForm *); // eax
  ExtraDataList *p_ClearModified; // esi
  Actor *i; // [esp+10h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-4h]

  v2 = this; /*0x675096*/
  v3 = 0; /*0x675098*/
  v17 = 0; /*0x67509f*/
  do /*0x67520a*/
  {
    if ( v3 ) /*0x6750a5*/
    {
      if ( v3 == 1 ) /*0x6750ad*/
      {
        ListHead = ActorProcessManager_GetListHead(v2, 1); /*0x6750b0*/
      }
      else if ( v3 == 2 ) /*0x6750b5*/
      {
        ListHead = ActorProcessManager_GetListHead(v2, 2); /*0x6750b8*/
      }
      else
      {
        ListHead = ActorProcessManager_GetListHead(v2, 3); /*0x6750be*/
      }
    }
    else
    {
      ListHead = ActorProcessManager_GetListHead(v2, 0); /*0x6750a8*/
    }
    result = ActorList_ReturnHead((ActorList *)ListHead); /*0x6750c5*/
    for ( i = result; result; i = result ) /*0x6750d0*/
    {
      v6 = i; /*0x6750d6*/
      if ( !*(_DWORD *)&i->members.super.super.super.type && !i->vtbl ) /*0x6750e0*/
        break; /*0x6750e3*/
      vtbl = 0; /*0x6750f3*/
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl) ) /*0x6750f5*/
        vtbl = i->vtbl; /*0x6750fb*/
      if ( vtbl ) /*0x675101*/
      {
        Unk_16 = vtbl->super.super.super.Unk_16; /*0x675107*/
        v9 = 0; /*0x67510a*/
        if ( Unk_16 ) /*0x67510e*/
          v9 = (BSExtraDataVtbl *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)Unk_16 + 0x184))(Unk_16); /*0x67511a*/
        v10 = vtbl->super.super.super.Unk_16; /*0x67511c*/
        if ( !v10 || v9 == *((BSExtraDataVtbl **)v10 + 2) ) /*0x675126*/
        {
          v12 = a2; /*0x675151*/
        }
        else
        {
          v11 = 0; /*0x67512d*/
          if ( (unsigned int)(*(int (__thiscall **)(_DWORD *))(*(_DWORD *)v10 + 8))(v10) <= 1 ) /*0x675134*/
            v11 = vtbl->super.super.super.Unk_16; /*0x675136*/
          v12 = a2; /*0x675139*/
          if ( v9 == (BSExtraDataVtbl *)a2 ) /*0x67513f*/
          {
            if ( v11 ) /*0x675143*/
              *((_DWORD *)v11 + 0x30) = 0; /*0x675145*/
          }
        }
        v13 = vtbl->super.super.super.Unk_16; /*0x675155*/
        if ( v13 ) /*0x67515a*/
        {
          if ( *((TESPackage **)v13 + 2) == v12 ) /*0x67515f*/
          {
            *((_DWORD *)v13 + 2) = 0; /*0x675161*/
            if ( TESPackage::IsTemporaryOverrideType(v12) ) /*0x675168*/
              (*((void (__thiscall **)(ActorVtbl *, int))vtbl->super.super.super.super.InitializeComponent + 0x11))( /*0x67517d*/
                vtbl,
                0x30000);
            if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x675185*/
              (*(void (__thiscall **)(void (__thiscall *)(TESForm *), ActorVtbl *, int))(*(_DWORD *)vtbl->super.super.super.Unk_16 /*0x675199*/
                                                                                       + 0x18))(
                vtbl->super.super.super.Unk_16,
                vtbl,
                1);
          }
        }
        p_ClearModified = (ExtraDataList *)&vtbl->super.super.super.ClearModified; /*0x67519b*/
        if ( ExtraDataList::GetExtraPackage(p_ClearModified) == (BSExtraDataVtbl *)a2 ) /*0x6751a9*/
          sub_4268B0(p_ClearModified, 0, 0, 0, 0, 0); /*0x6751b7*/
        v6 = i; /*0x6751e5*/
        v3 = v17; /*0x6751e9*/
      }
      result = *(Actor **)&v6->members.super.super.super.type; /*0x6751ed*/
      v2 = this; /*0x6751f2*/
    }
    v17 = ++v3; /*0x675206*/
  }
  while ( v3 < 4 ); /*0x67520a*/
  return result; /*0x675210*/
}
