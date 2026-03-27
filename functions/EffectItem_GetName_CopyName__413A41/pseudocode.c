int __userpurge EffectItem_GetName_::CopyName@<eax>(
        const char **a1@<eax>,
        char a2@<bl>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        BSStringT *a12)
{
  a12->m_data = 0;
  a12->m_dataLen = 0;
  a12->m_bufLen = 0;
  BSStringT_Set(a12, *a1, 0);
  if ( (a2 & 1) != 0 )
    return EffectItem_GetName_::CleanupBuffer(a3, a4, a5, a6);
  else
    return EffectItem_GetName_::Done(a3);
}
