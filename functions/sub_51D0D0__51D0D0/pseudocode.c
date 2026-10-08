char *__thiscall sub_51D0D0(int *this, TESForm *a2)
{
  char *result; // eax
  char *v4; // edi
  unsigned int v5; // ebp
  void (__thiscall *v6)(int *, char *); // edx
  char v7; // al
  _DWORD *CreatureSoundArray; // eax
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax

  result = (char *)OblivionDynamicCast( /*0x51d0e8*/
                     a2,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESCreature `RTTI Type Descriptor',
                     0);
  v4 = result; /*0x51d0ed*/
  if ( result ) /*0x51d0f4*/
  {
    if ( (*(this + 0xA) & 0x100) != 0 ) /*0x51d102*/
    {
      v5 = *(this + 0x40); /*0x51d105*/
      if ( v5 ) /*0x51d10d*/
      {
        CreatureSoundArray_ClearAllSounds((_DWORD *)*(this + 0x40)); /*0x51d111*/
        FormHeapFree(v5); /*0x51d117*/
      }
    }
    *(this + 0x40) = 0; /*0x51d124*/
    TESSpellList_CopyFrom(this + 0x15, a2); /*0x51d12e*/
    TESActorBaseData_CopyFrom((unsigned int *)this + 9, a2); /*0x51d137*/
    TESHealthForm_CopyFrom(this + 0x20, a2); /*0x51d143*/
    TESAttributes_CopyFrom((_BYTE *)this + 0x88, a2); /*0x51d14f*/
    TESFullName_CopyFrom((unsigned int *)this + 0x28, a2); /*0x51d15b*/
    TESModel_CopyFrom((float *)this + 0x2B, a2); /*0x51d167*/
    sub_46DDC0((char **)this + 0x3B, a2); /*0x51d173*/
    *(this + 0x41) = *((_DWORD *)v4 + 0x41); /*0x51d17e*/
    *((_WORD *)this + 0x84) = *((_WORD *)v4 + 0x84); /*0x51d18b*/
    v6 = *(void (__thiscall **)(int *, char *))(*(this + 0x47) + 8); /*0x51d19b*/
    *(this + 0xA) = *((_DWORD *)v4 + 0xA); /*0x51d19e*/
    *((_BYTE *)this + 0x10A) = v4[0x10A]; /*0x51d1a7*/
    *(this + 0x43) = *((int *)v4 + 0x43); /*0x51d1b3*/
    *(this + 0x45) = *((int *)v4 + 0x45); /*0x51d1cb*/
    *(this + 0x44) = *((int *)v4 + 0x44); /*0x51d1d8*/
    v6(this + 0x47, v4 + 0x11C); /*0x51d1de*/
    (*(void (__thiscall **)(int *, char *))(*(this + 0x4D) + 8))(this + 0x4D, v4 + 0x134); /*0x51d1f6*/
    v7 = BYTE1(*((_DWORD *)v4 + 0xA)) & 1; /*0x51d1fe*/
    if ( v7 && *((_DWORD *)v4 + 0x40) ) /*0x51d202*/
    {
      CreatureSoundArray = (_DWORD *)TESCreature_GetCreatureSoundArray(this); /*0x51d20d*/
      if ( (*((_DWORD *)v4 + 0xA) & 0x100) != 0 ) /*0x51d21b*/
        CreatureSoundArray_CopyFrom(CreatureSoundArray, *((int ***)v4 + 0x40)); /*0x51d226*/
      else
        CreatureSoundArray_CopyFrom(CreatureSoundArray, 0); /*0x51d232*/
    }
    else
    {
      if ( v7 ) /*0x51d23b*/
        v9 = 0; /*0x51d23d*/
      else
        v9 = *((_DWORD *)v4 + 0x40); /*0x51d241*/
      TESCreature_SetInheritedSoundSource((unsigned int *)this, v9); /*0x51d24a*/
    }
    v10 = *this; /*0x51d257*/
    v11 = (*(int (__thiscall **)(char *))(*(_DWORD *)v4 + 0x120))(v4); /*0x51d25b*/
    return (char *)(*(int (__thiscall **)(int *, int))(v10 + 0x124))(this, v11); /*0x51d266*/
  }
  return result; /*0x51d268*/
}
