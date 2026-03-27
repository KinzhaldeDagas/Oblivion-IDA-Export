int __thiscall sub_4E5280(_DWORD *this)
{
  unsigned int v1; // edx
  NiTMap_TESCELL *v2; // ebx
  unsigned int v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  NiTMap_Entry_TESCELL *v6; // eax
  TESObjectCELL *v7; // esi
  int v8; // edi
  TESObjectCELL *v10; // [esp+8h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v11; // [esp+Ch] [ebp-8h] BYREF
  void *v12; // [esp+10h] [ebp-4h] BYREF

  v1 = *(this + 0x12);
  v2 = (NiTMap_TESCELL *)(this + 0x11);
  v3 = 0;
  if ( v1 )
  {
    v4 = (_DWORD *)*(this + 0x13);
    v5 = v4;
    while ( !*v5 )
    {
      ++v3;
      ++v5;
      if ( v3 >= v1 )
        goto LABEL_5;
    }
    v6 = (NiTMap_Entry_TESCELL *)v4[v3];
  }
  else
  {
LABEL_5:
    v6 = 0;
  }
  v11 = v6;
  while ( v11 )
  {
    v10 = 0;
    sub_452600(v2, &v11, &v12, &v10);
    v7 = v10;
    if ( v10 )
    {
      if ( *(_DWORD *)&v10->members.super.type )
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
  return NiTMap_Clear(v2);
}
