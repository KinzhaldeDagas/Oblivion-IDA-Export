int __userpurge EffectItem_CompareTo_::CompareEffectCodes@<eax>(
        _DWORD *a1@<ebp>,
        _DWORD *a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int16 a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  if ( *a1 == *a2 )
    return EffectItem_CompareTo_::CompareMagnitudes(a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  else
    return EffectItem_CompareTo_::Return_1(a3);
}
