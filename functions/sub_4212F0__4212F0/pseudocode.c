BSExtraData *__usercall sub_4212F0@<eax>(ExtraDataList *this@<ecx>, char a2@<bpl>)
{
  BSExtraData *result; // eax
  BSExtraData *v3; // esi
  int v4; // [esp+0h] [ebp-4h]

  result = BaseExtraList_GetExtraData(this, kExtraData_SavedMovementData);
  v3 = result;
  if ( result )
  {
    result = result[1].members.next;
    if ( result )
    {
      MemoryHeap_Free_checked(v3[1].members.next);
      result = (BSExtraData *)j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000006uLL, v4);
      v3[1].members.next = result;
      LOWORD(result->vtbl) = 4;
      HIWORD(result->vtbl) = 0;
      *(_WORD *)&result->members.type = 0;
    }
  }
  return result;
}
