char __cdecl sub_50FD10(int a1, int a2, TESObjectREFR *a3)
{
  unsigned int v3; // esi
  LPCSTR *v5; // ebp
  const char *v6; // ecx
  const CHAR *window; // edi
  const CHAR *procInstance; // ebx
  const CHAR *v9; // eax
  HINSTANCE *v10; // eax
  PlayerCharacter *v11; // ecx
  UInt8 isThirdPerson; // al
  const char *v13; // edx
  NiNode *NodeByPerspective; // eax
  NiNode *inventoryPC; // eax
  LPCSTR *v16; // ebp
  const CHAR *v17; // edi
  const CHAR *v18; // ebx
  const CHAR *v19; // eax
  LPCSTR *v20; // eax
  HINSTANCE *v21; // eax
  const char *v23; // [esp-14h] [ebp-38h]
  int v24; // [esp-8h] [ebp-2Ch]
  int v25; // [esp-4h] [ebp-28h]
  char *Name; // [esp+30h] [ebp+Ch]

  if ( unk_B3339C ) /*0x50fd35*/
  {
    v3 = unk_B3339C; /*0x50fd3f*/
    sub_494F30((unsigned int *)unk_B3339C); /*0x50fd41*/
    FormHeapFree(v3); /*0x50fd47*/
  }
  *(_DWORD *)&MEMORY[0xB33E90][0x110C] = sub_494F90; /*0x50fd55*/
  if ( a3 && a3->vtbl->GetNiNode(a3) ) /*0x50fd6f*/
  {
    Name = TESObjectREFR_GetName(a3); /*0x50fd86*/
    if ( a3 == (TESObjectREFR *)reference ) /*0x50fd8c*/
    {
      v5 = (LPCSTR *)FormHeapAlloc(0x20u); /*0x50fd97*/
      if ( v5 ) /*0x50fdaa*/
      {
        v6 = "Player 3rd Person"; /*0x50fdb8*/
        if ( !reference->isThirdPerson ) /*0x50fdb1*/
          v6 = "Player 1st Person"; /*0x50fdbf*/
        window = (const CHAR *)MEMORY[0xB33398]->window; /*0x50fdcb*/
        procInstance = (const CHAR *)MEMORY[0xB33398]->procInstance; /*0x50fdce*/
        v23 = v6; /*0x50fdeb*/
        v9 = (const CHAR *)a3->vtbl->GetNiNode(a3); /*0x50fdee*/
        v10 = ShowDetectorWindow(v5, procInstance, window, v9, v23, 0x80000000, 0x80000000, 0x320, 0x258); /*0x50fdf5*/
      }
      else
      {
        v10 = 0; /*0x50fdfc*/
      }
      v11 = reference; /*0x50fdfe*/
      unk_B3339C = (int)v10; /*0x50fe04*/
      isThirdPerson = v11->isThirdPerson; /*0x50fe09*/
      v13 = "Player 1st Person"; /*0x50fe19*/
      if ( !isThirdPerson ) /*0x50fe1e*/
        v13 = "Player 3rd Person"; /*0x50fe20*/
      v25 = (int)v13; /*0x50fe25*/
      NodeByPerspective = PlayerCharacter_GetNodeByPerspective(v11, isThirdPerson); /*0x50fe2f*/
      sub_496C00(unk_B3339C, (int)NodeByPerspective, v25); /*0x50fe3b*/
      inventoryPC = reference->inventoryPC; /*0x50fe45*/
      if ( inventoryPC ) /*0x50fe4d*/
        sub_496C00(unk_B3339C, (int)inventoryPC, (int)"Player Inventory Menu"); /*0x50fe58*/
    }
    else
    {
      v16 = (LPCSTR *)FormHeapAlloc(0x20u); /*0x50fe62*/
      if ( v16 ) /*0x50fe75*/
      {
        v17 = (const CHAR *)MEMORY[0xB33398]->window; /*0x50fe82*/
        v18 = (const CHAR *)MEMORY[0xB33398]->procInstance; /*0x50fe85*/
        v19 = (const CHAR *)a3->vtbl->GetNiNode(a3); /*0x50fea5*/
        unk_B3339C = (int)ShowDetectorWindow(v16, v18, v17, v19, Name, 0x80000000, 0x80000000, 0x320, 0x258); /*0x50feb1*/
      }
      else
      {
        unk_B3339C = 0; /*0x50febd*/
      }
    }
  }
  else
  {
    v20 = (LPCSTR *)FormHeapAlloc(0x20u); /*0x50fec9*/
    if ( v20 ) /*0x50fedf*/
      v21 = ShowDetectorWindow( /*0x50ff11*/
              v20,
              (const CHAR *)MEMORY[0xB33398]->procInstance,
              (const CHAR *)MEMORY[0xB33398]->window,
              (const CHAR *)g_WorldSceneReceiverRoot,
              "Oblivion World Scene Graph",
              0x80000000,
              0x80000000,
              0x320,
              0x258);
    else
      v21 = 0; /*0x50ff18*/
    v24 = MEMORY[0xB333D0]; /*0x50ff25*/
    unk_B3339C = (int)v21; /*0x50ff30*/
    sub_496C00((int)v21, v24, (int)"Oblivion Interface Scene Graph"); /*0x50ff35*/
    sub_496C00(unk_B3339C, MEMORY[0xB333D4], (int)"Oblivion Interface 3D Object Scene Graph"); /*0x50ff4b*/
  }
  return 1; /*0x50ff52*/
}
