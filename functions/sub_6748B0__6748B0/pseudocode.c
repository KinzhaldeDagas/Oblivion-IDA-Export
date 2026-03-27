void __thiscall sub_6748B0(_DWORD *this, MobileObject *a2)
{
  _DWORD *v2; // ebp
  MobileObject **v3; // eax
  TESObjectREFRVtbl *process; // ecx
  int v5; // edi
  UInt32 ProcessLevel; // ebx

  v2 = this + 0x16;
  v3 = (MobileObject **)(this + 0x16);
  if ( this == (_DWORD *)0xFFFFFFA8 )
  {
LABEL_4:
    process = (TESObjectREFRVtbl *)a2->process;
    if ( process )
    {
      v5 = (*((int (__thiscall **)(TESObjectREFRVtbl *))process->super.super.InitializeComponent + 2))(process);
      ProcessLevel = MobileObject_GetProcessLevel(a2);
      if ( a2->vtbl->super.IsDead((TESObjectREFR *)a2, 0)
        || v5 != ProcessLevel
        || a2->process->GetUnk020(a2->process)
        || (a2->super.super.flags & 0x20) != 0
        || PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef) )
      {
        ((void (__thiscall *)(MobileObject *, int))a2->vtbl->super.super.Unk_28)(a2, 1);
        BSSimpleList_PushFront(v2, (int)a2);
      }
    }
  }
  else
  {
    while ( *v3 != a2 )
    {
      v3 = (MobileObject **)v3[1];
      if ( !v3 )
        goto LABEL_4;
    }
  }
}
