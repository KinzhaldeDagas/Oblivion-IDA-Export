0x6D1280: push    ebp
0x6D1281: mov     ebp, [ecx+30h]
0x6D1284: test    ebp, ebp
0x6D1286: jnz     short loc_6D128C
0x6D1288: xor     eax, eax
0x6D128A: pop     ebp
0x6D128B: retn
0x6D128C: mov     ecx, [ebp+0B4h]
0x6D1292: mov     eax, [ecx+1Ch]
0x6D1295: test    eax, eax
0x6D1297: jnz     short loc_6D12EB
0x6D1299: push    esi
0x6D129A: movzx   esi, word ptr [ecx+8]
0x6D129E: xor     ecx, ecx
0x6D12A0: movzx   eax, si
0x6D12A3: mov     edx, 0Ch
0x6D12A8: mul     edx
0x6D12AA: seto    cl
0x6D12AD: push    edi
0x6D12AE: neg     ecx
0x6D12B0: or      ecx, eax
0x6D12B2: push    ecx; Size
0x6D12B3: call    FormHeapAlloc
0x6D12B8: mov     ecx, [ebp+0B4h]
0x6D12BE: mov     edi, eax
0x6D12C0: movzx   eax, word ptr [ecx+2Ch]
0x6D12C4: add     esp, 4
0x6D12C7: mov     edx, eax
0x6D12C9: and     edx, 0F000h
0x6D12CF: push    edx
0x6D12D0: mov     edx, [ecx+24h]
0x6D12D3: and     eax, 3Fh
0x6D12D6: push    eax
0x6D12D7: mov     eax, [ecx+28h]
0x6D12DA: push    eax
0x6D12DB: mov     eax, [ecx+20h]
0x6D12DE: push    edx
0x6D12DF: push    eax
0x6D12E0: push    edi
0x6D12E1: push    esi
0x6D12E2: call    sub_728390
0x6D12E7: mov     eax, edi
0x6D12E9: pop     edi
0x6D12EA: pop     esi
0x6D12EB: pop     ebp
0x6D12EC: retn
