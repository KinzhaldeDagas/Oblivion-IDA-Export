0x4B2730: push    ebp
0x4B2731: mov     ebp, [esp+4+arg_0]
0x4B2735: test    ebp, ebp
0x4B2737: jz      loc_4B27EA
0x4B273D: cmp     [esp+4+arg_4], 0
0x4B2742: jz      loc_4B27EA
0x4B2748: push    esi
0x4B2749: mov     esi, [esp+8+a2]
0x4B274D: push    edi
0x4B274E: lea     eax, [esp+0Ch+arg_0]
0x4B2752: push    eax
0x4B2753: push    esi
0x4B2754: mov     ecx, offset off_B08300
0x4B2759: mov     [esp+14h+arg_0], 0
0x4B2761: call    NiTMap_GetAt
0x4B2766: test    al, al
0x4B2768: jz      short loc_4B2772
0x4B276A: mov     edi, [esp+0Ch+arg_0]
0x4B276E: test    edi, edi
0x4B2770: jnz     short loc_4B279F
0x4B2772: push    8; Size
0x4B2774: call    FormHeapAlloc
0x4B2779: add     esp, 4
0x4B277C: test    eax, eax
0x4B277E: jz      short loc_4B278F
0x4B2780: mov     dword ptr [eax], 0
0x4B2786: mov     dword ptr [eax+4], 0
0x4B278D: jmp     short loc_4B2791
0x4B278F: xor     eax, eax
0x4B2791: push    eax; a3
0x4B2792: push    esi; a2
0x4B2793: mov     ecx, offset off_B08300; this
0x4B2798: mov     edi, eax
0x4B279A: call    NiTMap_SetAt
0x4B279F: test    edi, edi
0x4B27A1: mov     eax, edi
0x4B27A3: jz      short loc_4B27C4
0x4B27A5: mov     ecx, [eax+4]
0x4B27A8: test    ecx, ecx
0x4B27AA: jnz     short loc_4B27B0
0x4B27AC: cmp     [eax], ecx
0x4B27AE: jz      short loc_4B27C4
0x4B27B0: mov     edx, [eax]
0x4B27B2: cmp     [edx], ebp
0x4B27B4: jz      short loc_4B27BE
0x4B27B6: mov     eax, ecx
0x4B27B8: test    eax, eax
0x4B27BA: jnz     short loc_4B27A5
0x4B27BC: jmp     short loc_4B27C4
0x4B27BE: mov     esi, edx
0x4B27C0: test    esi, esi
0x4B27C2: jnz     short loc_4B27E1
0x4B27C4: push    8; Size
0x4B27C6: call    FormHeapAlloc
0x4B27CB: mov     esi, eax
0x4B27CD: add     esp, 4
0x4B27D0: push    esi
0x4B27D1: mov     ecx, edi
0x4B27D3: mov     [esi], ebp
0x4B27D5: mov     dword ptr [esi+4], 0
0x4B27DC: call    BSSimpleList_PushFront
0x4B27E1: mov     eax, [esp+0Ch+arg_4]
0x4B27E5: add     [esi+4], eax
0x4B27E8: pop     edi
0x4B27E9: pop     esi
0x4B27EA: pop     ebp
0x4B27EB: retn
