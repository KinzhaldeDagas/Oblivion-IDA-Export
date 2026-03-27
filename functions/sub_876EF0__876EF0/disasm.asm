0x876EF0: push    0FFFFFFFFh
0x876EF2: push    offset SEH_880560
0x876EF7: mov     eax, large fs:0
0x876EFD: push    eax
0x876EFE: push    ebx
0x876EFF: push    ebp
0x876F00: push    esi
0x876F01: push    edi
0x876F02: mov     eax, ds:0B30AACh
0x876F07: xor     eax, esp
0x876F09: push    eax
0x876F0A: lea     eax, [esp+20h+var_C]
0x876F0E: mov     large fs:0, eax
0x876F14: mov     esi, ecx
0x876F16: mov     ebx, [esp+20h+arg_8]
0x876F1A: mov     eax, [ebx+10h]
0x876F1D: mov     edi, ds:0B47690h
0x876F23: push    eax
0x876F24: call    sub_848C40
0x876F29: mov     ebx, [ebx+0Ch]
0x876F2C: push    ebx
0x876F2D: mov     ecx, esi
0x876F2F: call    sub_848E50
0x876F34: mov     ecx, [esp+20h+arg_0]
0x876F38: mov     eax, [esi]
0x876F3A: mov     edx, [eax+0BCh]
0x876F40: push    0
0x876F42: push    ebx
0x876F43: push    ecx
0x876F44: mov     ecx, esi
0x876F46: call    edx
0x876F48: mov     eax, [edi+24h]
0x876F4B: mov     ecx, [esp+20h+arg_C]
0x876F4F: mov     ebx, [eax]
0x876F51: mov     edx, [ecx]
0x876F53: mov     eax, [edx+88h]
0x876F59: push    0
0x876F5B: mov     [esp+24h+arg_8], ebx
0x876F5F: call    eax
0x876F61: mov     ebx, [ebx+4]
0x876F64: mov     ebp, eax
0x876F66: cmp     ebx, ebp
0x876F68: jz      short loc_876F9F
0x876F6A: test    ebx, ebx
0x876F6C: jz      short loc_876F8A
0x876F6E: lea     ecx, [ebx+4]
0x876F71: push    ecx; lpAddend
0x876F72: call    dword ptr ds:0A2807Ch
0x876F78: test    eax, eax
0x876F7A: jnz     short loc_876F8A
0x876F7C: test    ebx, ebx
0x876F7E: jz      short loc_876F8A
0x876F80: mov     edx, [ebx]
0x876F82: mov     eax, [edx]
0x876F84: push    1
0x876F86: mov     ecx, ebx
0x876F88: call    eax
0x876F8A: test    ebp, ebp
0x876F8C: mov     ecx, [esp+20h+arg_8]
0x876F90: mov     [ecx+4], ebp
0x876F93: jz      short loc_876F9F
0x876F95: add     ebp, 4
0x876F98: push    ebp; lpAddend
0x876F99: call    dword ptr ds:0A28078h
0x876F9F: mov     edx, [edi+24h]
0x876FA2: mov     eax, [esp+20h+arg_C]
0x876FA6: mov     ebx, [edx+4]
0x876FA9: push    0
0x876FAB: push    eax
0x876FAC: mov     ecx, esi
0x876FAE: mov     [esp+28h+arg_8], ebx
0x876FB2: call    sub_848FD0
0x876FB7: mov     ebx, [ebx+4]
0x876FBA: mov     ebp, eax
0x876FBC: cmp     ebx, ebp
0x876FBE: jz      short loc_876FF5
0x876FC0: test    ebx, ebx
0x876FC2: jz      short loc_876FE0
0x876FC4: lea     ecx, [ebx+4]
0x876FC7: push    ecx; lpAddend
0x876FC8: call    dword ptr ds:0A2807Ch
0x876FCE: test    eax, eax
0x876FD0: jnz     short loc_876FE0
0x876FD2: test    ebx, ebx
0x876FD4: jz      short loc_876FE0
0x876FD6: mov     edx, [ebx]
0x876FD8: mov     eax, [edx]
0x876FDA: push    1
0x876FDC: mov     ecx, ebx
0x876FDE: call    eax
0x876FE0: test    ebp, ebp
0x876FE2: mov     ecx, [esp+20h+arg_8]
0x876FE6: mov     [ecx+4], ebp
0x876FE9: jz      short loc_876FF5
0x876FEB: add     ebp, 4
0x876FEE: push    ebp; lpAddend
0x876FEF: call    dword ptr ds:0A28078h
0x876FF5: mov     edx, [edi+24h]
0x876FF8: mov     ebx, [edx+14h]
0x876FFB: mov     eax, ds:0B43110h
0x877000: mov     ebp, [ebx+4]
0x877003: add     ebx, 4
0x877006: cmp     ebp, eax
0x877008: mov     [esp+20h+arg_C], eax
0x87700C: jz      short loc_877043
0x87700E: test    ebp, ebp
0x877010: jz      short loc_877033
0x877012: lea     eax, [ebp+4]
0x877015: push    eax; lpAddend
0x877016: call    dword ptr ds:0A2807Ch
0x87701C: test    eax, eax
0x87701E: jnz     short loc_87702F
0x877020: test    ebp, ebp
0x877022: jz      short loc_87702F
0x877024: mov     edx, [ebp+0]
0x877027: mov     eax, [edx]
0x877029: push    1
0x87702B: mov     ecx, ebp
0x87702D: call    eax
0x87702F: mov     eax, [esp+20h+arg_C]
0x877033: test    eax, eax
0x877035: mov     [ebx], eax
0x877037: jz      short loc_877043
0x877039: add     eax, 4
0x87703C: push    eax; lpAddend
0x87703D: call    dword ptr ds:0A28078h
0x877043: mov     ecx, [edi+24h]
0x877046: mov     ebx, [ecx+18h]
0x877049: mov     eax, ds:0B43108h
0x87704E: mov     ebp, [ebx+4]
0x877051: add     ebx, 4
0x877054: cmp     ebp, eax
0x877056: mov     [esp+20h+arg_C], eax
0x87705A: jz      short loc_877091
0x87705C: test    ebp, ebp
0x87705E: jz      short loc_877081
0x877060: lea     edx, [ebp+4]
0x877063: push    edx; lpAddend
0x877064: call    dword ptr ds:0A2807Ch
0x87706A: test    eax, eax
0x87706C: jnz     short loc_87707D
0x87706E: test    ebp, ebp
0x877070: jz      short loc_87707D
0x877072: mov     eax, [ebp+0]
0x877075: mov     edx, [eax]
0x877077: push    1
0x877079: mov     ecx, ebp
0x87707B: call    edx
0x87707D: mov     eax, [esp+20h+arg_C]
0x877081: test    eax, eax
0x877083: mov     [ebx], eax
0x877085: jz      short loc_877091
0x877087: add     eax, 4
0x87708A: push    eax; lpAddend
0x87708B: call    dword ptr ds:0A28078h
0x877091: mov     eax, [edi+24h]
0x877094: mov     ebp, [eax+1Ch]
0x877097: mov     eax, ds:0B4310Ch
0x87709C: mov     ebx, [ebp+4]
0x87709F: cmp     ebx, eax
0x8770A1: mov     ecx, eax
0x8770A3: mov     [esp+20h+arg_C], ecx
0x8770A7: jz      short loc_8770DE
0x8770A9: test    ebx, ebx
0x8770AB: jz      short loc_8770CD
0x8770AD: lea     ecx, [ebx+4]
0x8770B0: push    ecx; lpAddend
0x8770B1: call    dword ptr ds:0A2807Ch
0x8770B7: test    eax, eax
0x8770B9: jnz     short loc_8770C9
0x8770BB: test    ebx, ebx
0x8770BD: jz      short loc_8770C9
0x8770BF: mov     edx, [ebx]
0x8770C1: mov     eax, [edx]
0x8770C3: push    1
0x8770C5: mov     ecx, ebx
0x8770C7: call    eax
0x8770C9: mov     ecx, [esp+20h+arg_C]
0x8770CD: test    ecx, ecx
0x8770CF: mov     [ebp+4], ecx
0x8770D2: jz      short loc_8770DE
0x8770D4: add     ecx, 4
0x8770D7: push    ecx; lpAddend
0x8770D8: call    dword ptr ds:0A28078h
0x8770DE: mov     ebx, 1
0x8770E3: add     [edi+60h], ebx
0x8770E6: mov     [esp+20h+arg_C], edi
0x8770EA: mov     edx, [esi+38h]
0x8770ED: lea     ecx, [esp+20h+arg_C]
0x8770F1: push    ecx
0x8770F2: push    edx
0x8770F3: lea     ecx, [esi+40h]
0x8770F6: mov     [esp+28h+var_4], 0
0x8770FE: call    sub_76CE40
0x877103: or      eax, 0FFFFFFFFh
0x877106: add     [edi+60h], eax
0x877109: mov     [esp+20h+var_4], eax
0x87710D: jnz     short loc_877116
0x87710F: mov     ecx, edi
0x877111: call    sub_7604D0
0x877116: add     [esi+38h], ebx
0x877119: mov     ecx, [esp+20h+var_C]
0x87711D: mov     large fs:0, ecx
0x877124: pop     ecx
0x877125: pop     edi
0x877126: pop     esi
0x877127: pop     ebp
0x877128: pop     ebx
0x877129: add     esp, 0Ch
0x87712C: retn    10h
