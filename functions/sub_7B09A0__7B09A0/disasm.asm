0x7B09A0: push    0FFFFFFFFh
0x7B09A2: push    offset SEH_7B09A0
0x7B09A7: mov     eax, large fs:0
0x7B09AD: push    eax
0x7B09AE: sub     esp, 8
0x7B09B1: push    ebx
0x7B09B2: push    ebp
0x7B09B3: push    esi
0x7B09B4: push    edi
0x7B09B5: mov     eax, ds:0B30AACh
0x7B09BA: xor     eax, esp
0x7B09BC: push    eax
0x7B09BD: lea     eax, [esp+28h+var_C]
0x7B09C1: mov     large fs:0, eax
0x7B09C7: mov     esi, ecx
0x7B09C9: lea     eax, [esp+28h+var_10]
0x7B09CD: push    eax
0x7B09CE: call    sub_7606A0
0x7B09D3: add     esp, 4
0x7B09D6: mov     edi, eax
0x7B09D8: mov     ecx, [esi+70h]
0x7B09DB: or      ebx, 0FFFFFFFFh
0x7B09DE: cmp     ecx, [edi]
0x7B09E0: mov     [esp+28h+var_4], 0
0x7B09E8: jz      short loc_7B0A0B
0x7B09EA: test    ecx, ecx
0x7B09EC: jz      short loc_7B09F8
0x7B09EE: add     [ecx+60h], ebx
0x7B09F1: jnz     short loc_7B09F8
0x7B09F3: call    sub_7604D0
0x7B09F8: mov     eax, [edi]
0x7B09FA: test    eax, eax
0x7B09FC: mov     [esi+70h], eax
0x7B09FF: jz      short loc_7B0A0B
0x7B0A01: mov     ebp, 1
0x7B0A06: add     [eax+60h], ebp
0x7B0A09: jmp     short loc_7B0A10
0x7B0A0B: mov     ebp, 1
0x7B0A10: mov     eax, [esp+28h+var_10]
0x7B0A14: test    eax, eax
0x7B0A16: mov     [esp+28h+var_4], ebx
0x7B0A1A: jz      short loc_7B0A2E
0x7B0A1C: add     [eax+60h], ebx
0x7B0A1F: mov     ecx, eax
0x7B0A21: add     eax, 60h ; '`'
0x7B0A24: cmp     dword ptr [eax], 0
0x7B0A27: jnz     short loc_7B0A2E
0x7B0A29: call    sub_7604D0
0x7B0A2E: xor     edi, edi
0x7B0A30: lea     ecx, [esp+28h+a3]
0x7B0A34: push    ecx
0x7B0A35: call    sub_772630
0x7B0A3A: mov     edx, [esp+2Ch+a3]
0x7B0A3E: push    2
0x7B0A40: push    3
0x7B0A42: push    edi
0x7B0A43: push    edx
0x7B0A44: mov     [esp+3Ch+var_4], ebp
0x7B0A48: call    sub_801110
0x7B0A4D: mov     ecx, [esi+70h]; this
0x7B0A50: mov     eax, [esp+3Ch+a3]
0x7B0A54: mov     edx, [ecx+14h]
0x7B0A57: add     esp, 14h
0x7B0A5A: push    eax; a3
0x7B0A5B: push    edx; a2
0x7B0A5C: call    sub_760010
0x7B0A61: mov     eax, [esp+28h+a3]
0x7B0A65: test    eax, eax
0x7B0A67: mov     [esp+28h+var_4], ebx
0x7B0A6B: jz      short loc_7B0A7F
0x7B0A6D: add     [eax+5Ch], ebx
0x7B0A70: mov     ecx, eax
0x7B0A72: add     eax, 5Ch ; '\'
0x7B0A75: cmp     dword ptr [eax], 0
0x7B0A78: jnz     short loc_7B0A7F
0x7B0A7A: call    sub_772560
0x7B0A7F: add     edi, ebp
0x7B0A81: cmp     edi, 4
0x7B0A84: jb      short loc_7B0A30
0x7B0A86: mov     edi, [esi+70h]
0x7B0A89: mov     eax, [esi+90h]
0x7B0A8F: mov     ebx, [esi+eax*4+94h]
0x7B0A96: mov     ebp, [edi+58h]
0x7B0A99: add     edi, 58h ; 'X'
0x7B0A9C: cmp     ebp, ebx
0x7B0A9E: jz      short loc_7B0AD1
0x7B0AA0: test    ebp, ebp
0x7B0AA2: jz      short loc_7B0AC1
0x7B0AA4: lea     ecx, [ebp+4]
0x7B0AA7: push    ecx; lpAddend
0x7B0AA8: call    dword ptr ds:0A2807Ch
0x7B0AAE: test    eax, eax
0x7B0AB0: jnz     short loc_7B0AC1
0x7B0AB2: test    ebp, ebp
0x7B0AB4: jz      short loc_7B0AC1
0x7B0AB6: mov     edx, [ebp+0]
0x7B0AB9: mov     eax, [edx]
0x7B0ABB: push    1
0x7B0ABD: mov     ecx, ebp
0x7B0ABF: call    eax
0x7B0AC1: test    ebx, ebx
0x7B0AC3: mov     [edi], ebx
0x7B0AC5: jz      short loc_7B0AD1
0x7B0AC7: add     ebx, 4
0x7B0ACA: push    ebx; lpAddend
0x7B0ACB: call    dword ptr ds:0A28078h
0x7B0AD1: mov     ebx, [esi+70h]
0x7B0AD4: mov     ecx, [esi+90h]
0x7B0ADA: mov     ebp, [esi+ecx*4+0A0h]
0x7B0AE1: mov     edi, [ebx+44h]
0x7B0AE4: add     ebx, 44h ; 'D'
0x7B0AE7: cmp     edi, ebp
0x7B0AE9: jz      short loc_7B0B1B
0x7B0AEB: test    edi, edi
0x7B0AED: jz      short loc_7B0B0B
0x7B0AEF: lea     edx, [edi+4]
0x7B0AF2: push    edx; lpAddend
0x7B0AF3: call    dword ptr ds:0A2807Ch
0x7B0AF9: test    eax, eax
0x7B0AFB: jnz     short loc_7B0B0B
0x7B0AFD: test    edi, edi
0x7B0AFF: jz      short loc_7B0B0B
0x7B0B01: mov     eax, [edi]
0x7B0B03: mov     edx, [eax]
0x7B0B05: push    1
0x7B0B07: mov     ecx, edi
0x7B0B09: call    edx
0x7B0B0B: test    ebp, ebp
0x7B0B0D: mov     [ebx], ebp
0x7B0B0F: jz      short loc_7B0B1B
0x7B0B11: add     ebp, 4
0x7B0B14: push    ebp; lpAddend
0x7B0B15: call    dword ptr ds:0A28078h
0x7B0B1B: mov     edi, [esi+70h]
0x7B0B1E: cmp     dword ptr [edi+30h], 0
0x7B0B22: jnz     short loc_7B0B2C
0x7B0B24: call    sub_772DF0
0x7B0B29: mov     [edi+30h], eax
0x7B0B2C: mov     ecx, [edi+30h]
0x7B0B2F: push    0
0x7B0B31: push    0
0x7B0B33: push    7
0x7B0B35: call    sub_772CD0
0x7B0B3A: mov     edi, [esi+70h]
0x7B0B3D: cmp     dword ptr [edi+30h], 0
0x7B0B41: jnz     short loc_7B0B4B
0x7B0B43: call    sub_772DF0
0x7B0B48: mov     [edi+30h], eax
0x7B0B4B: mov     ecx, [edi+30h]
0x7B0B4E: push    0
0x7B0B50: push    0
0x7B0B52: push    0Eh
0x7B0B54: call    sub_772CD0
0x7B0B59: mov     edi, [esi+70h]
0x7B0B5C: cmp     dword ptr [edi+30h], 0
0x7B0B60: jnz     short loc_7B0B6A
0x7B0B62: call    sub_772DF0
0x7B0B67: mov     [edi+30h], eax
0x7B0B6A: mov     ecx, [edi+30h]
0x7B0B6D: push    0
0x7B0B6F: push    0
0x7B0B71: push    1Bh
0x7B0B73: call    sub_772CD0
0x7B0B78: mov     edi, [esi+70h]
0x7B0B7B: cmp     dword ptr [edi+30h], 0
0x7B0B7F: jnz     short loc_7B0B89
0x7B0B81: call    sub_772DF0
0x7B0B86: mov     [edi+30h], eax
0x7B0B89: mov     ecx, [edi+30h]
0x7B0B8C: push    0
0x7B0B8E: push    0
0x7B0B90: push    0Fh
0x7B0B92: call    sub_772CD0
0x7B0B97: mov     esi, [esi+70h]
0x7B0B9A: cmp     dword ptr [esi+30h], 0
0x7B0B9E: jnz     short loc_7B0BA8
0x7B0BA0: call    sub_772DF0
0x7B0BA5: mov     [esi+30h], eax
0x7B0BA8: mov     ecx, [esi+30h]
0x7B0BAB: push    0
0x7B0BAD: push    7
0x7B0BAF: push    0A8h ; '¨'
0x7B0BB4: call    sub_772CD0
0x7B0BB9: mov     al, 1
0x7B0BBB: mov     ecx, dword ptr [esp+28h+var_C]
0x7B0BBF: mov     large fs:0, ecx
0x7B0BC6: pop     ecx
0x7B0BC7: pop     edi
0x7B0BC8: pop     esi
0x7B0BC9: pop     ebp
0x7B0BCA: pop     ebx
0x7B0BCB: add     esp, 14h
0x7B0BCE: retn
