// Destroys ActorAnimData-owned state. Releases current/queued/cleanup idles; deactivates and releases the controller manager; deleting-destructs every +0x9C animation-map entry; frees the +0xB8 pending-KF linked list; clears/destroys the map; and nulls the accumulation node. Confirms map entries and pending-KF nodes are ActorAnimData-owned.
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

  v23[1] = (unsigned int)this; /*0x475b89*/
  v2 = this->unkC8[1] == 0; /*0x475b8f*/
  v3 = &this->unkC8[1]; /*0x475b95*/
  v24 = 0; /*0x475b9b*/
  if ( !v2 ) /*0x475b9f*/
    AnimIdle_DestroyAndRelease(this, (int **)&this->unkC8[1]); /*0x475ba2*/
  if ( this->unkC8[2] ) /*0x475ba7*/
  {
    AnimIdle_DestroyAndRelease(this, (int **)&this->unkC8[2]); /*0x475bb8*/
  }
  else
  {
    *v3 = 0; /*0x475bbf*/
    this->unkC8[2] = 0; /*0x475bc1*/
  }
  p_unkD4 = (int **)&this->unkD4; /*0x475bc3*/
  v5 = 2; /*0x475bc9*/
  do /*0x475be4*/
  {
    if ( *p_unkD4 ) /*0x475bd0*/
    {
      AnimIdle_DestroyAndRelease(this, p_unkD4); /*0x475bd7*/
      *p_unkD4 = 0; /*0x475bdc*/
    }
    ++p_unkD4; /*0x475bde*/
    --v5; /*0x475be1*/
  }
  while ( v5 ); /*0x475be4*/
  manager = this->manager; /*0x475be6*/
  if ( manager ) /*0x475bee*/
  {
    for ( i = 0; i < *((_DWORD *)manager + 0x15); ++i ) /*0x475bf6*/
      NiControllerSequence_Deactivate(*(_DWORD *)(*((_DWORD *)manager + 0x13) + 4 * i), 0.0, 0); /*0x475c08*/
    sub_6C4BD0((_WORD *)this->manager); /*0x475c1b*/
    v8 = *((Ni2DBuffer ***)this->manager + 0xC); /*0x475c26*/
    if ( v8 ) /*0x475c2b*/
    {
      if ( ((int (__thiscall *)(Ni2DBuffer **))(*v8)->members.width)(v8) ) /*0x475c34*/
        NiObjectNET_RemoveController(v8, (Ni2DBuffer *)this->manager); /*0x475c43*/
    }
    v9 = this->manager; /*0x475c48*/
    if ( v9 ) /*0x475c50*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v9 + 1) ) /*0x475c56*/
        (**(void (__thiscall ***)(NiControllerManager *, int))v9)(v9, 1); /*0x475c6c*/
      this->manager = 0; /*0x475c6e*/
    }
  }
  animsMap = this->animsMap; /*0x475c74*/
  v11 = animsMap[1]; /*0x475c7a*/
  v12 = 0; /*0x475c7d*/
  if ( v11 ) /*0x475c81*/
  {
    v13 = (_DWORD *)animsMap[2]; /*0x475c83*/
    v14 = v13; /*0x475c86*/
    while ( !*v14 ) /*0x475c8a*/
    {
      ++v12; /*0x475c90*/
      ++v14; /*0x475c93*/
      if ( v12 >= v11 ) /*0x475c98*/
        goto LABEL_24; /*0x475c98*/
    }
    v15 = v13[v12]; /*0x475d6a*/
  }
  else
  {
LABEL_24:
    v15 = 0; /*0x475c9a*/
  }
  v23[0] = v15; /*0x475c9e*/
  while ( v23[0] ) /*0x475ca2*/
  {
    v16 = (unsigned int *)this->animsMap; /*0x475ca9*/
    v22 = 0; /*0x475cb9*/
    AnimKeyMap_GetNext(v16, v23, &v21, &v22); /*0x475cbd*/
    if ( v22 ) /*0x475cc8*/
      (**v22)(v22, 1); /*0x475cd0*/
  }
  if ( this->modelB8 ) /*0x475cd8*/
  {
    do /*0x475cfa*/
    {
      v17 = *((void **)this->modelB8 + 1); /*0x475ce6*/
      FormHeapFree((unsigned int)this->modelB8); /*0x475cea*/
      this->modelB8 = v17; /*0x475cf4*/
    }
    while ( v17 ); /*0x475cfa*/
  }
  this->modelB4 = 0; /*0x475cfc*/
  result = NiTMap_Clear((_DWORD *)this->animsMap); /*0x475d08*/
  v19 = (int (__thiscall ***)(void *, int))this->animsMap; /*0x475d0d*/
  if ( v19 ) /*0x475d15*/
    result = (**v19)(v19, 1); /*0x475d1d*/
  this->animsMap = 0; /*0x475d1f*/
  this->AccumNode = 0; /*0x475d25*/
  v20 = this->manager; /*0x475d28*/
  v24 = 0xFFFFFFFF; /*0x475d30*/
  if ( v20 ) /*0x475d38*/
  {
    result = InterlockedDecrement((volatile LONG *)v20 + 1); /*0x475d3e*/
    if ( !result ) /*0x475d46*/
      return (**(int (__thiscall ***)(NiControllerManager *, int))v20)(v20, 1); /*0x475d54*/
  }
  return result; /*0x475d56*/
}
