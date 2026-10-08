void __thiscall VampirismEffect_Remove(float *this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // eax
  Actor *v4; // esi
  UInt32 DwordAtOffset40; // eax
  char v6; // al
  float v7; // [esp+8h] [ebp-Ch]

  v2 = *((MagicTarget **)this + 8); /*0x6a8bd3*/
  if ( v2 ) /*0x6a8bd8*/
  {
    ParentActor = MagicTarget_GetParentActor(v2); /*0x6a8bdf*/
    v4 = ParentActor; /*0x6a8be4*/
    if ( ParentActor ) /*0x6a8be8*/
    {
      if ( ParentActor == (Actor *)reference ) /*0x6a8bf0*/
      {
        v7 = -*(this + 6); /*0x6a8c00*/
        ((void (__thiscall *)(Actor *, int, _DWORD))ParentActor->vtbl->ModBaseAV_F)(ParentActor, 0x45, LODWORD(v7)); /*0x6a8c07*/
      }
      DwordAtOffset40 = Shared_GetDwordAtOffset40(v4); /*0x6a8c0b*/
      if ( DwordAtOffset40 ) /*0x6a8c12*/
      {
        v6 = *(_BYTE *)(DwordAtOffset40 + 0x26); /*0x6a8c14*/
        if ( v6 == 6 || v6 == 3 || v6 == 5 || v6 == 2 ) /*0x6a8c25*/
        {
          sub_60E2E0(v4, 0.0); /*0x6a8c2f*/
          LOBYTE(MEMORY[0xB33D80]) = 1; /*0x6a8c34*/
          ((void (__thiscall *)(LowProcess_vtbl **, int))v4->members.super.process->SetUnk16C)( /*0x6a8c48*/
            &v4->members.super.process->__vftable,
            1);
          ((void (__thiscall *)(LowProcess_vtbl **, Actor *))v4->members.super.process->Unk_C5)( /*0x6a8c56*/
            &v4->members.super.process->__vftable,
            v4);
          LOBYTE(MEMORY[0xB33D80]) = 0; /*0x6a8c58*/
        }
      }
    }
  }
}
