// MoonSugarEffect decode: BSTextureManager destructor/delete path. Releases available/in-use rendered textures, shadow maps, cached buffers, and manager lists.
void __thiscall BSTextureManager_Delete(BSTextureManager *this)
{
  UInt32 numItems; // eax
  void (__thiscall ***v3)(void *, int); // edi
  void (__thiscall ***v4)(void *, int); // edi
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
  void *result[2]; // [esp+28h] [ebp-14h] BYREF
  int v22; // [esp+38h] [ebp-4h]

  result[1] = this; /*0x7c2129*/
  numItems = this->unk30.numItems; /*0x7c212d*/
  v22 = 5; /*0x7c2134*/
  if ( numItems ) /*0x7c213c*/
  {
    do /*0x7c2171*/
    {
      NiTRefPointerList__RemoveHead((MEF_RefList32 *)&this->unk30, result); /*0x7c2148*/
      v3 = (void (__thiscall ***)(void *, int))result[0]; /*0x7c214d*/
      if ( result[0] ) /*0x7c2153*/
      {
        if ( !InterlockedDecrement((volatile LONG *)result[0] + 1) ) /*0x7c2159*/
        {
          if ( v3 ) /*0x7c2165*/
            (**v3)(v3, 1); /*0x7c216f*/
        }
      }
    }
    while ( this->unk30.numItems ); /*0x7c2171*/
  }
  while ( this->shadowMaps.numItems ) /*0x7c2176*/
  {
    NiTRefPointerList__RemoveHead((MEF_RefList32 *)&this->shadowMaps, result); /*0x7c2187*/
    v4 = (void (__thiscall ***)(void *, int))result[0]; /*0x7c218c*/
    if ( result[0] ) /*0x7c2192*/
    {
      if ( !InterlockedDecrement((volatile LONG *)result[0] + 1) ) /*0x7c2198*/
      {
        if ( v4 ) /*0x7c21a4*/
          (**v4)(v4, 1); /*0x7c21ae*/
      }
    }
  }
  while ( this->unk10.numItems ) /*0x7c21b5*/
  {
    data = (int *)this->unk10.start->data; /*0x7c21c6*/
    v6 = *data; /*0x7c21c9*/
    if ( *data ) /*0x7c21c9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x7c21d3*/
      {
        if ( v6 ) /*0x7c21df*/
          (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7c21ea*/
      }
      *data = 0; /*0x7c21ec*/
    }
    start = this->unk10.start; /*0x7c21f2*/
    next = start->next; /*0x7c21f5*/
    v9 = start->next == 0; /*0x7c21f9*/
    this->unk10.start = start->next; /*0x7c21fb*/
    if ( v9 ) /*0x7c21fe*/
      this->unk10.end = 0; /*0x7c2205*/
    else
      next->prev = 0; /*0x7c2200*/
    (*((void (__thiscall **)(NiTPointerList_void *, NiTPointerList_Node_void *))this->unk10.__vftable + 2))( /*0x7c2210*/
      &this->unk10,
      start);
    --this->unk10.numItems; /*0x7c2212*/
    v10 = *data; /*0x7c2216*/
    if ( *data ) /*0x7c2216*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x7c2220*/
      {
        if ( v10 ) /*0x7c222c*/
          (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7c2237*/
      }
    }
    FormHeapFree((unsigned int)data); /*0x7c223a*/
  }
  while ( this->unk00.numItems ) /*0x7c224e*/
  {
    v11 = (int *)this->unk00.start->data; /*0x7c225a*/
    v12 = *v11; /*0x7c225d*/
    if ( *v11 ) /*0x7c225d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x7c2268*/
      {
        if ( v12 ) /*0x7c2274*/
          (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7c227e*/
      }
      *v11 = 0; /*0x7c2280*/
    }
    v13 = this->unk00.start; /*0x7c2283*/
    v14 = v13->next; /*0x7c2286*/
    v9 = v13->next == 0; /*0x7c2288*/
    this->unk00.start = v13->next; /*0x7c228a*/
    if ( v9 ) /*0x7c228d*/
      this->unk00.end = 0; /*0x7c2294*/
    else
      v14->prev = 0; /*0x7c228f*/
    (*((void (__thiscall **)(BSTextureManager *, NiTPointerList_Node_void *))this->unk00.__vftable + 2))(this, v13); /*0x7c229f*/
    --this->unk00.numItems; /*0x7c22a1*/
    v15 = *v11; /*0x7c22a5*/
    if ( *v11 ) /*0x7c22a5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x7c22b0*/
      {
        if ( v15 ) /*0x7c22bc*/
          (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x7c22c6*/
      }
    }
    FormHeapFree((unsigned int)v11); /*0x7c22c9*/
  }
  unk40 = (volatile LONG *)this->unk40; /*0x7c22d6*/
  v17 = InterlockedDecrement; /*0x7c22db*/
  if ( unk40 ) /*0x7c22e1*/
  {
    if ( !v17(unk40 + 1) ) /*0x7c22e7*/
      (**(void (__thiscall ***)(void *, int))unk40)((void *)unk40, 1); /*0x7c22f9*/
    this->unk40 = 0; /*0x7c22fb*/
  }
  unk44 = (volatile LONG *)this->unk44; /*0x7c22fe*/
  if ( unk44 ) /*0x7c2303*/
  {
    if ( !v17(unk44 + 1) ) /*0x7c2309*/
      (**(void (__thiscall ***)(void *, int))unk44)((void *)unk44, 1); /*0x7c231b*/
    this->unk44 = 0; /*0x7c231d*/
  }
  v19 = (volatile LONG *)this->unk44; /*0x7c2320*/
  LOBYTE(v22) = 4; /*0x7c2325*/
  if ( v19 ) /*0x7c232a*/
  {
    if ( !v17(v19 + 1) ) /*0x7c2330*/
      (**(void (__thiscall ***)(void *, int))v19)((void *)v19, 1); /*0x7c2342*/
  }
  v20 = (volatile LONG *)this->unk40; /*0x7c2344*/
  LOBYTE(v22) = 3; /*0x7c2349*/
  if ( v20 ) /*0x7c234e*/
  {
    if ( !v17(v20 + 1) ) /*0x7c2354*/
      (**(void (__thiscall ***)(void *, int))v20)((void *)v20, 1); /*0x7c2366*/
  }
  LOBYTE(v22) = 2; /*0x7c236b*/
  NiTPointerList<NiPointer<BSRenderedTexture>>::~NiTPointerList<NiPointer<BSRenderedTexture>>((NiTPointerList__BSImageSpaceShader *)&this->unk30); /*0x7c2370*/
  LOBYTE(v22) = 1; /*0x7c2378*/
  NiTPointerList<NiPointer<BSRenderedTexture>>::~NiTPointerList<NiPointer<BSRenderedTexture>>((NiTPointerList__BSImageSpaceShader *)&this->shadowMaps); /*0x7c237d*/
  LOBYTE(v22) = 0; /*0x7c2385*/
  NiTPointerList<BSTextureManager::RenderedTextureData *>::~NiTPointerList<BSTextureManager::RenderedTextureData *>((NiTPointerList__BSImageSpaceShader *)&this->unk10); /*0x7c238a*/
  v22 = 0xFFFFFFFF; /*0x7c2391*/
  NiTPointerList<BSTextureManager::RenderedTextureData *>::~NiTPointerList<BSTextureManager::RenderedTextureData *>((NiTPointerList__BSImageSpaceShader *)this); /*0x7c2399*/
}
