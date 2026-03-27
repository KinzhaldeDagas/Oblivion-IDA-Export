void __usercall TES_destr(TES *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *unk88; // ecx
  unsigned int waterManager; // edi
  unsigned int waterNodeData; // edi
  UInt32 v8; // edi
  _DWORD *ShadowSceneNode; // eax
  _DWORD *sound; // ecx
  TESObjectCELL *currentInteriorCell; // edi
  QueuedTreeBillboard *v12; // edi
  IOManager *v13; // ecx
  bool v14; // zf
  GridCellArray *gridCellArray; // ecx
  GridDistantArray *gridDistantArray; // ecx
  TESSaveLoad *v17; // edi
  CHAR **v18; // ecx
  unsigned int v19; // edi
  UInt32 v20; // edi
  NiSourceTexture *v21; // edi
  LONG (__stdcall *v22)(volatile LONG *); // ebp
  NiSourceTexture *v23; // edi
  NiSourceTexture *v24; // esi

  a1->__vftable = (TES_vtbl *)&TES::`vftable';
  sub_4B26D0();
  *(_BYTE *)(TESDataHandler + 0xCD4) = 1;
  sub_4BE910();
  sub_4BDD40();
  ((void (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Set3D)(
    TESDataHandler_g_PlayerRef,
    0);
  *(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x185) = 0;
  unk88 = (_DWORD *)a1->unk88;
  if ( unk88 )
  {
    BSSimpleList_Clear(unk88);
    FormHeapFree(a1->unk88);
  }
  a1->fogProperty = 0;
  a1->niDirectionalLight = 0;
  a1->sky = 0;
  sub_677A00((int)&ActorProcessManager_ptr);
  waterManager = (unsigned int)a1->waterManager;
  if ( waterManager )
  {
    sub_49CFB0((int *)a1->waterManager, a2, a3, a4);
    FormHeapFree(waterManager);
  }
  waterNodeData = (unsigned int)a1->waterNodeData;
  if ( waterNodeData )
  {
    sub_49E500((_DWORD *)a1->waterNodeData);
    FormHeapFree(waterNodeData);
  }
  a1->waterNodeData = 0;
  if ( a1->unk7C )
  {
    do
    {
      v8 = *(_DWORD *)(a1->unk7C + 4);
      FormHeapFree(a1->unk7C);
      a1->unk7C = v8;
    }
    while ( v8 );
  }
  a1->unk78 = 0;
  sub_4425D0(a1);
  ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
  sub_7C7E50(ShadowSceneNode);
  sound = OSGlobals->sound;
  if ( sound )
    sub_6AC210(sound);
  sub_43FFF0(a1, a2, a3, a4, 0, 0);
  currentInteriorCell = a1->currentInteriorCell;
  if ( currentInteriorCell )
  {
    if ( !TES::IsInteriorCellPreloaded(a1, a1->currentInteriorCell) )
      sub_447BA0(a2, a3, a4, currentInteriorCell);
  }
  sub_43FE30(a1, a2, a3, a4, 0);
  a1->currentInteriorCell = 0;
  a1->unkA8 = 1;
  sub_4418A0((unsigned int *)a1);
  sub_440F20(a1);
  sub_54FE20();
  sub_55E390(0);
  sub_4464F0((char *)a1);
  sub_443C70(a1);
  TESDataHandler_Clear((_BYTE *)TESDataHandler);
  *(_BYTE *)(TESDataHandler + 0xCD4) = 1;
  v12 = ModelLoaderPtr;
  if ( ModelLoaderPtr )
  {
    ModelLoader_destr((ModelLoader *)ModelLoaderPtr);
    FormHeapFree((unsigned int)v12);
  }
  v13 = ioManager;
  v14 = ioManager == 0;
  ModelLoaderPtr = 0;
  if ( !v14 )
    (*((void (__thiscall **)(IOManager *, int))v13->vtbl + 0x14))(v13, 1);
  ioManager = 0;
  gridCellArray = a1->gridCellArray;
  if ( gridCellArray )
    ((void (__thiscall *)(GridCellArray *, int))gridCellArray->Fn_00)(gridCellArray, 1);
  gridDistantArray = a1->gridDistantArray;
  if ( gridDistantArray )
    (**(void (__thiscall ***)(GridDistantArray *, int))gridDistantArray)(gridDistantArray, 1);
  v17 = SaveLoad_CurrentSavegame;
  if ( SaveLoad_CurrentSavegame )
  {
    sub_453250((void (__stdcall ****)(signed int))SaveLoad_CurrentSavegame);
    FormHeapFree((unsigned int)v17);
  }
  v18 = (CHAR **)TESDataHandler;
  v14 = TESDataHandler == 0;
  SaveLoad_CurrentSavegame = 0;
  v19 = (unsigned int)v18;
  if ( !v14 )
  {
    TESDataHandler_destr(v18);
    FormHeapFree(v19);
  }
  TESDataHandler = 0;
  FormHeapFree((unsigned int)a1->interiorCellBufferArray);
  FormHeapFree((unsigned int)a1->exteriorCellBufferArray);
  if ( a1->unk7C )
  {
    do
    {
      v20 = *(_DWORD *)(a1->unk7C + 4);
      FormHeapFree(a1->unk7C);
      a1->unk7C = v20;
    }
    while ( v20 );
  }
  a1->unk78 = 0;
  sub_49B6C0();
  sub_533CD0();
  sub_4B2C80();
  sub_4A08E0();
  v21 = a1->bloodDecals[2];
  v22 = InterlockedDecrement;
  if ( v21 )
  {
    if ( !v22((volatile LONG *)&v21->members) )
      v21->vtbl->super.super.super.Destructor((NiRefObject *)v21, 1);
  }
  v23 = a1->bloodDecals[1];
  if ( v23 )
  {
    if ( !v22((volatile LONG *)&v23->members) )
      v23->vtbl->super.super.super.Destructor((NiRefObject *)v23, 1);
  }
  v24 = a1->bloodDecals[0];
  if ( v24 )
  {
    if ( !v22((volatile LONG *)&v24->members) )
      v24->vtbl->super.super.super.Destructor((NiRefObject *)v24, 1);
  }
}
