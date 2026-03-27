void *__thiscall sub_7AA860(BSTextureManager *this, NiTPointerList_Node_void **a2)
{
  NiTPointerList_Node_void *v3; // eax
  NiTPointerList_Node_void *start; // ecx
  NiTPointerList_Node_void *next; // eax
  bool v6; // zf
  void *data; // edi
  void (__thiscall *v9)(BSTextureManager *, NiTPointerList_Node_void *); // eax
  NiTPointerList_Node_void *end; // ecx
  NiTPointerList_Node_void *prev; // eax
  void *v12; // edi
  void (__thiscall *v13)(BSTextureManager *, NiTPointerList_Node_void *); // eax
  NiTPointerList_Node_void *v14; // edi
  NiTPointerList_Node_void *v15; // edx
  void *v16; // edi

  v3 = *a2;
  if ( *a2 == this->unk00.start )
  {
    *a2 = v3->next;
    start = this->unk00.start;
    next = start->next;
    v6 = start->next == 0;
    this->unk00.start = start->next;
    if ( v6 )
    {
      v9 = *((void (__thiscall **)(BSTextureManager *, NiTPointerList_Node_void *))this->unk00.__vftable + 2);
      this->unk00.end = 0;
      data = start->data;
      v9(this, start);
    }
    else
    {
      next->prev = 0;
      data = start->data;
      (*((void (__thiscall **)(BSTextureManager *, NiTPointerList_Node_void *))this->unk00.__vftable + 2))(this, start);
    }
    --this->unk00.numItems;
    return data;
  }
  else if ( v3 == this->unk00.end )
  {
    *a2 = 0;
    end = this->unk00.end;
    prev = end->prev;
    this->unk00.end = prev;
    if ( prev )
    {
      prev->next = 0;
      v12 = end->data;
      (*((void (__thiscall **)(BSTextureManager *, NiTPointerList_Node_void *))this->unk00.__vftable + 2))(this, end);
    }
    else
    {
      v13 = *((void (__thiscall **)(BSTextureManager *, NiTPointerList_Node_void *))this->unk00.__vftable + 2);
      this->unk00.start = 0;
      v12 = end->data;
      v13(this, end);
    }
    --this->unk00.numItems;
    return v12;
  }
  else
  {
    v14 = v3->prev;
    v15 = v3->next;
    *a2 = v3->next;
    if ( v14 )
      v14->next = v15;
    if ( v15 )
      v15->prev = v14;
    v16 = v3->data;
    (*((void (__thiscall **)(BSTextureManager *, NiTPointerList_Node_void *))this->unk00.__vftable + 2))(this, v3);
    --this->unk00.numItems;
    return v16;
  }
}
