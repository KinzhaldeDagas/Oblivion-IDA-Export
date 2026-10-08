void __userpurge EffectItemList_LoadItem_::InitNewEffectItem(
        char *a1@<ebx>,
        int a2@<edi>,
        void *esi0@<esi>,
        int a4@<ebp>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        BSStringT a10,
        BSStringT a11,
        int a12,
        int a13,
        int a14,
        int a15,
        Data *a16,
        const char *a17)
{
  a10.m_data = (char *)FormHeapAlloc(0x24u); /*0x415511*/
  if ( a10.m_data != a1 ) /*0x41551b*/
    a1 = (char *)EffectItem_constr(a2); /*0x415525*/
  if ( a1 ) /*0x41552d*/
  {
    if ( EffectItem_Load(a1, a16, a17) ) /*0x41553f*/
      EffectItemList_LoadItem_::AppendItem(a1, (int)esi0, a5, a6); /*0x415547*/
    else
      EffectItemList_LoadItem_::LoadFailed( /*0x415546*/
        (unsigned int *)a1,
        a2,
        esi0,
        a17,
        a5,
        a6,
        a7,
        a8,
        a9,
        a10,
        a11,
        a12,
        a13,
        a4);
  }
  else
  {
    EffectItemList_LoadItem_::Done(a5, a6); /*0x41552d*/
  }
}
