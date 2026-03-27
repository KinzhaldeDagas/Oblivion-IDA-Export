void __thiscall sub_77D980(NiGeometryGroup *this)
{
  unsigned int v1; // edx
  NiTMap_TESCELL *v2; // esi
  unsigned int v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // ecx
  NiTMap_Entry_TESCELL *v6; // eax
  TESObjectCELL *v7; // edi
  NiTMap_Entry_TESCELL *v8; // [esp+8h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-8h] BYREF
  TESObjectCELL *v10; // [esp+10h] [ebp-4h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = (NiTMap_TESCELL *)(this + 1);
  v3 = 0;
  if ( v1 )
  {
    v4 = *((_DWORD **)this + 5);
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
  v8 = v6;
  while ( v8 )
  {
    sub_452600(v2, &v8, (void **)&v9, &v10);
    NiTMap_RemoveAt(v2, v9);
    v7 = v10;
    if ( v10 )
    {
      sub_77D490(v10);
      FormHeapFree((unsigned int)v7);
    }
  }
}
