void __usercall TES_destr(TES *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *unk88; // ecx
  WaterManager *waterManager; // edi
  WaterPlaneData *waterNodeData; // edi
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

  a1->__vftable = (TES_vtbl *)&TES::`vftable'; /*0x44671b*/
  sub_4B26D0(); /*0x446729*/
  *(_BYTE *)(MEMORY[0xB33A98] + 0xCD4) = 1; /*0x446733*/
  sub_4BE910(); /*0x44673a*/
  sub_4BDD40(); /*0x44673f*/
  ((void (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Set3D)(reference, 0); /*0x446755*/
  *(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + LODWORD(OB_ShaderConstantStorage_010201A0[0x18FF4])) /*0x446767*/
           + 0x185) = 0;
  unk88 = (_DWORD *)a1->unk88; /*0x44676d*/
  if ( unk88 ) /*0x446775*/
  {
    BSSimpleList_Clear(unk88); /*0x446777*/
    FormHeapFree(a1->unk88); /*0x446783*/
  }
  a1->fogProperty = 0; /*0x446790*/
  a1->niDirectionalLight = 0; /*0x446793*/
  a1->sky = 0; /*0x446796*/
  sub_677A00((int)&qword_B3BB2C[0x75]); /*0x446799*/
  waterManager = a1->waterManager; /*0x44679e*/
  if ( waterManager ) /*0x4467a3*/
  {
    sub_49CFB0((int *)a1->waterManager); /*0x4467a7*/
    FormHeapFree((unsigned int)waterManager); /*0x4467ad*/
  }
  waterNodeData = a1->waterNodeData; /*0x4467b5*/
  if ( waterNodeData ) /*0x4467ba*/
  {
    sub_49E500((_DWORD *)a1->waterNodeData); /*0x4467be*/
    FormHeapFree((unsigned int)waterNodeData); /*0x4467c4*/
  }
  a1->waterNodeData = 0; /*0x4467cc*/
  if ( a1->unk7C ) /*0x4467cf*/
  {
    do /*0x4467e8*/
    {
      v8 = *(_DWORD *)(a1->unk7C + 4); /*0x4467d7*/
      FormHeapFree(a1->unk7C); /*0x4467db*/
      a1->unk7C = v8; /*0x4467e5*/
    }
    while ( v8 ); /*0x4467e8*/
  }
  a1->unk78 = 0; /*0x4467ec*/
  sub_4425D0(a1); /*0x4467ef*/
  ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x4467f5*/
  ShadowSceneNode_TeardownLightLists(ShadowSceneNode);// TES destruction tears down the native full and active shadow-light lists. /*0x4467ff*/
  sound = MEMORY[0xB33398]->sound; /*0x44680a*/
  if ( sound ) /*0x44680f*/
    sub_6AC210(sound); /*0x446811*/
  sub_43FFF0(a1, a2, a3, a4, 0, 0); /*0x44681a*/
  currentInteriorCell = a1->currentInteriorCell; /*0x44681f*/
  if ( currentInteriorCell ) /*0x446824*/
  {
    if ( !TES::IsInteriorCellPreloaded(a1, a1->currentInteriorCell) ) /*0x446829*/
      sub_447BA0(a2, a3, a4, currentInteriorCell); /*0x446839*/
  }
  sub_43FE30(a1, a2, a3, a4, 0); /*0x446841*/
  a1->currentInteriorCell = 0; /*0x446848*/
  a1->unkA8 = 1; /*0x44684b*/
  sub_4418A0((unsigned int *)a1); /*0x446852*/
  sub_440F20(a1); /*0x446859*/
  sub_54FE20(); /*0x44685e*/
  BSTreeManager__ClearModelCache(0); /*0x446864*/
  sub_4464F0((char *)a1); /*0x44686e*/
  sub_443C70(a1); /*0x446875*/
  TESDataHandler_Clear((_BYTE *)MEMORY[0xB33A98]); /*0x446880*/
  *(_BYTE *)(MEMORY[0xB33A98] + 0xCD4) = 1; /*0x44688b*/
  v12 = MEMORY[0xB33A1C]; /*0x44689a*/
  if ( MEMORY[0xB33A1C] ) /*0x446892*/
  {
    ModelLoader_destr((ModelLoader *)MEMORY[0xB33A1C]); /*0x44689e*/
    FormHeapFree((unsigned int)v12); /*0x4468a4*/
  }
  v13 = MEMORY[0xB33A10]; /*0x4468ac*/
  v14 = MEMORY[0xB33A10] == 0; /*0x4468b2*/
  MEMORY[0xB33A1C] = 0; /*0x4468b4*/
  if ( !v14 ) /*0x4468ba*/
    (*((void (__thiscall **)(IOManager *, int))v13->vtbl + 0x14))(v13, 1); /*0x4468c3*/
  MEMORY[0xB33A10] = 0; /*0x4468c5*/
  gridCellArray = a1->gridCellArray; /*0x4468cb*/
  if ( gridCellArray ) /*0x4468d0*/
    ((void (__thiscall *)(GridCellArray *, int))gridCellArray->Fn_00)(gridCellArray, 1); /*0x4468d8*/
  gridDistantArray = a1->gridDistantArray; /*0x4468da*/
  if ( gridDistantArray ) /*0x4468df*/
    (**(void (__thiscall ***)(GridDistantArray *, int))gridDistantArray)(gridDistantArray, 1); /*0x4468e7*/
  v17 = g_TESSaveLoadGame; /*0x4468f1*/
  if ( g_TESSaveLoadGame ) /*0x4468e9*/
  {
    sub_453250((void (__stdcall ****)(signed int))g_TESSaveLoadGame); /*0x4468f5*/
    FormHeapFree((unsigned int)v17); /*0x4468fb*/
  }
  v18 = (CHAR **)MEMORY[0xB33A98]; /*0x446903*/
  v14 = MEMORY[0xB33A98] == 0; /*0x446909*/
  g_TESSaveLoadGame = 0; /*0x44690b*/
  v19 = (unsigned int)v18; /*0x446911*/
  if ( !v14 ) /*0x446913*/
  {
    TESDataHandler_destr(v18); /*0x446915*/
    FormHeapFree(v19); /*0x44691b*/
  }
  MEMORY[0xB33A98] = 0; /*0x446923*/
  FormHeapFree((unsigned int)a1->interiorCellBufferArray); /*0x44692d*/
  FormHeapFree((unsigned int)a1->exteriorCellBufferArray); /*0x446936*/
  if ( a1->unk7C ) /*0x44693e*/
  {
    do /*0x446957*/
    {
      v20 = *(_DWORD *)(a1->unk7C + 4); /*0x446946*/
      FormHeapFree(a1->unk7C); /*0x44694a*/
      a1->unk7C = v20; /*0x446954*/
    }
    while ( v20 ); /*0x446957*/
  }
  a1->unk78 = 0; /*0x446959*/
  sub_49B6C0(); /*0x44695c*/
  sub_533CD0(); /*0x446961*/
  sub_4B2C80(); /*0x446966*/
  sub_4A08E0(); /*0x44696b*/
  v21 = a1->bloodDecals[2]; /*0x446970*/
  v22 = InterlockedDecrement; /*0x446978*/
  if ( v21 ) /*0x446983*/
  {
    if ( !v22((volatile LONG *)&v21->members) ) /*0x446989*/
      v21->vtbl->super.super.super.Destructor((NiRefObject *)v21, 1); /*0x44699b*/
  }
  v23 = a1->bloodDecals[1]; /*0x44699d*/
  if ( v23 ) /*0x4469a9*/
  {
    if ( !v22((volatile LONG *)&v23->members) ) /*0x4469af*/
      v23->vtbl->super.super.super.Destructor((NiRefObject *)v23, 1); /*0x4469c1*/
  }
  v24 = a1->bloodDecals[0]; /*0x4469c3*/
  if ( v24 ) /*0x4469d3*/
  {
    if ( !v22((volatile LONG *)&v24->members) ) /*0x4469d9*/
      v24->vtbl->super.super.super.Destructor((NiRefObject *)v24, 1); /*0x4469eb*/
  }
}
