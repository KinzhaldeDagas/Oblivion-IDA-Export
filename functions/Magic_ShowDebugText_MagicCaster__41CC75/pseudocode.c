int __usercall Magic_ShowDebugText_::MagicCaster@<eax>(
        void *a1@<eax>,
        int a2@<ebx>,
        int a3@<ebp>,
        double a4@<st2>,
        double a5@<st1>,
        double st7_0@<st0>,
        _DWORD *a7@<edi>,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        SkyObject *a14,
        int a15,
        int a16,
        int a17,
        int *a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        void *a25,
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
        int a62,
        int a63)
{
  int a64; // [esp+F8h] [ebp+E4h]
  int *v64; // eax
  int *v65; // esi
  int v66; // eax
  int v67; // esi
  double v68; // st7
  const char *m_uiRefCount; // eax
  double v71; // st7
  int v72; // ebx
  const char *v73; // eax
  bool v74; // zf
  double v75; // st7
  float v76; // [esp+4h] [ebp-10h]
  float v77; // [esp+4h] [ebp-10h]
  float v78; // [esp+4h] [ebp-10h]
  float v79; // [esp+4h] [ebp-10h]
  float v80; // [esp+8h] [ebp-Ch]
  float v81; // [esp+8h] [ebp-Ch]
  float v82; // [esp+8h] [ebp-Ch]
  float v83; // [esp+8h] [ebp-Ch]
  int BaseCalcAVi; // [esp+10h] [ebp-4h]

  v64 = (int *)OblivionDynamicCast( /*0x41cc84*/
                 a1,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&MagicCaster `RTTI Type Descriptor',
                 &Actor `RTTI Type Descriptor',
                 0);
  v65 = v64; /*0x41cc89*/
  if ( v64 )
  {
    BaseCalcAVi = Actor_GetBaseCalcAVi(v64, a2, (int)a7, (int)v64, 9); /*0x41cc9d*/
    v66 = (*(int (__thiscall **)(int *, int))(*v65 + 0x284))(v65, 9); /*0x41cca8*/
    _sprintf((char *)&a47, "Caster Magicka: %d/%d", v66, BaseCalcAVi);
    v80 = (float)a13; /*0x41cccb*/
    v76 = (float)iDebugTextLeftRightOffset; /*0x41ccdc*/
    InterfaceMgr_DebugTextLine(a3, a4, a5, st7_0, (char *)&a47, v76, v80, 1, 0xFFFFFFFF); /*0x41cce0*/
    v67 = *(_DWORD *)(a3 + 0xC); /*0x41cce5*/
    a2 += v67; /*0x41cceb*/
    a13 = a2; /*0x41cced*/
  }
  else
  {
    v67 = *(_DWORD *)(a3 + 0xC); /*0x41ccf3*/
  }
  if ( ((int (__usercall *)@<eax>(SkyObject *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a14->vtbl[4].GetObjectNode)(
         a14,
         st7_0,
         a5,
         a4) )
  {
    m_uiRefCount = (const char *)a14->vtbl[4].GetObjectNode(a14)->members.super.super.super.m_uiRefCount; /*0x41cd3f*/
    if ( !m_uiRefCount ) /*0x41cd44*/
      m_uiRefCount = EmptyString; /*0x41cd46*/
    _sprintf((char *)&a47, "Current Spell: %s:", m_uiRefCount);
    v82 = (float)a13; /*0x41cd6c*/
    v71 = (double)iDebugTextLeftRightOffset; /*0x41cd77*/
    v78 = v71; /*0x41cd7d*/
    InterfaceMgr_DebugTextLine(a3, a4, a5, v71, (char *)&a47, v78, v82, 1, 0xFFFFFFFF); /*0x41cd81*/
    v72 = v67 + a2; /*0x41cd8a*/
    if ( Shared_GetPointerAtOffset08((Atmosphere *)a14) ) /*0x41cd93*/
    {
      if ( Shared_GetPointerAtOffset08((Atmosphere *)a14) == (NiAVObject *)1 ) /*0x41cdb2*/
      {
        v73 = (const char *)&aAim; /*0x41cdb4*/
      }
      else if ( Shared_GetPointerAtOffset08((Atmosphere *)a14) == (NiAVObject *)2 ) /*0x41cdc7*/
      {
        v73 = "CAST"; /*0x41cdc9*/
      }
      else if ( Shared_GetPointerAtOffset08((Atmosphere *)a14) == (NiAVObject *)4 ) /*0x41cddc*/
      {
        v73 = "FIND_TARGETS"; /*0x41cdde*/
      }
      else if ( Shared_GetPointerAtOffset08((Atmosphere *)a14) == (NiAVObject *)5 ) /*0x41cdf1*/
      {
        v73 = "ERR_SPELL_DISABLED"; /*0x41cdf3*/
      }
      else if ( Shared_GetPointerAtOffset08((Atmosphere *)a14) == (NiAVObject *)6 ) /*0x41ce06*/
      {
        v73 = "ERR_ALREADY_CASTING"; /*0x41ce08*/
      }
      else
      {
        v74 = Shared_GetPointerAtOffset08((Atmosphere *)a14) == (NiAVObject *)7; /*0x41ce18*/
        v73 = "ERR_CANNOT_CAST"; /*0x41ce1b*/
        if ( !v74 ) /*0x41ce20*/
          v73 = "UNKNOWN"; /*0x41ce22*/
      }
    }
    else
    {
      v73 = "NO_SPELL"; /*0x41cd9c*/
    }
    _sprintf((char *)&a47, "Casting State: %s", v73);
    v83 = (float)v72; /*0x41ce48*/
    v75 = (double)iDebugTextLeftRightOffset; /*0x41ce53*/
    v79 = v75; /*0x41ce59*/
    InterfaceMgr_DebugTextLine(a3, a4, a5, v75, (char *)&a47, v79, v83, 1, 0xFFFFFFFF); /*0x41ce5d*/
    return Magic_ShowDebugText_::Check_MagicTarget( /*0x41ce6a*/
             v67 + v72,
             a3,
             a7,
             *(_DWORD *)(a3 + 0xC),
             a4,
             a5,
             a8,
             a9,
             a10,
             a11,
             a12,
             v72,
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
             a24,
             a25,
             a26,
             a27,
             a28,
             a29,
             a30,
             a31,
             a32,
             a33,
             a34,
             a35,
             a36,
             a37,
             a38,
             a39,
             a40,
             a41,
             a42,
             a43,
             a44,
             a45,
             a46,
             a47,
             a48,
             a49,
             a50,
             a51,
             a52,
             a53,
             a54,
             a55,
             a56,
             a57,
             a58,
             a59,
             a60,
             a61,
             a62,
             a63,
             a64);
  }
  else
  {
    v81 = (float)a13; /*0x41cd10*/
    v68 = (double)iDebugTextLeftRightOffset; /*0x41cd14*/
    v77 = v68; /*0x41cd1a*/
    InterfaceMgr_DebugTextLine(a3, a4, a5, v68, "Caster Inactive", v77, v81, 1, 0xFFFFFFFF); /*0x41cd22*/
    return Magic_ShowDebugText_::Check_MagicTarget( /*0x41cd2f*/
             v67 + a2,
             a3,
             a7,
             *(_DWORD *)(a3 + 0xC),
             a4,
             a5,
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
             a24,
             a25,
             a26,
             a27,
             a28,
             a29,
             a30,
             a31,
             a32,
             a33,
             a34,
             a35,
             a36,
             a37,
             a38,
             a39,
             a40,
             a41,
             a42,
             a43,
             a44,
             a45,
             a46,
             a47,
             a48,
             a49,
             a50,
             a51,
             a52,
             a53,
             a54,
             a55,
             a56,
             a57,
             a58,
             a59,
             a60,
             a61,
             a62,
             a63,
             a64);
  }
}
