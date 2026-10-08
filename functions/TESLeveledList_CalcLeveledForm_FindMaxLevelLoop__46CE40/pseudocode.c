int __userpurge TESLeveledList_CalcLeveledForm_::FindMaxLevelLoop@<eax>(
        unsigned __int16 **a1@<eax>,
        unsigned __int16 a2@<cx>,
        unsigned __int16 *a3@<ebx>,
        unsigned __int8 *a4@<ebp>,
        unsigned int a5@<edi>,
        unsigned __int16 si0@<si>,
        int a7,
        int a8,
        void *a9,
        TESObject *a10,
        TESObject *a11,
        int a12,
        TESObject *a13,
        int a14,
        void *a15,
        int a16,
        int a17,
        int a18,
        int a19,
        TESObject *a20,
        int a21,
        int a22,
        int a23,
        int a24)
{
  unsigned __int16 *v24; // edx
  unsigned __int16 v25; // ax

  v24 = a1[1]; /*0x46ce40*/
  if ( v24 == a3 && *a1 == a3 ) /*0x46ce49*/
    JUMPOUT(0x46CE5E); /*0x46ce5e*/
  v25 = **a1; /*0x46ce4d*/
  if ( v25 <= a2 ) /*0x46ce53*/
    return TESLeveledList_CalcLeveledForm_::FindMaxLevelLoop_next( /*0x46ce53*/
             (unsigned __int16 **)v24,
             a2,
             a3,
             a4,
             a5,
             si0,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18,
             a19,
             a20,
             a21,
             a22,
             a23,
             a24);
  else
    return TESLeveledList_CalcLeveledForm_::FindMaxLevelLoop_next( /*0x46ce56*/
             (unsigned __int16 **)v24,
             v25,
             a3,
             a4,
             a5,
             si0,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18,
             a19,
             a20,
             a21,
             a22,
             a23,
             a24);
}
