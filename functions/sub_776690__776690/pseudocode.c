void *__thiscall sub_776690(BSTextureManager *this, int *a2)
{
  NiTPointerList_Node_void *start; // eax
  int *v3; // ebx
  bool v4; // zf
  int *v5; // esi

  start = this->unk00.start;
  v3 = a2;
  if ( start )
  {
    while ( 1 )
    {
      v4 = (void *)*a2 == start->data;
      v5 = (int *)start;
      start = start->next;
      if ( v4 )
        break;
      if ( !start )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v5 = 0;
  }
  a2 = v5;
  if ( v5 )
    return sub_7AA860(this, (NiTPointerList_Node_void **)&a2);
  else
    return (void *)*v3;
}
