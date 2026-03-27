char __stdcall NiGeometryGroup::AddGeometryDataToGroup(
        NiGeometryGroup *a1,
        NiGeometryData *a2,
        NiSkinInstance *a3,
        char a4,
        int a5,
        int a6)
{
  int v6; // eax
  _DWORD *v7; // esi
  int v9; // eax
  int v10; // ebx

  if ( a3 && a4 && (v6 = *((_DWORD *)a3 + 3)) != 0 )
  {
    v7 = *(_DWORD **)(v6 + 0xC);
    if ( v7[0xA] )
    {
      return 0;
    }
    else
    {
      v9 = *(_DWORD *)(v6 + 8);
      if ( v9 )
      {
        v10 = v9;
        do
        {
          a1->vtbl->AddObject(a1, a2, a3, v7);
          v7 += 0xB;
          --v10;
        }
        while ( v10 );
      }
      return 1;
    }
  }
  else if ( a2->member.BuffData )
  {
    return 0;
  }
  else
  {
    a1->vtbl->AddObject(a1, a2, a3, 0);
    return 1;
  }
}
