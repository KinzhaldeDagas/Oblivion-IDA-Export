0x49CA50: sub     esp, 8
0x49CA53: push    ebx
0x49CA54: mov     ebx, ecx
0x49CA56: cmp     dword ptr [ebx+8], 0
0x49CA5A: jz      loc_49CB38
0x49CA60: mov     eax, [ebx+18h]
0x49CA63: mov     ecx, eax
0x49CA65: imul    ecx, eax
0x49CA68: push    ebp
0x49CA69: xor     ebp, ebp
0x49CA6B: test    ecx, ecx
0x49CA6D: push    esi
0x49CA6E: mov     [esp+14h+var_8], ecx
0x49CA72: jbe     loc_49CB0B
0x49CA78: push    edi
0x49CA79: lea     esp, [esp+0]
0x49CA80: mov     eax, [ebx+8]
0x49CA83: lea     edi, ds:0[ebp*4]
0x49CA8A: mov     eax, [edi+eax]
0x49CA8D: test    eax, eax
0x49CA8F: jz      short loc_49CAFF
0x49CA91: mov     ecx, [eax+1Ch]
0x49CA94: test    ecx, ecx
0x49CA96: jz      short loc_49CACE
0x49CA98: mov     edx, [ecx]
0x49CA9A: mov     edx, [edx+88h]
0x49CAA0: push    eax
0x49CAA1: lea     eax, [esp+1Ch+var_4]
0x49CAA5: push    eax
0x49CAA6: call    edx
0x49CAA8: mov     eax, dword ptr [esp+18h+var_4]
0x49CAAC: test    eax, eax
0x49CAAE: jz      short loc_49CACE
0x49CAB0: mov     esi, eax
0x49CAB2: add     eax, 4
0x49CAB5: push    eax; lpAddend
0x49CAB6: call    dword ptr ds:0A2807Ch
0x49CABC: test    eax, eax
0x49CABE: jnz     short loc_49CACE
0x49CAC0: test    esi, esi
0x49CAC2: jz      short loc_49CACE
0x49CAC4: mov     eax, [esi]
0x49CAC6: mov     edx, [eax]
0x49CAC8: push    1
0x49CACA: mov     ecx, esi
0x49CACC: call    edx
0x49CACE: mov     esi, [ebx+8]
0x49CAD1: add     esi, edi
0x49CAD3: mov     edi, [esi]
0x49CAD5: test    edi, edi
0x49CAD7: jz      short loc_49CAFB
0x49CAD9: lea     eax, [edi+4]
0x49CADC: push    eax; lpAddend
0x49CADD: call    dword ptr ds:0A2807Ch
0x49CAE3: test    eax, eax
0x49CAE5: jnz     short loc_49CAF5
0x49CAE7: test    edi, edi
0x49CAE9: jz      short loc_49CAF5
0x49CAEB: mov     edx, [edi]
0x49CAED: mov     eax, [edx]
0x49CAEF: push    1
0x49CAF1: mov     ecx, edi
0x49CAF3: call    eax
0x49CAF5: mov     dword ptr [esi], 0
0x49CAFB: mov     ecx, [esp+18h+var_8]
0x49CAFF: add     ebp, 1
0x49CB02: cmp     ebp, ecx
0x49CB04: jb      loc_49CA80
0x49CB0A: pop     edi
0x49CB0B: mov     eax, [ebx+8]
0x49CB0E: test    eax, eax
0x49CB10: jz      short loc_49CB2F
0x49CB12: mov     ecx, [eax-4]
0x49CB15: lea     esi, [eax-4]
0x49CB18: push    offset sub_7016A0; void (__thiscall *)(void *)
0x49CB1D: push    ecx; int
0x49CB1E: push    4; unsigned int
0x49CB20: push    eax; void *
0x49CB21: call    $LN21
0x49CB26: push    esi
0x49CB27: call    FormHeapFree
0x49CB2C: add     esp, 4
0x49CB2F: pop     esi
0x49CB30: mov     dword ptr [ebx+8], 0
0x49CB37: pop     ebp
0x49CB38: pop     ebx
0x49CB39: add     esp, 8
0x49CB3C: retn
