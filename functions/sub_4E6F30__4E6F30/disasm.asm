0x4E6F30: push    ecx
0x4E6F31: push    ebp
0x4E6F32: mov     ebp, ecx
0x4E6F34: cmp     dword ptr [ebp+24h], 0
0x4E6F38: jz      loc_4E7054
0x4E6F3E: mov     ecx, [ebp+20h]; this
0x4E6F41: call    TESObjectCELL_GetWorldSpace
0x4E6F46: test    eax, eax
0x4E6F48: jz      loc_4E7054
0x4E6F4E: push    ebx
0x4E6F4F: push    edi
0x4E6F50: push    offset stru_B36000; lpCriticalSection
0x4E6F55: lea     ebx, [ebp+28h]
0x4E6F58: xor     edi, edi
0x4E6F5A: call    dword ptr ds:0A2806Ch
0x4E6F60: call    dword ptr ds:0A2808Ch
0x4E6F66: add     dword ptr ds:0B3607Ch, 1
0x4E6F6D: test    ebx, ebx
0x4E6F6F: mov     ds:0B36078h, eax
0x4E6F74: jz      loc_4E7034
0x4E6F7A: push    esi
0x4E6F7B: jmp     short loc_4E6F80
0x4E6F7D: align 10h
0x4E6F80: cmp     dword ptr [ebx+4], 0
0x4E6F84: jnz     short loc_4E6F8F
0x4E6F86: cmp     dword ptr [ebx], 0
0x4E6F89: jz      loc_4E7033
0x4E6F8F: mov     esi, [ebx]
0x4E6F91: movzx   eax, word ptr [esi]
0x4E6F94: cmp     ax, [ebp+30h]
0x4E6F98: jnb     loc_4E7057
0x4E6F9E: mov     ecx, [ebp+24h]
0x4E6FA1: mov     edx, [ecx+4]
0x4E6FA4: mov     ecx, [ebp+20h]; this
0x4E6FA7: movzx   eax, ax
0x4E6FAA: mov     edi, [edx+eax*4]
0x4E6FAD: push    ebp
0x4E6FAE: lea     eax, [esp+18h+var_4]
0x4E6FB2: push    eax
0x4E6FB3: mov     [esp+1Ch+var_4], 0
0x4E6FBB: call    TESObjectCELL_GetWorldSpace
0x4E6FC0: push    eax
0x4E6FC1: add     esi, 4
0x4E6FC4: push    esi
0x4E6FC5: call    sub_4E6DF0
0x4E6FCA: mov     esi, eax
0x4E6FCC: add     esp, 10h
0x4E6FCF: test    esi, esi
0x4E6FD1: jz      short loc_4E7026
0x4E6FD3: cmp     esi, edi
0x4E6FD5: jz      short loc_4E7026
0x4E6FD7: cmp     [esp+14h+var_4], 0
0x4E6FDC: jz      short loc_4E7026
0x4E6FDE: push    esi
0x4E6FDF: mov     ecx, edi
0x4E6FE1: call    sub_4E7F80
0x4E6FE6: test    al, al
0x4E6FE8: jnz     short loc_4E6FF9
0x4E6FEA: push    esi
0x4E6FEB: mov     ecx, edi
0x4E6FED: call    sub_4E7DE0
0x4E6FF2: mov     ecx, eax
0x4E6FF4: call    BSSimpleList_PushFront
0x4E6FF9: push    edi
0x4E6FFA: mov     ecx, esi
0x4E6FFC: call    sub_4E7F80
0x4E7001: test    al, al
0x4E7003: jnz     short loc_4E7026
0x4E7005: push    edi
0x4E7006: mov     ecx, esi
0x4E7008: call    sub_4E7DE0
0x4E700D: mov     ecx, eax
0x4E700F: call    BSSimpleList_PushFront
0x4E7014: mov     ecx, edi
0x4E7016: call    sub_4BEF40
0x4E701B: mov     ecx, [esp+14h+var_4]
0x4E701F: push    eax
0x4E7020: push    esi
0x4E7021: call    sub_4E4FE0
0x4E7026: mov     edi, ebx
0x4E7028: mov     ebx, [ebx+4]
0x4E702B: test    ebx, ebx
0x4E702D: jnz     loc_4E6F80
0x4E7033: pop     esi
0x4E7034: sub     dword ptr ds:0B3607Ch, 1
0x4E703B: pop     edi
0x4E703C: pop     ebx
0x4E703D: jnz     short loc_4E7049
0x4E703F: mov     dword ptr ds:0B36078h, 0
0x4E7049: push    offset stru_B36000; lpCriticalSection
0x4E704E: call    dword ptr ds:0A28074h
0x4E7054: pop     ebp
0x4E7055: pop     ecx
0x4E7056: retn
0x4E7057: test    edi, edi
0x4E7059: jz      short loc_4E7071
0x4E705B: push    esi
0x4E705C: mov     ecx, edi
0x4E705E: call    BSSimpleList_Remove
0x4E7063: mov     ebx, [edi+4]
0x4E7066: push    esi
0x4E7067: call    FormHeapFree
0x4E706C: add     esp, 4
0x4E706F: jmp     short loc_4E702B
0x4E7071: mov     eax, [ebp+2Ch]
0x4E7074: test    eax, eax
0x4E7076: lea     ebx, [ebp+28h]
0x4E7079: jz      short loc_4E7099
0x4E707B: mov     ecx, [eax+4]
0x4E707E: mov     [ebx+4], ecx
0x4E7081: mov     edx, [eax]
0x4E7083: push    eax
0x4E7084: mov     [ebx], edx
0x4E7086: call    FormHeapFree
0x4E708B: add     esp, 4
0x4E708E: push    esi
0x4E708F: call    FormHeapFree
0x4E7094: add     esp, 4
0x4E7097: jmp     short loc_4E702B
0x4E7099: push    esi
0x4E709A: mov     dword ptr [ebx], 0
0x4E70A0: call    FormHeapFree
0x4E70A5: add     esp, 4
0x4E70A8: jmp     short loc_4E702B
