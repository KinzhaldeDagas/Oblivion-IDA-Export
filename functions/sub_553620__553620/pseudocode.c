Ni2DBuffer *__cdecl sub_553620(char *a1, char *ArgList, void *a3, char *a4, char a5, char a6)
{
  Ni2DBuffer *v6; // edi
  BSFaceGenModelMap *v7; // esi
  int v9; // eax
  BSFaceGenModelMap *v10; // eax
  bool v11; // zf
  int v12; // ecx
  int v13; // esi
  int v14; // ecx
  UInt32 v15; // esi
  BSFaceGenModel *v16; // eax
  Ni2DBuffer *v17; // eax
  char *v18; // esi
  UInt32 v19; // [esp+14h] [ebp-10h] BYREF
  unsigned int v20; // [esp+20h] [ebp-4h]

  v6 = 0; /*0x553645*/
  v7 = 0; /*0x553647*/
  v19 = 0; /*0x553649*/
  v20 = 0; /*0x553657*/
  if ( !a1 && !a4 ) /*0x55365f*/
    return 0; /*0x553676*/
  v9 = g_faceGenManager; /*0x553677*/
  if ( !g_faceGenManager ) /*0x553677*/
  {
    FaceGenManager_EnsureInitialized(); /*0x553680*/
    v9 = g_faceGenManager; /*0x553685*/
  }
  if ( !*(_DWORD *)(v9 + 0xDAC) ) /*0x55368a*/
  {
    v10 = (BSFaceGenModelMap *)FormHeapAlloc(0x20u); /*0x553698*/
    LOBYTE(v20) = 1; /*0x5536a6*/
    if ( v10 ) /*0x5536ab*/
      v7 = BSFaceGenModelMap::BSFaceGenModelMap(v10); /*0x5536b4*/
    v11 = g_faceGenManager == 0; /*0x5536b6*/
    LOBYTE(v20) = 0; /*0x5536bd*/
    if ( v11 ) /*0x5536c2*/
      FaceGenManager_EnsureInitialized(); /*0x5536c4*/
    *(_DWORD *)(g_faceGenManager + 0xDAC) = v7; /*0x5536ce*/
    v12 = *(_DWORD *)(g_faceGenManager + 0xDAC); /*0x5536da*/
    *(_DWORD *)(v12 + 0x18) = dword_B120EC; /*0x5536e8*/
    sub_5506B0((char *)v12, 0); /*0x5536eb*/
    v13 = dword_B120F4; /*0x5536f7*/
    if ( !g_faceGenManager ) /*0x5536f0*/
      FaceGenManager_EnsureInitialized(); /*0x5536ff*/
    v14 = *(_DWORD *)(g_faceGenManager + 0xDAC); /*0x553709*/
    *(_DWORD *)(v14 + 0x1C) = v13; /*0x553711*/
    sub_5506B0((char *)v14, 0); /*0x553714*/
    v9 = g_faceGenManager; /*0x553719*/
  }
  if ( a1 ) /*0x553720*/
  {
    if ( !v9 ) /*0x553724*/
    {
      FaceGenManager_EnsureInitialized(); /*0x553726*/
      v9 = g_faceGenManager; /*0x55372b*/
    }
    if ( sub_5515B0(*(char **)(v9 + 0xDAC), (int)a1, (int *)&v19) ) /*0x55373c*/
    {
      v15 = v19; /*0x553749*/
      if ( !*(_DWORD *)(v19 + 8) ) /*0x55374d*/
        sub_559B50((_DWORD *)v19, a1, ArgList, a3, a4, a6); /*0x553766*/
LABEL_20:
      v20 = 0xFFFFFFFF; /*0x55376b*/
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x553777*/
        (**(void (__thiscall ***)(UInt32, int))v15)(v15, 1); /*0x553789*/
      return (Ni2DBuffer *)v15; /*0x5537a0*/
    }
LABEL_29:
    v6 = (Ni2DBuffer *)v19; /*0x5537e9*/
    goto LABEL_30; /*0x5537e9*/
  }
  if ( a4 ) /*0x5537a3*/
  {
    if ( !v9 ) /*0x5537a7*/
    {
      FaceGenManager_EnsureInitialized(); /*0x5537a9*/
      v9 = g_faceGenManager; /*0x5537ae*/
    }
    if ( sub_5515B0(*(char **)(v9 + 0xDAC), (int)a4, (int *)&v19) ) /*0x5537bf*/
    {
      v15 = v19; /*0x5537c8*/
      if ( !*(_DWORD *)(v19 + 8) ) /*0x5537cc*/
        sub_559B50((_DWORD *)v19, 0, ArgList, a3, a4, a6); /*0x5537e4*/
      goto LABEL_20; /*0x5537e4*/
    }
    goto LABEL_29; /*0x5537c6*/
  }
LABEL_30:
  if ( a5 ) /*0x5537f2*/
  {
    v16 = (BSFaceGenModel *)FormHeapAlloc(0x1Cu); /*0x5537fa*/
    LOBYTE(v20) = 2; /*0x553808*/
    if ( v16 ) /*0x55380d*/
      v17 = (Ni2DBuffer *)BSFaceGenModel::BSFaceGenModel(v16); /*0x553811*/
    else
      v17 = 0; /*0x553818*/
    LOBYTE(v20) = 0; /*0x55381f*/
    NiSmartPointer_Set__((Ni2DBuffer **)&v19, v17); /*0x553824*/
    v6 = (Ni2DBuffer *)v19; /*0x553835*/
    if ( sub_559B50((_DWORD *)v19, a1, ArgList, a3, a4, a6) ) /*0x553840*/
    {
      v18 = a1; /*0x55384b*/
      if ( !a1 ) /*0x55384d*/
        v18 = a4; /*0x55384f*/
      if ( !g_faceGenManager ) /*0x553851*/
        FaceGenManager_EnsureInitialized(); /*0x55385a*/
      sub_551450(*(char **)(g_faceGenManager + 0xDAC), (int)v18, v6); /*0x55386c*/
    }
    else if ( v6 ) /*0x553875*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->members) ) /*0x55387b*/
        (*(void (__thiscall **)(Ni2DBuffer *, int))v6->__vftable)(v6, 1); /*0x55388d*/
      v6 = 0; /*0x55388f*/
    }
  }
  v20 = 0xFFFFFFFF; /*0x553893*/
  if ( v6 ) /*0x55389b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v6->members) ) /*0x5538a1*/
      (*(void (__thiscall **)(Ni2DBuffer *, int))v6->__vftable)(v6, 1); /*0x5538b3*/
  }
  return v6; /*0x553663*/
}
