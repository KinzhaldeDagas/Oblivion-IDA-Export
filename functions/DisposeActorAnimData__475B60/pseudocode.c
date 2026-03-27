int __thiscall DisposeActorAnimData(ActorAnimData *this)
{
  bool v2; // zf
  UInt32 *v3; // edi
  int **p_unkD4; // edi
  int v5; // ebx
  NiControllerManager *manager; // ebx
  unsigned int i; // edi
  Ni2DBuffer **v8; // edi
  NiControllerManager *v9; // edi
  _DWORD *animsMap; // ecx
  unsigned int v11; // edx
  unsigned int v12; // eax
  _DWORD *v13; // edi
  _DWORD *v14; // ecx
  unsigned int v15; // eax
  unsigned int *v16; // ecx
  void *v17; // edi
  int result; // eax
  int (__thiscall ***v19)(void *, int); // ecx
  NiControllerManager *v20; // esi
  int v21; // [esp+1Ch] [ebp-1Ch] BYREF
  void (__thiscall ***v22)(_DWORD, int); // [esp+20h] [ebp-18h] BYREF
  unsigned int v23[2]; // [esp+24h] [ebp-14h] BYREF
  unsigned int v24; // [esp+34h] [ebp-4h]

  v23[1] = (unsigned int)this;
  v2 = this->unkC8[1] == 0;
  v3 = &this->unkC8[1];
  v24 = 0;
  if ( !v2 )
    sub_472ED0(this, (int **)&this->unkC8[1]);
  if ( this->unkC8[2] )
  {
    sub_472ED0(this, (int **)&this->unkC8[2]);
  }
  else
  {
    *v3 = 0;
    this->unkC8[2] = 0;
  }
  p_unkD4 = (int **)&this->unkD4;
  v5 = 2;
  do
  {
    if ( *p_unkD4 )
    {
      sub_472ED0(this, p_unkD4);
      *p_unkD4 = 0;
    }
    ++p_unkD4;
    --v5;
  }
  while ( v5 );
  manager = this->manager;
  if ( manager )
  {
    for ( i = 0; i < *((_DWORD *)manager + 0x15); ++i )
      sub_6C9CB0(*(_DWORD *)(*((_DWORD *)manager + 0x13) + 4 * i), 0.0, 0);
    sub_6C4BD0((_WORD *)this->manager);
    v8 = *((Ni2DBuffer ***)this->manager + 0xC);
    if ( v8 )
    {
      if ( ((int (__thiscall *)(Ni2DBuffer **))(*v8)->members.width)(v8) )
        sub_6FFE90(v8, (Ni2DBuffer *)this->manager);
    }
    v9 = this->manager;
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v9 + 1) )
        (**(void (__thiscall ***)(NiControllerManager *, int))v9)(v9, 1);
      this->manager = 0;
    }
  }
  animsMap = this->animsMap;
  v11 = animsMap[1];
  v12 = 0;
  if ( v11 )
  {
    v13 = (_DWORD *)animsMap[2];
    v14 = v13;
    while ( !*v14 )
    {
      ++v12;
      ++v14;
      if ( v12 >= v11 )
        goto LABEL_24;
    }
    v15 = v13[v12];
  }
  else
  {
LABEL_24:
    v15 = 0;
  }
  v23[0] = v15;
  while ( v23[0] )
  {
    v16 = (unsigned int *)this->animsMap;
    v22 = 0;
    sub_4709C0(v16, v23, &v21, &v22);
    if ( v22 )
      (**v22)(v22, 1);
  }
  if ( this->modelB8 )
  {
    do
    {
      v17 = *((void **)this->modelB8 + 1);
      FormHeapFree((unsigned int)this->modelB8);
      this->modelB8 = v17;
    }
    while ( v17 );
  }
  this->modelB4 = 0;
  result = NiTMap_Clear((_DWORD *)this->animsMap);
  v19 = (int (__thiscall ***)(void *, int))this->animsMap;
  if ( v19 )
    result = (**v19)(v19, 1);
  this->animsMap = 0;
  this->AccumNode = 0;
  v20 = this->manager;
  v24 = 0xFFFFFFFF;
  if ( v20 )
  {
    result = InterlockedDecrement((volatile LONG *)v20 + 1);
    if ( !result )
      return (**(int (__thiscall ***)(NiControllerManager *, int))v20)(v20, 1);
  }
  return result;
}
