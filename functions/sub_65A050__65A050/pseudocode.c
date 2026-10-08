TESObjectREFR *__thiscall sub_65A050(ActorVtbl *this, char a2)
{
  Actor *ListHead; // eax
  Actor *i; // ebx
  ActorVtbl *vtbl; // ebp
  Actor *v6; // eax
  Actor *v7; // edi
  int v8; // eax
  int v9; // ebp
  _DWORD *v10; // edi
  void (__thiscall **v11)(_DWORD *, int); // ebp
  int v12; // eax
  Actor *v13; // eax
  Actor *j; // ebx
  ActorVtbl *v15; // ebp
  _DWORD **v16; // edi
  int v17; // eax
  int v18; // ebp
  _DWORD *v19; // edi
  void (__thiscall **v20)(_DWORD *, int); // ebp
  int v21; // eax
  TESObjectREFR *result; // eax
  TESObjectREFRVtbl *v23; // ecx
  int v24; // eax
  LowProcess *process; // edi
  TESObjectREFR *v26; // esi

  ListHead = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 0); /*0x65a05d*/
  for ( i = ActorList_ReturnHead((ActorList *)ListHead); i; i = *(Actor **)&i->members.super.super.super.type ) /*0x65a06d*/
  {
    vtbl = i->vtbl; /*0x65a073*/
    if ( i->vtbl != this ) /*0x65a077*/
    {
      v6 = (Actor *)OblivionDynamicCast( /*0x65a08c*/
                      vtbl,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                      &Actor `RTTI Type Descriptor',
                      0);
      v7 = v6; /*0x65a091*/
      if ( v6 ) /*0x65a098*/
      {
        if ( (ActorVtbl *)sub_5E6830(v6) == this ) /*0x65a0a3*/
          v7->members.super.process->Unk_12C(v7->members.super.process); /*0x65a0b0*/
        if ( a2 ) /*0x65a0b7*/
        {
          v8 = (*((int (__thiscall **)(ActorVtbl *))this->super.super.super.super.InitializeComponent + 0x48))(this); /*0x65a0c3*/
          sub_5E69E0(v7, v8); /*0x65a0c8*/
        }
        v9 = ((int (__thiscall *)(LowProcess *))v7->members.super.process->Unk_AB)(v7->members.super.process); /*0x65a0da*/
        if ( v9 == (*((int (__thiscall **)(ActorVtbl *))this->super.super.super.super.InitializeComponent + 0x49))(this) ) /*0x65a0ea*/
          ((void (__thiscall *)(LowProcess *, _DWORD))v7->members.super.process->Unk_AC)(v7->members.super.process, 0); /*0x65a0f9*/
      }
      else if ( a2 ) /*0x65a102*/
      {
        v10 = OblivionDynamicCast( /*0x65a118*/
                vtbl,
                0,
                (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                &MagicProjectile `RTTI Type Descriptor',
                0);
        if ( v10 ) /*0x65a11f*/
        {
          v11 = (void (__thiscall **)(_DWORD *, int))(*v10 + 0x218); /*0x65a12d*/
          v12 = (*((int (__thiscall **)(ActorVtbl *))this->super.super.super.super.InitializeComponent + 0x48))(this); /*0x65a133*/
          (*v11)(v10, v12); /*0x65a13b*/
        }
      }
    }
  }
  v13 = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 1); /*0x65a14f*/
  for ( j = ActorList_ReturnHead((ActorList *)v13); j; j = *(Actor **)&j->members.super.super.super.type ) /*0x65a15f*/
  {
    v15 = j->vtbl; /*0x65a165*/
    if ( j->vtbl != this ) /*0x65a169*/
    {
      v16 = (_DWORD **)OblivionDynamicCast( /*0x65a183*/
                         v15,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                         &Actor `RTTI Type Descriptor',
                         0);
      if ( v16 ) /*0x65a18a*/
      {
        if ( a2 ) /*0x65a191*/
        {
          v17 = (*((int (__thiscall **)(ActorVtbl *))this->super.super.super.super.InitializeComponent + 0x48))(this); /*0x65a19d*/
          sub_5E69E0(v16, v17); /*0x65a1a2*/
        }
        v18 = (*(int (__thiscall **)(_DWORD *))(*v16[0x16] + 0x2B0))(v16[0x16]); /*0x65a1b6*/
        if ( v18 == (*((int (__thiscall **)(ActorVtbl *))this->super.super.super.super.InitializeComponent + 0x49))(this) ) /*0x65a1c4*/
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*v16[0x16] + 0x2B4))(v16[0x16], 0); /*0x65a1d3*/
      }
      else if ( a2 ) /*0x65a1dc*/
      {
        v19 = OblivionDynamicCast( /*0x65a1f2*/
                v15,
                0,
                (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                &MagicProjectile `RTTI Type Descriptor',
                0);
        if ( v19 ) /*0x65a1f9*/
        {
          v20 = (void (__thiscall **)(_DWORD *, int))(*v19 + 0x218); /*0x65a207*/
          v21 = (*((int (__thiscall **)(ActorVtbl *))this->super.super.super.super.InitializeComponent + 0x48))(this); /*0x65a20d*/
          (*v20)(v19, v21); /*0x65a215*/
        }
      }
    }
  }
  sub_677B50(&qword_B3BB2C[0x75], this, a2); /*0x65a22d*/
  result = (TESObjectREFR *)reference; /*0x65a232*/
  if ( reference ) /*0x65a232*/
  {
    v23 = result[1].vtbl; /*0x65a23b*/
    if ( v23 ) /*0x65a240*/
      (*((void (__thiscall **)(TESObjectREFRVtbl *, ActorVtbl *))v23->super.super.InitializeComponent + 0x12E))( /*0x65a24b*/
        v23,
        this);
    if ( a2 ) /*0x65a24f*/
    {
      v24 = (*((int (__thiscall **)(ActorVtbl *))this->super.super.super.super.InitializeComponent + 0x48))(this); /*0x65a25b*/
      sub_5E69E0(reference, v24); /*0x65a264*/
    }
    process = reference->super.super.super.process; /*0x65a270*/
    v26 = (TESObjectREFR *)(*((int (__thiscall **)(ActorVtbl *))this->super.super.super.super.InitializeComponent + 0x49))(this); /*0x65a27f*/
    result = (TESObjectREFR *)((int (__thiscall *)(LowProcess *))process->Unk_AB)(process); /*0x65a289*/
    if ( result == v26 ) /*0x65a28d*/
      return ((TESObjectREFR *(__thiscall *)(LowProcess *, _DWORD))reference->super.super.super.process->Unk_AC)( /*0x65a2ac*/
               reference->super.super.super.process,
               0);
  }
  return result; /*0x65a29b*/
}
