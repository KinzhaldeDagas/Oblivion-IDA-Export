int __usercall Magic_ShowDebugText_::MagicCaster@<eax>(
        void *a1@<eax>,
        int a2@<ebx>,
        int a3@<ebp>,
        double a4@<st2>,
        double a5@<st1>,
        double st7_0@<st0>,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        Atmosphere *a13,
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
        int a46)
{
  void *v47; // esi
  int v48; // eax
  int v49; // esi
  double v50; // st7
  const char *m_uiRefCount; // eax
  double v53; // st7
  int v54; // ebx
  const char *v55; // eax
  bool v56; // zf
  double v57; // st7
  float v58; // [esp+4h] [ebp-10h]
  float v59; // [esp+4h] [ebp-10h]
  float v60; // [esp+4h] [ebp-10h]
  float v61; // [esp+4h] [ebp-10h]
  float v62; // [esp+8h] [ebp-Ch]
  float v63; // [esp+8h] [ebp-Ch]
  float v64; // [esp+8h] [ebp-Ch]
  float v65; // [esp+8h] [ebp-Ch]
  int BaseCalcAVi; // [esp+10h] [ebp-4h]

  v47 = OblivionDynamicCast(
          a1,
          0,
          (struct _s_RTTICompleteObjectLocator *)&MagicCaster `RTTI Type Descriptor',
          &Actor `RTTI Type Descriptor',
          0);
  if ( v47 )
  {
    BaseCalcAVi = Actor_GetBaseCalcAVi(9);
    v48 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)v47 + 0x284))(v47, 9);
    _sprintf((char *)&a46, "Caster Magicka: %d/%d", v48, BaseCalcAVi);
    v62 = (float)a12;
    v58 = (float)iDebugTextLeftRightOffset;
    InterfaceMgr_DebugTextLine(a3, a4, a5, st7_0, (int)&a46, v58, v62, 1, 0xFFFFFFFF);
    v49 = *(_DWORD *)(a3 + 0xC);
    a2 += v49;
    a12 = a2;
  }
  else
  {
    v49 = *(_DWORD *)(a3 + 0xC);
  }
  if ( ((int (__usercall *)@<eax>(Atmosphere *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a13->__vftbl[4].GetObjectNode)(
         a13,
         st7_0,
         a5,
         a4) )
  {
    m_uiRefCount = (const char *)a13->__vftbl[4].GetObjectNode((SkyObject *)a13)->members.super.super.super.m_uiRefCount;
    if ( !m_uiRefCount )
      m_uiRefCount = EmptyString;
    _sprintf((char *)&a46, "Current Spell: %s:", m_uiRefCount);
    v64 = (float)a12;
    v53 = (double)iDebugTextLeftRightOffset;
    v60 = v53;
    InterfaceMgr_DebugTextLine(a3, a4, a5, v53, (int)&a46, v60, v64, 1, 0xFFFFFFFF);
    v54 = v49 + a2;
    if ( sub_452A60(a13) )
    {
      if ( sub_452A60(a13) == (NiAVObject *)1 )
      {
        v55 = (const char *)&aAim;
      }
      else if ( sub_452A60(a13) == (NiAVObject *)2 )
      {
        v55 = "CAST";
      }
      else if ( sub_452A60(a13) == (NiAVObject *)4 )
      {
        v55 = "FIND_TARGETS";
      }
      else if ( sub_452A60(a13) == (NiAVObject *)5 )
      {
        v55 = "ERR_SPELL_DISABLED";
      }
      else if ( sub_452A60(a13) == (NiAVObject *)6 )
      {
        v55 = "ERR_ALREADY_CASTING";
      }
      else
      {
        v56 = sub_452A60(a13) == (NiAVObject *)7;
        v55 = "ERR_CANNOT_CAST";
        if ( !v56 )
          v55 = "UNKNOWN";
      }
    }
    else
    {
      v55 = "NO_SPELL";
    }
    _sprintf((char *)&a46, "Casting State: %s", v55);
    v65 = (float)v54;
    v57 = (double)iDebugTextLeftRightOffset;
    v61 = v57;
    InterfaceMgr_DebugTextLine(a3, a4, a5, v57, (int)&a46, v61, v65, 1, 0xFFFFFFFF);
    return Magic_ShowDebugText_::Check_MagicTarget(a7, a8, a9, a10, a11, v54);
  }
  else
  {
    v63 = (float)a12;
    v50 = (double)iDebugTextLeftRightOffset;
    v59 = v50;
    InterfaceMgr_DebugTextLine(a3, a4, a5, v50, (int)"Caster Inactive", v59, v63, 1, 0xFFFFFFFF);
    return Magic_ShowDebugText_::Check_MagicTarget(a7, a8, a9, a10, a11, a12);
  }
}
