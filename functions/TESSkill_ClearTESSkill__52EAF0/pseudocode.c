// Reset TESSkill native data: actorValue=0xFFFFFFFF, governingAttribute=0, specialization=0, and both useValues=1.0; then clear descriptions/components.
void __thiscall TESSkill_ClearDataAndComponents(TESSkill *this)
{
  void (__thiscall ***v2)(_DWORD); // edi
  int v3; // ebx
  _DWORD *v4; // esi
  int v5; // edi

  *((_DWORD *)this + 0xB) = 0xFFFFFFFF;         // TESSkill_Data::actorValue = 0xFFFFFFFF sentinel. /*0x52eaf6*/
  *((_DWORD *)this + 0xD) = 0;                  // TESSkill_Data::specialization = 0. /*0x52eafd*/
  *((_DWORD *)this + 0xC) = 0;                  // TESSkill_Data::governingAttribute = 0. /*0x52eb04*/
  *((float *)this + 0xE) = 1.0;                 // TESSkill_Data::useValues[0] = 1.0. /*0x52eb0b*/
  *((float *)this + 0xF) = 1.0;                 // TESSkill_Data::useValues[1] = 1.0. /*0x52eb0f*/
  v2 = (void (__thiscall ***)(_DWORD))((char *)this + 0x40); /*0x52eb12*/
  v3 = 4; /*0x52eb15*/
  do /*0x52eb2e*/
  {
    (**v2)(v2); /*0x52eb26*/
    v2 += 2; /*0x52eb28*/
    --v3; /*0x52eb2b*/
  }
  while ( v3 ); /*0x52eb2e*/
  (*(void (__thiscall **)(TESSkill *, _DWORD))(*(_DWORD *)this + 0x90))(this, 0); /*0x52eb3c*/
  v4 = (_DWORD *)((char *)this + 0x10); /*0x52eb3e*/
  if ( v4 ) /*0x52eb41*/
  {
    if ( v4[1] ) /*0x52eb43*/
    {
      do /*0x52eb64*/
      {
        v5 = *(_DWORD *)(v4[1] + 4); /*0x52eb53*/
        FormHeapFree(v4[1]); /*0x52eb57*/
        v4[1] = v5; /*0x52eb61*/
      }
      while ( v5 ); /*0x52eb64*/
    }
    *v4 = 0; /*0x52eb66*/
  }
}
