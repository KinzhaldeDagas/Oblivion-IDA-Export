NiTMap_Entry_TESCELL *__thiscall sub_6AC330(_DWORD *this, int a2)
{
  int v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // ecx
  NiTMap_Entry_TESCELL *result; // eax
  int v9; // edi
  TESObjectCELL *v10; // [esp+8h] [ebp-8h] BYREF
  NiTMap_Entry_TESCELL *v11; // [esp+Ch] [ebp-4h] BYREF

  v3 = *(this + 0xC0);
  v4 = *(_DWORD *)(v3 + 4);
  v5 = 0;
  v10 = 0;
  if ( v4 )
  {
    v6 = *(_DWORD **)(v3 + 8);
    v7 = v6;
    while ( !*v7 )
    {
      ++v5;
      ++v7;
      if ( v5 >= v4 )
        goto LABEL_5;
    }
    result = (NiTMap_Entry_TESCELL *)v6[v5];
  }
  else
  {
LABEL_5:
    result = 0;
  }
  v11 = result;
  if ( result )
  {
    v9 = a2;
    do
    {
      result = (NiTMap_Entry_TESCELL *)sub_452600((NiTMap_TESCELL *)*(this + 0xC0), &v11, (void **)&a2, &v10);
      if ( (v9 & (int)v10->vtbl) != 0 )
      {
        sub_6B6AC0(v10);
        result = (NiTMap_Entry_TESCELL *)sub_6AA9C0(this, (int)&v10);
      }
    }
    while ( v11 );
  }
  return result;
}
