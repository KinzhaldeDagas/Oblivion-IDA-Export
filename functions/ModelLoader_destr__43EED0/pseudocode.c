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

  sub_4B26D0(); /*0x43eef8*/
  if ( (*((int (__thiscall **)(LockFreeMap *))this->modelMap->vtbl + 0xE))(this->modelMap) ) /*0x43ef04*/
  {
    v2 = (*((int (__thiscall **)(LockFreeMap *))this->modelMap->vtbl + 0xE))(this->modelMap); /*0x43ef17*/
    PrintError("ModelLoader still has %d NIF files.\r\n", v2); /*0x43ef1f*/
    v24[1] = 0; /*0x43ef27*/
    v25 = 0; /*0x43ef2b*/
    LOBYTE(v26) = 0; /*0x43ef2f*/
    v24[0] = &LockFreeStringMap<Model *>::LockFreeStringMapIterator::`vftable'; /*0x43ef33*/
    v33 = 0; /*0x43ef3b*/
    do /*0x43ef97*/
    {
      modelMap = this->modelMap; /*0x43ef4c*/
      v18 = 0; /*0x43ef53*/
      v17 = 0; /*0x43ef57*/
      if ( sub_43AB80(modelMap, (int)v24, &v18, &v17, 1) ) /*0x43ef5b*/
      {
        v4 = (unsigned int *)v17; /*0x43ef64*/
        PrintError("%3d - %s\r\n", *(unsigned __int16 *)(v17 + 4), v18); /*0x43ef7a*/
        sub_4349B0(v4); /*0x43ef84*/
        FormHeapFree((unsigned int)v4); /*0x43ef8a*/
      }
    }
    while ( (v26 & 2) == 0 ); /*0x43ef97*/
    FormHeapFree(v25); /*0x43ef9e*/
    v25 = 0; /*0x43efa6*/
    v24[0] = &LockFreeMap<char const *,Model *>::LockFreeMapIterator::`vftable'; /*0x43efaa*/
  }
  v30[1] = 0; /*0x43efb2*/
  v31 = 0; /*0x43efb6*/
  v32 = 0; /*0x43efba*/
  v30[0] = &LockFreeStringMap<KFModel *>::LockFreeStringMapIterator::`vftable'; /*0x43efbe*/
  v33 = 1; /*0x43efc6*/
  do /*0x43f02f*/
  {
    kfMap = this->kfMap; /*0x43efd5*/
    v20 = 0; /*0x43efe2*/
    v19 = 0; /*0x43efe6*/
    if ( sub_43AB80(kfMap, (int)v30, &v20, &v19, 1) ) /*0x43efea*/
    {
      v6 = (unsigned int *)v19; /*0x43eff3*/
      if ( v19 ) /*0x43eff9*/
      {
        v7 = *(unsigned __int8 **)(v19 + 8); /*0x43effb*/
        if ( !v7 || TESAnimGroup_IsPowerAttack(v7) ) /*0x43f002*/
        {
          (*((void (__thiscall **)(LockFreeMap *, int))this->kfMap->vtbl + 4))(this->kfMap, v20); /*0x43f018*/
          sub_436CB0(v6); /*0x43f01c*/
          FormHeapFree((unsigned int)v6); /*0x43f022*/
        }
      }
    }
  }
  while ( (v32 & 2) == 0 ); /*0x43f02f*/
  if ( (*((int (__thiscall **)(LockFreeMap *))this->kfMap->vtbl + 0xE))(this->kfMap) ) /*0x43f039*/
  {
    v8 = (*((int (__thiscall **)(LockFreeMap *))this->kfMap->vtbl + 0xE))(this->kfMap); /*0x43f04b*/
    PrintError("ModelLoader still has %d KF files.\r\n", v8); /*0x43f053*/
    v27[1] = 0; /*0x43f05b*/
    v28 = 0; /*0x43f05f*/
    v29 = 0; /*0x43f063*/
    v27[0] = &LockFreeStringMap<KFModel *>::LockFreeStringMapIterator::`vftable'; /*0x43f067*/
    LOBYTE(v33) = 2; /*0x43f06f*/
    do /*0x43f0c8*/
    {
      v9 = this->kfMap; /*0x43f080*/
      v22 = 0; /*0x43f088*/
      v21 = 0; /*0x43f08c*/
      if ( sub_43AB80(v9, (int)v27, &v22, &v21, 1) ) /*0x43f090*/
      {
        v10 = v21; /*0x43f09d*/
        PrintError("%3d - %s\r\n", v21[3], v22); /*0x43f0ab*/
        sub_436CB0(v10); /*0x43f0b5*/
        FormHeapFree((unsigned int)v10); /*0x43f0bb*/
      }
    }
    while ( (v29 & 2) == 0 ); /*0x43f0c8*/
    LOBYTE(v33) = 1; /*0x43f0cf*/
    FormHeapFree(v28); /*0x43f0d4*/
    v28 = 0; /*0x43f0dc*/
    v27[0] = &LockFreeMap<char const *,KFModel *>::LockFreeMapIterator::`vftable'; /*0x43f0e0*/
  }
  if ( this->modelMap ) /*0x43f0e8*/
    (*((void (__thiscall **)(LockFreeMap *, int))this->modelMap->vtbl + 0xF))(this->modelMap, 1); /*0x43f0f5*/
  v11 = this->kfMap; /*0x43f0f7*/
  if ( v11 ) /*0x43f0fc*/
    (*((void (__thiscall **)(LockFreeMap *, int))v11->vtbl + 0xF))(v11, 1); /*0x43f105*/
  distant3DMap = (LockFreeMap *)this->distant3DMap; /*0x43f107*/
  if ( distant3DMap ) /*0x43f10c*/
  {
    distant3DMap->vtbl = &LockFreeQueue<NiPointer<AttachDistant3DTask>>::`vftable'; /*0x43f112*/
    sub_43D510(distant3DMap, 1); /*0x43f118*/
    unk10 = distant3DMap->members.unk10; /*0x43f120*/
    FormHeapFree(unk10); /*0x43f129*/
    FormHeapFree((unsigned int)distant3DMap); /*0x43f12f*/
  }
  helmetMap = this->helmetMap; /*0x43f137*/
  if ( helmetMap ) /*0x43f13c*/
  {
    helmetMap->vtbl = &LockFreeMap<TESObjectREFR *,NiPointer<QueuedHelmet>>::`vftable'; /*0x43f142*/
    sub_642E50((unsigned int **)helmetMap, 1); /*0x43f148*/
    FormHeapFree((unsigned int)helmetMap->members.buckets); /*0x43f151*/
    unk10 = (unsigned int)helmetMap->members.unk04; /*0x43f159*/
    FormHeapFree(unk10); /*0x43f162*/
    FormHeapFree((unsigned int)helmetMap); /*0x43f168*/
  }
  idleMap = this->idleMap; /*0x43f170*/
  if ( idleMap ) /*0x43f175*/
  {
    idleMap->vtbl = &LockFreeMap<AnimIdle *,NiPointer<QueuedAnimIdle>>::`vftable'; /*0x43f17b*/
    sub_642E50((unsigned int **)idleMap, 1); /*0x43f181*/
    FormHeapFree((unsigned int)idleMap->members.buckets); /*0x43f18a*/
    unk10 = (unsigned int)idleMap->members.unk04; /*0x43f192*/
    FormHeapFree(unk10); /*0x43f19b*/
    FormHeapFree((unsigned int)idleMap); /*0x43f1a1*/
  }
  refMap = this->refMap; /*0x43f1a9*/
  if ( refMap ) /*0x43f1ae*/
  {
    refMap->vtbl = &LockFreeMap<TESObjectREFR *,NiPointer<QueuedReference>>::`vftable'; /*0x43f1b4*/
    sub_642E50((unsigned int **)refMap, 1); /*0x43f1ba*/
    FormHeapFree((unsigned int)refMap->members.buckets); /*0x43f1c3*/
    unk10 = (unsigned int)refMap->members.unk04; /*0x43f1cb*/
    FormHeapFree(unk10); /*0x43f1d4*/
    FormHeapFree((unsigned int)refMap); /*0x43f1da*/
  }
  bgCloneThread = this->bgCloneThread; /*0x43f1e2*/
  if ( bgCloneThread ) /*0x43f1e7*/
    (*(void (__thiscall **)(BackgroundCloneThread *, int))bgCloneThread->vtbl)(bgCloneThread, 1); /*0x43f1f1*/
  FormHeapFree(v31); /*0x43f1f8*/
}
