0x5AC990: push    ebp
0x5AC991: mov     ebp, esp
0x5AC993: and     esp, 0FFFFFFF8h
0x5AC996: push    0FFFFFFFFh
0x5AC998: push    offset SEH_5AC990
0x5AC99D: mov     eax, large fs:0
0x5AC9A3: push    eax
0x5AC9A4: sub     esp, 10h
0x5AC9A7: push    esi
0x5AC9A8: mov     eax, ds:0B30AACh
0x5AC9AD: xor     eax, esp
0x5AC9AF: push    eax
0x5AC9B0: lea     eax, [esp+24h+var_C]
0x5AC9B4: mov     large fs:0, eax
0x5AC9BA: mov     esi, ecx
0x5AC9BC: mov     ecx, ds:0B333C4h
0x5AC9C2: call    Actor_GetLevel
0x5AC9C7: movzx   eax, ax
0x5AC9CA: xor     ecx, ecx
0x5AC9CC: add     eax, 1
0x5AC9CF: mov     [esp+24h+var_18], ecx
0x5AC9D3: mov     [esp+24h+var_14], cx
0x5AC9D8: mov     [esp+24h+var_12], cx
0x5AC9DD: add     eax, 0FFFFFFFEh; switch 19 cases
0x5AC9E0: cmp     eax, 12h
0x5AC9E3: mov     [esp+24h+var_4], ecx
0x5AC9E7: ja      def_5AC9ED
0x5AC9ED: jmp     ds:jpt_5AC9ED[eax*4]; switch jump
0x5AC9F4: mov     eax, ds:0B38300h; jumptable 005AC9ED case 2
0x5AC9F9: push    ecx
0x5AC9FA: push    eax
0x5AC9FB: jmp     loc_5ACABF
0x5ACA00: push    ecx; jumptable 005AC9ED case 3
0x5ACA01: mov     ecx, ds:0B38308h
0x5ACA07: jmp     loc_5ACABE
0x5ACA0C: mov     edx, ds:0B38310h; jumptable 005AC9ED case 4
0x5ACA12: push    ecx
0x5ACA13: push    edx
0x5ACA14: jmp     loc_5ACABF
0x5ACA19: mov     eax, ds:0B38318h; jumptable 005AC9ED case 5
0x5ACA1E: push    ecx
0x5ACA1F: push    eax
0x5ACA20: jmp     loc_5ACABF
0x5ACA25: push    ecx; jumptable 005AC9ED case 6
0x5ACA26: mov     ecx, ds:0B38320h
0x5ACA2C: jmp     loc_5ACABE
0x5ACA31: mov     edx, ds:0B38328h; jumptable 005AC9ED case 7
0x5ACA37: push    ecx
0x5ACA38: push    edx
0x5ACA39: jmp     loc_5ACABF
0x5ACA3E: mov     eax, ds:0B38330h; jumptable 005AC9ED case 8
0x5ACA43: push    ecx
0x5ACA44: push    eax
0x5ACA45: jmp     short loc_5ACABF
0x5ACA47: push    ecx; jumptable 005AC9ED case 9
0x5ACA48: mov     ecx, ds:0B38338h
0x5ACA4E: jmp     short loc_5ACABE
0x5ACA50: mov     edx, ds:0B38340h; jumptable 005AC9ED case 10
0x5ACA56: push    ecx
0x5ACA57: push    edx
0x5ACA58: jmp     short loc_5ACABF
0x5ACA5A: mov     eax, ds:0B38348h; jumptable 005AC9ED case 11
0x5ACA5F: push    ecx
0x5ACA60: push    eax
0x5ACA61: jmp     short loc_5ACABF
0x5ACA63: push    ecx; jumptable 005AC9ED case 12
0x5ACA64: mov     ecx, ds:0B38350h
0x5ACA6A: jmp     short loc_5ACABE
0x5ACA6C: mov     edx, ds:0B38358h; jumptable 005AC9ED case 13
0x5ACA72: push    ecx
0x5ACA73: push    edx
0x5ACA74: jmp     short loc_5ACABF
0x5ACA76: mov     eax, ds:0B38360h; jumptable 005AC9ED case 14
0x5ACA7B: push    ecx
0x5ACA7C: push    eax
0x5ACA7D: jmp     short loc_5ACABF
0x5ACA7F: push    ecx; jumptable 005AC9ED case 15
0x5ACA80: mov     ecx, ds:0B38368h
0x5ACA86: jmp     short loc_5ACABE
0x5ACA88: mov     edx, ds:0B38370h; jumptable 005AC9ED case 16
0x5ACA8E: push    ecx
0x5ACA8F: push    edx
0x5ACA90: jmp     short loc_5ACABF
0x5ACA92: mov     eax, ds:0B38378h; jumptable 005AC9ED case 17
0x5ACA97: push    ecx
0x5ACA98: push    eax
0x5ACA99: jmp     short loc_5ACABF
0x5ACA9B: push    ecx; jumptable 005AC9ED case 18
0x5ACA9C: mov     ecx, ds:0B38380h
0x5ACAA2: jmp     short loc_5ACABE
0x5ACAA4: mov     edx, ds:0B38388h; jumptable 005AC9ED case 19
0x5ACAAA: push    ecx
0x5ACAAB: push    edx
0x5ACAAC: jmp     short loc_5ACABF
0x5ACAAE: mov     eax, ds:0B38390h; jumptable 005AC9ED case 20
0x5ACAB3: push    ecx
0x5ACAB4: push    eax
0x5ACAB5: jmp     short loc_5ACABF
