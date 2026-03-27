0x525790: sub     esp, 8
0x525793: push    ebx
0x525794: push    ebp
0x525795: push    esi
0x525796: push    edi
0x525797: mov     esi, ecx
0x525799: call    TESForm_InitializeFormRecord
0x52579E: lea     ecx, [esi+0A0h]
0x5257A4: call    TESFullName_Save
0x5257A9: push    54444F4Dh
0x5257AE: push    42444F4Dh
0x5257B3: push    4C444F4Dh
0x5257B8: lea     ecx, [esi+0ACh]
0x5257BE: call    TESModel_Save
0x5257C3: lea     ecx, [esi+24h]
0x5257C6: call    TESActorBaseData_SaveComponent
0x5257CB: lea     ecx, [esi+0E4h]
0x5257D1: call    sub_46E460
0x5257D6: lea     ecx, [esi+54h]
0x5257D9: call    TESSpellList_SaveComponent
0x5257DE: mov     eax, [esi+104h]
0x5257E4: test    eax, eax
0x5257E6: jz      short loc_5257F9
0x5257E8: mov     eax, [eax+0Ch]
0x5257EB: push    eax
0x5257EC: push    4D414E43h
0x5257F1: call    TESForm_PutCurrentChunkData4
0x5257F6: add     esp, 8
0x5257F9: push    15h; Size
0x5257FB: lea     ecx, [esi+0ECh]
0x525801: push    ecx; Src
0x525802: mov     ecx, esi; this
0x525804: call    TESForm_SaveGenericComponents
0x525809: mov     eax, [esi+1C8h]
0x52580F: test    eax, eax
0x525811: jz      short loc_52583A
0x525813: mov     edx, [eax+0Ch]
0x525816: push    edx
0x525817: push    4D414E48h
0x52581C: call    TESForm_PutCurrentChunkData4
0x525821: fld     dword ptr [esi+1CCh]
0x525827: add     esp, 4
0x52582A: fstp    [esp+1Ch+var_1C]
0x52582D: push    4D414E4Ch
0x525832: call    TESForm_PutCurrentChunkData4
0x525837: add     esp, 8
0x52583A: mov     eax, [esi+1D0h]
0x525840: test    eax, eax
0x525842: jz      short loc_525855
0x525844: mov     eax, [eax+0Ch]
0x525847: push    eax
0x525848: push    4D414E45h
0x52584D: call    TESForm_PutCurrentChunkData4
0x525852: add     esp, 8
0x525855: mov     ecx, [esi+1E8h]
0x52585B: push    ecx
0x52585C: push    524C4348h
0x525861: call    TESForm_PutCurrentChunkData4
0x525866: mov     edx, [esi]
0x525868: mov     eax, [edx+120h]
0x52586E: add     esp, 8
0x525871: mov     ecx, esi
0x525873: call    eax
0x525875: test    eax, eax
0x525877: jz      short loc_525896
0x525879: mov     edx, [esi]
0x52587B: mov     eax, [edx+120h]
0x525881: mov     ecx, esi
0x525883: call    eax
0x525885: mov     ecx, [eax+0Ch]
0x525888: push    ecx
0x525889: push    4D414E5Ah
0x52588E: call    TESForm_PutCurrentChunkData4
0x525893: add     esp, 8
0x525896: mov     ebx, [esi+108h]
0x52589C: test    ebx, ebx
0x52589E: jz      loc_525927
0x5258A4: lea     edi, ds:0[ebx*4]
0x5258AB: push    1
0x5258AD: push    edi
0x5258AE: mov     ecx, offset FormHeap
0x5258B3: mov     [esp+20h+Size], edi
0x5258B7: call    j_MemoryHeap_Alloc
0x5258BC: push    edi
0x5258BD: mov     ebp, eax
0x5258BF: push    0
0x5258C1: push    ebp
0x5258C2: call    __memset
0x5258C7: add     esp, 0Ch
0x5258CA: xor     edi, edi
0x5258CC: test    ebx, ebx
0x5258CE: jbe     short loc_525909
0x5258D0: mov     eax, [esi+114h]
0x5258D6: test    eax, eax
0x5258D8: jz      short loc_5258E7
0x5258DA: mov     edx, [esi+118h]
0x5258E0: sub     edx, eax
0x5258E2: sar     edx, 2
0x5258E5: jnz     short loc_5258EC
0x5258E7: call    __invalid_parameter_noinfo
0x5258EC: mov     eax, [esi+10Ch]
0x5258F2: mov     ecx, [esi+114h]
0x5258F8: imul    eax, edi
0x5258FB: add     edi, 1
0x5258FE: cmp     edi, ebx
0x525900: fld     dword ptr [ecx+eax*4]
0x525903: fstp    dword ptr [ebp+edi*4-4]
0x525907: jb      short loc_5258D0
0x525909: mov     edx, [esp+18h+Size]
0x52590D: push    edx; Size
0x52590E: push    ebp; Src
0x52590F: push    53474746h; int
0x525914: call    TESForm_PutFormRecordChunkData
0x525919: add     esp, 0Ch
0x52591C: push    ebp; void *
0x52591D: mov     ecx, offset FormHeap
0x525922: call    MemoryHeap_Free_checked
0x525927: mov     ebp, [esi+120h]
0x52592D: test    ebp, ebp
0x52592F: jz      loc_5259B8
0x525935: lea     edi, ds:0[ebp*4]
0x52593C: push    1
0x52593E: push    edi
0x52593F: mov     ecx, offset FormHeap
0x525944: mov     [esp+20h+Size], edi
0x525948: call    j_MemoryHeap_Alloc
0x52594D: push    edi
0x52594E: mov     ebx, eax
0x525950: push    0
0x525952: push    ebx
0x525953: call    __memset
0x525958: add     esp, 0Ch
0x52595B: xor     edi, edi
0x52595D: test    ebp, ebp
0x52595F: jbe     short loc_52599A
0x525961: mov     eax, [esi+12Ch]
0x525967: test    eax, eax
0x525969: jz      short loc_525978
0x52596B: mov     ecx, [esi+130h]
0x525971: sub     ecx, eax
0x525973: sar     ecx, 2
0x525976: jnz     short loc_52597D
0x525978: call    __invalid_parameter_noinfo
0x52597D: mov     edx, [esi+124h]
0x525983: mov     eax, [esi+12Ch]
0x525989: imul    edx, edi
0x52598C: add     edi, 1
0x52598F: cmp     edi, ebp
0x525991: fld     dword ptr [eax+edx*4]
0x525994: fstp    dword ptr [ebx+edi*4-4]
0x525998: jb      short loc_525961
0x52599A: mov     ecx, [esp+18h+Size]
0x52599E: push    ecx; Size
0x52599F: push    ebx; Src
0x5259A0: push    41474746h; int
0x5259A5: call    TESForm_PutFormRecordChunkData
0x5259AA: add     esp, 0Ch
0x5259AD: push    ebx; void *
0x5259AE: mov     ecx, offset FormHeap
0x5259B3: call    MemoryHeap_Free_checked
0x5259B8: mov     ebp, [esi+138h]
0x5259BE: test    ebp, ebp
0x5259C0: jz      loc_525A49
0x5259C6: lea     edi, ds:0[ebp*4]
0x5259CD: push    1
0x5259CF: push    edi
0x5259D0: mov     ecx, offset FormHeap
0x5259D5: mov     [esp+20h+Size], edi
0x5259D9: call    j_MemoryHeap_Alloc
0x5259DE: push    edi
0x5259DF: mov     ebx, eax
0x5259E1: push    0
0x5259E3: push    ebx
0x5259E4: call    __memset
0x5259E9: add     esp, 0Ch
0x5259EC: xor     edi, edi
0x5259EE: test    ebp, ebp
0x5259F0: jbe     short loc_525A2B
0x5259F2: mov     eax, [esi+144h]
0x5259F8: test    eax, eax
0x5259FA: jz      short loc_525A09
0x5259FC: mov     edx, [esi+148h]
0x525A02: sub     edx, eax
0x525A04: sar     edx, 2
0x525A07: jnz     short loc_525A0E
0x525A09: call    __invalid_parameter_noinfo
0x525A0E: mov     eax, [esi+13Ch]
0x525A14: mov     ecx, [esi+144h]
0x525A1A: imul    eax, edi
0x525A1D: add     edi, 1
0x525A20: cmp     edi, ebp
0x525A22: fld     dword ptr [ecx+eax*4]
0x525A25: fstp    dword ptr [ebx+edi*4-4]
0x525A29: jb      short loc_5259F2
0x525A2B: mov     edx, [esp+18h+Size]
0x525A2F: push    edx; Size
0x525A30: push    ebx; Src
0x525A31: push    53544746h; int
0x525A36: call    TESForm_PutFormRecordChunkData
0x525A3B: add     esp, 0Ch
0x525A3E: push    ebx; void *
0x525A3F: mov     ecx, offset FormHeap
0x525A44: call    MemoryHeap_Free_checked
0x525A49: movzx   eax, word ptr [esi+1E0h]
0x525A50: push    eax
0x525A51: push    4D414E46h
0x525A56: call    TESForm_PutCurrentChunkData2
0x525A5B: add     esp, 8
0x525A5E: pop     edi
0x525A5F: mov     ecx, esi
0x525A61: pop     esi
0x525A62: pop     ebp
0x525A63: pop     ebx
0x525A64: add     esp, 8
0x525A67: jmp     TESForm_FinalizeFormRecord
