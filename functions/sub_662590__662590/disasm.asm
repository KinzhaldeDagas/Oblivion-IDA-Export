0x662590: cmp     byte ptr ds:0B3BB06h, 0
0x662597: push    esi
0x662598: mov     esi, ecx
0x66259A: jnz     loc_6626DD
0x6625A0: mov     ecx, [esi+58h]
0x6625A3: mov     eax, [ecx]
0x6625A5: mov     edx, [eax+0F4h]
0x6625AB: push    edi
0x6625AC: push    1
0x6625AE: call    edx
0x6625B0: mov     eax, [eax]
0x6625B2: mov     ecx, [eax]
0x6625B4: call    ExtraDataList_GetExtraCount
0x6625B9: mov     ecx, [esi+58h]
0x6625BC: movsx   edi, ax
0x6625BF: sub     edi, 1
0x6625C2: cmp     edi, 1
0x6625C5: push    1
0x6625C7: jge     short loc_66261E
0x6625C9: mov     edx, [ecx]
0x6625CB: mov     eax, [edx+0F4h]
0x6625D1: call    eax
0x6625D3: mov     ecx, [eax]
0x6625D5: mov     edi, [ecx]
0x6625D7: mov     ecx, [esi+58h]
0x6625DA: mov     edx, [ecx]
0x6625DC: mov     eax, [edx+0F4h]
0x6625E2: push    1
0x6625E4: call    eax
0x6625E6: mov     edx, [esi]
0x6625E8: mov     eax, [eax+8]
0x6625EB: mov     edx, [edx+100h]
0x6625F1: push    0
0x6625F3: push    1
0x6625F5: push    0
0x6625F7: push    0
0x6625F9: push    0
0x6625FB: push    0
0x6625FD: push    0
0x6625FF: push    1
0x662601: push    edi
0x662602: push    eax
0x662603: mov     ecx, esi
0x662605: call    edx
0x662607: call    sub_5C1900
0x66260C: mov     ecx, [esi+58h]
0x66260F: mov     eax, [ecx]
0x662611: mov     edx, [eax+10Ch]
0x662617: push    0
0x662619: call    edx
0x66261B: pop     edi
0x66261C: pop     esi
0x66261D: retn
0x66261E: mov     eax, [ecx]
0x662620: mov     edx, [eax+0F4h]
0x662626: call    edx
0x662628: mov     eax, [eax]
0x66262A: mov     ecx, [eax]
0x66262C: push    edi
0x66262D: call    ExtraDataList_SetExtraCount
0x662632: mov     ecx, [esi+58h]
0x662635: mov     edx, [ecx]
0x662637: mov     eax, [edx+0F4h]
0x66263D: push    edi
0x66263E: push    1
0x662640: call    eax
0x662642: mov     ecx, eax
0x662644: call    sub_60D020
0x662649: mov     ecx, esi; this
0x66264B: call    TESObjectREFR_GetContainer
0x662650: test    eax, eax
0x662652: jz      short loc_6626AB
0x662654: push    ebp
0x662655: push    eax
0x662656: push    esi; a1
0x662657: call    ContainerExtraData_GetContainerExtraDataForRef
0x66265C: mov     ebp, eax
0x66265E: add     esp, 8
0x662661: test    ebp, ebp
0x662663: jz      short loc_6626AA
0x662665: mov     ecx, [esi+58h]
0x662668: mov     edx, [ecx]
0x66266A: mov     eax, [edx+0F4h]
0x662670: push    ebx
0x662671: push    1
0x662673: call    eax
0x662675: mov     eax, [eax+8]
0x662678: push    eax; a2
0x662679: mov     ecx, ebp; this
0x66267B: call    ContainerExtraData_GetItemCount
0x662680: mov     ebx, eax
0x662682: lea     ecx, [edi+1]
0x662685: cmp     ebx, ecx
0x662687: jz      short loc_6626A9
0x662689: mov     ecx, [esi+58h]
0x66268C: mov     edx, [ecx]
0x66268E: mov     eax, [edx+0F4h]
0x662694: push    1
0x662696: call    eax
0x662698: mov     ecx, [eax+8]
0x66269B: sub     edi, ebx
0x66269D: add     edi, 1
0x6626A0: push    edi
0x6626A1: push    ecx
0x6626A2: mov     ecx, ebp
0x6626A4: call    sub_487350
0x6626A9: pop     ebx
0x6626AA: pop     ebp
0x6626AB: mov     ecx, [esi+58h]
0x6626AE: mov     edx, [ecx]
0x6626B0: mov     eax, [edx+0F4h]
0x6626B6: push    1
0x6626B8: call    eax
0x6626BA: mov     edx, [esi]
0x6626BC: mov     eax, [eax+8]
0x6626BF: mov     edx, [edx+100h]
0x6626C5: push    0
0x6626C7: push    1
0x6626C9: push    0
0x6626CB: push    0
0x6626CD: push    0
0x6626CF: push    0
0x6626D1: push    0
0x6626D3: push    1
0x6626D5: push    0
0x6626D7: push    eax
0x6626D8: mov     ecx, esi
0x6626DA: call    edx
0x6626DC: pop     edi
0x6626DD: pop     esi
0x6626DE: retn
