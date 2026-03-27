0x49D1A0: push    ecx
0x49D1A1: push    ebx
0x49D1A2: push    esi
0x49D1A3: mov     esi, ecx
0x49D1A5: xor     ebx, ebx
0x49D1A7: cmp     [esi+34h], bl
0x49D1AA: jz      loc_49D298
0x49D1B0: mov     eax, [esi+0Ch]
0x49D1B3: push    ebp
0x49D1B4: push    edi
0x49D1B5: push    eax
0x49D1B6: mov     [esi+34h], bl
0x49D1B9: call    FormHeapFree
0x49D1BE: add     esp, 4
0x49D1C1: mov     ecx, esi
0x49D1C3: call    sub_49CA50
0x49D1C8: mov     eax, [esi+4]
0x49D1CB: cmp     eax, ebx
0x49D1CD: mov     ebp, ds:0A2807Ch
0x49D1D3: jz      short loc_49D230
0x49D1D5: mov     ecx, [eax+1Ch]
0x49D1D8: cmp     ecx, ebx
0x49D1DA: jz      short loc_49D20E
0x49D1DC: mov     edx, [ecx]
0x49D1DE: mov     edx, [edx+88h]
0x49D1E4: push    eax
0x49D1E5: lea     eax, [esp+18h+var_4]
0x49D1E9: push    eax
0x49D1EA: call    edx
0x49D1EC: mov     eax, dword ptr [esp+14h+var_4]
0x49D1F0: cmp     eax, ebx
0x49D1F2: jz      short loc_49D20E
0x49D1F4: mov     edi, eax
0x49D1F6: add     eax, 4
0x49D1F9: push    eax; lpAddend
0x49D1FA: call    ebp ; InterlockedDecrement
0x49D1FC: test    eax, eax
0x49D1FE: jnz     short loc_49D20E
0x49D200: cmp     edi, ebx
0x49D202: jz      short loc_49D20E
0x49D204: mov     eax, [edi]
0x49D206: mov     edx, [eax]
0x49D208: push    1
0x49D20A: mov     ecx, edi
0x49D20C: call    edx
0x49D20E: mov     edi, [esi+4]
0x49D211: cmp     edi, ebx
0x49D213: jz      short loc_49D230
0x49D215: lea     eax, [edi+4]
0x49D218: push    eax; lpAddend
0x49D219: call    ebp ; InterlockedDecrement
0x49D21B: test    eax, eax
0x49D21D: jnz     short loc_49D22D
0x49D21F: cmp     edi, ebx
0x49D221: jz      short loc_49D22D
0x49D223: mov     edx, [edi]
0x49D225: mov     eax, [edx]
0x49D227: push    1
0x49D229: mov     ecx, edi
0x49D22B: call    eax
0x49D22D: mov     [esi+4], ebx
0x49D230: mov     edi, [esi+10h]
0x49D233: cmp     edi, ebx
0x49D235: jz      short loc_49D252
0x49D237: lea     ecx, [edi+4]
0x49D23A: push    ecx; lpAddend
0x49D23B: call    ebp ; InterlockedDecrement
0x49D23D: test    eax, eax
0x49D23F: jnz     short loc_49D24F
0x49D241: cmp     edi, ebx
0x49D243: jz      short loc_49D24F
0x49D245: mov     edx, [edi]
0x49D247: mov     eax, [edx]
0x49D249: push    1
0x49D24B: mov     ecx, edi
0x49D24D: call    eax
0x49D24F: mov     [esi+10h], ebx
0x49D252: mov     edi, [esi+1Ch]
0x49D255: cmp     edi, ebx
0x49D257: jz      short loc_49D274
0x49D259: lea     ecx, [edi+4]
0x49D25C: push    ecx; lpAddend
0x49D25D: call    ebp ; InterlockedDecrement
0x49D25F: test    eax, eax
0x49D261: jnz     short loc_49D271
0x49D263: cmp     edi, ebx
0x49D265: jz      short loc_49D271
0x49D267: mov     edx, [edi]
0x49D269: mov     eax, [edx]
0x49D26B: push    1
0x49D26D: mov     ecx, edi
0x49D26F: call    eax
0x49D271: mov     [esi+1Ch], ebx
0x49D274: mov     edi, [esi+24h]
0x49D277: cmp     edi, ebx
0x49D279: jz      short loc_49D296
0x49D27B: lea     ecx, [edi+4]
0x49D27E: push    ecx; lpAddend
0x49D27F: call    ebp ; InterlockedDecrement
0x49D281: test    eax, eax
0x49D283: jnz     short loc_49D293
0x49D285: cmp     edi, ebx
0x49D287: jz      short loc_49D293
0x49D289: mov     edx, [edi]
0x49D28B: mov     eax, [edx]
0x49D28D: push    1
0x49D28F: mov     ecx, edi
0x49D291: call    eax
0x49D293: mov     [esi+24h], ebx
0x49D296: pop     edi
0x49D297: pop     ebp
0x49D298: pop     esi
0x49D299: pop     ebx
0x49D29A: pop     ecx
0x49D29B: retn
