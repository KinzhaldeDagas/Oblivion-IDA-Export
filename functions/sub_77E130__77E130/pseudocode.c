NiTMap_Entry_TESCELL *__thiscall sub_77E130(_DWORD *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  _DWORD *v4; // edx
  NiTMap_Entry_TESCELL *v5; // eax
  TESObjectCELL *v6; // esi
  Data *key; // eax
  UInt32 refID; // eax
  unsigned int v9; // edx
  unsigned int v10; // eax
  _DWORD *v11; // ecx
  NiTMap_Entry_TESCELL *result; // eax
  bool v13; // zf
  unsigned int i; // esi
  int v15; // edx
  unsigned int v16; // edi
  unsigned __int16 v17; // ax
  int v18; // eax
  int v19; // eax
  NiTMap_Entry_TESCELL *v20; // [esp+Ch] [ebp-Ch] BYREF
  int v21; // [esp+10h] [ebp-8h] BYREF
  NiTMap_Entry_TESCELL *v22; // [esp+14h] [ebp-4h] BYREF

  v2 = *(this + 4);
  v3 = 0;
  if ( v2 )
  {
    v4 = (_DWORD *)*(this + 5);
    while ( !*v4 )
    {
      ++v3;
      ++v4;
      if ( v3 >= v2 )
        goto LABEL_5;
    }
    v5 = *(NiTMap_Entry_TESCELL **)(*(this + 5) + 4 * v3);
  }
  else
  {
LABEL_5:
    v5 = 0;
  }
  v20 = v5;
  while ( v20 )
  {
    sub_452600((NiTMap_TESCELL *)(this + 3), &v20, (void **)&v21, (TESObjectCELL **)&v22);
    NiTMap_RemoveAt(this + 3, v21);
    v6 = (TESObjectCELL *)v22;
    if ( v22 )
    {
      key = (Data *)v22[1].key;
      if ( key )
        (*(void (__stdcall **)(void *))(key->errorState + 8))(v22[1].key);
      refID = v6->members.super.refID;
      if ( refID )
        (*(void (__stdcall **)(UInt32))(*(_DWORD *)refID + 8))(v6->members.super.refID);
      FormHeapFree((unsigned int)v6);
    }
  }
  v9 = *(this + 8);
  v10 = 0;
  if ( v9 )
  {
    v11 = (_DWORD *)*(this + 9);
    while ( !*v11 )
    {
      ++v10;
      ++v11;
      if ( v10 >= v9 )
        goto LABEL_18;
    }
    result = *(NiTMap_Entry_TESCELL **)(*(this + 9) + 4 * v10);
  }
  else
  {
LABEL_18:
    result = 0;
  }
  v20 = result;
  if ( result )
  {
    do
    {
      sub_452600((NiTMap_TESCELL *)(this + 7), &v20, (void **)&v21, (TESObjectCELL **)&v22);
      v13 = v20 == 0;
      result = v22;
      v22->data = 0;
    }
    while ( !v13 );
  }
  for ( i = 0; i < *((unsigned __int16 *)this + 0x1A); *(_DWORD *)(*((_DWORD *)&result->next + i++) + 8) = 0 )
  {
    if ( i < *((unsigned __int16 *)this + 0x1B) )
    {
      v15 = *(this + 0xC);
      v16 = *(_DWORD *)(v15 + 4 * i);
      *(_DWORD *)(v15 + 4 * i) = 0;
      if ( v16 )
        --*((_WORD *)this + 0x1C);
      v17 = *((_WORD *)this + 0x1B);
      if ( i == v17 - 1 )
        *((_WORD *)this + 0x1B) = v17 - 1;
      if ( v16 )
      {
        v18 = *(_DWORD *)(v16 + 0x10);
        if ( v18 )
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v18 + 8))(*(_DWORD *)(v16 + 0x10));
        v19 = *(_DWORD *)(v16 + 0xC);
        if ( v19 )
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v19 + 8))(*(_DWORD *)(v16 + 0xC));
        FormHeapFree(v16);
      }
    }
    result = (NiTMap_Entry_TESCELL *)*(this + 0x10);
  }
  return result;
}
