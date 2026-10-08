double __userpurge TESSaveLoadGame_FinalizeLoadedForms@<st0>(
        _DWORD **this@<ecx>,
        double st6_0@<st1>,
        double st5_0@<st2>,
        double result@<st0>,
        _DWORD *a5,
        int a6,
        char a7)
{
  UInt32 mainThreadID; // esi
  _DWORD **v8; // edi
  unsigned int v9; // eax
  unsigned int refID; // ebp
  _DWORD *v11; // ebx
  int v12; // esi
  unsigned int v13; // eax
  void **v14; // esi
  unsigned __int8 v15; // bl
  TESObjectREFR *v16; // eax
  TESObjectREFR *v17; // esi
  TESObjectREFR *v18; // esi
  _DWORD *v19; // eax
  UInt32 v20; // eax
  TESForm *v21; // eax
  float y; // ecx
  float z; // edx
  unsigned int v24; // eax
  unsigned int v25; // esi
  TESObjectCELL *currentInteriorCell; // esi
  BSExtraDataVtbl *v27; // esi
  float *v28; // eax
  int v29; // eax
  TES *v30; // ecx
  int v31; // edx
  unsigned int i; // edi
  _DWORD *v33; // esi
  unsigned __int8 v34; // bl
  _DWORD **v35; // edx
  _DWORD *v36; // eax
  unsigned int j; // ecx
  void (__thiscall ***v38)(_DWORD, int); // ecx
  TESObjectCELL *v39; // esi
  BSExtraDataVtbl *v40; // esi
  int v41; // [esp-4h] [ebp-60h]
  int v42; // [esp+0h] [ebp-5Ch]
  float x; // [esp+8h] [ebp-54h]
  __int64 v44; // [esp+Ch] [ebp-50h]
  char v45; // [esp+2Bh] [ebp-31h]
  float *p_a2; // [esp+30h] [ebp-2Ch]
  _DWORD **v48; // [esp+34h] [ebp-28h] BYREF
  float a2; // [esp+38h] [ebp-24h] BYREF
  float v50; // [esp+3Ch] [ebp-20h]
  int v51; // [esp+40h] [ebp-1Ch]
  float a3[2]; // [esp+44h] [ebp-18h] BYREF
  float v53; // [esp+4Ch] [ebp-10h]
  float a4[2]; // [esp+50h] [ebp-Ch] BYREF
  int v55; // [esp+58h] [ebp-4h] BYREF

  mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x45fdab*/
  v8 = this; /*0x45fdaf*/
  if ( ((int (__usercall *)@<eax>(double@<st0>, double@<st1>))GetCurrentThreadId)(result, st6_0) == mainThreadID ) /*0x45fdbd*/
    LOBYTE(v9) = *((_BYTE *)v8 + 0x18); /*0x45fdbf*/
  else
    v9 = (unsigned int)v8[6] >> 0x12; /*0x45fdc7*/
  refID = 0; /*0x45fdcc*/
  if ( (v9 & 1) != 0 )
  {
    v8[6] = (_DWORD *)((unsigned int)v8[6] | 2); /*0x45fdd6*/
    if ( a7 ) /*0x45fddf*/
      MEMORY[0xB33A10]->members.unk38 = 5; /*0x45fde7*/
    v11 = a5; /*0x45fdee*/
    v45 = 1; /*0x45fdf4*/
    if ( !a5 ) /*0x45fdf9*/
    {
      v11 = v8[7]; /*0x45fdfb*/
      a5 = v11; /*0x45fdfe*/
      v45 = 0; /*0x45fe02*/
    }
    v12 = a6; /*0x45fe07*/
    if ( a6 ) /*0x45fe0d*/
      ((void (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD))reference->vtbl->super.super.super.super.Unk_16)( /*0x45fe22*/
        reference,
        *(_DWORD *)(a6 + 4),
        *(_DWORD *)(a6 + 8));
    a2 = 0.0; /*0x45fe26*/
    v50 = 0.0; /*0x45fe2a*/
    if ( v11 )
    {
      v48 = (_DWORD **)v11[3]; /*0x45fe39*/
      v13 = (unsigned int)v48; /*0x45fe34*/
      if ( v48 )
      {
        do
        {
          v14 = *(void ***)(v11[1] + 4 * refID); /*0x45fe46*/
          if ( v14 )
          {
            if ( *v14 != reference )
            {
              v15 = *((_BYTE *)v14 + 0xC); /*0x45fe5f*/
              if ( v15 < 0x13u )
                PrintError(
                  "Savegame loading error: Attempting to set the current version to %i.  The oldest compatible version is"
                  " %i.  Errors may occur.",
                  v15,
                  0x13);
              *((_BYTE *)v8 + 0x7C) = v15; /*0x45fe7a*/
              (*(void (__thiscall **)(void *, void *, void *))(*(_DWORD *)*v14 + 0x58))(*v14, v14[1], v14[2]); /*0x45fe8c*/
              if ( v45 ) /*0x45fe93*/
              {
                v16 = (TESObjectREFR *)OblivionDynamicCast( /*0x45fea6*/
                                         *v14,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                         &Actor `RTTI Type Descriptor',
                                         0);
                v17 = v16; /*0x45feab*/
                if ( v16 ) /*0x45feb2*/
                {
                  if ( !Shared_GetDwordAtOffset40(v16) && !TESObjectREFR_GetWorldSpace(v17) ) /*0x45fec1*/
                    BSSimpleList_PushFront(&a2, (int)v17); /*0x45fecf*/
                }
              }
              v13 = (unsigned int)v48; /*0x45fed7*/
              v11 = a5; /*0x45fedb*/
              *((_BYTE *)v8 + 0x7C) = *((_BYTE *)v8 + 0x71); /*0x45fedf*/
            }
          }
          ++refID; /*0x45fee2*/
        }
        while ( refID < v13 );
        v12 = a6; /*0x45feed*/
      }
    }
    if ( v45 ) /*0x45fef6*/
    {
      p_a2 = &a2; /*0x45ff00*/
      do /*0x46007e*/
      {
        if ( !*((_DWORD *)p_a2 + 1) && !*(_DWORD *)p_a2 ) /*0x45ff0e*/
          break; /*0x45ff11*/
        v18 = *(TESObjectREFR **)p_a2; /*0x45ff17*/
        result = sub_5ED860((int *)*(_DWORD *)p_a2, *(float *)&v11, refID, (int)v8, st5_0, st6_0, result); /*0x45ff1b*/
        v11 = *this; /*0x45ff24*/
        refID = v18->member.super.refID; /*0x45ff26*/
        if ( NiTMap_GetAt(*this, refID, &v48) ) /*0x45ff31*/
        {
          v8 = v48; /*0x45ff79*/
        }
        else
        {
          v19 = (_DWORD *)FormHeapAlloc(8u); /*0x45ff3c*/
          if ( v19 ) /*0x45ff46*/
          {
            v8 = (_DWORD **)v19; /*0x45ff49*/
            *v19 = 0; /*0x45ff4e*/
            v19[1] = 0; /*0x45ff54*/
            v48 = (_DWORD **)v19; /*0x45ff5b*/
            NiTMap_SetAt(v11, refID, (int)v19); /*0x45ff5f*/
          }
          else
          {
            v8 = 0; /*0x45ff69*/
            v48 = 0; /*0x45ff6e*/
            NiTMap_SetAt(v11, refID, 0); /*0x45ff72*/
          }
        }
        if ( !v8[1] ) /*0x45ff7d*/
          *v8 = (_DWORD *)((unsigned int)*v8 | 4); /*0x45ff83*/
        if ( !Shared_GetDwordAtOffset40(v18) && !TESObjectREFR_GetWorldSpace(v18) ) /*0x45ff97*/
        {
          v20 = strtol(Str, 0, 0x10); /*0x45ffae*/
          v21 = TESForm_LookupByFormID(v20); /*0x45ffc5*/
          v8 = (_DWORD **)OblivionDynamicCast( /*0x45ffd3*/
                            v21,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &TESObjectCELL `RTTI Type Descriptor',
                            0);
          if ( v8 ) /*0x45ffda*/
          {
            y = g_zeroNiPoint3.y; /*0x45ffe5*/
            z = g_zeroNiPoint3.z; /*0x45ffeb*/
            a3[0] = g_zeroNiPoint3.x; /*0x45fff1*/
            a4[0] = a3[0]; /*0x45fff5*/
            a3[1] = y; /*0x45fff9*/
            a4[1] = y; /*0x45fffd*/
            v53 = z; /*0x46000d*/
            *(float *)&v55 = z; /*0x460011*/
            sub_4D5D70((TESObjectCELL *)v8, st5_0, st6_0, a3, a4); /*0x460015*/
            TESObjectREFR_SetPosition(v18, a3[0], a3[1], v53); /*0x460035*/
            sub_4D89A0((int *)v18, SLODWORD(a4[0]), SLODWORD(a4[1]), v55); /*0x460055*/
            sub_4DD4B0((int)v11, st5_0, st6_0, result, (Actor *)v18, (TESObjectCELL *)v8, 0); /*0x46005e*/
          }
          else
          {
            TESForm_SetDisabledFlag((TESForm *)v18, 1); /*0x46006c*/
          }
        }
        p_a2 = *((float **)p_a2 + 1); /*0x46007a*/
      }
      while ( p_a2 ); /*0x46007e*/
      v24 = LODWORD(v50); /*0x460084*/
      if ( v50 != 0.0 ) /*0x46008a*/
      {
        do /*0x4600a0*/
        {
          v25 = *(_DWORD *)(v24 + 4); /*0x460090*/
          FormHeapFree(v24); /*0x460094*/
          v24 = v25; /*0x46009e*/
        }
        while ( v25 ); /*0x4600a0*/
      }
      ActorProcessManager_InitLoadedCrimes((ActorProcessManager *)&qword_B3BB2C[0x75]); /*0x4600a7*/
      sub_67C230((int *)&qword_B3BB2C[0xA1]); /*0x4600b1*/
      v11 = a5; /*0x4600b6*/
      v12 = a6; /*0x4600ba*/
    }
    if ( a7 ) /*0x4600c3*/
    {
      currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell; /*0x4600ce*/
      if ( currentInteriorCell ) /*0x4600d3*/
      {
        if ( TESObjectCELL_IsInterior(MEMORY[0xB333A0]->currentInteriorCell) ) /*0x4600db*/
          v27 = sub_424180(&currentInteriorCell->members.extraData); /*0x4600f0*/
        else
          v27 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x4603c2*/
        if ( v27 ) /*0x4600f4*/
          sub_889E00(v27); /*0x4600f8*/
      }
      else
      {
        v27 = 0; /*0x4603cd*/
      }
      if ( MEMORY[0xB35C24] ) /*0x4600fd*/
        sub_889E00((_DWORD *)MEMORY[0xB35C24]); /*0x460107*/
      sub_4416F0(MEMORY[0xB333A0], st5_0, st6_0, result); /*0x460112*/
      if ( !PlayerCharacter_GetNodeByPerspective(reference, 0) ) /*0x46011f*/
        sub_438060((_DWORD **)MEMORY[0xB33A1C], (TESObjectREFR *)reference, 0); /*0x460136*/
      sub_434020(MEMORY[0xB33A10], st5_0, st6_0, result, 5); /*0x460143*/
      MEMORY[0xB33A10]->members.unk38 = 5; /*0x460150*/
      if ( v27 ) /*0x460157*/
        sub_88D1D0((int *)v27, refID, 0); /*0x46015d*/
      if ( MEMORY[0xB35C24] ) /*0x460162*/
        sub_88D1D0((int *)MEMORY[0xB35C24], refID, 0); /*0x46016e*/
      if ( !MEMORY[0xB333A0]->currentInteriorCell ) /*0x460178*/
      {
        sub_482310((int)MEMORY[0xB333A0]->gridCellArray, result); /*0x460185*/
        v28 = reference->vtbl->super.super.super.GetPos(reference); /*0x460198*/
        a2 = *v28; /*0x46019c*/
        v50 = v28[1]; /*0x4601a7*/
        v29 = *((_DWORD *)v28 + 2); /*0x4601ab*/
        a4[0] = a2; /*0x4601ae*/
        a4[1] = v50; /*0x4601ba*/
        v30 = MEMORY[0xB333A0]; /*0x4601c1*/
        *(float *)&v55 = 0.0; /*0x4601cb*/
        v51 = v29; /*0x4601d0*/
        GetTerrainHeight(v30, &a2, (float *)&v55); /*0x4601d4*/
        result = 1.0; /*0x4601d9*/
        x = stru_B258DC.x; /*0x4601f0*/
        v44 = *(_QWORD *)&stru_B258DC.y; /*0x4601f8*/
        v41 = LODWORD(a4[0]); /*0x46020b*/
        v31 = v55; /*0x46020d*/
        v42 = LODWORD(a4[1]); /*0x460211*/
        byte_B2CBC0 = 0; /*0x460214*/
        DrawGrassPass_(v41, v42, v31, x, v44, SHIDWORD(v44), 1.0); /*0x46021e*/
        DistantLOD_UpdateLandLODAtPosition(LODWORD(a2), v50, v51, 0); /*0x460241*/
        byte_B2CBC0 = 1; /*0x460249*/
      }
      v12 = a6; /*0x460250*/
    }
    if ( v12 ) /*0x460256*/
    {
      if ( Shared_GetDwordAtOffset40(reference) ) /*0x46025e*/
        sub_6637C0(reference); /*0x46026d*/
      ((void (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD))reference->vtbl->super.super.super.super.Unk_17)( /*0x460285*/
        reference,
        *(_DWORD *)(v12 + 4),
        *(_DWORD *)(v12 + 8));
    }
    if ( v11 )
    {
      refID = a5[3]; /*0x46028f*/
      for ( i = 0; i < refID; ++i )
      {
        v33 = *(_DWORD **)(a5[1] + 4 * i); /*0x4602a7*/
        if ( v33 )
        {
          v34 = *((_BYTE *)v33 + 0xC); /*0x4602ae*/
          if ( v34 < 0x13u )
            PrintError(
              "Savegame loading error: Attempting to set the current version to %i.  The oldest compatible version is %i."
              "  Errors may occur.",
              v34,
              0x13);
          *((_BYTE *)this + 0x7C) = v34; /*0x4602cd*/
          (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*v33 + 0x5C))(*v33, v33[1], v33[2]); /*0x4602df*/
          *((_BYTE *)this + 0x7C) = *((_BYTE *)this + 0x71); /*0x4602e9*/
          FormHeapFree((unsigned int)v33); /*0x4602ec*/
        }
      }
    }
    v35 = this; /*0x4602fb*/
    v36 = *(this + 7); /*0x4602ff*/
    if ( v36 ) /*0x460306*/
    {
      for ( j = 0; j < v36[3]; ++j ) /*0x46030a*/
        *(_DWORD *)(v36[1] + 4 * j) = 0; /*0x460313*/
      v36[3] = 0; /*0x46031e*/
      v36[4] = 0; /*0x460321*/
      v38 = (void (__thiscall ***)(_DWORD, int))*(this + 7); /*0x460324*/
      if ( v38 ) /*0x460329*/
      {
        (**v38)(v38, 1); /*0x460331*/
        v35 = this; /*0x460333*/
      }
      v35[7] = 0; /*0x460337*/
    }
    if ( a7 ) /*0x460343*/
    {
      v39 = MEMORY[0xB333A0]->currentInteriorCell; /*0x46034b*/
      if ( v39 ) /*0x460350*/
      {
        if ( TESObjectCELL_IsInterior(MEMORY[0xB333A0]->currentInteriorCell) ) /*0x460358*/
          v40 = sub_424180(&v39->members.extraData); /*0x460369*/
        else
          v40 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x4603d4*/
        if ( v40 ) /*0x46036d*/
          sub_889E00(v40); /*0x460371*/
      }
      else
      {
        v40 = 0; /*0x4603dc*/
      }
      if ( MEMORY[0xB35C24] ) /*0x460376*/
        sub_889E00((_DWORD *)MEMORY[0xB35C24]); /*0x460380*/
      sub_434020(MEMORY[0xB33A10], st5_0, st6_0, result, 5); /*0x46038d*/
      if ( v40 ) /*0x460394*/
        sub_88D1D0((int *)v40, refID, 0); /*0x46039a*/
      if ( MEMORY[0xB35C24] ) /*0x46039f*/
        sub_88D1D0((int *)MEMORY[0xB35C24], refID, 0); /*0x4603ab*/
    }
    *(this + 6) = (_DWORD *)((unsigned int)*(this + 6) & 0xFFFFFFFD); /*0x4603b4*/
  }
  return result; /*0x4603b8*/
}
