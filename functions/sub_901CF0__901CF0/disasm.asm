0x901CF0: push    ecx
0x901CF1: push    ebp
0x901CF2: mov     ebp, [esp+8+arg_4]
0x901CF6: test    ebp, ebp
0x901CF8: mov     [esp+8+var_4], ecx
0x901CFC: jle     short loc_901D5E
0x901CFE: push    ebx
0x901CFF: mov     ebx, [esp+0Ch+arg_0]
0x901D03: push    esi
0x901D04: push    edi
0x901D05: mov     edi, [esp+14h+arg_8]
0x901D09: lea     esp, [esp+0]
0x901D10: xor     eax, eax
0x901D12: mov     ax, [ebx]
0x901D15: movzx   esi, ax
0x901D18: push    edi
0x901D19: shr     esi, 8
0x901D1C: push    1
0x901D1E: and     eax, 0FFh
0x901D23: mov     [esp+1Ch+arg_4], eax
0x901D27: mov     eax, [esp+1Ch+var_4]
0x901D2B: mov     ecx, [eax+10h]
0x901D2E: mov     ecx, [ecx+esi*8]
0x901D31: mov     edx, [ecx]
0x901D33: lea     eax, [esp+1Ch+arg_4]
0x901D37: push    eax
0x901D38: call    dword ptr [edx+28h]
0x901D3B: mov     ecx, [edi+0Ch]
0x901D3E: and     ecx, 0C0FFFFFFh
0x901D44: shl     esi, 8
0x901D47: add     ecx, esi
0x901D49: or      ecx, 3F000000h
0x901D4F: mov     [edi+0Ch], ecx
0x901D52: add     ebx, 2
0x901D55: add     edi, 10h
0x901D58: dec     ebp
0x901D59: jnz     short loc_901D10
0x901D5B: pop     edi
0x901D5C: pop     esi
0x901D5D: pop     ebx
0x901D5E: pop     ebp
0x901D5F: pop     ecx
0x901D60: retn    0Ch
