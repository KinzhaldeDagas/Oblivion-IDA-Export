0x842A00: push    0FFFFFFFFh
0x842A02: push    offset SEH_882120
0x842A07: mov     eax, large fs:0
0x842A0D: push    eax
0x842A0E: push    ebx
0x842A0F: push    ebp
0x842A10: push    esi
0x842A11: push    edi
0x842A12: mov     eax, ds:0B30AACh
0x842A17: xor     eax, esp
0x842A19: push    eax
0x842A1A: lea     eax, [esp+20h+var_C]
0x842A1E: mov     large fs:0, eax
0x842A24: mov     esi, ecx
0x842A26: mov     ebx, [esp+20h+arg_8]
0x842A2A: mov     eax, [ebx+10h]
0x842A2D: mov     edi, ds:0B45720h
0x842A33: push    eax
0x842A34: call    sub_848C40
0x842A39: mov     ebx, [ebx+0Ch]
0x842A3C: push    ebx
0x842A3D: mov     ecx, esi
0x842A3F: call    sub_848E50
0x842A44: mov     ecx, [esp+20h+arg_0]
0x842A48: mov     eax, [esi]
0x842A4A: mov     edx, [eax+0BCh]
0x842A50: push    0
0x842A52: push    ebx
0x842A53: push    ecx
0x842A54: mov     ecx, esi
0x842A56: call    edx
0x842A58: mov     eax, [edi+24h]
0x842A5B: mov     ebx, [esp+20h+arg_C]
0x842A5F: mov     ebp, [eax]
0x842A61: mov     edx, [ebx]
0x842A63: mov     eax, [edx+88h]
0x842A69: push    0
0x842A6B: mov     ecx, ebx
0x842A6D: mov     [esp+24h+arg_8], ebp
0x842A71: call    eax
0x842A73: mov     ebp, [ebp+4]
0x842A76: cmp     ebp, eax
0x842A78: mov     [esp+20h+arg_0], eax
0x842A7C: jz      short loc_842AB8
0x842A7E: test    ebp, ebp
0x842A80: jz      short loc_842AA3
0x842A82: lea     ecx, [ebp+4]
0x842A85: push    ecx; lpAddend
0x842A86: call    dword ptr ds:0A2807Ch
0x842A8C: test    eax, eax
0x842A8E: jnz     short loc_842A9F
0x842A90: test    ebp, ebp
0x842A92: jz      short loc_842A9F
0x842A94: mov     edx, [ebp+0]
0x842A97: mov     eax, [edx]
0x842A99: push    1
0x842A9B: mov     ecx, ebp
0x842A9D: call    eax
0x842A9F: mov     eax, [esp+20h+arg_0]
0x842AA3: test    eax, eax
0x842AA5: mov     ecx, [esp+20h+arg_8]
0x842AA9: mov     [ecx+4], eax
0x842AAC: jz      short loc_842AB8
0x842AAE: add     eax, 4
0x842AB1: push    eax; lpAddend
0x842AB2: call    dword ptr ds:0A28078h
0x842AB8: mov     edx, [esp+20h+arg_8]
0x842ABC: push    ebx
0x842ABD: push    edx
0x842ABE: mov     ecx, esi
0x842AC0: call    sub_848FA0
0x842AC5: mov     eax, [edi+24h]
0x842AC8: mov     ebp, [eax+4]
0x842ACB: push    0
0x842ACD: push    ebx
0x842ACE: mov     ecx, esi
0x842AD0: mov     [esp+28h+arg_8], ebp
0x842AD4: call    sub_848FD0
0x842AD9: mov     ebp, [ebp+4]
0x842ADC: cmp     ebp, eax
0x842ADE: mov     [esp+20h+arg_0], eax
0x842AE2: jz      short loc_842B1E
0x842AE4: test    ebp, ebp
0x842AE6: jz      short loc_842B09
0x842AE8: lea     ecx, [ebp+4]
0x842AEB: push    ecx; lpAddend
0x842AEC: call    dword ptr ds:0A2807Ch
0x842AF2: test    eax, eax
0x842AF4: jnz     short loc_842B05
0x842AF6: test    ebp, ebp
0x842AF8: jz      short loc_842B05
0x842AFA: mov     edx, [ebp+0]
0x842AFD: mov     eax, [edx]
0x842AFF: push    1
0x842B01: mov     ecx, ebp
0x842B03: call    eax
0x842B05: mov     eax, [esp+20h+arg_0]
0x842B09: test    eax, eax
0x842B0B: mov     ecx, [esp+20h+arg_8]
0x842B0F: mov     [ecx+4], eax
0x842B12: jz      short loc_842B1E
0x842B14: add     eax, 4
0x842B17: push    eax; lpAddend
0x842B18: call    dword ptr ds:0A28078h
0x842B1E: mov     edx, [esp+20h+arg_8]
0x842B22: push    ebx
0x842B23: push    edx
0x842B24: mov     ecx, esi
0x842B26: call    sub_848FA0
0x842B2B: mov     ebx, 1
0x842B30: add     [edi+60h], ebx
0x842B33: mov     [esp+20h+arg_8], edi
0x842B37: mov     ecx, [esi+38h]
0x842B3A: lea     eax, [esp+20h+arg_8]
0x842B3E: push    eax
0x842B3F: push    ecx
0x842B40: lea     ecx, [esi+40h]
0x842B43: mov     [esp+28h+var_4], 0
0x842B4B: call    sub_76CE40
0x842B50: or      eax, 0FFFFFFFFh
0x842B53: add     [edi+60h], eax
0x842B56: mov     [esp+20h+var_4], eax
0x842B5A: jnz     short loc_842B63
0x842B5C: mov     ecx, edi
0x842B5E: call    sub_7604D0
0x842B63: add     [esi+38h], ebx
0x842B66: mov     ecx, [esp+20h+var_C]
0x842B6A: mov     large fs:0, ecx
0x842B71: pop     ecx
0x842B72: pop     edi
0x842B73: pop     esi
0x842B74: pop     ebp
0x842B75: pop     ebx
0x842B76: add     esp, 0Ch
0x842B79: retn    10h
