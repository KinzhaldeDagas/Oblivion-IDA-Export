0x482670: push    edi
0x482671: mov     edi, ecx
0x482673: cmp     dword ptr [edi+24h], 0
0x482677: jz      short loc_4826EC
0x482679: mov     eax, ds:0B4310Ch
0x48267E: test    eax, eax
0x482680: push    ebx
0x482681: mov     ebx, ds:0A2807Ch
0x482687: push    esi
0x482688: jz      short loc_4826AE
0x48268A: mov     esi, eax
0x48268C: add     eax, 4
0x48268F: push    eax; lpAddend
0x482690: call    ebx ; InterlockedDecrement
0x482692: test    eax, eax
0x482694: jnz     short loc_4826A4
0x482696: test    esi, esi
0x482698: jz      short loc_4826A4
0x48269A: mov     eax, [esi]
0x48269C: mov     edx, [eax]
0x48269E: push    1
0x4826A0: mov     ecx, esi
0x4826A2: call    edx
0x4826A4: mov     dword ptr ds:0B4310Ch, 0
0x4826AE: mov     eax, [edi+24h]
0x4826B1: mov     ecx, ds:0B42F50h; this
0x4826B7: push    eax; a2
0x4826B8: call    sub_7C1EE0
0x4826BD: mov     esi, [edi+24h]
0x4826C0: test    esi, esi
0x4826C2: jz      short loc_4826E3
0x4826C4: lea     ecx, [esi+4]
0x4826C7: push    ecx; lpAddend
0x4826C8: call    ebx ; InterlockedDecrement
0x4826CA: test    eax, eax
0x4826CC: jnz     short loc_4826DC
0x4826CE: test    esi, esi
0x4826D0: jz      short loc_4826DC
0x4826D2: mov     edx, [esi]
0x4826D4: mov     eax, [edx]
0x4826D6: push    1
0x4826D8: mov     ecx, esi
0x4826DA: call    eax
0x4826DC: mov     dword ptr [edi+24h], 0
0x4826E3: pop     esi
0x4826E4: mov     byte ptr ds:0B06A28h, 1
0x4826EB: pop     ebx
0x4826EC: pop     edi
0x4826ED: retn
