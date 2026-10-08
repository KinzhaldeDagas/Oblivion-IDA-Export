BSTask **__thiscall ModelLoader_constr(BSTask **this)
{
  BSTask *v2; // eax
  BSTask *v3; // edi
  LockFreeMap *v4; // eax
  BSTask *v5; // edi
  LockFreeMap *v6; // eax
  LockFreeMap *v7; // eax
  LockFreeMap *v8; // eax
  BSTask *v9; // eax
  LockFreeMap *v10; // eax
  BSTask *v11; // eax
  LockFreeQueue_NiIOTask *v12; // eax
  BSTask *v13; // eax
  BackgroundCloneThread *v14; // eax
  BackgroundCloneThread *v15; // eax

  v2 = (BSTask *)FormHeapAlloc(0x1Cu); /*0x43e978*/
  v3 = v2; /*0x43e97d*/
  if ( v2 ) /*0x43e990*/
  {
    LockFreeMap<char const *,Model *>::LockFreeMap<char const *,Model *>(v2, 4u, 0x3F1, 0xC); /*0x43e99d*/
    v3->vtbl = &LockFreeCaseInsensitiveStringMap<Model *>::`vftable'; /*0x43e9a2*/
  }
  else
  {
    v3 = 0; /*0x43e9aa*/
  }
  *this = v3; /*0x43e9b5*/
  v4 = (LockFreeMap *)FormHeapAlloc(0x1Cu); /*0x43e9b7*/
  v5 = (BSTask *)v4; /*0x43e9bc*/
  if ( v4 ) /*0x43e9cf*/
  {
    LockFreeMap<char const *,KFModel *>::LockFreeMap<char const *,KFModel *>(v4, 4u, 0x3F1u, 0xCu); /*0x43e9dc*/
    v5->vtbl = &LockFreeCaseInsensitiveStringMap<KFModel *>::`vftable'; /*0x43e9e1*/
  }
  else
  {
    v5 = 0; /*0x43e9e9*/
  }
  *(this + 1) = v5; /*0x43e9f1*/
  v6 = (LockFreeMap *)FormHeapAlloc(0x1Cu); /*0x43e9f4*/
  if ( v6 ) /*0x43ea0a*/
    v7 = sub_438930(v6, 3u, 0x25u, 0xCu); /*0x43ea14*/
  else
    v7 = 0; /*0x43ea1b*/
  *(this + 2) = (BSTask *)v7; /*0x43ea23*/
  v8 = (LockFreeMap *)FormHeapAlloc(0x1Cu); /*0x43ea26*/
  if ( v8 ) /*0x43ea3c*/
    v9 = (BSTask *)sub_438A30(v8, 3u, 0x25, 0xC); /*0x43ea46*/
  else
    v9 = 0; /*0x43ea4d*/
  *(this + 3) = v9; /*0x43ea55*/
  v10 = (LockFreeMap *)FormHeapAlloc(0x1Cu); /*0x43ea58*/
  if ( v10 ) /*0x43ea6e*/
    v11 = (BSTask *)sub_438B20(v10, 3u, 0x25, 0xC); /*0x43ea78*/
  else
    v11 = 0; /*0x43ea7f*/
  *(this + 4) = v11; /*0x43ea87*/
  v12 = (LockFreeQueue_NiIOTask *)FormHeapAlloc(0x1Cu); /*0x43ea8a*/
  if ( v12 ) /*0x43eaa0*/
    v13 = (BSTask *)sub_438CF0(v12, 3u, 8u); /*0x43eaa8*/
  else
    v13 = 0; /*0x43eaaf*/
  *(this + 5) = v13; /*0x43eab7*/
  v14 = (BackgroundCloneThread *)FormHeapAlloc(0x2Cu); /*0x43eaba*/
  if ( v14 ) /*0x43ead0*/
    v15 = BackgroundCloneThread::BackgroundCloneThread(v14, 3u); /*0x43ead6*/
  else
    v15 = 0; /*0x43eadd*/
  *(this + 6) = (BSTask *)v15; /*0x43eae5*/
  BSTaskThread::Resume((PULONG *)v15); /*0x43eae8*/
  return this; /*0x43eaef*/
}
