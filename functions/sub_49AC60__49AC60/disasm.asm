0x49AC60: push    ebx
0x49AC61: push    ebp
0x49AC62: mov     ebp, ds:0A2807Ch
0x49AC68: push    esi
0x49AC69: mov     esi, ecx
0x49AC6B: xor     ebx, ebx
0x49AC6D: cmp     [esi+34h], bl
0x49AC70: push    edi
0x49AC71: jnz     short loc_49ACA5
0x49AC73: mov     byte ptr [esi+34h], 1
0x49AC77: mov     [esi+0Ch], ebx
0x49AC7A: mov     [esi+8], ebx
0x49AC7D: mov     byte ptr [esi], 1
0x49AC80: mov     [esi+14h], ebx
0x49AC83: mov     edi, [esi+10h]
0x49AC86: cmp     edi, ebx
0x49AC88: jz      short loc_49ACA5
0x49AC8A: lea     eax, [edi+4]
0x49AC8D: push    eax; lpAddend
0x49AC8E: call    ebp ; InterlockedDecrement
0x49AC90: test    eax, eax
0x49AC92: jnz     short loc_49ACA2
0x49AC94: cmp     edi, ebx
0x49AC96: jz      short loc_49ACA2
0x49AC98: mov     edx, [edi]
0x49AC9A: mov     eax, [edx]
0x49AC9C: push    1
0x49AC9E: mov     ecx, edi
0x49ACA0: call    eax
0x49ACA2: mov     [esi+10h], ebx
0x49ACA5: mov     edi, [esi+1Ch]
0x49ACA8: cmp     edi, ebx
0x49ACAA: jz      short loc_49ACC7
0x49ACAC: lea     ecx, [edi+4]
0x49ACAF: push    ecx; lpAddend
0x49ACB0: call    ebp ; InterlockedDecrement
0x49ACB2: test    eax, eax
0x49ACB4: jnz     short loc_49ACC4
0x49ACB6: cmp     edi, ebx
0x49ACB8: jz      short loc_49ACC4
0x49ACBA: mov     edx, [edi]
0x49ACBC: mov     eax, [edx]
0x49ACBE: push    1
0x49ACC0: mov     ecx, edi
0x49ACC2: call    eax
0x49ACC4: mov     [esi+1Ch], ebx
0x49ACC7: mov     edi, [esi+20h]
0x49ACCA: cmp     edi, ebx
0x49ACCC: jz      short loc_49ACE9
0x49ACCE: lea     ecx, [edi+4]
0x49ACD1: push    ecx; lpAddend
0x49ACD2: call    ebp ; InterlockedDecrement
0x49ACD4: test    eax, eax
0x49ACD6: jnz     short loc_49ACE6
0x49ACD8: cmp     edi, ebx
0x49ACDA: jz      short loc_49ACE6
0x49ACDC: mov     edx, [edi]
0x49ACDE: mov     eax, [edx]
0x49ACE0: push    1
0x49ACE2: mov     ecx, edi
0x49ACE4: call    eax
0x49ACE6: mov     [esi+20h], ebx
0x49ACE9: fld     dword ptr ds:0A32048h
0x49ACEF: pop     edi
0x49ACF0: fst     dword ptr [esi+28h]
0x49ACF3: fstp    dword ptr [esi+2Ch]
0x49ACF6: fldz
0x49ACF8: fstp    dword ptr [esi+30h]
0x49ACFB: pop     esi
0x49ACFC: pop     ebp
0x49ACFD: pop     ebx
0x49ACFE: retn
