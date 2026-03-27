0x682820: push    ebx
0x682821: push    ebp
0x682822: push    edi
0x682823: mov     edi, [esp+0Ch+arg_0]
0x682827: xor     bl, bl
0x682829: test    edi, edi
0x68282B: mov     ebp, ecx
0x68282D: jz      loc_682943
0x682833: cmp     dword ptr [edi+58h], 0
0x682837: jz      loc_682943
0x68283D: push    esi
0x68283E: mov     ecx, offset stru_B3C000
0x682843: call    sub_49F470
0x682848: lea     eax, [esp+10h+arg_0]
0x68284C: push    eax
0x68284D: add     ebp, 30h ; '0'
0x682850: push    edi
0x682851: mov     ecx, ebp
0x682853: mov     [esp+18h+arg_0], 0
0x68285B: call    NiTMap_GetAt
0x682860: test    al, al
0x682862: jz      loc_68290A
0x682868: mov     esi, [esp+10h+arg_0]
0x68286C: test    esi, esi
0x68286E: jz      loc_68290A
0x682874: mov     ecx, [edi+58h]
0x682877: mov     edx, [ecx]
0x682879: mov     eax, [edx+40Ch]
0x68287F: call    eax
0x682881: mov     ebx, eax
0x682883: test    ebx, ebx
0x682885: jnz     short loc_6828A3
0x682887: mov     ecx, [edi+58h]
0x68288A: mov     edx, [ecx]
0x68288C: mov     eax, [edx+408h]
0x682892: call    eax
0x682894: mov     ecx, [edi+58h]
0x682897: mov     edx, [ecx]
0x682899: mov     eax, [edx+40Ch]
0x68289F: call    eax
0x6828A1: mov     ebx, eax
0x6828A3: lea     ecx, [esi+14h]
0x6828A6: push    ecx
0x6828A7: mov     ecx, [esi+8]
0x6828AA: call    sub_68AE20
0x6828AF: mov     edx, [ebx]
0x6828B1: mov     eax, [esi+8]
0x6828B4: mov     edx, [edx+8]
0x6828B7: push    eax
0x6828B8: mov     ecx, ebx
0x6828BA: call    edx
0x6828BC: mov     al, [esi+24h]
0x6828BF: mov     ecx, [esp+10h+arg_4]
0x6828C3: mov     [ecx], al
0x6828C5: push    edi
0x6828C6: mov     ecx, ebp
0x6828C8: call    NiTMap_RemoveAt
0x6828CD: mov     ecx, [esi+4]
0x6828D0: test    ecx, ecx
0x6828D2: jz      short loc_6828DD
0x6828D4: mov     edx, [ecx]
0x6828D6: mov     eax, [edx+10h]
0x6828D9: push    1
0x6828DB: call    eax
0x6828DD: mov     ecx, [esi+8]
0x6828E0: test    ecx, ecx
0x6828E2: jz      short loc_6828EC
0x6828E4: mov     edx, [ecx]
0x6828E6: mov     eax, [edx]
0x6828E8: push    1
0x6828EA: call    eax
0x6828EC: push    esi
0x6828ED: call    FormHeapFree
0x6828F2: add     esp, 4
0x6828F5: mov     ecx, offset stru_B3C000
0x6828FA: mov     bl, 1
0x6828FC: call    j_NiLeaveCriticalSection_0
0x682901: pop     esi
0x682902: pop     edi
0x682903: pop     ebp
0x682904: mov     al, bl
0x682906: pop     ebx
0x682907: retn    8
0x68290A: mov     esi, [edi+58h]
0x68290D: mov     ecx, edi; this
0x68290F: call    Actor__GetProcessLevel
0x682914: test    eax, eax
0x682916: jnz     short loc_682938
0x682918: push    eax; int
0x682919: push    offset ??_R0?AVHighProcess@@@8; struct TypeDescriptor *
0x68291E: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x682923: push    eax; int
0x682924: push    esi; void *
0x682925: call    OblivionDynamicCast
0x68292A: add     esp, 14h
0x68292D: test    eax, eax
0x68292F: jz      short loc_682938
0x682931: mov     ecx, eax
0x682933: call    sub_628590
0x682938: mov     ecx, offset stru_B3C000
0x68293D: call    j_NiLeaveCriticalSection_0
0x682942: pop     esi
0x682943: pop     edi
0x682944: pop     ebp
0x682945: mov     al, bl
0x682947: pop     ebx
0x682948: retn    8
