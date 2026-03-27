int __userpurge TESContainer_CopyContentsToRef_::PostAdditemMessageForPlayer@<eax>(
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
  const char *v65; // edi
  char *v66; // eax
  const char *v67; // eax
  char *v68; // eax
  const char *v69; // eax
  CHAR *v70; // eax
  const char *ItemUpDownSound; // eax
  double v72; // st7
  char *m_data; // esi

  if ( a3 != TESDataHandler_g_PlayerRef || a1 == a2 )
    return TESContainer_CopyContentsToRef_::Done(a6);
  a10.m_data = a2;
  a10.m_dataLen = (__int16)a2;
  a10.m_bufLen = (__int16)a2;
  v62 = *(_DWORD *)a1 <= 1;
  v63 = *((void **)a1 + 1);
  v64 = (const char *)sAddItemtoInventory;
  STACK[0x14C] = 2;
  if ( v62 )
  {
    v68 = (char *)OblivionDynamicCast(
                    v63,
                    (int)a2,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESFullName `RTTI Type Descriptor',
                    (int)a2);
    if ( v68 == a2 || (v69 = *((const char **)v68 + 1), v69 == a2) )
      v69 = EmptyString;
    BSStringT_Static_Format(&a10, "%s %s", v69, v64);
  }
  else
  {
    v65 = (const char *)sPlural;
    v66 = (char *)OblivionDynamicCast(
                    v63,
                    (int)a2,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESFullName `RTTI Type Descriptor',
                    (int)a2);
    if ( v66 == a2 || (v67 = *((const char **)v66 + 1), v67 == a2) )
      v67 = EmptyString;
    BSStringT_Static_Format(&a10, "%i %s%s %s", *(_DWORD *)a1, v67, v65, v64);
  }
  v70 = sub_4702D0(*((void **)a1 + 1), (TESObjectREFR *)TESDataHandler_g_PlayerRef);
  _sprintf((char *)&a16, "%s\\%s", "Icons", v70);
  ItemUpDownSound = GetItemUpDownSound(*((_BYTE **)a1 + 1), 1, (char)a2);
  v72 = fConstant_2;
  m_data = a10.m_data;
  QueueUIMessage((char)a2, a4, v72, (int)a10.m_data, fConstant_2, (int)&a16, (int)ItemUpDownSound);
  sub_57A3B0((char)a2, a4, a5, v72, (char)a2);
  FormHeapFree((unsigned int)m_data);
  return TESContainer_CopyContentsToRef_::Done(a6);
}
