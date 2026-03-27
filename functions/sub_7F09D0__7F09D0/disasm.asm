0x7F09D0: push    0FFFFFFFFh
0x7F09D2: push    offset SEH_7B09A0
0x7F09D7: mov     eax, large fs:0
0x7F09DD: push    eax
0x7F09DE: sub     esp, 8
0x7F09E1: push    ebx
0x7F09E2: push    ebp
0x7F09E3: push    esi
0x7F09E4: push    edi
0x7F09E5: mov     eax, ds:0B30AACh
0x7F09EA: xor     eax, esp
0x7F09EC: push    eax
0x7F09ED: lea     eax, [esp+28h+var_C]
0x7F09F1: mov     large fs:0, eax
0x7F09F7: mov     esi, ecx
0x7F09F9: lea     eax, [esp+28h+var_10]
0x7F09FD: push    eax
0x7F09FE: call    sub_7606A0
0x7F0A03: add     esp, 4
0x7F0A06: mov     edi, eax
0x7F0A08: mov     ecx, [esi+394h]
0x7F0A0E: cmp     ecx, [edi]
0x7F0A10: mov     [esp+28h+var_4], 0
0x7F0A18: jz      short loc_7F0A39
0x7F0A1A: test    ecx, ecx
0x7F0A1C: jz      short loc_7F0A29
0x7F0A1E: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7F0A22: jnz     short loc_7F0A29
0x7F0A24: call    sub_7604D0
0x7F0A29: mov     eax, [edi]
0x7F0A2B: test    eax, eax
0x7F0A2D: mov     [esi+394h], eax
0x7F0A33: jz      short loc_7F0A39
0x7F0A35: add     dword ptr [eax+60h], 1
0x7F0A39: mov     eax, [esp+28h+var_10]
0x7F0A3D: test    eax, eax
0x7F0A3F: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7F0A47: jz      short loc_7F0A5C
0x7F0A49: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7F0A4D: mov     ecx, eax
0x7F0A4F: add     eax, 60h ; '`'
0x7F0A52: cmp     dword ptr [eax], 0
0x7F0A55: jnz     short loc_7F0A5C
0x7F0A57: call    sub_7604D0
0x7F0A5C: lea     ecx, [esp+28h+a3]
0x7F0A60: push    ecx
0x7F0A61: call    sub_772630
0x7F0A66: mov     edx, [esp+2Ch+a3]
0x7F0A6A: push    2
0x7F0A6C: push    1
0x7F0A6E: push    0
0x7F0A70: push    edx
0x7F0A71: mov     [esp+3Ch+var_4], 1
0x7F0A79: call    sub_801110
0x7F0A7E: mov     ecx, [esi+394h]; this
0x7F0A84: mov     eax, [esp+3Ch+a3]
0x7F0A88: mov     edx, [ecx+14h]
0x7F0A8B: add     esp, 14h
0x7F0A8E: push    eax; a3
0x7F0A8F: push    edx; a2
0x7F0A90: call    sub_760010
0x7F0A95: mov     ebp, [esi+394h]
0x7F0A9B: mov     ebx, [esi+37Ch]
0x7F0AA1: mov     edi, [ebp+58h]
0x7F0AA4: cmp     edi, ebx
0x7F0AA6: jz      short loc_7F0AD9
0x7F0AA8: test    edi, edi
0x7F0AAA: jz      short loc_7F0AC8
0x7F0AAC: lea     eax, [edi+4]
0x7F0AAF: push    eax; lpAddend
0x7F0AB0: call    dword ptr ds:0A2807Ch
0x7F0AB6: test    eax, eax
0x7F0AB8: jnz     short loc_7F0AC8
0x7F0ABA: test    edi, edi
0x7F0ABC: jz      short loc_7F0AC8
0x7F0ABE: mov     edx, [edi]
0x7F0AC0: mov     eax, [edx]
0x7F0AC2: push    1
0x7F0AC4: mov     ecx, edi
0x7F0AC6: call    eax
0x7F0AC8: test    ebx, ebx
0x7F0ACA: mov     [ebp+58h], ebx
0x7F0ACD: jz      short loc_7F0AD9
0x7F0ACF: add     ebx, 4
0x7F0AD2: push    ebx; lpAddend
0x7F0AD3: call    dword ptr ds:0A28078h
0x7F0AD9: mov     ebp, [esi+394h]
0x7F0ADF: mov     ebx, [esi+38Ch]
0x7F0AE5: mov     edi, [ebp+44h]
0x7F0AE8: cmp     edi, ebx
0x7F0AEA: jz      short loc_7F0B1D
0x7F0AEC: test    edi, edi
0x7F0AEE: jz      short loc_7F0B0C
0x7F0AF0: lea     ecx, [edi+4]
0x7F0AF3: push    ecx; lpAddend
0x7F0AF4: call    dword ptr ds:0A2807Ch
0x7F0AFA: test    eax, eax
0x7F0AFC: jnz     short loc_7F0B0C
0x7F0AFE: test    edi, edi
0x7F0B00: jz      short loc_7F0B0C
0x7F0B02: mov     edx, [edi]
0x7F0B04: mov     eax, [edx]
0x7F0B06: push    1
0x7F0B08: mov     ecx, edi
0x7F0B0A: call    eax
0x7F0B0C: test    ebx, ebx
0x7F0B0E: mov     [ebp+44h], ebx
0x7F0B11: jz      short loc_7F0B1D
0x7F0B13: add     ebx, 4
0x7F0B16: push    ebx; lpAddend
0x7F0B17: call    dword ptr ds:0A28078h
0x7F0B1D: mov     edi, [esi+394h]
0x7F0B23: cmp     dword ptr [edi+30h], 0
0x7F0B27: jnz     short loc_7F0B31
0x7F0B29: call    sub_772DF0
0x7F0B2E: mov     [edi+30h], eax
0x7F0B31: mov     ecx, [edi+30h]
0x7F0B34: push    0
0x7F0B36: push    1
0x7F0B38: push    7
0x7F0B3A: call    sub_772CD0
0x7F0B3F: mov     edi, [esi+394h]
0x7F0B45: cmp     dword ptr [edi+30h], 0
0x7F0B49: jnz     short loc_7F0B53
0x7F0B4B: call    sub_772DF0
0x7F0B50: mov     [edi+30h], eax
0x7F0B53: mov     ecx, [edi+30h]
0x7F0B56: push    0
0x7F0B58: push    4
0x7F0B5A: push    17h
0x7F0B5C: call    sub_772CD0
0x7F0B61: mov     esi, [esi+394h]
0x7F0B67: cmp     dword ptr [esi+30h], 0
0x7F0B6B: jnz     short loc_7F0B75
0x7F0B6D: call    sub_772DF0
0x7F0B72: mov     [esi+30h], eax
0x7F0B75: mov     ecx, [esi+30h]
0x7F0B78: push    0
0x7F0B7A: push    1
0x7F0B7C: push    0Eh
0x7F0B7E: call    sub_772CD0
0x7F0B83: mov     eax, [esp+28h+a3]
0x7F0B87: test    eax, eax
0x7F0B89: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7F0B91: jz      short loc_7F0BA6
0x7F0B93: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7F0B97: mov     ecx, eax
0x7F0B99: add     eax, 5Ch ; '\'
0x7F0B9C: cmp     dword ptr [eax], 0
0x7F0B9F: jnz     short loc_7F0BA6
0x7F0BA1: call    sub_772560
0x7F0BA6: mov     ecx, [esp+28h+var_C]
0x7F0BAA: mov     large fs:0, ecx
0x7F0BB1: pop     ecx
0x7F0BB2: pop     edi
0x7F0BB3: pop     esi
0x7F0BB4: pop     ebp
0x7F0BB5: pop     ebx
0x7F0BB6: add     esp, 14h
0x7F0BB9: retn
