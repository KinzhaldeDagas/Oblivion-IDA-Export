int __userpurge EffectItem_GetName_::CopyName@<eax>(
        const char **a1@<eax>,
        char a2@<bl>,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        BSStringT *a12)
{
  a12->m_data = 0; /*0x413a45*/
  a12->m_dataLen = 0; /*0x413a4b*/
  a12->m_bufLen = 0; /*0x413a51*/
  BSStringT_Set(a12, *a1, 0); /*0x413a5e*/
  if ( (a2 & 1) != 0 ) /*0x413a69*/
    return EffectItem_GetName_::CleanupBuffer(a3, a4, a5, a6); /*0x413a6a*/
  else
    return EffectItem_GetName_::Done((int)a12, a3); /*0x413a69*/
}
