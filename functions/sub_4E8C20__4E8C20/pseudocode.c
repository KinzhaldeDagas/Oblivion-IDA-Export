int __thiscall sub_4E8C20(_DWORD *this)
{
  _DWORD *v1; // edi
  unsigned int v2; // edx
  NiTMap_TESCELL *v3; // ebp
  unsigned int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // ecx
  NiTMap_Entry_TESCELL *v7; // eax
  TESObjectCELL *v8; // esi
  unsigned int *vtbl; // edi
  TESFormVtbl **v10; // eax
  int result; // eax
  TESObjectCELL *v12; // [esp+Ch] [ebp-10h] BYREF
  NiTMap_Entry_TESCELL *v13; // [esp+10h] [ebp-Ch] BYREF
  _DWORD *v14; // [esp+14h] [ebp-8h]
  void *v15; // [esp+18h] [ebp-4h] BYREF

  v1 = this;
  v2 = *(this + 8);
  v3 = (NiTMap_TESCELL *)(this + 7);
  v4 = 0;
  v14 = this;
  if ( v2 )
  {
    v5 = (_DWORD *)*(this + 9);
    v6 = v5;
    while ( !*v6 )
    {
      ++v4;
      ++v6;
      if ( v4 >= v2 )
        goto LABEL_5;
    }
    v7 = (NiTMap_Entry_TESCELL *)v5[v4];
  }
  else
  {
LABEL_5:
    v7 = 0;
  }
  v13 = v7;
  if ( v7 )
  {
    do
    {
      v12 = 0;
      sub_452600(v3, &v13, &v15, &v12);
      v8 = v12;
      if ( v12 )
      {
        while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v8) )
        {
          vtbl = (unsigned int *)v8->vtbl;
          if ( v8->vtbl )
          {
            sub_4BEFA0((unsigned int *)v8->vtbl);
            FormHeapFree((unsigned int)vtbl);
          }
          v10 = *(TESFormVtbl ***)&v8->members.super.type;
          if ( v10 )
          {
            *(_DWORD *)&v8->members.super.type = v10[1];
            v8->vtbl = *v10;
            FormHeapFree((unsigned int)v10);
          }
          else
          {
            v8->vtbl = 0;
          }
        }
        FormHeapFree((unsigned int)v8);
      }
    }
    while ( v13 );
    v1 = v14;
  }
  result = NiTMap_Clear(v3);
  v1[6] = 0;
  return result;
}
