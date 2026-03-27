0x8C5580: push    ebp
0x8C5581: mov     ebp, esp
0x8C5583: and     esp, 0FFFFFFF0h
0x8C5586: push    0FFFFFFFFh
0x8C5588: push    offset SEH_8C5580
0x8C558D: mov     eax, large fs:0
0x8C5593: push    eax
0x8C5594: sub     esp, 0Ch
0x8C5597: push    esi
0x8C5598: push    edi
0x8C5599: mov     eax, ds:0B30AACh
0x8C559E: xor     eax, esp
0x8C55A0: push    eax
0x8C55A1: lea     eax, [esp+24h+var_C]
0x8C55A5: mov     large fs:0, eax
0x8C55AB: mov     esi, ecx
0x8C55AD: mov     dword ptr [esi], 0
0x8C55B3: mov     [esp+24h+var_14], esi
0x8C55B7: mov     dword ptr [esi+4], 0
0x8C55BE: fldz
0x8C55C0: fstp    dword ptr [esi+8]
0x8C55C3: mov     [esp+24h+var_4], 0
0x8C55CB: mov     edi, [esi+4]
0x8C55CE: test    edi, edi
0x8C55D0: jz      short loc_8C55F5
0x8C55D2: lea     eax, [edi+4]
0x8C55D5: push    eax; lpAddend
0x8C55D6: call    dword ptr ds:0A2807Ch
0x8C55DC: test    eax, eax
0x8C55DE: jnz     short loc_8C55EE
0x8C55E0: test    edi, edi
0x8C55E2: jz      short loc_8C55EE
0x8C55E4: mov     edx, [edi]
0x8C55E6: mov     eax, [edx]
0x8C55E8: push    1
0x8C55EA: mov     ecx, edi
0x8C55EC: call    eax
0x8C55EE: mov     dword ptr [esi+4], 0
0x8C55F5: movss   xmm0, dword ptr ds:0A2F948h
0x8C55FD: shufps  xmm0, xmm0, 0
0x8C5601: movaps  xmmword ptr [esi+10h], xmm0
0x8C5605: mov     eax, esi
0x8C5607: mov     ecx, dword ptr [esp+24h+var_C]
0x8C560B: mov     large fs:0, ecx
0x8C5612: pop     ecx
0x8C5613: pop     edi
0x8C5614: pop     esi
0x8C5615: mov     esp, ebp
0x8C5617: pop     ebp
0x8C5618: retn
