void __thiscall sub_4761C0(AnimSequenceSingle *this, unsigned int a2)
{
  const char *v6; // ebx
  int v7; // edi
  _DWORD *v8; // eax

  if ( a2 )
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)a2) )
    {
      v6 = *(const char **)a2;
      v7 = sub_439FF0(ModelLoaderPtr, *(const char **)a2);
      if ( TESAnimGroup_IsPowerAttack(*(unsigned __int8 **)(v7 + 8)) )
        AnimSequenceSingle::AnimSequenceSingle(this, v7, 0);
      else
        InterlockedDecrement((volatile LONG *)(v7 + 0xC));
      FormHeapFree((unsigned int)v6);
      v8 = *(_DWORD **)(a2 + 4);
      if ( v8 )
      {
        *(_DWORD *)(a2 + 4) = v8[1];
        *(_DWORD *)a2 = *v8;
        FormHeapFree((unsigned int)v8);
      }
      else
      {
        *(_DWORD *)a2 = 0;
      }
    }
    FormHeapFree(a2);
  }
}
