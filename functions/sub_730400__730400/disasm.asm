0x730400: push    ecx
0x730401: push    ebx
0x730402: push    ebp
0x730403: push    esi
0x730404: mov     esi, [esp+10h+arg_0]
0x730408: push    edi
0x730409: mov     edi, ecx
0x73040B: push    esi
0x73040C: mov     [esp+18h+var_4], edi
0x730410: call    sub_721730
0x730415: mov     eax, ds:0B3FF90h
0x73041A: push    eax; ArgList
0x73041B: call    TESOutput_PrintString
0x730420: movzx   ebx, word ptr [esi+0Ah]
0x730424: movzx   ecx, word ptr [esi+8]
0x730428: add     esp, 4
0x73042B: cmp     ebx, ecx
0x73042D: mov     [esp+14h+arg_0], eax
0x730431: jb      short loc_730441
0x730433: movzx   edx, word ptr [esi+0Eh]
0x730437: add     edx, ebx
0x730439: push    edx
0x73043A: mov     ecx, esi
0x73043C: call    NiTArray_SetSize
0x730441: lea     eax, [esp+14h+arg_0]
0x730445: push    eax
0x730446: push    ebx
0x730447: mov     ecx, esi
0x730449: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73044E: mov     ecx, [edi+0Ch]
0x730451: push    ecx; int
0x730452: push    offset aM_uisize; "m_uiSize"
0x730457: call    TESOutput_PrintLabeledUnsignedInt
0x73045C: movzx   ebx, word ptr [esi+0Ah]
0x730460: movzx   edx, word ptr [esi+8]
0x730464: add     esp, 8
0x730467: cmp     ebx, edx
0x730469: mov     [esp+14h+arg_0], eax
0x73046D: jb      short loc_73047D
0x73046F: movzx   eax, word ptr [esi+0Eh]
0x730473: add     eax, ebx
0x730475: push    eax
0x730476: mov     ecx, esi
0x730478: call    NiTArray_SetSize
0x73047D: lea     ecx, [esp+14h+arg_0]
0x730481: push    ecx
0x730482: push    ebx
0x730483: mov     ecx, esi
0x730485: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73048A: xor     ebp, ebp
0x73048C: cmp     [edi+0Ch], ebp
0x73048F: jbe     loc_73051F
0x730495: jmp     short loc_730499
0x730497: mov     edi, ecx
0x730499: mov     edx, [edi+10h]
0x73049C: fld     dword ptr [edx+ebp*4]
0x73049F: push    ecx
0x7304A0: fstp    [esp+18h+var_18]; float
0x7304A3: push    offset aM_pfvalueI; "m_pfValue[i]"
0x7304A8: call    TESOutput_PrintLabeledFloat
0x7304AD: movzx   edi, word ptr [esi+0Ah]
0x7304B1: mov     ebx, eax
0x7304B3: movzx   eax, word ptr [esi+8]
0x7304B7: add     esp, 8
0x7304BA: cmp     edi, eax
0x7304BC: jb      short loc_7304CC
0x7304BE: movzx   ecx, word ptr [esi+0Eh]
0x7304C2: add     ecx, edi
0x7304C4: push    ecx
0x7304C5: mov     ecx, esi
0x7304C7: call    NiTArray_SetSize
0x7304CC: movzx   edx, word ptr [esi+0Ah]
0x7304D0: cmp     edi, edx
0x7304D2: jb      short loc_7304E6
0x7304D4: test    ebx, ebx
0x7304D6: lea     eax, [edi+1]
0x7304D9: mov     [esi+0Ah], ax
0x7304DD: jz      short loc_730509
0x7304DF: add     word ptr [esi+0Ch], 1
0x7304E4: jmp     short loc_730509
0x7304E6: test    ebx, ebx
0x7304E8: jz      short loc_7304FA
0x7304EA: mov     ecx, [esi+4]
0x7304ED: cmp     dword ptr [ecx+edi*4], 0
0x7304F1: jnz     short loc_730509
0x7304F3: add     word ptr [esi+0Ch], 1
0x7304F8: jmp     short loc_730509
0x7304FA: mov     edx, [esi+4]
0x7304FD: cmp     dword ptr [edx+edi*4], 0
0x730501: jz      short loc_730509
0x730503: add     word ptr [esi+0Ch], 0FFFFh
0x730509: mov     eax, [esi+4]
0x73050C: mov     ecx, [esp+14h+var_4]
0x730510: add     ebp, 1
0x730513: mov     [eax+edi*4], ebx
0x730516: cmp     ebp, [ecx+0Ch]
0x730519: jb      loc_730497
0x73051F: pop     edi
0x730520: pop     esi
0x730521: pop     ebp
0x730522: pop     ebx
0x730523: pop     ecx
0x730524: retn    4
