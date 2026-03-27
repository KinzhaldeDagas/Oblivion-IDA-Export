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

  v2 = this->member.passes.numItems == 0;
  this->member.lastRenderPassState = 0;
  if ( !v2 )
  {
    p_passes = &this->member.passes;
    do
    {
      start = this->member.passes.start;
      next = start->next;
      v2 = start->next == 0;
      this->member.passes.start = start->next;
      if ( v2 )
        this->member.passes.end = 0;
      else
        next->prev = 0;
      data = (unsigned int)start->data;
      (*((void (__thiscall **)(NiTList_NiProperty *, NiTList_Entry_NiProperty *))p_passes->vtlb + 2))(
        &this->member.passes,
        start);
      --this->member.passes.numItems;
      if ( data )
      {
        v7 = *(_DWORD *)(data + 0xC);
        *(_WORD *)(data + 4) = 0;
        if ( v7 )
          FormHeapFree(v7);
        *(_DWORD *)(data + 0xC) = 0;
        *(_BYTE *)(data + 9) = 0;
        FormHeapFree(data);
      }
    }
    while ( this->member.passes.numItems );
  }
  while ( this->member.unk38.numItems )
  {
    v8 = this->member.unk38.start;
    v9 = v8->next;
    v2 = v8->next == 0;
    this->member.unk38.start = v8->next;
    if ( v2 )
      this->member.unk38.end = 0;
    else
      v9->prev = 0;
    v10 = (unsigned int)v8->data;
    (*((void (__thiscall **)(NiTList_NiProperty *, NiTList_Entry_NiProperty *))this->member.unk38.vtlb + 2))(
      &this->member.unk38,
      v8);
    --this->member.unk38.numItems;
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 0xC);
      *(_WORD *)(v10 + 4) = 0;
      if ( v11 )
        FormHeapFree(v11);
      *(_DWORD *)(v10 + 0xC) = 0;
      *(_BYTE *)(v10 + 9) = 0;
      FormHeapFree(v10);
    }
  }
  while ( this->member.unk48.numItems )
  {
    v12 = this->member.unk48.start;
    v13 = v12->next;
    v2 = v12->next == 0;
    this->member.unk48.start = v12->next;
    if ( v2 )
      this->member.unk48.end = 0;
    else
      v13->prev = 0;
    v14 = (unsigned int)v12->data;
    (*((void (__thiscall **)(NiTList_NiProperty *, NiTList_Entry_NiProperty *))this->member.unk48.vtlb + 2))(
      &this->member.unk48,
      v12);
    --this->member.unk48.numItems;
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 0xC);
      *(_WORD *)(v14 + 4) = 0;
      if ( v15 )
        FormHeapFree(v15);
      *(_DWORD *)(v14 + 0xC) = 0;
      *(_BYTE *)(v14 + 9) = 0;
      FormHeapFree(v14);
    }
  }
  while ( this->member.unk58.numItems )
  {
    v16 = this->member.unk58.start;
    v17 = v16->next;
    v2 = v16->next == 0;
    this->member.unk58.start = v16->next;
    if ( v2 )
      this->member.unk58.end = 0;
    else
      v17->prev = 0;
    v18 = (unsigned int)v16->data;
    (*((void (__thiscall **)(NiTList_NiProperty *, NiTList_Entry_NiProperty *))this->member.unk58.vtlb + 2))(
      &this->member.unk58,
      v16);
    --this->member.unk58.numItems;
    if ( v18 )
    {
      v19 = *(_DWORD *)(v18 + 0xC);
      *(_WORD *)(v18 + 4) = 0;
      if ( v19 )
        FormHeapFree(v19);
      *(_DWORD *)(v18 + 0xC) = 0;
      *(_BYTE *)(v18 + 9) = 0;
      FormHeapFree(v18);
    }
  }
}
