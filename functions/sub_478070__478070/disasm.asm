0x478070: push    0FFFFFFFFh
0x478072: push    offset SEH_478070
0x478077: mov     eax, large fs:0
0x47807D: push    eax
0x47807E: push    ecx
0x47807F: push    ebx
0x478080: push    ebp
0x478081: push    esi
0x478082: push    edi
0x478083: mov     eax, ds:0B30AACh
0x478088: xor     eax, esp
0x47808A: push    eax
0x47808B: lea     eax, [esp+24h+var_C]
0x47808F: mov     large fs:0, eax
0x478095: mov     ebx, ecx
0x478097: mov     [esp+24h+var_10], ebx
0x47809B: mov     ebp, [esp+24h+a1]
0x47809F: push    offset aBip01; "Bip01"
0x4780A4: push    ebp; a1
0x4780A5: call    NiObjectNET_LookupObjectByName
0x4780AA: add     esp, 8
0x4780AD: mov     [ebx], eax
0x4780AF: mov     edi, offset off_B06550; "Bip01 Head"
0x4780B4: add     ebx, 4
0x4780B7: mov     eax, [edi]
0x4780B9: push    eax; a2
0x4780BA: push    ebp; a1
0x4780BB: call    NiObjectNET_LookupObjectByName
0x4780C0: mov     esi, eax
0x4780C2: add     esp, 8
0x4780C5: test    esi, esi
0x4780C7: mov     [esp+24h+a1], esi
0x4780CB: jz      short loc_4780D7
0x4780CD: lea     ecx, [esi+4]
0x4780D0: push    ecx; lpAddend
0x4780D1: call    dword ptr ds:0A28078h
0x4780D7: test    esi, esi
0x4780D9: mov     [esp+24h+var_4], 0
0x4780E1: jz      short loc_4780F8
0x4780E3: mov     edx, [esi]
0x4780E5: mov     eax, [edx+8]
0x4780E8: mov     ecx, esi
0x4780EA: call    eax
0x4780EC: test    eax, eax
0x4780EE: jz      short loc_4780F8
0x4780F0: or      byte ptr [ebx], 1
0x4780F3: mov     [ebx+4], esi
0x4780F6: jmp     short loc_47810C
0x4780F8: mov     eax, [ebp+8]
0x4780FB: mov     ecx, [edi]
0x4780FD: push    eax
0x4780FE: push    ecx; ArgList
0x4780FF: push    offset aMissingBoneSFo; "Missing bone '%s' for '%s'"
0x478104: call    PrintError
0x478109: add     esp, 0Ch
0x47810C: test    esi, esi
0x47810E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x478116: jz      short loc_478130
0x478118: lea     edx, [esi+4]
0x47811B: push    edx; lpAddend
0x47811C: call    dword ptr ds:0A2807Ch
0x478122: test    eax, eax
0x478124: jnz     short loc_478130
0x478126: mov     eax, [esi]
0x478128: mov     edx, [eax]
0x47812A: push    1
0x47812C: mov     ecx, esi
0x47812E: call    edx
0x478130: add     edi, 4
0x478133: add     ebx, 8
0x478136: cmp     edi, offset unk_B06574
0x47813C: jl      loc_4780B7
0x478142: mov     esi, [esp+24h+var_10]
0x478146: mov     eax, [esi+28h]
0x478149: push    0
0x47814B: push    eax
0x47814C: call    sub_897A90
0x478151: mov     ecx, [esi+30h]
0x478154: push    0
0x478156: push    ecx
0x478157: call    sub_897A90
0x47815C: add     esp, 10h
0x47815F: mov     ecx, dword ptr [esp+24h+var_C]
0x478163: mov     large fs:0, ecx
0x47816A: pop     ecx
0x47816B: pop     edi
0x47816C: pop     esi
0x47816D: pop     ebp
0x47816E: pop     ebx
0x47816F: add     esp, 10h
0x478172: retn    4
