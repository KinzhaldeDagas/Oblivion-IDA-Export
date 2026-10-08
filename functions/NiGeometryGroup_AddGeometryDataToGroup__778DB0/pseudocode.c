// MoonSugarEffect decode: NiGeometryGroup::AddGeometryDataToGroup. For hardware-skinned geometry, adds each partition object when the partition is compatible; for non-skinned geometry it only calls AddObject when BuffData is missing. Existing BuffData returns false, so this is packing/registration ownership rather than draw ownership.
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

  if ( a3 && a4 && (v6 = *((_DWORD *)a3 + 3)) != 0 ) /*0x778dc5*/
  {
    v7 = *(_DWORD **)(v6 + 0xC); /*0x778dc8*/
    if ( v7[0xA] ) /*0x778dcb*/
    {
      return 0; /*0x778dd2*/
    }
    else
    {
      v9 = *(_DWORD *)(v6 + 8); /*0x778dd8*/
      if ( v9 ) /*0x778ddd*/
      {
        v10 = v9; /*0x778de5*/
        do /*0x778dfd*/
        {
          a1->vtbl->AddObject(a1, a2, a3, v7); /*0x778df5*/
          v7 += 0xB; /*0x778df7*/
          --v10; /*0x778dfa*/
        }
        while ( v10 ); /*0x778dfd*/
      }
      return 1; /*0x778e02*/
    }
  }
  else if ( a2->member.BuffData ) /*0x778e0c*/
  {
    return 0; /*0x778e12*/
  }
  else
  {
    a1->vtbl->AddObject(a1, a2, a3, 0); /*0x778e25*/
    return 1; /*0x778e27*/
  }
}
