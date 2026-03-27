0x6FA080: push    ebx
0x6FA081: push    esi
0x6FA082: push    edi
0x6FA083: mov     edi, [esp+0Ch+arg_0]
0x6FA087: mov     eax, edi
0x6FA089: lea     edx, [eax+1]
0x6FA08C: xor     ebx, ebx
0x6FA08E: mov     edi, edi
0x6FA090: mov     cl, [eax]
0x6FA092: add     eax, 1
0x6FA095: cmp     cl, bl
0x6FA097: jnz     short loc_6FA090
0x6FA099: mov     esi, [esp+0Ch+arg_8]
0x6FA09D: sub     eax, edx
0x6FA09F: mov     [esi+2], al
0x6FA0A2: movsx   eax, byte ptr [edi]
0x6FA0A5: push    eax; C
0x6FA0A6: call    _tolower
0x6FA0AB: movzx   ecx, byte ptr [esi+2]
0x6FA0AF: mov     [esi+3], al
0x6FA0B2: movsx   edx, byte ptr [ecx+edi-1]
0x6FA0B7: push    edx; C
0x6FA0B8: call    _tolower
0x6FA0BD: mov     [esi], al
0x6FA0BF: mov     al, [esi+2]
0x6FA0C2: add     esp, 8
0x6FA0C5: cmp     al, 2
0x6FA0C7: jbe     short loc_6FA0DC
0x6FA0C9: movzx   eax, al
0x6FA0CC: movsx   ecx, byte ptr [eax+edi-2]
0x6FA0D1: push    ecx; C
0x6FA0D2: call    _tolower
0x6FA0D7: add     esp, 4
0x6FA0DA: jmp     short loc_6FA0DE
0x6FA0DC: xor     eax, eax
0x6FA0DE: mov     [esi+1], al
0x6FA0E1: movzx   eax, byte ptr [esi+2]
0x6FA0E5: cmp     al, 3
0x6FA0E7: mov     [esi+4], ebx
0x6FA0EA: jbe     short loc_6FA0FE
0x6FA0EC: sub     al, 3
0x6FA0EE: add     edi, 1
0x6FA0F1: push    eax
0x6FA0F2: push    edi
0x6FA0F3: call    sub_6FA040
0x6FA0F8: add     esp, 8
0x6FA0FB: mov     [esi+4], eax
0x6FA0FE: mov     edx, [esp+0Ch+Str2]
0x6FA102: cmp     edx, ebx
0x6FA104: jz      short loc_6FA178
0x6FA106: mov     eax, edx
0x6FA108: lea     edi, [eax+1]
0x6FA10B: jmp     short loc_6FA110
0x6FA10D: align 10h
0x6FA110: mov     cl, [eax]
0x6FA112: add     eax, 1
0x6FA115: cmp     cl, bl
0x6FA117: jnz     short loc_6FA110
0x6FA119: sub     eax, edi
0x6FA11B: mov     byte ptr [esp+0Ch+arg_0], al
0x6FA11F: mov     eax, [esp+0Ch+arg_0]
0x6FA123: push    ebp
0x6FA124: push    eax
0x6FA125: push    edx
0x6FA126: call    sub_6FA040
0x6FA12B: add     [esi+4], eax
0x6FA12E: add     esp, 8
0x6FA131: mov     ebp, offset byte_B25374
0x6FA136: xor     edi, edi
0x6FA138: mov     ecx, [esp+10h+Str2]
0x6FA13C: push    ecx; Str2
0x6FA13D: push    ebp; Str1
0x6FA13E: call    __strcmp
0x6FA143: add     esp, 8
0x6FA146: test    eax, eax
0x6FA148: jz      short loc_6FA15D
0x6FA14A: add     edi, 0Ah
0x6FA14D: add     ebx, 1
0x6FA150: add     ebp, 0Ah
0x6FA153: cmp     edi, 32h ; '2'
0x6FA156: jb      short loc_6FA138
0x6FA158: pop     ebp
0x6FA159: pop     edi
0x6FA15A: pop     esi
0x6FA15B: pop     ebx
0x6FA15C: retn
0x6FA15D: mov     dl, bl
0x6FA15F: mov     al, bl
0x6FA161: and     dl, 0FCh
0x6FA164: and     al, 0FEh
0x6FA166: shl     dl, 5
0x6FA169: add     [esi+3], dl
0x6FA16C: shl     al, 6
0x6FA16F: add     [esi], al
0x6FA171: shl     bl, 7
0x6FA174: add     [esi+1], bl
0x6FA177: pop     ebp
0x6FA178: pop     edi
0x6FA179: pop     esi
0x6FA17A: pop     ebx
0x6FA17B: retn
