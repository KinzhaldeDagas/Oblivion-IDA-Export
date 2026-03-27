0x6F6CA0: push    ebx
0x6F6CA1: push    esi
0x6F6CA2: mov     esi, ecx
0x6F6CA4: mov     edx, [esi+18h]
0x6F6CA7: cmp     edx, 10h
0x6F6CAA: push    edi
0x6F6CAB: lea     ebx, [esi+4]
0x6F6CAE: jb      short loc_6F6CB4
0x6F6CB0: mov     ecx, [ebx]
0x6F6CB2: jmp     short loc_6F6CB6
0x6F6CB4: mov     ecx, ebx
0x6F6CB6: mov     eax, [esp+0Ch+Src]
0x6F6CBA: cmp     eax, ecx
0x6F6CBC: jb      short loc_6F6CEF
0x6F6CBE: cmp     edx, 10h
0x6F6CC1: jb      short loc_6F6CC7
0x6F6CC3: mov     ecx, [ebx]
0x6F6CC5: jmp     short loc_6F6CC9
0x6F6CC7: mov     ecx, ebx
0x6F6CC9: mov     edi, [esi+14h]
0x6F6CCC: add     edi, ecx
0x6F6CCE: cmp     edi, eax
0x6F6CD0: jbe     short loc_6F6CEF
0x6F6CD2: cmp     edx, 10h
0x6F6CD5: jb      short loc_6F6CD9
0x6F6CD7: mov     ebx, [ebx]
0x6F6CD9: mov     ecx, [esp+0Ch+MaxCount]
0x6F6CDD: push    ecx; MaxCount
0x6F6CDE: sub     eax, ebx
0x6F6CE0: push    eax; int
0x6F6CE1: push    esi; int
0x6F6CE2: mov     ecx, esi
0x6F6CE4: call    sub_6F6AF0
0x6F6CE9: pop     edi
0x6F6CEA: pop     esi
0x6F6CEB: pop     ebx
0x6F6CEC: retn    8
0x6F6CEF: mov     eax, [esi+14h]
0x6F6CF2: or      edx, 0FFFFFFFFh
0x6F6CF5: push    ebp; MaxCount
0x6F6CF6: mov     ebp, [esp+10h+MaxCount]
0x6F6CFA: sub     edx, eax
0x6F6CFC: cmp     edx, ebp
0x6F6CFE: jbe     short loc_6F6D07
0x6F6D00: lea     ecx, [eax+ebp]
0x6F6D03: cmp     ecx, eax
0x6F6D05: jnb     short loc_6F6D0C
0x6F6D07: call    ?_Xlen@_String_base@std@@SAXXZ; std::_String_base::_Xlen(void)
0x6F6D0C: test    ebp, ebp
0x6F6D0E: jbe     short loc_6F6D84
0x6F6D10: mov     edi, [esi+14h]
0x6F6D13: add     edi, ebp
0x6F6D15: cmp     edi, 0FFFFFFFEh
0x6F6D18: jbe     short loc_6F6D1F
0x6F6D1A: call    ?_Xlen@_String_base@std@@SAXXZ; std::_String_base::_Xlen(void)
0x6F6D1F: mov     eax, [esi+18h]
0x6F6D22: cmp     eax, edi
0x6F6D24: jnb     short loc_6F6D42
0x6F6D26: mov     edx, [esi+14h]
0x6F6D29: push    edx; MaxCount
0x6F6D2A: push    edi; Dst
0x6F6D2B: mov     ecx, esi
0x6F6D2D: call    sub_4135C0
0x6F6D32: test    edi, edi
0x6F6D34: jbe     short loc_6F6D84
0x6F6D36: mov     eax, [esi+18h]
0x6F6D39: cmp     eax, 10h
0x6F6D3C: jb      short loc_6F6D5C
0x6F6D3E: mov     edx, [ebx]
0x6F6D40: jmp     short loc_6F6D5E
0x6F6D42: test    edi, edi
0x6F6D44: jnz     short loc_6F6D34
0x6F6D46: cmp     eax, 10h
0x6F6D49: mov     [esi+14h], edi
0x6F6D4C: jb      short loc_6F6D50
0x6F6D4E: mov     ebx, [ebx]
0x6F6D50: pop     ebp
0x6F6D51: pop     edi
0x6F6D52: mov     eax, esi
0x6F6D54: pop     esi
0x6F6D55: mov     byte ptr [ebx], 0
0x6F6D58: pop     ebx
0x6F6D59: retn    8
0x6F6D5C: mov     edx, ebx
0x6F6D5E: mov     ecx, [esi+14h]
0x6F6D61: push    ebp; Src
0x6F6D62: mov     ebp, [esp+14h+Src]
0x6F6D66: sub     eax, ecx
0x6F6D68: push    ebp; Src
0x6F6D69: push    eax; DstSize
0x6F6D6A: add     ecx, edx
0x6F6D6C: push    ecx; Dst
0x6F6D6D: call    _memcpy_s
0x6F6D72: add     esp, 10h
0x6F6D75: cmp     dword ptr [esi+18h], 10h
0x6F6D79: mov     [esi+14h], edi
0x6F6D7C: jb      short loc_6F6D80
0x6F6D7E: mov     ebx, [ebx]
0x6F6D80: mov     byte ptr [ebx+edi], 0
0x6F6D84: pop     ebp
0x6F6D85: pop     edi
0x6F6D86: mov     eax, esi
0x6F6D88: pop     esi
0x6F6D89: pop     ebx
0x6F6D8A: retn    8
