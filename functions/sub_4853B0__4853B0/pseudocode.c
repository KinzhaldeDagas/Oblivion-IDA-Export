void __thiscall sub_4853B0(EntryData *this, char a2, int a3, char a4)
{
  _DWORD *v5; // eax
  ExtraDataList *v6; // edi
  tListVoid *v7; // eax
  tListVoid *i; // esi
  _BYTE *data; // edi

  if ( a2 )
  {
    v5 = (_DWORD *)FormHeapAlloc(0x14u);
    if ( v5 )
      v6 = (ExtraDataList *)ExtraDataList_constr(v5);
    else
      v6 = 0;
    SetWorn(v6, 1, a3);
    if ( !this->extendData )
    {
      v7 = (tListVoid *)FormHeapAlloc(8u);
      if ( v7 )
      {
        v7->node.data = 0;
        v7->node.next = 0;
        this->extendData = v7;
        BSSimpleList_PushFront(v7, (int)v6);
        return;
      }
      this->extendData = 0;
    }
    BSSimpleList_PushFront(&this->extendData->node.data, (int)v6);
  }
  else if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(this, a3) )
  {
    for ( i = this->extendData; i; i = (tListVoid *)i->node.next )
    {
      data = i->node.data;
      if ( !i->node.data )
        break;
      if ( ExtraDataList_HasWorn(data, a3) )
      {
        BSSimpleList_Remove(i, (int)data);
        if ( a4 )
          (**(void (__thiscall ***)(_BYTE *, int))data)(data, 1);
        return;
      }
    }
  }
}
