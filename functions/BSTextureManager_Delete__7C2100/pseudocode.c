void __thiscall BSTextureManager_Delete(BSTextureManager *this)
{
  UInt32 numItems; // eax
  void (__thiscall ***v3)(_DWORD, int); // edi
  void (__thiscall ***v4)(_DWORD, int); // edi
  int *data; // ebx
  int v6; // ebp
  NiTPointerList_Node_void *start; // ecx
  NiTPointerList_Node_void *next; // eax
  bool v9; // zf
  int v10; // ebp
  int *v11; // ebp
  int v12; // edi
  NiTPointerList_Node_void *v13; // ecx
  NiTPointerList_Node_void *v14; // eax
  int v15; // edi
  volatile LONG *unk40; // edi
  LONG (__stdcall *v17)(volatile LONG *); // ebp
  volatile LONG *unk44; // edi
  volatile LONG *v19; // edi
  volatile LONG *v20; // edi
  _DWORD v21[2]; // [esp+28h] [ebp-14h] BYREF
  int v22; // [esp+38h] [ebp-4h]

  v21[1] = this;
  numItems = this->unk30.numItems;
  v22 = 5;
  if ( numItems )
  {
    do
    {
      sub_7C1740((int **)&this->unk30, v21);
      v3 = (void (__thiscall ***)(_DWORD, int))v21[0];
      if ( v21[0] )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v21[0] + 4)) )
        {
          if ( v3 )
            (**v3)(v3, 1);
        }
      }
    }
    while ( this->unk30.numItems );
  }
  while ( this->shadowMaps.numItems )
  {
    sub_7C1740((int **)&this->shadowMaps, v21);
    v4 = (void (__thiscall ***)(_DWORD, int))v21[0];
    if ( v21[0] )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v21[0] + 4)) )
      {
        if ( v4 )
          (**v4)(v4, 1);
      }
    }
  }
  while ( this->unk10.numItems )
  {
    data = (int *)this->unk10.start->data;
    v6 = *data;
    if ( *data )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      {
        if ( v6 )
          (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      }
      *data = 0;
    }
    start = this->unk10.start;
    next = start->next;
    v9 = start->next == 0;
    this->unk10.start = start->next;
    if ( v9 )
      this->unk10.end = 0;
    else
      next->prev = 0;
    (*((void (__thiscall **)(NiTPointerList_void *, NiTPointerList_Node_void *))this->unk10.__vftable + 2))(
      &this->unk10,
      start);
    --this->unk10.numItems;
    v10 = *data;
    if ( *data )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
      {
        if ( v10 )
          (**(void (__thiscall ***)(int, int))v10)(v10, 1);
      }
    }
    FormHeapFree((unsigned int)data);
  }
  while ( this->unk00.numItems )
  {
    v11 = (int *)this->unk00.start->data;
    v12 = *v11;
    if ( *v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
      {
        if ( v12 )
          (**(void (__thiscall ***)(int, int))v12)(v12, 1);
      }
      *v11 = 0;
    }
    v13 = this->unk00.start;
    v14 = v13->next;
    v9 = v13->next == 0;
    this->unk00.start = v13->next;
    if ( v9 )
      this->unk00.end = 0;
    else
      v14->prev = 0;
    (*((void (__thiscall **)(BSTextureManager *, NiTPointerList_Node_void *))this->unk00.__vftable + 2))(this, v13);
    --this->unk00.numItems;
    v15 = *v11;
    if ( *v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
      {
        if ( v15 )
          (**(void (__thiscall ***)(int, int))v15)(v15, 1);
      }
    }
    FormHeapFree((unsigned int)v11);
  }
  unk40 = (volatile LONG *)this->unk40;
  v17 = InterlockedDecrement;
  if ( unk40 )
  {
    if ( !v17(unk40 + 1) )
      (**(void (__thiscall ***)(void *, int))unk40)((void *)unk40, 1);
    this->unk40 = 0;
  }
  unk44 = (volatile LONG *)this->unk44;
  if ( unk44 )
  {
    if ( !v17(unk44 + 1) )
      (**(void (__thiscall ***)(void *, int))unk44)((void *)unk44, 1);
    this->unk44 = 0;
  }
  v19 = (volatile LONG *)this->unk44;
  LOBYTE(v22) = 4;
  if ( v19 )
  {
    if ( !v17(v19 + 1) )
      (**(void (__thiscall ***)(void *, int))v19)((void *)v19, 1);
  }
  v20 = (volatile LONG *)this->unk40;
  LOBYTE(v22) = 3;
  if ( v20 )
  {
    if ( !v17(v20 + 1) )
      (**(void (__thiscall ***)(void *, int))v20)((void *)v20, 1);
  }
  LOBYTE(v22) = 2;
  NiTPointerList<NiPointer<BSRenderedTexture>>::~NiTPointerList<NiPointer<BSRenderedTexture>>((NiTPointerList__BSImageSpaceShader *)&this->unk30);
  LOBYTE(v22) = 1;
  NiTPointerList<NiPointer<BSRenderedTexture>>::~NiTPointerList<NiPointer<BSRenderedTexture>>((NiTPointerList__BSImageSpaceShader *)&this->shadowMaps);
  LOBYTE(v22) = 0;
  NiTPointerList<BSTextureManager::RenderedTextureData *>::~NiTPointerList<BSTextureManager::RenderedTextureData *>((NiTPointerList__BSImageSpaceShader *)&this->unk10);
  v22 = 0xFFFFFFFF;
  NiTPointerList<BSTextureManager::RenderedTextureData *>::~NiTPointerList<BSTextureManager::RenderedTextureData *>((NiTPointerList__BSImageSpaceShader *)this);
}
