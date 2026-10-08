void __usercall sub_530DB0(int this@<ecx>, char a2@<bpl>)
{
  int *TopicInfoParent; // eax
  unsigned int *v4; // edi
  TESForm v5[3]; // [esp+Ch] [ebp-5Ch] BYREF
  unsigned int v6; // [esp+64h] [ebp-4h]

  if ( (*(_DWORD *)(this + 8) & 0x4000) == 0 ) /*0x530ddf*/
  {
    if ( *(_WORD *)(this + 0x20) != 0xFFFF ) /*0x530de9*/
    {
      TopicInfoParent = TESTopic_static_GetTopicInfoParent_(this); /*0x530dec*/
      if ( TopicInfoParent ) /*0x530df6*/
        sub_530590((_WORD *)this, TopicInfoParent); /*0x530dfb*/
    }
    sub_56A750((BSSimpleList_VoidPtr *)(this + 0x18)); /*0x530e03*/
    TESTopicInfo_ClearSharedResponseCache(); /*0x530e0a*/
    sub_530690((BSSimpleList_VoidPtr *)this); /*0x530e11*/
    Script_Constructor(v5); /*0x530e1a*/
    v6 = 0; /*0x530e29*/
    Script_CopyFrom(&g_cachedTopicInfoResultScript, a2, (int)v5); /*0x530e31*/
    v6 = 0xFFFFFFFF; /*0x530e3a*/
    Script_StaticDestructor(v5); /*0x530e42*/
  }
  v4 = *(unsigned int **)(this + 0x30); /*0x530e47*/
  g_cachedTopicInfoForResponses = 0; /*0x530e4c*/
  g_cachedResultScriptTopicInfo = 0; /*0x530e56*/
  if ( v4 ) /*0x530e60*/
  {
    sub_530500(v4); /*0x530e64*/
    FormHeapFree((unsigned int)v4); /*0x530e6a*/
  }
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x530e74*/
}
