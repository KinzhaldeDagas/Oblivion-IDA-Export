BSTask **__thiscall ModelLoader_constr(BSTask **this)
{
  BSTask *v2; // eax
  BSTask *v3; // edi
  LockFreeMap *v4; // eax
  LockFreeMap *v5; // edi
  LockFreeMap *v6; // eax
  LockFreeMap *v7; // eax
  LockFreeMap *v8; // eax
  BSTask *v9; // eax
  LockFreeMap *v10; // eax
  BSTask *v11; // eax
  LockFreeQueue_NiIOTask *v12; // eax
  LockFreeQueue_NiIOTask *v13; // eax
  BackgroundCloneThread *v14; // eax
  BackgroundCloneThread *v15; // eax

  v2 = (BSTask *)FormHeapAlloc(0x1Cu);
  v3 = v2;
  if ( v2 )
  {
    LockFreeMap<char const *,Model *>::LockFreeMap<char const *,Model *>(v2, 4u, 0x3F1, 0xC);
    v3->vtbl = &LockFreeCaseInsensitiveStringMap<Model *>::`vftable';
  }
  else
  {
    v3 = 0;
  }
  *this = v3;
  v4 = (LockFreeMap *)FormHeapAlloc(0x1Cu);
  v5 = v4;
  if ( v4 )
  {
    LockFreeMap<char const *,KFModel *>::LockFreeMap<char const *,KFModel *>(v4, 4u, 0x3F1u, 0xCu);
    v5->vtbl = &LockFreeCaseInsensitiveStringMap<KFModel *>::`vftable';
  }
  else
  {
    v5 = 0;
  }
  *(this + 1) = (BSTask *)v5;
  v6 = (LockFreeMap *)FormHeapAlloc(0x1Cu);
  if ( v6 )
    v7 = sub_438930(v6, 3u, 0x25u, 0xCu);
  else
    v7 = 0;
  *(this + 2) = (BSTask *)v7;
  v8 = (LockFreeMap *)FormHeapAlloc(0x1Cu);
  if ( v8 )
    v9 = (BSTask *)sub_438A30(v8, 3u, 0x25, 0xC);
  else
    v9 = 0;
  *(this + 3) = v9;
  v10 = (LockFreeMap *)FormHeapAlloc(0x1Cu);
  if ( v10 )
    v11 = (BSTask *)sub_438B20(v10, 3u, 0x25, 0xC);
  else
    v11 = 0;
  *(this + 4) = v11;
  v12 = (LockFreeQueue_NiIOTask *)FormHeapAlloc(0x1Cu);
  if ( v12 )
    v13 = sub_438CF0(v12, 3u, 8u);
  else
    v13 = 0;
  *(this + 5) = (BSTask *)v13;
  v14 = (BackgroundCloneThread *)FormHeapAlloc(0x2Cu);
  if ( v14 )
    v15 = BackgroundCloneThread::BackgroundCloneThread(v14, 3u);
  else
    v15 = 0;
  *(this + 6) = (BSTask *)v15;
  BSTaskThread::Resume((PULONG *)v15);
  return this;
}
