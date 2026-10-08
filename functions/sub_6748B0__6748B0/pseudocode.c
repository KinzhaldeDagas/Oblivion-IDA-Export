void __thiscall sub_6748B0(_DWORD *this, MobileObject *a2)
{
  _DWORD *v2; // ebp
  MobileObject **v3; // eax
  LowProcess *process; // ecx
  int v5; // edi
  UInt32 ProcessLevel; // ebx

  v2 = this + 0x16; /*0x6748b1*/
  v3 = (MobileObject **)(this + 0x16); /*0x6748b4*/
  if ( this == (_DWORD *)0xFFFFFFA8 ) /*0x6748bd*/
  {
LABEL_4:
    process = a2->process; /*0x6748cb*/
    if ( process ) /*0x6748d0*/
    {
      v5 = process->GetProcessLevel(process); /*0x6748dd*/
      ProcessLevel = MobileObject_GetProcessLevel(a2); /*0x6748e4*/
      if ( a2->vtbl->super.IsDead((TESObjectREFR *)a2, 0) /*0x67491d*/
        || v5 != ProcessLevel
        || a2->process->GetUnk020(a2->process)
        || (a2->super.super.flags & 0x20) != 0
        || PlayerCharacter::IsSleeping_(reference) )
      {
        ((void (__thiscall *)(MobileObject *, int))a2->vtbl->super.super.Unk_28)(a2, 1); /*0x674932*/
        BSSimpleList_PushFront(v2, (int)a2); /*0x674937*/
      }
    }
  }
  else
  {
    while ( *v3 != a2 ) /*0x6748c2*/
    {
      v3 = (MobileObject **)v3[1]; /*0x6748c4*/
      if ( !v3 ) /*0x6748c9*/
        goto LABEL_4; /*0x6748c9*/
    }
  }
}
