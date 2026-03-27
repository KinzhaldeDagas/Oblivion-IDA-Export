0x706820: push    ebx
0x706821: push    esi
0x706822: mov     esi, [esp+8+arg_0]
0x706826: push    edi
0x706827: push    esi
0x706828: mov     ebx, ecx
0x70682A: call    sub_700B10
0x70682F: mov     eax, ds:0B3F978h
0x706834: push    eax; ArgList
0x706835: call    TESOutput_PrintString
0x70683A: movzx   edi, word ptr [esi+0Ah]
0x70683E: movzx   ecx, word ptr [esi+8]
0x706842: add     esp, 4
0x706845: cmp     edi, ecx
0x706847: mov     [esp+0Ch+arg_0], eax
0x70684B: jb      short loc_70685B
0x70684D: movzx   edx, word ptr [esi+0Eh]
0x706851: add     edx, edi
0x706853: push    edx
0x706854: mov     ecx, esi
0x706856: call    NiTArray_SetSize
0x70685B: lea     eax, [esp+0Ch+arg_0]
0x70685F: push    eax
0x706860: push    edi
0x706861: mov     ecx, esi
0x706863: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x706868: movzx   eax, byte ptr [ebx+18h]
0x70686C: shr     eax, 4
0x70686F: and     eax, 3
0x706872: push    eax; int
0x706873: push    offset aSourceMode; "Source Mode"
0x706878: call    sub_7063B0
0x70687D: movzx   edi, word ptr [esi+0Ah]
0x706881: movzx   ecx, word ptr [esi+8]
0x706885: add     esp, 8
0x706888: cmp     edi, ecx
0x70688A: mov     [esp+0Ch+arg_0], eax
0x70688E: jb      short loc_70689E
0x706890: movzx   edx, word ptr [esi+0Eh]
0x706894: add     edx, edi
0x706896: push    edx
0x706897: mov     ecx, esi
0x706899: call    NiTArray_SetSize
0x70689E: lea     eax, [esp+0Ch+arg_0]
0x7068A2: push    eax
0x7068A3: push    edi
0x7068A4: mov     ecx, esi
0x7068A6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7068AB: movzx   eax, byte ptr [ebx+18h]
0x7068AF: shr     eax, 3
0x7068B2: and     eax, 1
0x7068B5: push    eax; int
0x7068B6: push    offset aLightingMode; "Lighting Mode"
0x7068BB: call    sub_706430
0x7068C0: movzx   edi, word ptr [esi+0Ah]
0x7068C4: movzx   ecx, word ptr [esi+8]
0x7068C8: add     esp, 8
0x7068CB: cmp     edi, ecx
0x7068CD: mov     [esp+0Ch+arg_0], eax
0x7068D1: jb      short loc_7068E1
0x7068D3: movzx   edx, word ptr [esi+0Eh]
0x7068D7: add     edx, edi
0x7068D9: push    edx
0x7068DA: mov     ecx, esi
0x7068DC: call    NiTArray_SetSize
0x7068E1: lea     eax, [esp+0Ch+arg_0]
0x7068E5: push    eax
0x7068E6: push    edi
0x7068E7: mov     ecx, esi
0x7068E9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7068EE: pop     edi
0x7068EF: pop     esi
0x7068F0: pop     ebx
0x7068F1: retn    4
