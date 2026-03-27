TESFormVtbl *__thiscall sub_6A9A10(_DWORD *this)
{
  int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // edx
  TESFormVtbl *result; // eax
  TESObjectCELL *v8; // ecx
  int v9; // eax
  TESObjectCELL *v10; // [esp+8h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v11; // [esp+Ch] [ebp-8h] BYREF
  void *v12; // [esp+10h] [ebp-4h] BYREF

  v2 = *(this + 0xC0);
  v3 = *(_DWORD *)(v2 + 4);
  v4 = 0;
  v10 = 0;
  if ( v3 )
  {
    v5 = *(_DWORD **)(v2 + 8);
    v6 = v5;
    while ( !*v6 )
    {
      ++v4;
      ++v6;
      if ( v4 >= v3 )
        goto LABEL_5;
    }
    result = (TESFormVtbl *)v5[v4];
  }
  else
  {
LABEL_5:
    result = 0;
  }
  v11 = (NiTMap_Entry_TESCELL *)result;
  if ( result )
  {
    do
    {
      sub_452600((NiTMap_TESCELL *)*(this + 0xC0), &v11, &v12, &v10);
      v8 = v10;
      result = v10->vtbl;
      if ( ((int)v10->vtbl & 0x10) != 0 )
      {
        v9 = (unsigned int)result | 0x200;
        v10->vtbl = (TESFormVtbl *)v9;
        if ( (v9 & 1) != 0 )
          result = (TESFormVtbl *)sub_6B7130((int)v8, 1);
        else
          result = (TESFormVtbl *)sub_6B6AA0(v8);
      }
    }
    while ( v11 );
  }
  return result;
}
