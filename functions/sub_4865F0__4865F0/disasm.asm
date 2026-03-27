0x4865F0: push    ecx
0x4865F1: push    ebx
0x4865F2: push    ebp
0x4865F3: mov     ebp, ecx
0x4865F5: mov     ecx, [ebp+4]; this
0x4865F8: xor     ebx, ebx
0x4865FA: test    ecx, ecx
0x4865FC: push    esi
0x4865FD: push    edi
0x4865FE: mov     [esp+14h+var_4], ebx
0x486602: jz      short loc_48660B
0x486604: call    TESObjectREFR_GetContainer
0x486609: jmp     short loc_48660D
0x48660B: xor     eax, eax
0x48660D: lea     esi, [eax+8]
0x486610: test    esi, esi
0x486612: jz      loc_4866D3
0x486618: cmp     dword ptr [esi+4], 0
0x48661C: jnz     short loc_486627
0x48661E: cmp     dword ptr [esi], 0
0x486621: jz      loc_4866D3
0x486627: test    ebx, ebx
0x486629: jnz     loc_4866D3
0x48662F: mov     eax, [esi]
0x486631: mov     eax, [eax+4]
0x486634: push    ebx; int
0x486635: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x48663A: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48663F: push    ebx; int
0x486640: push    eax; void *
0x486641: call    OblivionDynamicCast
0x486646: mov     ecx, [ebp+0]
0x486649: add     esp, 14h
0x48664C: test    ecx, ecx
0x48664E: mov     bl, 1
0x486650: jz      short loc_48666C
0x486652: test    bl, bl
0x486654: jz      short loc_486670
0x486656: mov     edx, [ecx]
0x486658: test    edx, edx
0x48665A: jz      short loc_486665
0x48665C: cmp     [edx+8], eax
0x48665F: jnz     short loc_486665
0x486661: xor     bl, bl
0x486663: jmp     short loc_486668
0x486665: mov     ecx, [ecx+4]
0x486668: test    ecx, ecx
0x48666A: jnz     short loc_486652
0x48666C: xor     ecx, ecx
0x48666E: jmp     short loc_48668B
0x486670: test    ecx, ecx
0x486672: jz      short loc_48666C
0x486674: mov     ecx, [ecx]
0x486676: test    ecx, ecx
0x486678: jz      short loc_48668B
0x48667A: mov     edx, [esi]
0x48667C: mov     edx, [edx]
0x48667E: mov     edi, [ecx+4]
0x486681: add     edi, edx
0x486683: test    edi, edi
0x486685: jg      short loc_48668B
0x486687: test    edx, edx
0x486689: jge     short loc_4866C4
0x48668B: test    eax, eax
0x48668D: jz      short loc_4866C4
0x48668F: add     eax, 30h ; '0'
0x486692: jz      short loc_4866C4
0x486694: cmp     dword ptr [eax+8], 0
0x486698: jnz     short loc_4866A0
0x48669A: cmp     dword ptr [eax+4], 0
0x48669E: jz      short loc_4866C4
0x4866A0: mov     edx, [eax+4]
0x4866A3: mov     edx, [edx+1Ch]
0x4866A6: mov     edi, [esp+14h+arg_0]
0x4866AA: cmp     [edx+98h], edi
0x4866B0: jz      short loc_4866C0
0x4866B2: mov     eax, [eax+8]
0x4866B5: test    eax, eax
0x4866B7: jz      short loc_4866C4
0x4866B9: add     eax, 0FFFFFFFCh
0x4866BC: jnz     short loc_486694
0x4866BE: jmp     short loc_4866C4
0x4866C0: mov     [esp+14h+var_4], ecx
0x4866C4: mov     esi, [esi+4]
0x4866C7: test    esi, esi
0x4866C9: mov     ebx, [esp+14h+var_4]
0x4866CD: jnz     loc_486618
0x4866D3: mov     edi, [ebp+0]
0x4866D6: test    edi, edi
0x4866D8: jnz     short loc_4866E8
0x4866DA: pop     edi
0x4866DB: pop     esi
0x4866DC: pop     ebp
0x4866DD: mov     eax, ebx
0x4866DF: pop     ebx
0x4866E0: pop     ecx
0x4866E1: retn    4
0x4866E4: mov     ebx, [esp+14h+var_4]
0x4866E8: cmp     dword ptr [edi+4], 0
0x4866EC: jnz     short loc_4866F3
0x4866EE: cmp     dword ptr [edi], 0
0x4866F1: jz      short loc_4866DA
0x4866F3: test    ebx, ebx
0x4866F5: jnz     short loc_4866DA
0x4866F7: mov     eax, [edi]
0x4866F9: mov     eax, [eax+8]
0x4866FC: push    ebx; int
0x4866FD: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x486702: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x486707: push    ebx; int
0x486708: push    eax; void *
0x486709: call    OblivionDynamicCast
0x48670E: mov     ebx, [edi]
0x486710: mov     esi, eax
0x486712: add     esp, 14h
0x486715: test    esi, esi
0x486717: jz      short loc_486772
0x486719: cmp     dword ptr [ebx+4], 0
0x48671D: jz      short loc_486772
0x48671F: mov     ecx, [ebp+4]; this
0x486722: test    ecx, ecx
0x486724: jz      short loc_48672D
0x486726: call    TESObjectREFR_GetContainer
0x48672B: jmp     short loc_48672F
0x48672D: xor     eax, eax
0x48672F: push    esi; a2
0x486730: mov     ecx, eax; this
0x486732: call    TESContainer_HasForm
0x486737: test    al, al
0x486739: jnz     short loc_486772
0x48673B: lea     eax, [esi+30h]
0x48673E: test    eax, eax
0x486740: jz      short loc_486772
0x486742: cmp     dword ptr [eax+8], 0
0x486746: jnz     short loc_48674E
0x486748: cmp     dword ptr [eax+4], 0
0x48674C: jz      short loc_486772
0x48674E: mov     ecx, [eax+4]
0x486751: mov     edx, [ecx+1Ch]
0x486754: mov     ecx, [esp+14h+arg_0]
0x486758: cmp     [edx+98h], ecx
0x48675E: jz      short loc_48676E
0x486760: mov     eax, [eax+8]
0x486763: test    eax, eax
0x486765: jz      short loc_486772
0x486767: add     eax, 0FFFFFFFCh
0x48676A: jnz     short loc_486742
0x48676C: jmp     short loc_486772
0x48676E: mov     [esp+14h+var_4], ebx
0x486772: mov     edi, [edi+4]
0x486775: test    edi, edi
0x486777: jnz     loc_4866E4
0x48677D: mov     eax, [esp+14h+var_4]
0x486781: pop     edi
0x486782: pop     esi
0x486783: pop     ebp
0x486784: pop     ebx
0x486785: pop     ecx
0x486786: retn    4
