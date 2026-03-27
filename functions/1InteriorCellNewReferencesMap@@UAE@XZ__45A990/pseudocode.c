void __thiscall InteriorCellNewReferencesMap::~InteriorCellNewReferencesMap(NiTMap_Entry_TESCELL *this)
{
  char *v2; // eax
  bool v3; // zf
  TESObjectCELL *data; // edx
  TESObjectCELL *v5; // ecx
  NiTMap_Entry_TESCELL *v6; // eax
  TESObjectCELL *v7; // esi
  int v8; // edi
  TESObjectCELL *v9; // [esp+10h] [ebp-1Ch] BYREF
  NiTMap_Entry_TESCELL *v10[2]; // [esp+14h] [ebp-18h] BYREF
  void *v11; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v12; // [esp+28h] [ebp-4h]

  v10[1] = this;
  this->next = &InteriorCellNewReferencesMap::`vftable';
  v2 = 0;
  v3 = this->key == 0;
  v12 = 0;
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
  v10[0] = v6;
  while ( v10[0] )
  {
    v9 = 0;
    sub_452600((NiTMap_TESCELL *)this, v10, &v11, &v9);
    v7 = v9;
    if ( v9 )
    {
      if ( *(_DWORD *)&v9->members.super.type )
      {
        do
        {
          v8 = *(_DWORD *)(*(_DWORD *)&v7->members.super.type + 4);
          FormHeapFree(*(_DWORD *)&v7->members.super.type);
          *(_DWORD *)&v7->members.super.type = v8;
        }
        while ( v8 );
      }
      v7->vtbl = 0;
      FormHeapFree((unsigned int)v7);
    }
  }
  NiTMap_Clear(this);
  v12 = 0xFFFFFFFF;
  NiTPointerMap<unsigned int,BSSimpleList<unsigned int> *>::~NiTPointerMap<unsigned int,BSSimpleList<unsigned int> *>((unsigned int *)this);
}
