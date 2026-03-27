int __usercall Magic_ShowDebugText_::MagicTarget@<eax>(
        int a1@<eax>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<esi>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        signed int a13,
        void *a14,
        int a15,
        int a16,
        int a17,
        int *a18,
        int *a19,
        float a20,
        __int128 a21,
        void *a22,
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
        int a44)
{
  int *v44; // eax
  int *v45; // edi
  double v46; // st7
  int v47; // esi
  void *v48; // eax
  const char *v49; // edi
  const char **v50; // eax
  const char **v51; // eax
  const char *v52; // eax
  const char *v53; // ecx
  int v54; // ecx
  int v55; // edi
  const char *Name; // eax
  double v57; // st7
  float v59; // [esp+14h] [ebp-10h]
  int v60; // [esp+14h] [ebp-10h]
  float v61; // [esp+14h] [ebp-10h]
  float v62; // [esp+18h] [ebp-Ch]
  int BaseCalcAVi; // [esp+18h] [ebp-Ch]
  float v64; // [esp+18h] [ebp-Ch]

  v44 = (int *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 8))(a1, a7, a6);
  v45 = v44;
  if ( v44 )
  {
    if ( v44[1] || *v44 )
    {
      v62 = (float)a13;
      v46 = (double)iDebugTextLeftRightOffset;
      v59 = v46;
      InterfaceMgr_DebugTextLine(a3, a5, a6, v46, (int)"CURRENT EFFECTS:", v59, v62, 1, 0xFFFFFFFF);
      a2 += a4;
      a13 = a2;
    }
    while ( 1 )
    {
      v47 = *v45;
      a19 = (int *)v45[1];
      if ( *v45 )
      {
        if ( *(_DWORD *)(v47 + 0xC) )
        {
          a18 = (int *)OblivionDynamicCast(
                         a14,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&MagicCaster `RTTI Type Descriptor',
                         &Actor `RTTI Type Descriptor',
                         0);
          if ( 0.0 == *(float *)(v47 + 0x1C) )
            _sprintf((char *)&STACK[0x18C], EmptyString);
          else
            _sprintf((char *)&STACK[0x18C], ", %0.f/%0.fsec", *(float *)(v47 + 4), *(float *)(v47 + 0x1C));
          EffectItem_GetQualifiedName_SkillAttr(*(int **)(v47 + 0xC), (int)&STACK[0x1F4]);
          if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v47 + 8) + 0x18))(*(_DWORD *)(v47 + 8)) == 6 )
          {
            v48 = OblivionDynamicCast(
                    *(void **)(v47 + 0x30),
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                    &TESFullName `RTTI Type Descriptor',
                    0);
            if ( v48 )
            {
              v49 = *((const char **)v48 + 1);
              if ( !v49 )
                v49 = EmptyString;
              v50 = (const char **)*(&Magic_TypeNameArray
                                   + (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v47 + 8) + 0x18))(*(_DWORD *)(v47 + 8)));
              if ( v50 )
                _sprintf((char *)&a21, "%s %s", *v50, v49);
              else
                _sprintf((char *)&a21, "%s %s", 0, v49);
            }
            else
            {
              qmemcpy(&a21, "Unknown Enchantm", sizeof(a21));
              a22 = &loc_746E65;
            }
          }
          else
          {
            v51 = (const char **)*(&Magic_TypeNameArray
                                 + (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v47 + 8) + 0x18))(*(_DWORD *)(v47 + 8)));
            if ( v51 )
              v52 = *v51;
            else
              v52 = 0;
            v53 = *(const char **)(*(_DWORD *)(v47 + 8) + 4);
            if ( !v53 )
              v53 = EmptyString;
            _sprintf((char *)&a21, "%s %s", v53, v52);
          }
          if ( !a18 || (v54 = *(_DWORD *)(v47 + 0xC), *(_DWORD *)(v54 + 0x14) == 0x48) )
          {
            _sprintf(
              (char *)&a44,
              "%s: Mag=%.2f, %s from %s",
              (const char *)&STACK[0x1F4],
              *(float *)(v47 + 0x18),
              (const char *)&STACK[0x18C],
              (const char *)&a21);
          }
          else
          {
            a20 = *(float *)(v47 + 0x18);
            v55 = *(_DWORD *)(v54 + 0x14);
            BaseCalcAVi = Actor_GetBaseCalcAVi(v55);
            v60 = (*(int (__thiscall **)(int *, int))(*a18 + 0x284))(a18, v55);
            Name = (const char *)ActorValue_GetName(v55);
            _sprintf(
              (char *)&a44,
              "%s: Mag=%.2f, %s=%d/%d%s from %s",
              (const char *)&STACK[0x1F4],
              a20,
              Name,
              v60,
              BaseCalcAVi,
              (const char *)&STACK[0x18C],
              (const char *)&a21);
          }
          v64 = (float)a13;
          v57 = (double)iDebugTextLeftRightOffset;
          v61 = v57;
          InterfaceMgr_DebugTextLine(a3, a5, a6, v57, (int)&a44, v61, v64, 1, 0xFFFFFFFF);
          a2 += *(_DWORD *)(a3 + 0xC);
          a13 = a2;
        }
      }
      if ( !a19 )
        break;
      v45 = a19;
    }
  }
  return Magic_ShowDebugText_::Done(
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
           LODWORD(a20),
           a21,
           DWORD1(a21),
           DWORD2(a21),
           HIDWORD(a21),
           a22);
}
