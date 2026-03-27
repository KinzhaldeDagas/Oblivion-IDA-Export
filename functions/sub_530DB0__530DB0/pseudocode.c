void __usercall sub_530DB0(int this@<ecx>, char a2@<bpl>)
{
  int *TopicInfoParent; // eax
  unsigned int *v4; // edi
  TESForm v5[3]; // [esp+Ch] [ebp-5Ch] BYREF
  unsigned int v6; // [esp+64h] [ebp-4h]

  if ( (*(_DWORD *)(this + 8) & 0x4000) == 0 )
  {
    if ( *(_WORD *)(this + 0x20) != 0xFFFF )
    {
      TopicInfoParent = TESTopic_static_GetTopicInfoParent_(this);
      if ( TopicInfoParent )
        sub_530590((_WORD *)this, TopicInfoParent);
    }
    sub_56A750((void **)(this + 0x18));
    sub_530620();
    sub_530690((BSSimpleList_VoidPtr *)this);
    Script_Constructor(v5);
    v6 = 0;
    sub_4FC7A0(&stru_B36530, a2, (int)v5);
    v6 = 0xFFFFFFFF;
    Script_StaticDestructor(v5);
  }
  v4 = *(unsigned int **)(this + 0x30);
  dword_B36528 = 0;
  dword_B3652C = 0;
  if ( v4 )
  {
    sub_530500(v4);
    FormHeapFree((unsigned int)v4);
  }
  j_TESForm_ClearComponentReferences((TESForm *)this);
}
