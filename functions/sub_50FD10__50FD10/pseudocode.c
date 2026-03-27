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
  char isThirdPerson; // al
  const char *v13; // edx
  NiNode *PlayerNode; // eax
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

  if ( dword_B3339C )
  {
    v3 = dword_B3339C;
    sub_494F30((unsigned int *)dword_B3339C);
    FormHeapFree(v3);
  }
  dword_B34F9C = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))sub_494F90;
  if ( a3 && a3->vtbl->GetNiNode(a3) )
  {
    Name = TESObjectREFR_GetName(a3);
    if ( a3 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      v5 = (LPCSTR *)FormHeapAlloc(0x20u);
      if ( v5 )
      {
        v6 = "Player 3rd Person";
        if ( !TESDataHandler_g_PlayerRef->isThirdPerson )
          v6 = "Player 1st Person";
        window = (const CHAR *)OSGlobals->window;
        procInstance = (const CHAR *)OSGlobals->procInstance;
        v23 = v6;
        v9 = (const CHAR *)a3->vtbl->GetNiNode(a3);
        v10 = ShowDetectorWindow(v5, procInstance, window, v9, v23, 0x80000000, 0x80000000, 0x320, 0x258);
      }
      else
      {
        v10 = 0;
      }
      v11 = TESDataHandler_g_PlayerRef;
      dword_B3339C = (int)v10;
      isThirdPerson = v11->isThirdPerson;
      v13 = "Player 1st Person";
      if ( !isThirdPerson )
        v13 = "Player 3rd Person";
      v25 = (int)v13;
      PlayerNode = PlayerCharacter_GetPlayerNode(v11, isThirdPerson);
      sub_496C00(dword_B3339C, (int)PlayerNode, v25);
      inventoryPC = TESDataHandler_g_PlayerRef->inventoryPC;
      if ( inventoryPC )
        sub_496C00(dword_B3339C, (int)inventoryPC, (int)"Player Inventory Menu");
    }
    else
    {
      v16 = (LPCSTR *)FormHeapAlloc(0x20u);
      if ( v16 )
      {
        v17 = (const CHAR *)OSGlobals->window;
        v18 = (const CHAR *)OSGlobals->procInstance;
        v19 = (const CHAR *)a3->vtbl->GetNiNode(a3);
        dword_B3339C = (int)ShowDetectorWindow(v16, v18, v17, v19, Name, 0x80000000, 0x80000000, 0x320, 0x258);
      }
      else
      {
        dword_B3339C = 0;
      }
    }
  }
  else
  {
    v20 = (LPCSTR *)FormHeapAlloc(0x20u);
    if ( v20 )
      v21 = ShowDetectorWindow(
              v20,
              (const CHAR *)OSGlobals->procInstance,
              (const CHAR *)OSGlobals->window,
              (const CHAR *)g_worldScenegraph,
              "Oblivion World Scene Graph",
              0x80000000,
              0x80000000,
              0x320,
              0x258);
    else
      v21 = 0;
    v24 = g_InterfaceScenegraph;
    dword_B3339C = (int)v21;
    sub_496C00((int)v21, v24, (int)"Oblivion Interface Scene Graph");
    sub_496C00(dword_B3339C, g_Interface3DScenegraph, (int)"Oblivion Interface 3D Object Scene Graph");
  }
  return 1;
}
