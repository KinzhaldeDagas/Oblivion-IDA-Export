0x663A00: mov     ecx, ds:0B333C4h
0x663A06: push    ebp
0x663A07: add     ecx, 44h ; 'D'
0x663A0A: xor     ebp, ebp
0x663A0C: call    GetExtraDataFollower
0x663A11: test    eax, eax
0x663A13: jz      short loc_663A54
0x663A15: mov     eax, [eax+0Ch]
0x663A18: test    eax, eax
0x663A1A: jz      short loc_663A54
0x663A1C: push    edi
0x663A1D: mov     edi, eax
0x663A1F: push    esi
0x663A20: mov     esi, [edi]
0x663A22: test    esi, esi
0x663A24: jz      short loc_663A4E
0x663A26: cmp     dword ptr [esi+58h], 0
0x663A2A: jz      short loc_663A47
0x663A2C: mov     ecx, esi
0x663A2E: call    sub_5E0380
0x663A33: test    eax, eax
0x663A35: jz      short loc_663A47
0x663A37: mov     ecx, esi
0x663A39: call    sub_5E0380
0x663A3E: cmp     byte ptr [eax+20h], 1
0x663A42: jnz     short loc_663A47
0x663A44: add     ebp, 1
0x663A47: mov     edi, [edi+4]
0x663A4A: test    edi, edi
0x663A4C: jnz     short loc_663A20
0x663A4E: pop     esi
0x663A4F: pop     edi
0x663A50: mov     eax, ebp
0x663A52: pop     ebp
0x663A53: retn
0x663A54: mov     eax, ebp
0x663A56: pop     ebp
0x663A57: retn
