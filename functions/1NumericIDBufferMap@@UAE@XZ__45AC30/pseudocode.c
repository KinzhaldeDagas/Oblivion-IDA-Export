void __thiscall NumericIDBufferMap::~NumericIDBufferMap(NiTMap_Entry_TESCELL *this)
{
  char *v2; // eax
  bool v3; // zf
  TESObjectCELL *data; // edx
  TESObjectCELL *v5; // ecx
  NiTMap_Entry_TESCELL *v6; // eax
  void *v7; // [esp+8h] [ebp-1Ch] BYREF
  NiTMap_Entry_TESCELL *v8[2]; // [esp+Ch] [ebp-18h] BYREF
  void *v9; // [esp+14h] [ebp-10h] BYREF
  unsigned int v10; // [esp+20h] [ebp-4h]

  v8[1] = this;
  this->next = &NumericIDBufferMap::`vftable';
  v2 = 0;
  v3 = this->key == 0;
  v10 = 0;
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
  v8[0] = v6;
  while ( v8[0] )
  {
    v7 = 0;
    sub_452600((NiTMap_TESCELL *)this, v8, &v9, (TESObjectCELL **)&v7);
    if ( v7 )
      MemoryHeap_Free_checked(v7);
  }
  NiTMap_Clear(this);
  v10 = 0xFFFFFFFF;
  NiTPointerMap<unsigned int,void *>::~NiTPointerMap<unsigned int,void *>((unsigned int *)this);
}
