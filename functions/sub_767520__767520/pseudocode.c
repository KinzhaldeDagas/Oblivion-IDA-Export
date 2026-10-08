// Skinned geometry renderer. Calls the selected concrete shader's SetupRenderPass and BeginPassLoop before iterating skin partitions. Zero queued passes bypass every partition pass and DrawIndexedPrimitive; this covers Lighting30 high records and conditionally reachable Hair high records.
_DWORD *__userpurge sub_767520@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5,
        int a6,
        _DWORD *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        _DWORD *a12)
{
  _DWORD *result; // eax
  int v14; // edi
  NiObject *v15; // ebx
  _DWORD *v16; // edi
  _DWORD *v17; // ebp
  void *v18; // ecx
  int v19; // ebp
  int v20; // edi
  int v21; // eax
  int v22; // ecx
  bool v23; // cf
  int v25; // [esp+C4h] [ebp-2Ch]
  int v28; // [esp+E0h] [ebp-10h]
  int v29; // [esp+E4h] [ebp-Ch]
  int v30; // [esp+E8h] [ebp-8h]
  unsigned int v31; // [esp+ECh] [ebp-4h]
  _DWORD *retaddr; // [esp+F0h] [ebp+0h]

  result = a7; /*0x767520*/
  if ( a7 ) /*0x76752c*/
  {
    v14 = *(_DWORD *)(a7[3] + 0xC); /*0x76753b*/
    if ( !a5 || (v15 = NiRTTI_Cast(&MEMORY[0xB42858], *(NiObject **)(a5 + 0xBC))) == 0 ) /*0x767572*/
      v15 = *(NiObject **)(a1 + 0xA94); /*0x767574*/
    v16 = *(_DWORD **)(v14 + 0x28); /*0x767581*/
    v17 = (_DWORD *)a9; /*0x76758a*/
    result = (_DWORD *)((int (__thiscall *)(NiObject *, int, _DWORD *, _DWORD *, _DWORD, _DWORD, int, int))v15->__vftable->Save)( /*0x7675a2*/
                         v15,
                         a5,
                         a7,
                         v16,
                         *(_DWORD *)(a1 + 0xC),
                         *(_DWORD *)(a1 + 0x10),
                         a8,
                         a9);                   // Skinned path NiD3DShader vtable +0x28: render preflight.
    if ( !result ) /*0x7675a6*/
    {
      ((void (__thiscall *)(NiObject *, int, _DWORD *, _DWORD *, _DWORD, _DWORD, int, int, int, int, int))v15->__vftable->Compare)( /*0x7675cc*/
        v15,
        a5,
        a7,
        v16,
        *(_DWORD *)(a1 + 0xC),
        *(_DWORD *)(a1 + 0x10),
        a8,
        a9,
        a3,
        a4,
        a2);                                    // Skinned geometry invokes the selected concrete NiD3DShader vtable +0x2C. Conditional Hair high selectors take Hair's reset-plus-default no-pass path; Lighting30 high selectors also queue no pass.
      retaddr = (_DWORD *)retaddr[2]; /*0x7675da*/
      if ( ((int (__thiscall *)(NiObject *))v15->__vftable->Unk_12)(v15) )// Skinned BeginPassLoop guard: PassCount zero skips every skin-partition pass and DrawIndexedPrimitive. This proves no draw for both Lighting30 high records and conditionally reachable Hair high records. /*0x7675e0*/
      {
        do /*0x7677c4*/
        {
          ((void (__thiscall *)(NiObject *, int, int, _DWORD *, _DWORD, _DWORD, int, _DWORD *))v15->__vftable->DumpAttributes)( /*0x767610*/
            v15,
            a8,
            a10,
            v16,
            *(_DWORD *)(a1 + 0xC),
            *(_DWORD *)(a1 + 0x10),
            a11,
            v17);                               // Skinned path vtable +0x30: apply current pass state/stages.
          *(_DWORD *)(a1 + 0x658) = *v17; /*0x76761a*/
          v18 = (void *)v17[1]; /*0x767620*/
          *(_DWORD *)(a1 + 0x65C) = v18; /*0x767623*/
          *(_DWORD *)(a1 + 0x660) = v17[2]; /*0x76762c*/
          *(_DWORD *)(a1 + 0x664) = v17[3]; /*0x767635*/
          v31 = 0; /*0x76763b*/
          if ( retaddr ) /*0x767643*/
          {
            v19 = a5; /*0x767649*/
            do /*0x7677a9*/
            {
              if ( v15 == *(NiObject **)(a1 + 0xA94) /*0x767662*/
                && (unsigned int)*(unsigned __int16 *)(v19 + 0x20) > *(_DWORD *)(a1 + 0x6D8) )
              {
                Shared_NoOpVirtual_60D0A0(v18); /*0x76766a*/
              }
              else
              {
                v20 = *(_DWORD *)(v19 + 0x28); /*0x76767f*/
                v25 = *(_DWORD *)(a1 + 0x10); /*0x76768f*/
                ((void (__thiscall *)(NiObject *, int, int, int, int, _DWORD))v15->__vftable->DumpChildAttributes)( /*0x76769f*/
                  v15,
                  a8,
                  a10,
                  v19,
                  v20,
                  *(_DWORD *)(a1 + 0xC));       // Skinned path vtable +0x34: write constants including skin/object shadow transforms.
                result = (_DWORD *)((int (__thiscall *)(NiObject *, int, int, int, _DWORD))v15->__vftable->Unk_0F)( /*0x7676b3*/
                                     v15,
                                     a5,
                                     v19,
                                     v20,
                                     *(_DWORD *)(a1 + 0xC));// Skinned path vtable +0x3C: bind geometry buffers.
                v16 = result; /*0x7676b5*/
                if ( !result ) /*0x7676b9*/
                  return result; /*0x7676b9*/
                ((void (__thiscall *)(NiObject *, int, _DWORD *, int, _DWORD *, _DWORD, _DWORD, int, int, int, int, _DWORD *))v15->__vftable->Unk_0E)( /*0x7676e4*/
                  v15,
                  a5,
                  a7,
                  v19,
                  result,
                  *(_DWORD *)(a1 + 0xC),
                  *(_DWORD *)(a1 + 0x10),
                  a8,
                  a9,
                  v25,
                  a11,
                  a12);                         // Skinned path vtable +0x38: bind programs and apply constant maps.
                (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x8AC) + 0xFF0) + 4))(*(_DWORD *)(*(_DWORD *)(a1 + 0x8AC) + 0xFF0));// Oblivion DX9 constant-manager +4 is a no-op; uploads already occurred through constant maps. /*0x7676f7*/
                v29 = 0; /*0x7676fe*/
                v30 = 0; /*0x767702*/
                if ( v16[0x11] ) /*0x7676fb*/
                {
                  do /*0x76776e*/
                  {
                    v21 = v16[0x12]; /*0x767708*/
                    if ( v21 ) /*0x76770d*/
                    {
                      v22 = *(unsigned __int16 *)(v21 + 2 * v30) - 2; /*0x767717*/
                      v28 = v22; /*0x76771a*/
                    }
                    else
                    {
                      v28 = v16[0xF]; /*0x767723*/
                      v22 = v28; /*0x767727*/
                    }
                    (*(void (__stdcall **)(_DWORD, int, _DWORD, _DWORD, _DWORD, int, int))(**(_DWORD **)(a1 + 0x280) /*0x76774e*/
                                                                                         + 0x148))(
                      *(_DWORD *)(a1 + 0x280),
                      a6,
                      v16[0xD],
                      0,
                      *(unsigned __int16 *)(v19 + 0x1C),
                      v29,
                      v22);                     // Alternate indexed draw call for the current hardware-skin partition.
                    v23 = (unsigned int)(v30 + 1) < v16[0x11]; /*0x767763*/
                    v29 += v28 + 2; /*0x767766*/
                    ++v30; /*0x76776a*/
                  }
                  while ( v23 ); /*0x76776e*/
                }
                ((void (__thiscall *)(NiObject *, int, int, int, _DWORD *, _DWORD, _DWORD, int, _DWORD *))v15->__vftable->Unk_10)( /*0x767795*/
                  v15,
                  a8,
                  a10,
                  v19,
                  v16,
                  *(_DWORD *)(a1 + 0xC),
                  *(_DWORD *)(a1 + 0x10),
                  a11,
                  a12);                         // Skinned path vtable +0x40: finish current pass/partition.
              }
              v19 += 0x2C; /*0x76779e*/
              ++v31; /*0x7677a5*/
            }
            while ( v31 < (unsigned int)retaddr ); /*0x7677a9*/
            v17 = a12; /*0x7677af*/
          }
          *(_WORD *)(a9 + 0x2E) &= 0xF000u; /*0x7677b7*/
        }
        while ( ((int (__thiscall *)(NiObject *))v15->__vftable[1].super.Destructor)(v15) );// Skinned path vtable +0x4C: advance pass loop. /*0x7677c4*/
      }
      ((void (__thiscall *)(NiObject *, int, int, _DWORD *, _DWORD))v15->__vftable->Unk_11)( /*0x7677ee*/
        v15,
        a8,
        a10,
        v16,
        *(_DWORD *)(a1 + 0xC));                 // Skinned path always calls shader vtable +0x44 finish after setup, including the zero-pass invalid-selector path.
      return (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x8AC) + 0xFC))( /*0x767802*/
                         *(_DWORD *)(a1 + 0x8AC),
                         0);
    }
  }
  return result; /*0x767807*/
}
