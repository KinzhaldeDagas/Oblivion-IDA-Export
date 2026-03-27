void *__thiscall sub_67F030(BSTextureManager *this)
{
  NiTPointerList_Node_void *start; // edx
  NiTPointerList_Node_void *v2; // ebx
  void *v3; // edi
  float *data; // esi
  float v6; // [esp+4h] [ebp-8h]
  NiTPointerList_Node_void *v7; // [esp+8h] [ebp-4h] BYREF

  start = this->unk00.start;
  v6 = flt_A32048;
  v2 = 0;
  v3 = 0;
  v7 = 0;
  if ( start )
  {
    do
    {
      data = (float *)start->data;
      if ( data )
      {
        if ( v6 > (double)*data )
        {
          v3 = start->data;
          v6 = *data;
          v2 = start;
        }
      }
      start = start->next;
    }
    while ( start );
    v7 = v2;
    if ( v3 )
    {
      if ( v2 )
        sub_7AA860(this, &v7);
    }
  }
  return v3;
}
