void sub_572170()
{
  float *v0; // esi
  int v1; // ebx
  double v2; // st6
  InterfaceManager *Singleton; // eax
  void (__thiscall ***v4)(void *, int); // edi
  NiAVObject *v5; // edi
  double v6; // st7
  _DWORD *v7; // ebx
  float *v8; // esi
  int v9; // edx
  _DWORD *v10; // eax
  void *v11; // ecx
  bool v12; // zf
  float v13; // edi
  double v14; // st6
  float v15; // edi
  int v16; // edi
  _DWORD *v17; // eax
  float v18; // edi
  float *v19; // [esp+10h] [ebp-Ch]
  float v20; // [esp+14h] [ebp-8h] BYREF
  void *node; // [esp+18h] [ebp-4h] BYREF

  if ( !InterfaceManager_IsMenuMode() ) /*0x572173*/
  {
    v19 = sub_571F90(1); /*0x57218e*/
    v0 = v19 + 3; /*0x572192*/
    v1 = 0xC8; /*0x572195*/
    do /*0x572278*/
    {
      if ( v0[3] > 0.0 ) /*0x5721aa*/
      {
        v20 = v0[3] - *(float *)&MEMORY[0xB33E90][0xC]; /*0x5721b9*/
        v2 = v20; /*0x5721bd*/
        v0[3] = v20; /*0x5721c1*/
        if ( v2 <= 0.0 ) /*0x5721cb*/
        {
          if ( *(_DWORD *)v0 ) /*0x5721d1*/
          {
            Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5721dc*/
            Singleton->unk070->vtbl->RemoveObject(Singleton->unk070, (NiAVObject **)&node, *(NiAVObject **)v0); /*0x5721f7*/
            if ( *(float *)&node != 0.0 ) /*0x5721ff*/
            {
              v4 = (void (__thiscall ***)(void *, int))node; /*0x572201*/
              if ( !InterlockedDecrement((volatile LONG *)node + 1) ) /*0x572207*/
                (**v4)(v4, 1); /*0x57221d*/
            }
            v5 = *(NiAVObject **)v0; /*0x57221f*/
            if ( *(_DWORD *)v0 ) /*0x57221f*/
            {
              if ( !InterlockedDecrement((volatile LONG *)&v5->members) ) /*0x572229*/
              {
                if ( v5 ) /*0x572235*/
                  v5->vtbl->super.super.Destructor((NiRefObject *)v5, 1); /*0x57223f*/
              }
              *v0 = 0.0; /*0x572241*/
            }
            v0[0xFFFFFFFF] = 0.0; /*0x572245*/
            v0[0xFFFFFFFD] = 0.0; /*0x572248*/
            v0[0xFFFFFFFE] = 0.0; /*0x57224b*/
            FormHeapFree(*((_DWORD *)v0 + 1)); /*0x572252*/
            v6 = kTerrainLODQuadRayDirectionZ; /*0x572257*/
            v0[1] = 0.0; /*0x57225d*/
            *((_WORD *)v0 + 5) = 0; /*0x572260*/
            *((_WORD *)v0 + 4) = 0; /*0x572264*/
            v0[3] = v6; /*0x572268*/
          }
        }
      }
      v0 += 7; /*0x572272*/
      --v1; /*0x572275*/
    }
    while ( v1 ); /*0x572278*/
    v7 = *((_DWORD **)v19 + 0x579); /*0x572282*/
    if ( v7 ) /*0x57228a*/
    {
      while ( 1 ) /*0x572290*/
      {
        v8 = (float *)v7[2]; /*0x572290*/
        v9 = *((_DWORD *)v8 + 3); /*0x572293*/
        v7 = (_DWORD *)*v7; /*0x57229d*/
        if ( *(_DWORD *)(v9 + 4) < 2u ) /*0x57229f*/
          break; /*0x57229f*/
        if ( v8[6] <= 0.0 ) /*0x572302*/
          goto LABEL_41; /*0x572302*/
        *(float *)&node = v8[6] - *(float *)&MEMORY[0xB33E90][0xC]; /*0x572311*/
        v14 = *(float *)&node; /*0x572315*/
        v8[6] = *(float *)&node; /*0x572319*/
        if ( v14 >= 0.0 ) /*0x572323*/
          goto LABEL_41; /*0x572323*/
        (*(void (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(v9 + 0x1C) + 0x88))( /*0x57233a*/
          *(_DWORD *)(v9 + 0x1C),
          &v20,
          v9);
        if ( v20 != 0.0 ) /*0x572342*/
        {
          v15 = v20; /*0x572344*/
          if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v20) + 4)) ) /*0x57234a*/
            (**(void (__thiscall ***)(float, int))LODWORD(v15))(COERCE_FLOAT(LODWORD(v15)), 1); /*0x572360*/
        }
        v16 = *((_DWORD *)v8 + 3); /*0x572362*/
        if ( v16 ) /*0x572367*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x57236d*/
            (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x572383*/
          v8[3] = 0.0; /*0x572385*/
        }
        v17 = *((_DWORD **)v19 + 0x579); /*0x57238c*/
        v11 = v19 + 0x578; /*0x572392*/
        if ( v17 ) /*0x57239a*/
        {
          while ( 1 ) /*0x5723a0*/
          {
            v12 = v8 == (float *)v17[2]; /*0x5723a0*/
            v18 = *(float *)&v17; /*0x5723a6*/
            v17 = (_DWORD *)*v17; /*0x5723a8*/
            if ( v12 ) /*0x5723aa*/
              break; /*0x5723aa*/
            if ( !v17 ) /*0x5723ae*/
              goto LABEL_38; /*0x5723ae*/
          }
        }
        else
        {
LABEL_38:
          v18 = 0.0; /*0x5723b0*/
        }
        *(float *)&node = v18; /*0x5723b4*/
        if ( v18 != 0.0 ) /*0x5723b8*/
          goto LABEL_23; /*0x5723b8*/
LABEL_24:
        if ( v8 ) /*0x5722dd*/
        {
          sub_571DF0(v8); /*0x5722e5*/
          FormHeapFree((unsigned int)v8); /*0x5722eb*/
        }
LABEL_41:
        if ( !v7 ) /*0x5723cc*/
          return; /*0x5723cc*/
      }
      v10 = *((_DWORD **)v19 + 0x579); /*0x5722a5*/
      v11 = v19 + 0x578; /*0x5722ab*/
      if ( v10 ) /*0x5722b3*/
      {
        while ( 1 ) /*0x5722b5*/
        {
          v12 = v8 == (float *)v10[2]; /*0x5722b5*/
          v13 = *(float *)&v10; /*0x5722bb*/
          v10 = (_DWORD *)*v10; /*0x5722bd*/
          if ( v12 ) /*0x5722bf*/
            break; /*0x5722bf*/
          if ( !v10 ) /*0x5722c3*/
            goto LABEL_21; /*0x5722c3*/
        }
      }
      else
      {
LABEL_21:
        v13 = 0.0; /*0x5722c5*/
      }
      *(float *)&node = v13; /*0x5722c9*/
      if ( v13 == 0.0 ) /*0x5722cd*/
        goto LABEL_24; /*0x5722cd*/
LABEL_23:
      v8 = (float *)NiTPointerList_RemoveNode(v11, &node); /*0x5722d9*/
      goto LABEL_24; /*0x5722d9*/
    }
  }
}
