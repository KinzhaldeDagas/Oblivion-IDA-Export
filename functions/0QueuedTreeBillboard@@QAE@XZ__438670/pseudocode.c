QueuedTreeBillboard *__stdcall QueuedTreeBillboard::QueuedTreeBillboard(const char *a1, void *a2)
{
  IOTask *v2; // esi
  QueuedTreeBillboard *result; // eax

  v2 = (IOTask *)FormHeapAlloc(0x38u);
  if ( v2 )
  {
    sub_437050(v2, a1, 4u);
    v2->vtbl = &QueuedTreeBillboard::`vftable';
    v2[2].vtbl = a2;
  }
  else
  {
    v2 = 0;
  }
  if ( v2 )
    InterlockedIncrement((volatile LONG *)&v2->members.unk08);
  (*((void (__thiscall **)(IOTask *))v2->vtbl + 8))(v2);
  result = (QueuedTreeBillboard *)InterlockedDecrement((volatile LONG *)&v2->members.unk08);
  if ( !result )
    return (*(QueuedTreeBillboard *(__thiscall **)(IOTask *, int))v2->vtbl)(v2, 1);
  return result;
}
