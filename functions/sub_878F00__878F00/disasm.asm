0x878F00: push    0FFFFFFFFh
0x878F02: push    offset SEH_882120
0x878F07: mov     eax, large fs:0
0x878F0D: push    eax
0x878F0E: push    ebx
0x878F0F: push    ebp
0x878F10: push    esi
0x878F11: push    edi
0x878F12: mov     eax, ds:0B30AACh
0x878F17: xor     eax, esp
0x878F19: push    eax
0x878F1A: lea     eax, [esp+20h+var_C]
0x878F1E: mov     large fs:0, eax
0x878F24: mov     esi, ecx
0x878F26: mov     ebp, [esp+20h+arg_8]
0x878F2A: mov     ebx, [ebp+0Ch]
0x878F2D: mov     edi, ds:0B476CCh
0x878F33: push    ebx
0x878F34: call    sub_848E50
0x878F39: mov     ebp, [ebp+10h]
0x878F3C: mov     ecx, [esp+20h+arg_0]
0x878F40: mov     eax, [esi]
0x878F42: mov     edx, [eax+0BCh]
0x878F48: push    ebp
0x878F49: push    ebx
0x878F4A: push    ecx
0x878F4B: mov     ecx, esi
0x878F4D: call    edx
0x878F4F: mov     eax, [edi+24h]
0x878F52: mov     ebp, [esp+20h+arg_C]
0x878F56: mov     ebx, [eax]
0x878F58: mov     edx, [ebp+0]
0x878F5B: mov     eax, [edx+88h]
0x878F61: push    0
0x878F63: mov     ecx, ebp
0x878F65: mov     [esp+24h+arg_8], ebx
0x878F69: call    eax
0x878F6B: mov     ebx, [ebx+4]
0x878F6E: cmp     ebx, eax
0x878F70: mov     [esp+20h+arg_0], eax
0x878F74: jz      short loc_878FAF
0x878F76: test    ebx, ebx
0x878F78: jz      short loc_878F9A
0x878F7A: lea     ecx, [ebx+4]
0x878F7D: push    ecx; lpAddend
0x878F7E: call    dword ptr ds:0A2807Ch
0x878F84: test    eax, eax
0x878F86: jnz     short loc_878F96
0x878F88: test    ebx, ebx
0x878F8A: jz      short loc_878F96
0x878F8C: mov     edx, [ebx]
0x878F8E: mov     eax, [edx]
0x878F90: push    1
0x878F92: mov     ecx, ebx
0x878F94: call    eax
0x878F96: mov     eax, [esp+20h+arg_0]
0x878F9A: test    eax, eax
0x878F9C: mov     ecx, [esp+20h+arg_8]
0x878FA0: mov     [ecx+4], eax
0x878FA3: jz      short loc_878FAF
0x878FA5: add     eax, 4
0x878FA8: push    eax; lpAddend
0x878FA9: call    dword ptr ds:0A28078h
0x878FAF: mov     edx, [edi+24h]
0x878FB2: mov     ebx, [edx+4]
0x878FB5: push    0
0x878FB7: push    ebp
0x878FB8: mov     ecx, esi
0x878FBA: mov     [esp+28h+arg_8], ebx
0x878FBE: call    sub_848FD0
0x878FC3: mov     ebx, [ebx+4]
0x878FC6: cmp     ebx, eax
0x878FC8: mov     [esp+20h+arg_0], eax
0x878FCC: jz      short loc_879007
0x878FCE: test    ebx, ebx
0x878FD0: jz      short loc_878FF2
0x878FD2: lea     eax, [ebx+4]
0x878FD5: push    eax; lpAddend
0x878FD6: call    dword ptr ds:0A2807Ch
0x878FDC: test    eax, eax
0x878FDE: jnz     short loc_878FEE
0x878FE0: test    ebx, ebx
0x878FE2: jz      short loc_878FEE
0x878FE4: mov     edx, [ebx]
0x878FE6: mov     eax, [edx]
0x878FE8: push    1
0x878FEA: mov     ecx, ebx
0x878FEC: call    eax
0x878FEE: mov     eax, [esp+20h+arg_0]
0x878FF2: test    eax, eax
0x878FF4: mov     ecx, [esp+20h+arg_8]
0x878FF8: mov     [ecx+4], eax
0x878FFB: jz      short loc_879007
0x878FFD: add     eax, 4
0x879000: push    eax; lpAddend
0x879001: call    dword ptr ds:0A28078h
0x879007: mov     edx, [edi+24h]
0x87900A: mov     eax, [edx+10h]
0x87900D: mov     edx, [ebp+0]
0x879010: mov     [esp+20h+arg_8], eax
0x879014: mov     eax, [edx+90h]
0x87901A: push    0
0x87901C: mov     ecx, ebp
0x87901E: call    eax
0x879020: mov     ecx, [esp+20h+arg_8]
0x879024: mov     ebp, [ecx+4]
0x879027: mov     ebx, eax
0x879029: cmp     ebp, ebx
0x87902B: jz      short loc_879063
0x87902D: test    ebp, ebp
0x87902F: jz      short loc_87904E
0x879031: lea     edx, [ebp+4]
0x879034: push    edx; lpAddend
0x879035: call    dword ptr ds:0A2807Ch
0x87903B: test    eax, eax
0x87903D: jnz     short loc_87904E
0x87903F: test    ebp, ebp
0x879041: jz      short loc_87904E
0x879043: mov     eax, [ebp+0]
0x879046: mov     edx, [eax]
0x879048: push    1
0x87904A: mov     ecx, ebp
0x87904C: call    edx
0x87904E: test    ebx, ebx
0x879050: mov     eax, [esp+20h+arg_8]
0x879054: mov     [eax+4], ebx
0x879057: jz      short loc_879063
0x879059: add     ebx, 4
0x87905C: push    ebx; lpAddend
0x87905D: call    dword ptr ds:0A28078h
0x879063: mov     ecx, [edi+24h]
0x879066: mov     ebp, [ecx+14h]
0x879069: mov     eax, ds:0B43110h
0x87906E: mov     ebx, [ebp+4]
0x879071: cmp     ebx, eax
0x879073: mov     ecx, eax
0x879075: mov     [esp+20h+arg_8], ecx
0x879079: jz      short loc_8790B0
0x87907B: test    ebx, ebx
0x87907D: jz      short loc_87909F
0x87907F: lea     edx, [ebx+4]
0x879082: push    edx; lpAddend
0x879083: call    dword ptr ds:0A2807Ch
0x879089: test    eax, eax
0x87908B: jnz     short loc_87909B
0x87908D: test    ebx, ebx
0x87908F: jz      short loc_87909B
0x879091: mov     eax, [ebx]
0x879093: mov     edx, [eax]
0x879095: push    1
0x879097: mov     ecx, ebx
0x879099: call    edx
0x87909B: mov     ecx, [esp+20h+arg_8]
0x87909F: test    ecx, ecx
0x8790A1: mov     [ebp+4], ecx
0x8790A4: jz      short loc_8790B0
0x8790A6: add     ecx, 4
0x8790A9: push    ecx; lpAddend
0x8790AA: call    dword ptr ds:0A28078h
0x8790B0: mov     ebx, 1
0x8790B5: add     [edi+60h], ebx
0x8790B8: mov     [esp+20h+arg_8], edi
0x8790BC: mov     ecx, [esi+38h]
0x8790BF: lea     eax, [esp+20h+arg_8]
0x8790C3: push    eax
0x8790C4: push    ecx
0x8790C5: lea     ecx, [esi+40h]
0x8790C8: mov     [esp+28h+var_4], 0
0x8790D0: call    sub_76CE40
0x8790D5: or      eax, 0FFFFFFFFh
0x8790D8: add     [edi+60h], eax
0x8790DB: mov     [esp+20h+var_4], eax
0x8790DF: jnz     short loc_8790E8
0x8790E1: mov     ecx, edi
0x8790E3: call    sub_7604D0
0x8790E8: add     [esi+38h], ebx
0x8790EB: mov     ecx, [esp+20h+var_C]
0x8790EF: mov     large fs:0, ecx
0x8790F6: pop     ecx
0x8790F7: pop     edi
0x8790F8: pop     esi
0x8790F9: pop     ebp
0x8790FA: pop     ebx
0x8790FB: add     esp, 0Ch
0x8790FE: retn    10h
