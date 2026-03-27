0x6E0CF0: push    esi
0x6E0CF1: mov     esi, [esp+4+arg_0]
0x6E0CF5: push    edi
0x6E0CF6: push    esi
0x6E0CF7: mov     edi, ecx
0x6E0CF9: call    sub_6ECB70
0x6E0CFE: cmp     dword ptr [esi+0D8h], 0A000102h
0x6E0D08: jnb     short loc_6E0D1F
0x6E0D0A: mov     ax, [esi+25Ah]
0x6E0D11: shr     ax, 5
0x6E0D15: and     ax, 3Fh
0x6E0D19: mov     [edi+40h], ax
0x6E0D1D: jmp     short loc_6E0D43
0x6E0D1F: mov     eax, [esi+21Ch]
0x6E0D25: mov     edx, [eax+4]
0x6E0D28: push    1
0x6E0D2A: lea     ecx, [esp+0Ch+arg_0]
0x6E0D2E: push    ecx
0x6E0D2F: push    2
0x6E0D31: add     edi, 40h ; '@'
0x6E0D34: push    edi
0x6E0D35: push    eax
0x6E0D36: mov     [esp+1Ch+arg_0], 2
0x6E0D3E: call    edx
0x6E0D40: add     esp, 14h
0x6E0D43: cmp     dword ptr [esi+0D8h], 0A010068h
0x6E0D4D: jnb     short loc_6E0D56
0x6E0D4F: mov     ecx, esi
0x6E0D51: call    sub_712A20
0x6E0D56: pop     edi
0x6E0D57: pop     esi
0x6E0D58: retn    4
