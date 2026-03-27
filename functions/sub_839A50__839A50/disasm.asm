0x839A50: push    0FFFFFFFFh
0x839A52: push    offset SEH_81EA70
0x839A57: mov     eax, large fs:0
0x839A5D: push    eax
0x839A5E: sub     esp, 0Ch
0x839A61: push    ebx
0x839A62: push    ebp
0x839A63: push    esi
0x839A64: push    edi
0x839A65: mov     eax, ds:0B30AACh
0x839A6A: xor     eax, esp
0x839A6C: push    eax
0x839A6D: lea     eax, [esp+2Ch+var_C]
0x839A71: mov     large fs:0, eax
0x839A77: xor     esi, esi
0x839A79: mov     [esp+2Ch+var_14], esi
0x839A7D: xor     edi, edi
0x839A7F: mov     [esp+2Ch+var_4], esi
0x839A83: mov     [esp+2Ch+var_18], edi
0x839A87: mov     eax, ds:0B45BD8h
0x839A8C: test    eax, eax
0x839A8E: mov     ebx, 1
0x839A93: mov     byte ptr [esp+2Ch+var_4], bl
0x839A97: jz      short loc_839AA6
0x839A99: mov     esi, eax
0x839A9B: test    esi, esi
0x839A9D: mov     [esp+2Ch+var_14], esi
0x839AA1: jz      short loc_839AA6
0x839AA3: add     [esi+60h], ebx
0x839AA6: mov     eax, [esi+18h]
0x839AA9: cmp     eax, 2
0x839AAC: jnb     loc_839B79
0x839AB2: lea     eax, [esp+2Ch+var_10]
0x839AB6: push    eax
0x839AB7: call    sub_772630
0x839ABC: add     esp, 4
0x839ABF: mov     eax, [eax]
0x839AC1: test    eax, eax
0x839AC3: jz      short loc_839ACE
0x839AC5: mov     edi, eax
0x839AC7: add     [edi+5Ch], ebx
0x839ACA: mov     [esp+2Ch+var_18], edi
0x839ACE: mov     eax, [esp+2Ch+var_10]
0x839AD2: test    eax, eax
0x839AD4: mov     byte ptr [esp+2Ch+var_4], 1
0x839AD9: jz      short loc_839AEE
0x839ADB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x839ADF: mov     ecx, eax
0x839AE1: add     eax, 5Ch ; '\'
0x839AE4: cmp     dword ptr [eax], 0
0x839AE7: jnz     short loc_839AEE
0x839AE9: call    sub_772560
0x839AEE: push    2
0x839AF0: push    ebx
0x839AF1: push    0
0x839AF3: push    edi
0x839AF4: call    sub_801110
0x839AF9: mov     ecx, [esi+14h]
0x839AFC: add     esp, 10h
0x839AFF: push    edi; a3
0x839B00: push    ecx; a2
0x839B01: mov     ecx, esi; this
0x839B03: call    sub_760010
0x839B08: lea     edx, [esp+2Ch+var_10]
0x839B0C: push    edx
0x839B0D: call    sub_772630
0x839B12: add     esp, 4
0x839B15: mov     ebp, eax
0x839B17: cmp     edi, [ebp+0]
0x839B1A: mov     byte ptr [esp+2Ch+var_4], 3
0x839B1F: jz      short loc_839B40
0x839B21: test    edi, edi
0x839B23: jz      short loc_839B32
0x839B25: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x839B29: jnz     short loc_839B32
0x839B2B: mov     ecx, edi
0x839B2D: call    sub_772560
0x839B32: mov     edi, [ebp+0]
0x839B35: test    edi, edi
0x839B37: mov     [esp+2Ch+var_18], edi
0x839B3B: jz      short loc_839B40
0x839B3D: add     [edi+5Ch], ebx
0x839B40: mov     eax, [esp+2Ch+var_10]
0x839B44: test    eax, eax
0x839B46: mov     byte ptr [esp+2Ch+var_4], 1
0x839B4B: jz      short loc_839B60
0x839B4D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x839B51: mov     ecx, eax
0x839B53: add     eax, 5Ch ; '\'
0x839B56: cmp     dword ptr [eax], 0
0x839B59: jnz     short loc_839B60
0x839B5B: call    sub_772560
0x839B60: push    2
0x839B62: push    ebx
0x839B63: push    ebx
0x839B64: push    edi
0x839B65: call    sub_801110
0x839B6A: mov     eax, [esi+14h]
0x839B6D: add     esp, 10h
0x839B70: push    edi; a3
0x839B71: push    eax; a2
0x839B72: mov     ecx, esi; this
0x839B74: call    sub_760010
0x839B79: mov     eax, ds:0B45480h
0x839B7E: mov     ebp, [esi+58h]
0x839B81: cmp     ebp, eax
0x839B83: mov     ebx, eax
0x839B85: jz      short loc_839BB9
0x839B87: test    ebp, ebp
0x839B89: jz      short loc_839BA8
0x839B8B: lea     ecx, [ebp+4]
0x839B8E: push    ecx; lpAddend
0x839B8F: call    dword ptr ds:0A2807Ch
0x839B95: test    eax, eax
0x839B97: jnz     short loc_839BA8
0x839B99: test    ebp, ebp
0x839B9B: jz      short loc_839BA8
0x839B9D: mov     edx, [ebp+0]
0x839BA0: mov     eax, [edx]
0x839BA2: push    1
0x839BA4: mov     ecx, ebp
0x839BA6: call    eax
0x839BA8: test    ebx, ebx
0x839BAA: mov     [esi+58h], ebx
0x839BAD: jz      short loc_839BB9
0x839BAF: add     ebx, 4
0x839BB2: push    ebx; lpAddend
0x839BB3: call    dword ptr ds:0A28078h
0x839BB9: mov     eax, ds:0B45270h
0x839BBE: mov     ebp, [esi+44h]
0x839BC1: cmp     ebp, eax
0x839BC3: mov     ebx, eax
0x839BC5: jz      short loc_839BF9
0x839BC7: test    ebp, ebp
0x839BC9: jz      short loc_839BE8
0x839BCB: lea     ecx, [ebp+4]
0x839BCE: push    ecx; lpAddend
0x839BCF: call    dword ptr ds:0A2807Ch
0x839BD5: test    eax, eax
0x839BD7: jnz     short loc_839BE8
0x839BD9: test    ebp, ebp
0x839BDB: jz      short loc_839BE8
0x839BDD: mov     edx, [ebp+0]
0x839BE0: mov     eax, [edx]
0x839BE2: push    1
0x839BE4: mov     ecx, ebp
0x839BE6: call    eax
0x839BE8: test    ebx, ebx
0x839BEA: mov     [esi+44h], ebx
0x839BED: jz      short loc_839BF9
0x839BEF: add     ebx, 4
0x839BF2: push    ebx; lpAddend
0x839BF3: call    dword ptr ds:0A28078h
0x839BF9: xor     ebx, ebx
0x839BFB: cmp     [esi+30h], ebx
0x839BFE: jnz     short loc_839C08
0x839C00: call    sub_772DF0
0x839C05: mov     [esi+30h], eax
0x839C08: mov     ecx, [esi+30h]
0x839C0B: push    ebx
0x839C0C: push    1
0x839C0E: push    1Bh
0x839C10: call    sub_772CD0
0x839C15: cmp     [esi+30h], ebx
0x839C18: jnz     short loc_839C22
0x839C1A: call    sub_772DF0
0x839C1F: mov     [esi+30h], eax
0x839C22: mov     ecx, [esi+30h]
0x839C25: push    ebx
0x839C26: push    5
0x839C28: push    13h
0x839C2A: call    sub_772CD0
0x839C2F: cmp     [esi+30h], ebx
0x839C32: jnz     short loc_839C3C
0x839C34: call    sub_772DF0
0x839C39: mov     [esi+30h], eax
0x839C3C: mov     ecx, [esi+30h]
0x839C3F: push    ebx
0x839C40: push    6
0x839C42: push    14h
0x839C44: call    sub_772CD0
0x839C49: cmp     [esi+30h], ebx
0x839C4C: jnz     short loc_839C56
0x839C4E: call    sub_772DF0
0x839C53: mov     [esi+30h], eax
0x839C56: mov     ecx, [esi+30h]
0x839C59: push    ebx
0x839C5A: push    ebx
0x839C5B: push    0Fh
0x839C5D: call    sub_772CD0
0x839C62: cmp     [esi+30h], ebx
0x839C65: jnz     short loc_839C6F
0x839C67: call    sub_772DF0
0x839C6C: mov     [esi+30h], eax
0x839C6F: mov     ecx, [esi+30h]
0x839C72: push    ebx
0x839C73: push    1
0x839C75: push    7
0x839C77: call    sub_772CD0
0x839C7C: cmp     [esi+30h], ebx
0x839C7F: jnz     short loc_839C89
0x839C81: call    sub_772DF0
0x839C86: mov     [esi+30h], eax
0x839C89: mov     ecx, [esi+30h]
0x839C8C: push    ebx
0x839C8D: push    3
0x839C8F: push    17h
0x839C91: call    sub_772CD0
0x839C96: cmp     [esi+30h], ebx
0x839C99: jnz     short loc_839CA3
0x839C9B: call    sub_772DF0
0x839CA0: mov     [esi+30h], eax
0x839CA3: mov     ecx, [esi+30h]
0x839CA6: push    ebx
0x839CA7: push    ebx
0x839CA8: push    0Eh
0x839CAA: call    sub_772CD0
0x839CAF: cmp     [esi+30h], ebx
0x839CB2: jnz     short loc_839CBC
0x839CB4: call    sub_772DF0
0x839CB9: mov     [esi+30h], eax
0x839CBC: mov     ecx, [esi+30h]
0x839CBF: push    ebx
0x839CC0: push    ebx
0x839CC1: push    34h ; '4'
0x839CC3: call    sub_772CD0
0x839CC8: cmp     esi, ds:0B45BDCh
0x839CCE: mov     ds:0B44158h, ebx
0x839CD4: mov     ds:0B447E8h, ebx
0x839CDA: jz      short loc_839CFB
0x839CDC: add     dword ptr [esi+60h], 0FFFFFFFFh
0x839CE0: jnz     short loc_839CE9
0x839CE2: mov     ecx, esi
0x839CE4: call    sub_7604D0
0x839CE9: mov     esi, ds:0B45BDCh
0x839CEF: cmp     esi, ebx
0x839CF1: mov     [esp+2Ch+var_14], esi
0x839CF5: jz      short loc_839CFB
0x839CF7: add     dword ptr [esi+60h], 1
0x839CFB: cmp     dword ptr [esi+18h], 2
0x839CFF: jnb     loc_839DEA
0x839D05: lea     ecx, [esp+2Ch+var_10]
0x839D09: push    ecx
0x839D0A: call    sub_772630
0x839D0F: add     esp, 4
0x839D12: mov     ebp, eax
0x839D14: cmp     edi, [ebp+0]
0x839D17: mov     byte ptr [esp+2Ch+var_4], 4
0x839D1C: jz      short loc_839D3E
0x839D1E: cmp     edi, ebx
0x839D20: jz      short loc_839D2F
0x839D22: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x839D26: jnz     short loc_839D2F
0x839D28: mov     ecx, edi
0x839D2A: call    sub_772560
0x839D2F: mov     edi, [ebp+0]
0x839D32: cmp     edi, ebx
0x839D34: mov     [esp+2Ch+var_18], edi
0x839D38: jz      short loc_839D3E
0x839D3A: add     dword ptr [edi+5Ch], 1
0x839D3E: mov     eax, [esp+2Ch+var_10]
0x839D42: cmp     eax, ebx
0x839D44: mov     byte ptr [esp+2Ch+var_4], 1
0x839D49: jz      short loc_839D5D
0x839D4B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x839D4F: mov     ecx, eax
0x839D51: add     eax, 5Ch ; '\'
0x839D54: cmp     [eax], ebx
0x839D56: jnz     short loc_839D5D
0x839D58: call    sub_772560
0x839D5D: push    2
0x839D5F: push    1
0x839D61: push    ebx
0x839D62: push    edi
0x839D63: call    sub_801110
0x839D68: mov     edx, [esi+14h]
0x839D6B: add     esp, 10h
0x839D6E: push    edi; a3
0x839D6F: push    edx; a2
0x839D70: mov     ecx, esi; this
0x839D72: call    sub_760010
0x839D77: lea     eax, [esp+2Ch+var_10]
0x839D7B: push    eax
0x839D7C: call    sub_772630
0x839D81: add     esp, 4
0x839D84: mov     ebp, eax
0x839D86: cmp     edi, [ebp+0]
0x839D89: mov     byte ptr [esp+2Ch+var_4], 5
0x839D8E: jz      short loc_839DB0
0x839D90: cmp     edi, ebx
0x839D92: jz      short loc_839DA1
0x839D94: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x839D98: jnz     short loc_839DA1
0x839D9A: mov     ecx, edi
0x839D9C: call    sub_772560
0x839DA1: mov     edi, [ebp+0]
0x839DA4: cmp     edi, ebx
0x839DA6: mov     [esp+2Ch+var_18], edi
0x839DAA: jz      short loc_839DB0
0x839DAC: add     dword ptr [edi+5Ch], 1
0x839DB0: mov     eax, [esp+2Ch+var_10]
0x839DB4: cmp     eax, ebx
0x839DB6: mov     byte ptr [esp+2Ch+var_4], 1
0x839DBB: jz      short loc_839DCF
0x839DBD: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x839DC1: mov     ecx, eax
0x839DC3: add     eax, 5Ch ; '\'
0x839DC6: cmp     [eax], ebx
0x839DC8: jnz     short loc_839DCF
0x839DCA: call    sub_772560
0x839DCF: push    2
0x839DD1: push    1
0x839DD3: push    1
0x839DD5: push    edi
0x839DD6: call    sub_801110
0x839DDB: mov     ecx, [esi+14h]
0x839DDE: add     esp, 10h
0x839DE1: push    edi; a3
0x839DE2: push    ecx; a2
0x839DE3: mov     ecx, esi; this
0x839DE5: call    sub_760010
0x839DEA: mov     eax, ds:0B45484h
0x839DEF: mov     ebp, [esi+58h]
0x839DF2: cmp     ebp, eax
0x839DF4: mov     ebx, eax
0x839DF6: jz      short loc_839E2A
0x839DF8: test    ebp, ebp
0x839DFA: jz      short loc_839E19
0x839DFC: lea     edx, [ebp+4]
0x839DFF: push    edx; lpAddend
0x839E00: call    dword ptr ds:0A2807Ch
0x839E06: test    eax, eax
0x839E08: jnz     short loc_839E19
0x839E0A: test    ebp, ebp
0x839E0C: jz      short loc_839E19
0x839E0E: mov     eax, [ebp+0]
0x839E11: mov     edx, [eax]
0x839E13: push    1
0x839E15: mov     ecx, ebp
0x839E17: call    edx
0x839E19: test    ebx, ebx
0x839E1B: mov     [esi+58h], ebx
0x839E1E: jz      short loc_839E2A
0x839E20: add     ebx, 4
0x839E23: push    ebx; lpAddend
0x839E24: call    dword ptr ds:0A28078h
0x839E2A: mov     eax, ds:0B45270h
0x839E2F: mov     ebp, [esi+44h]
0x839E32: cmp     ebp, eax
0x839E34: mov     ebx, eax
0x839E36: jz      short loc_839E6A
0x839E38: test    ebp, ebp
0x839E3A: jz      short loc_839E59
0x839E3C: lea     eax, [ebp+4]
0x839E3F: push    eax; lpAddend
0x839E40: call    dword ptr ds:0A2807Ch
0x839E46: test    eax, eax
0x839E48: jnz     short loc_839E59
0x839E4A: test    ebp, ebp
0x839E4C: jz      short loc_839E59
0x839E4E: mov     edx, [ebp+0]
0x839E51: mov     eax, [edx]
0x839E53: push    1
0x839E55: mov     ecx, ebp
0x839E57: call    eax
0x839E59: test    ebx, ebx
0x839E5B: mov     [esi+44h], ebx
0x839E5E: jz      short loc_839E6A
0x839E60: add     ebx, 4
0x839E63: push    ebx; lpAddend
0x839E64: call    dword ptr ds:0A28078h
0x839E6A: cmp     dword ptr [esi+30h], 0
0x839E6E: jnz     short loc_839E78
0x839E70: call    sub_772DF0
0x839E75: mov     [esi+30h], eax
0x839E78: mov     ecx, [esi+30h]
0x839E7B: xor     ebx, ebx
0x839E7D: push    ebx
0x839E7E: push    1
0x839E80: push    1Bh
0x839E82: call    sub_772CD0
0x839E87: cmp     [esi+30h], ebx
0x839E8A: jnz     short loc_839E94
0x839E8C: call    sub_772DF0
0x839E91: mov     [esi+30h], eax
0x839E94: mov     ecx, [esi+30h]
0x839E97: push    ebx
0x839E98: push    5
0x839E9A: push    13h
0x839E9C: call    sub_772CD0
0x839EA1: cmp     [esi+30h], ebx
0x839EA4: jnz     short loc_839EAE
0x839EA6: call    sub_772DF0
0x839EAB: mov     [esi+30h], eax
0x839EAE: mov     ecx, [esi+30h]
0x839EB1: push    ebx
0x839EB2: push    6
0x839EB4: push    14h
0x839EB6: call    sub_772CD0
0x839EBB: cmp     [esi+30h], ebx
0x839EBE: jnz     short loc_839EC8
0x839EC0: call    sub_772DF0
0x839EC5: mov     [esi+30h], eax
0x839EC8: mov     ecx, [esi+30h]
0x839ECB: push    ebx
0x839ECC: push    ebx
0x839ECD: push    0Fh
0x839ECF: call    sub_772CD0
0x839ED4: cmp     [esi+30h], ebx
0x839ED7: jnz     short loc_839EE1
0x839ED9: call    sub_772DF0
0x839EDE: mov     [esi+30h], eax
0x839EE1: mov     ecx, [esi+30h]
0x839EE4: push    ebx
0x839EE5: push    1
0x839EE7: push    7
0x839EE9: call    sub_772CD0
0x839EEE: cmp     [esi+30h], ebx
0x839EF1: jnz     short loc_839EFB
0x839EF3: call    sub_772DF0
0x839EF8: mov     [esi+30h], eax
0x839EFB: mov     ecx, [esi+30h]
0x839EFE: push    ebx
0x839EFF: push    3
0x839F01: push    17h
0x839F03: call    sub_772CD0
0x839F08: cmp     [esi+30h], ebx
0x839F0B: jnz     short loc_839F15
0x839F0D: call    sub_772DF0
0x839F12: mov     [esi+30h], eax
0x839F15: mov     ecx, [esi+30h]
0x839F18: push    ebx
0x839F19: push    ebx
0x839F1A: push    0Eh
0x839F1C: call    sub_772CD0
0x839F21: cmp     [esi+30h], ebx
0x839F24: jnz     short loc_839F2E
0x839F26: call    sub_772DF0
0x839F2B: mov     [esi+30h], eax
0x839F2E: mov     ecx, [esi+30h]
0x839F31: push    ebx
0x839F32: push    ebx
0x839F33: push    34h ; '4'
0x839F35: call    sub_772CD0
0x839F3A: cmp     edi, ebx
0x839F3C: mov     ds:0B4415Ch, ebx
0x839F42: mov     ds:0B447ECh, ebx
0x839F48: mov     byte ptr [esp+2Ch+var_4], 0
0x839F4D: jz      short loc_839F60
0x839F4F: or      ebx, 0FFFFFFFFh
0x839F52: add     [edi+5Ch], ebx
0x839F55: jnz     short loc_839F63
0x839F57: mov     ecx, edi
0x839F59: call    sub_772560
0x839F5E: jmp     short loc_839F63
0x839F60: or      ebx, 0FFFFFFFFh
0x839F63: add     [esi+60h], ebx
0x839F66: mov     [esp+2Ch+var_4], ebx
0x839F6A: jnz     short loc_839F73
0x839F6C: mov     ecx, esi
0x839F6E: call    sub_7604D0
0x839F73: mov     ecx, dword ptr [esp+2Ch+var_C]
0x839F77: mov     large fs:0, ecx
0x839F7E: pop     ecx
0x839F7F: pop     edi
0x839F80: pop     esi
0x839F81: pop     ebp
0x839F82: pop     ebx
0x839F83: add     esp, 18h
0x839F86: retn
