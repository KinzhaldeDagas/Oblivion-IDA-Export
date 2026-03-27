void __thiscall ModelLoader_destr(ModelLoader *this)
{
  int v2; // eax
  LockFreeMap *modelMap; // ecx
  unsigned int *v4; // edi
  LockFreeMap *kfMap; // ecx
  unsigned int *v6; // edi
  unsigned __int8 *v7; // ecx
  int v8; // eax
  LockFreeMap *v9; // ecx
  unsigned int *v10; // edi
  LockFreeMap *v11; // ecx
  LockFreeMap *distant3DMap; // edi
  LockFreeMap *helmetMap; // edi
  LockFreeMap *idleMap; // edi
  LockFreeMap *refMap; // edi
  BackgroundCloneThread *bgCloneThread; // esi
  int v17; // [esp+10h] [ebp-58h] BYREF
  const char *v18; // [esp+14h] [ebp-54h] BYREF
  int v19; // [esp+18h] [ebp-50h] BYREF
  int v20; // [esp+1Ch] [ebp-4Ch] BYREF
  unsigned int *v21; // [esp+20h] [ebp-48h] BYREF
  const char *v22; // [esp+24h] [ebp-44h] BYREF
  unsigned int unk10; // [esp+28h] [ebp-40h]
  _DWORD v24[2]; // [esp+2Ch] [ebp-3Ch] BYREF
  unsigned int v25; // [esp+34h] [ebp-34h]
  int v26; // [esp+38h] [ebp-30h]
  _DWORD v27[2]; // [esp+3Ch] [ebp-2Ch] BYREF
  unsigned int v28; // [esp+44h] [ebp-24h]
  char v29; // [esp+48h] [ebp-20h]
  _DWORD v30[2]; // [esp+4Ch] [ebp-1Ch] BYREF
  unsigned int v31; // [esp+54h] [ebp-14h]
  char v32; // [esp+58h] [ebp-10h]
  int v33; // [esp+64h] [ebp-4h]

  sub_4B26D0();
  if ( (*((int (__thiscall **)(LockFreeMap *))this->modelMap->vtbl + 0xE))(this->modelMap) )
  {
    v2 = (*((int (__thiscall **)(LockFreeMap *))this->modelMap->vtbl + 0xE))(this->modelMap);
    PrintError("ModelLoader still has %d NIF files.\r\n", v2);
    v24[1] = 0;
    v25 = 0;
    LOBYTE(v26) = 0;
    v24[0] = &LockFreeStringMap<Model *>::LockFreeStringMapIterator::`vftable';
    v33 = 0;
    do
    {
      modelMap = this->modelMap;
      v18 = 0;
      v17 = 0;
      if ( sub_43AB80(modelMap, (int)v24, &v18, &v17, 1) )
      {
        v4 = (unsigned int *)v17;
        PrintError("%3d - %s\r\n", *(unsigned __int16 *)(v17 + 4), v18);
        sub_4349B0(v4);
        FormHeapFree((unsigned int)v4);
      }
    }
    while ( (v26 & 2) == 0 );
    FormHeapFree(v25);
    v25 = 0;
    v24[0] = &LockFreeMap<char const *,Model *>::LockFreeMapIterator::`vftable';
  }
  v30[1] = 0;
  v31 = 0;
  v32 = 0;
  v30[0] = &LockFreeStringMap<KFModel *>::LockFreeStringMapIterator::`vftable';
  v33 = 1;
  do
  {
    kfMap = this->kfMap;
    v20 = 0;
    v19 = 0;
    if ( sub_43AB80(kfMap, (int)v30, &v20, &v19, 1) )
    {
      v6 = (unsigned int *)v19;
      if ( v19 )
      {
        v7 = *(unsigned __int8 **)(v19 + 8);
        if ( !v7 || TESAnimGroup_IsPowerAttack(v7) )
        {
          (*((void (__thiscall **)(LockFreeMap *, int))this->kfMap->vtbl + 4))(this->kfMap, v20);
          sub_436CB0(v6);
          FormHeapFree((unsigned int)v6);
        }
      }
    }
  }
  while ( (v32 & 2) == 0 );
  if ( (*((int (__thiscall **)(LockFreeMap *))this->kfMap->vtbl + 0xE))(this->kfMap) )
  {
    v8 = (*((int (__thiscall **)(LockFreeMap *))this->kfMap->vtbl + 0xE))(this->kfMap);
    PrintError("ModelLoader still has %d KF files.\r\n", v8);
    v27[1] = 0;
    v28 = 0;
    v29 = 0;
    v27[0] = &LockFreeStringMap<KFModel *>::LockFreeStringMapIterator::`vftable';
    LOBYTE(v33) = 2;
    do
    {
      v9 = this->kfMap;
      v22 = 0;
      v21 = 0;
      if ( sub_43AB80(v9, (int)v27, &v22, &v21, 1) )
      {
        v10 = v21;
        PrintError("%3d - %s\r\n", v21[3], v22);
        sub_436CB0(v10);
        FormHeapFree((unsigned int)v10);
      }
    }
    while ( (v29 & 2) == 0 );
    LOBYTE(v33) = 1;
    FormHeapFree(v28);
    v28 = 0;
    v27[0] = &LockFreeMap<char const *,KFModel *>::LockFreeMapIterator::`vftable';
  }
  if ( this->modelMap )
    (*((void (__thiscall **)(LockFreeMap *, int))this->modelMap->vtbl + 0xF))(this->modelMap, 1);
  v11 = this->kfMap;
  if ( v11 )
    (*((void (__thiscall **)(LockFreeMap *, int))v11->vtbl + 0xF))(v11, 1);
  distant3DMap = (LockFreeMap *)this->distant3DMap;
  if ( distant3DMap )
  {
    distant3DMap->vtbl = &LockFreeQueue<NiPointer<AttachDistant3DTask>>::`vftable';
    sub_43D510(distant3DMap, 1);
    unk10 = distant3DMap->members.unk10;
    FormHeapFree(unk10);
    FormHeapFree((unsigned int)distant3DMap);
  }
  helmetMap = this->helmetMap;
  if ( helmetMap )
  {
    helmetMap->vtbl = &LockFreeMap<TESObjectREFR *,NiPointer<QueuedHelmet>>::`vftable';
    sub_642E50((unsigned int **)helmetMap, 1);
    FormHeapFree((unsigned int)helmetMap->members.buckets);
    unk10 = (unsigned int)helmetMap->members.unk04;
    FormHeapFree(unk10);
    FormHeapFree((unsigned int)helmetMap);
  }
  idleMap = this->idleMap;
  if ( idleMap )
  {
    idleMap->vtbl = &LockFreeMap<AnimIdle *,NiPointer<QueuedAnimIdle>>::`vftable';
    sub_642E50((unsigned int **)idleMap, 1);
    FormHeapFree((unsigned int)idleMap->members.buckets);
    unk10 = (unsigned int)idleMap->members.unk04;
    FormHeapFree(unk10);
    FormHeapFree((unsigned int)idleMap);
  }
  refMap = this->refMap;
  if ( refMap )
  {
    refMap->vtbl = &LockFreeMap<TESObjectREFR *,NiPointer<QueuedReference>>::`vftable';
    sub_642E50((unsigned int **)refMap, 1);
    FormHeapFree((unsigned int)refMap->members.buckets);
    unk10 = (unsigned int)refMap->members.unk04;
    FormHeapFree(unk10);
    FormHeapFree((unsigned int)refMap);
  }
  bgCloneThread = this->bgCloneThread;
  if ( bgCloneThread )
    (*(void (__thiscall **)(BackgroundCloneThread *, int))bgCloneThread->vtbl)(bgCloneThread, 1);
  FormHeapFree(v31);
}
