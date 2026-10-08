// Owner-side cleanup for all four BSShaderProperty RenderPass lists at +0x28/+0x38/+0x48/+0x58. For every node it unlinks the node, releases the node through the list allocator, destroys the payload's owned light array, and frees the 0x10-byte RenderPass. This is the ordinary payload owner; accumulator selector buckets do not perform this destruction.
void __thiscall sub_7E24C0(BSShaderProperty *this)
{
  bool v2; // zf
  NiTList_NiProperty *p_passes; // esi
  NiTList_Entry_NiProperty *start; // eax
  NiTList_Entry_NiProperty *next; // ecx
  unsigned int data; // edi
  unsigned int v7; // eax
  NiTList_Entry_NiProperty *v8; // eax
  NiTList_Entry_NiProperty *v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // eax
  NiTList_Entry_NiProperty *v12; // eax
  NiTList_Entry_NiProperty *v13; // ecx
  unsigned int v14; // edi
  unsigned int v15; // eax
  NiTList_Entry_NiProperty *v16; // eax
  NiTList_Entry_NiProperty *v17; // ecx
  unsigned int v18; // edi
  unsigned int v19; // eax

  v2 = this->member.passes.numItems == 0; /*0x7e24c6*/
  this->member.lastRenderPassState = 0; /*0x7e24cb*/
  if ( !v2 ) /*0x7e24ce*/
  {
    p_passes = &this->member.passes; /*0x7e24d0*/
    do /*0x7e251f*/
    {
      start = this->member.passes.start; /*0x7e24d3*/
      next = start->next; /*0x7e24d6*/
      v2 = start->next == 0; /*0x7e24d8*/
      this->member.passes.start = start->next; /*0x7e24da*/
      if ( v2 ) /*0x7e24dd*/
        this->member.passes.end = 0; /*0x7e24e4*/
      else
        next->prev = 0; /*0x7e24df*/
      data = (unsigned int)start->data;         // Capture the property-list node's RenderPass payload before releasing the node. /*0x7e24e9*/
      (*((void (__thiscall **)(NiTList_NiProperty *, NiTList_Entry_NiProperty *))p_passes->vtlb + 2))( /*0x7e24f2*/
        &this->member.passes,
        start);                                 // Release only the NiTList node through the list allocator virtual; the payload is destroyed separately below.
      --this->member.passes.numItems; /*0x7e24f4*/
      if ( data ) /*0x7e24fa*/
      {
        v7 = *(_DWORD *)(data + 0xC); /*0x7e24fc*/
        *(_WORD *)(data + 4) = 0; /*0x7e2501*/
        if ( v7 ) /*0x7e2505*/
          FormHeapFree(v7);                     // Owner cleanup frees this RenderPass's light-pointer array. /*0x7e2508*/
        *(_DWORD *)(data + 0xC) = 0; /*0x7e2511*/
        *(_BYTE *)(data + 9) = 0; /*0x7e2514*/
        FormHeapFree(data);                     // Owner cleanup frees the 0x10-byte RenderPass after destroying its owned array. The same pattern is repeated for all four property pass lists. /*0x7e2517*/
      }
    }
    while ( this->member.passes.numItems ); /*0x7e251f*/
  }
  while ( this->member.unk38.numItems ) /*0x7e2524*/
  {
    v8 = this->member.unk38.start; /*0x7e2530*/
    v9 = v8->next; /*0x7e2533*/
    v2 = v8->next == 0; /*0x7e2535*/
    this->member.unk38.start = v8->next; /*0x7e2537*/
    if ( v2 ) /*0x7e253a*/
      this->member.unk38.end = 0; /*0x7e2541*/
    else
      v9->prev = 0; /*0x7e253c*/
    v10 = (unsigned int)v8->data; /*0x7e2546*/
    (*((void (__thiscall **)(NiTList_NiProperty *, NiTList_Entry_NiProperty *))this->member.unk38.vtlb + 2))( /*0x7e254f*/
      &this->member.unk38,
      v8);
    --this->member.unk38.numItems; /*0x7e2551*/
    if ( v10 ) /*0x7e2557*/
    {
      v11 = *(_DWORD *)(v10 + 0xC); /*0x7e2559*/
      *(_WORD *)(v10 + 4) = 0; /*0x7e255e*/
      if ( v11 ) /*0x7e2562*/
        FormHeapFree(v11); /*0x7e2565*/
      *(_DWORD *)(v10 + 0xC) = 0; /*0x7e256e*/
      *(_BYTE *)(v10 + 9) = 0; /*0x7e2571*/
      FormHeapFree(v10); /*0x7e2574*/
    }
  }
  while ( this->member.unk48.numItems ) /*0x7e2581*/
  {
    v12 = this->member.unk48.start; /*0x7e2590*/
    v13 = v12->next; /*0x7e2593*/
    v2 = v12->next == 0; /*0x7e2595*/
    this->member.unk48.start = v12->next; /*0x7e2597*/
    if ( v2 ) /*0x7e259a*/
      this->member.unk48.end = 0; /*0x7e25a1*/
    else
      v13->prev = 0; /*0x7e259c*/
    v14 = (unsigned int)v12->data; /*0x7e25a6*/
    (*((void (__thiscall **)(NiTList_NiProperty *, NiTList_Entry_NiProperty *))this->member.unk48.vtlb + 2))( /*0x7e25af*/
      &this->member.unk48,
      v12);
    --this->member.unk48.numItems; /*0x7e25b1*/
    if ( v14 ) /*0x7e25b7*/
    {
      v15 = *(_DWORD *)(v14 + 0xC); /*0x7e25b9*/
      *(_WORD *)(v14 + 4) = 0; /*0x7e25be*/
      if ( v15 ) /*0x7e25c2*/
        FormHeapFree(v15); /*0x7e25c5*/
      *(_DWORD *)(v14 + 0xC) = 0; /*0x7e25ce*/
      *(_BYTE *)(v14 + 9) = 0; /*0x7e25d1*/
      FormHeapFree(v14); /*0x7e25d4*/
    }
  }
  while ( this->member.unk58.numItems ) /*0x7e25e1*/
  {
    v16 = this->member.unk58.start; /*0x7e25f0*/
    v17 = v16->next; /*0x7e25f3*/
    v2 = v16->next == 0; /*0x7e25f5*/
    this->member.unk58.start = v16->next; /*0x7e25f7*/
    if ( v2 ) /*0x7e25fa*/
      this->member.unk58.end = 0; /*0x7e2601*/
    else
      v17->prev = 0; /*0x7e25fc*/
    v18 = (unsigned int)v16->data; /*0x7e2606*/
    (*((void (__thiscall **)(NiTList_NiProperty *, NiTList_Entry_NiProperty *))this->member.unk58.vtlb + 2))( /*0x7e260f*/
      &this->member.unk58,
      v16);
    --this->member.unk58.numItems; /*0x7e2611*/
    if ( v18 ) /*0x7e2617*/
    {
      v19 = *(_DWORD *)(v18 + 0xC); /*0x7e2619*/
      *(_WORD *)(v18 + 4) = 0; /*0x7e261e*/
      if ( v19 ) /*0x7e2622*/
        FormHeapFree(v19); /*0x7e2625*/
      *(_DWORD *)(v18 + 0xC) = 0; /*0x7e262e*/
      *(_BYTE *)(v18 + 9) = 0; /*0x7e2631*/
      FormHeapFree(v18); /*0x7e2634*/
    }
  }
}
