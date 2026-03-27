0x4C79A0: push    ebx
0x4C79A1: push    esi
0x4C79A2: mov     esi, ecx
0x4C79A4: call    sub_57BAC0
0x4C79A9: test    al, al
0x4C79AB: jz      short loc_4C79B1
0x4C79AD: xor     bl, bl
0x4C79AF: jmp     short loc_4C79B5
0x4C79B1: mov     bl, [esp+8+arg_0]
0x4C79B5: mov     eax, [esi+1Ch]
0x4C79B8: test    al, 8
0x4C79BA: jz      short loc_4C79D6
0x4C79BC: mov     eax, [esi+24h]
0x4C79BF: cmp     dword ptr [eax], 0
0x4C79C2: jnz     short loc_4C79CF
0x4C79C4: test    bl, bl
0x4C79C6: jz      short loc_4C79CF
0x4C79C8: mov     ecx, esi; int
0x4C79CA: call    sub_4C5640
0x4C79CF: pop     esi
0x4C79D0: mov     al, 1
0x4C79D2: pop     ebx
0x4C79D3: retn    4
0x4C79D6: test    eax, 400h
0x4C79DB: jnz     short loc_4C79F7
0x4C79DD: test    al, 7
0x4C79DF: jz      short loc_4C79EE
0x4C79E1: push    0FFFFFFFFh; a2
0x4C79E3: mov     ecx, esi; this
0x4C79E5: call    TESForm_GetOverrideFile
0x4C79EA: test    eax, eax
0x4C79EC: jnz     short loc_4C79F7
0x4C79EE: mov     ecx, esi
0x4C79F0: call    sub_4C64E0
0x4C79F5: jmp     short loc_4C79C4
0x4C79F7: mov     ecx, esi
0x4C79F9: call    sub_4C64E0
0x4C79FE: mov     ecx, esi
0x4C7A00: call    sub_4C4C80
0x4C7A05: or      dword ptr [esi+1Ch], 8
0x4C7A09: test    bl, bl
0x4C7A0B: mov     [esp+8+arg_0], al
0x4C7A0F: jz      short loc_4C7A18
0x4C7A11: mov     ecx, esi; int
0x4C7A13: call    sub_4C5640
0x4C7A18: mov     al, [esp+8+arg_0]
0x4C7A1C: pop     esi
0x4C7A1D: pop     ebx
0x4C7A1E: retn    4
