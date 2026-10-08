int __usercall Magic_ShowDebugText_::MagicTarget@<eax>(
        int a1@<eax>,
        _DWORD *a2@<ebx>,
        int a3@<ebp>,
        int a4@<esi>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        int a8,
        int a9,
        int a10,
        _DWORD *a11,
        int a12,
        _DWORD *a13,
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
  unsigned int v55; // edi
  const char *Name; // eax
  double v57; // st7
  float v59; // [esp+14h] [ebp-10h]
  int v60; // [esp+14h] [ebp-10h]
  float v61; // [esp+14h] [ebp-10h]
  float v62; // [esp+18h] [ebp-Ch]
  int BaseCalcAVi; // [esp+18h] [ebp-Ch]
  float v64; // [esp+18h] [ebp-Ch]
  int *v65; // [esp+50h] [ebp+2Ch]
  int *v66; // [esp+54h] [ebp+30h]
  float v67; // [esp+58h] [ebp+34h]

  v44 = (int *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 8))( /*0x41cecc*/
                 a1,
                 a7,
                 a6,
                 a5);
  v45 = v44; /*0x41cece*/
  if ( v44 )
  {
    if ( v44[1] || *v44 ) /*0x41cede*/
    {
      v62 = (float)(int)a13; /*0x41ceee*/
      v46 = (double)iDebugTextLeftRightOffset; /*0x41cef2*/
      v59 = v46; /*0x41cef8*/
      InterfaceMgr_DebugTextLine(a3, a5, a6, v46, "CURRENT EFFECTS:", v59, v62, 1, 0xFFFFFFFF); /*0x41cf00*/
      a2 = (_DWORD *)((char *)a2 + a4); /*0x41cf08*/
      a13 = a2; /*0x41cf0a*/
    }
    while ( 1 )
    {
      v47 = *v45; /*0x41cf14*/
      v66 = (int *)v45[1]; /*0x41cf1b*/
      if ( *v45 )
      {
        if ( *(_DWORD *)(v47 + 0xC) )
        {
          v65 = (int *)OblivionDynamicCast( /*0x41cf4c*/
                         a14,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&MagicCaster `RTTI Type Descriptor',
                         &Actor `RTTI Type Descriptor',
                         0);
          if ( 0.0 == *(float *)(v47 + 0x1C) ) /*0x41cf58*/
            _sprintf((char *)&STACK[0x18C], EmptyString); /*0x41cf67*/
          else
            _sprintf((char *)&STACK[0x18C], ", %0.f/%0.fsec", *(float *)(v47 + 4), *(float *)(v47 + 0x1C)); /*0x41cf8e*/
          EffectItem_GetQualifiedName_SkillAttr(*(int **)(v47 + 0xC), (int)&STACK[0x1F4]); /*0x41cfa1*/
          if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v47 + 8) + 0x18))(*(_DWORD *)(v47 + 8)) == 6 ) /*0x41cfb3*/
          {
            v48 = OblivionDynamicCast( /*0x41cfcb*/
                    *(void **)(v47 + 0x30),
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                    &TESFullName `RTTI Type Descriptor',
                    0);
            if ( v48 ) /*0x41cfd5*/
            {
              v49 = *((const char **)v48 + 1); /*0x41cfdf*/
              if ( !v49 ) /*0x41cfe1*/
                v49 = EmptyString; /*0x41cfe3*/
              v50 = (const char **)*(&Magic_TypeNameArray /*0x41cfef*/
                                   + (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v47 + 8) + 0x18))(*(_DWORD *)(v47 + 8)));
              if ( v50 ) /*0x41cff8*/
                _sprintf((char *)&a21, "%s %s", *v50, v49); /*0x41cffe*/
              else
                _sprintf((char *)&a21, "%s %s", 0, v49); /*0x41d004*/
            }
            else
            {
              qmemcpy(&a21, "Unknown Enchantm", sizeof(a21)); /*0x41d017*/
              a22 = &loc_746E65; /*0x41d033*/
            }
          }
          else
          {
            v51 = (const char **)*(&Magic_TypeNameArray /*0x41d043*/
                                 + (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v47 + 8) + 0x18))(*(_DWORD *)(v47 + 8)));
            if ( v51 ) /*0x41d04c*/
              v52 = *v51; /*0x41d04e*/
            else
              v52 = 0; /*0x41d052*/
            v53 = *(const char **)(*(_DWORD *)(v47 + 8) + 4); /*0x41d057*/
            if ( !v53 ) /*0x41d05c*/
              v53 = EmptyString; /*0x41d05e*/
            _sprintf((char *)&a21, "%s %s", v53, v52); /*0x41d06f*/
          }
          if ( !v65 || (v54 = *(_DWORD *)(v47 + 0xC), *(_DWORD *)(v54 + 0x14) == 0x48) )
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
            v67 = *(float *)(v47 + 0x18); /*0x41d090*/
            v55 = *(_DWORD *)(v54 + 0x14); /*0x41d094*/
            BaseCalcAVi = Actor_GetBaseCalcAVi(v65, (int)a2, v55, (int)v65, v55); /*0x41d0ae*/
            v60 = (*(int (__thiscall **)(int *, unsigned int))(*v65 + 0x284))(v65, v55); /*0x41d0ba*/
            Name = (const char *)ActorValue_GetName(v55); /*0x41d0bc*/
            _sprintf(
              (char *)&a44,
              "%s: Mag=%.2f, %s=%d/%d%s from %s",
              (const char *)&STACK[0x1F4],
              v67,
              Name,
              v60,
              BaseCalcAVi,
              (const char *)&STACK[0x18C],
              (const char *)&a21);
          }
          v64 = (float)(int)a13; /*0x41d12c*/
          v57 = (double)iDebugTextLeftRightOffset; /*0x41d137*/
          v61 = v57; /*0x41d13d*/
          InterfaceMgr_DebugTextLine(a3, a5, a6, v57, (char *)&a44, v61, v64, 1, 0xFFFFFFFF); /*0x41d141*/
          a2 = (_DWORD *)((char *)a2 + *(_DWORD *)(a3 + 0xC)); /*0x41d149*/
          a13 = a2; /*0x41d14c*/
        }
      }
      if ( !v66 ) /*0x41d155*/
        break; /*0x41d155*/
      v45 = v66; /*0x41cf10*/
    }
  }
  return Magic_ShowDebugText_::Done((int)a2, a8, a9, a10, a11, a12, a13);
}
