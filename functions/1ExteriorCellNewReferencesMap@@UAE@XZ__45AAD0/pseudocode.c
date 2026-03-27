void __thiscall ExteriorCellNewReferencesMap::~ExteriorCellNewReferencesMap(NiTMap_Entry_TESCELL *this)
{
  char *v2; // eax
  bool v3; // zf
  TESObjectCELL *data; // edx
  TESObjectCELL *v5; // ecx
  NiTMap_Entry_TESCELL *v6; // eax
  TESObjectCELL *v7; // esi
  unsigned int *v8; // edi
  int v9; // edi
  TESObjectCELL *v10; // [esp+10h] [ebp-1Ch] BYREF
  NiTMap_Entry_TESCELL *v11[2]; // [esp+14h] [ebp-18h] BYREF
  void *v12; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v13; // [esp+28h] [ebp-4h]

  v11[1] = this;
  this->next = &ExteriorCellNewReferencesMap::`vftable';
  v2 = 0;
  v3 = this->key == 0;
  v13 = 0;
  if ( v3 )
  {
LABEL_5:
    v6 = 0;
  }
  else
  {
    data = this->data;
    v5 = data;
    while ( !v5->vtbl )
    {
      ++v2;
      v5 = (TESObjectCELL *)((char *)v5 + 4);
      if ( v2 >= this->key )
        goto LABEL_5;
    }
    v6 = *((NiTMap_Entry_TESCELL **)&data->vtbl + (_DWORD)v2);
  }
  v11[0] = v6;
  while ( v11[0] )
  {
    v10 = 0;
    sub_452600((NiTMap_TESCELL *)this, v11, &v12, &v10);
    v7 = v10;
    v8 = (unsigned int *)v10;
    if ( v10 )
    {
      do
      {
        if ( *v8 )
          FormHeapFree(*v8);
        v8 = (unsigned int *)v8[1];
      }
      while ( v8 );
      if ( *(_DWORD *)&v7->members.super.type )
      {
        do
        {
          v9 = *(_DWORD *)(*(_DWORD *)&v7->members.super.type + 4);
          FormHeapFree(*(_DWORD *)&v7->members.super.type);
          *(_DWORD *)&v7->members.super.type = v9;
        }
        while ( v9 );
      }
      v7->vtbl = 0;
      FormHeapFree((unsigned int)v7);
    }
  }
  NiTMap_Clear(this);
  v13 = 0xFFFFFFFF;
  NiTPointerMap<unsigned int,BSSimpleList<ExteriorCellReferenceData *> *>::~NiTPointerMap<unsigned int,BSSimpleList<ExteriorCellReferenceData *> *>((unsigned int *)this);
}
