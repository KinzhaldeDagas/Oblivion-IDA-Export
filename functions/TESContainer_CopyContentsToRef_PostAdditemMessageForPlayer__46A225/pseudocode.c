void __userpurge TESContainer_CopyContentsToRef_::PostAdditemMessageForPlayer(
        char *a1@<ebx>,
        char *a2@<ebp>,
        PlayerCharacter *a3@<edi>,
        double a4@<st2>,
        double a5@<st1>,
        int a6,
        int a7,
        int a8,
        int a9,
        BSStringT a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62)
{
  bool v62; // cc
  void *v63; // eax
  const char *v64; // esi
  float v65; // edi
  char *v66; // eax
  char *v67; // eax
  char *v68; // eax
  char *v69; // eax
  CHAR *v70; // eax
  const char *ItemUpDownSound; // eax
  char *m_data; // esi

  if ( a3 != reference || a1 == a2 ) /*0x46a233*/
  {
    TESContainer_CopyContentsToRef_::Done(a6); /*0x46a233*/
  }
  else
  {
    a10.m_data = a2; /*0x46a239*/
    a10.m_dataLen = (__int16)a2; /*0x46a23d*/
    a10.m_bufLen = (__int16)a2; /*0x46a242*/
    v62 = *(_DWORD *)a1 <= 1; /*0x46a247*/
    v63 = *((void **)a1 + 1); /*0x46a24a*/
    v64 = (const char *)LODWORD(flt_B37ED0[0xF4]); /*0x46a24d*/
    STACK[0x14C] = 2; /*0x46a25f*/
    if ( v62 ) /*0x46a26b*/
    {
      v68 = (char *)OblivionDynamicCast( /*0x46a2a5*/
                      v63,
                      (int)a2,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESFullName `RTTI Type Descriptor',
                      (int)a2);
      if ( v68 == a2 || (v69 = *((char **)v68 + 1), v69 == a2) ) /*0x46a2b6*/
        v69 = EmptyString; /*0x46a2b8*/
      BSStringT_Static_Format(&a10, "%s %s", v69, v64); /*0x46a2c9*/
    }
    else
    {
      v65 = flt_B37ED0[0xF2]; /*0x46a26d*/
      v66 = (char *)OblivionDynamicCast( /*0x46a273*/
                      v63,
                      (int)a2,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESFullName `RTTI Type Descriptor',
                      (int)a2);
      if ( v66 == a2 || (v67 = *((char **)v66 + 1), v67 == a2) ) /*0x46a284*/
        v67 = EmptyString; /*0x46a286*/
      BSStringT_Static_Format(&a10, "%i %s%s %s", *(_DWORD *)a1, v67, (const char *)LODWORD(v65), v64); /*0x46a29b*/
    }
    v70 = sub_4702D0(*((void **)a1 + 1), (TESObjectREFR *)reference); /*0x46a2dc*/
    _sprintf((char *)&a16, "%s\\%s", "Icons", v70); /*0x46a2f1*/
    ItemUpDownSound = GetItemUpDownSound(*((_BYTE **)a1 + 1), 1, (char)a2); /*0x46a306*/
    m_data = a10.m_data; /*0x46a311*/
    QueueUIMessage((char)a2, fConstant_2, a5, a10.m_data, fConstant_2, (int)&a16, (int)ItemUpDownSound); /*0x46a320*/
    sub_57A3B0(a4, a5, (char)a2); /*0x46a326*/
    FormHeapFree((unsigned int)m_data); /*0x46a32c*/
    TESContainer_CopyContentsToRef_::Done(a6); /*0x46a332*/
  }
}
