0x497370: push    esi
0x497371: push    edi
0x497372: mov     edi, [esp+8+arg_0]
0x497376: test    edi, edi
0x497378: mov     esi, ecx
0x49737A: jz      short loc_4973C3
0x49737C: mov     eax, [esi+4]
0x49737F: push    eax
0x497380: call    FormHeapFree
0x497385: mov     al, [edi]
0x497387: mov     [esi], al
0x497389: movzx   eax, al
0x49738C: xor     ecx, ecx
0x49738E: mov     edx, 1Ch
0x497393: mul     edx
0x497395: seto    cl
0x497398: neg     ecx
0x49739A: or      ecx, eax
0x49739C: push    ecx; Size
0x49739D: call    FormHeapAlloc
0x4973A2: movzx   ecx, byte ptr [esi]
0x4973A5: lea     edx, ds:0[ecx*8]
0x4973AC: sub     edx, ecx
0x4973AE: add     edx, edx
0x4973B0: add     edx, edx
0x4973B2: mov     [esi+4], eax
0x4973B5: mov     ecx, [edi+4]
0x4973B8: push    edx; Size
0x4973B9: push    ecx; Src
0x4973BA: push    eax; Dst
0x4973BB: call    _memcpy
0x4973C0: add     esp, 14h
0x4973C3: pop     edi
0x4973C4: pop     esi
0x4973C5: retn    4
