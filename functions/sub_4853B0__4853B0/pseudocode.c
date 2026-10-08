void __thiscall sub_4853B0(EntryData *this, char a2, int a3, char a4)
{
  _DWORD *v5; // eax
  ExtraDataList *v6; // edi
  tListVoid *v7; // eax
  int *i; // esi
  _BYTE *v9; // edi

  if ( a2 ) /*0x4853da*/
  {
    v5 = (_DWORD *)FormHeapAlloc(0x14u); /*0x4853e2*/
    if ( v5 ) /*0x4853f8*/
      v6 = (ExtraDataList *)ExtraDataList_constr(v5); /*0x485401*/
    else
      v6 = 0; /*0x485405*/
    SetWorn(v6, 1, a3); /*0x485418*/
    if ( !this->extendData ) /*0x48541d*/
    {
      v7 = (tListVoid *)FormHeapAlloc(8u); /*0x485424*/
      if ( v7 ) /*0x48542e*/
      {
        v7->node.data = 0; /*0x485430*/
        v7->node.next = 0; /*0x485436*/
        this->extendData = v7; /*0x485440*/
        BSSimpleList_PushFront(v7, (int)v6); /*0x485442*/
        return; /*0x485459*/
      }
      this->extendData = 0; /*0x48545e*/
    }
    BSSimpleList_PushFront(&this->extendData->node.data, (int)v6); /*0x485463*/
  }
  else if ( ContainerEntryExtraData_HasWorn(this, a3) ) /*0x485482*/
  {
    for ( i = (int *)this->extendData; i; i = (int *)i[1] ) /*0x48548f*/
    {
      v9 = (_BYTE *)*i; /*0x485491*/
      if ( !*i ) /*0x485491*/
        break; /*0x485491*/
      if ( ExtraDataList_HasWorn(v9, a3) ) /*0x48549a*/
      {
        BSSimpleList_Remove(i, (int)v9); /*0x4854c2*/
        if ( a4 ) /*0x4854cc*/
          (**(void (__thiscall ***)(_BYTE *, int))v9)(v9, 1); /*0x4854d6*/
        return; /*0x4854d6*/
      }
    }
  }
}
