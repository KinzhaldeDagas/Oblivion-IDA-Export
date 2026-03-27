0x7C5AB0: sub     esp, 8
0x7C5AB3: push    ebx
0x7C5AB4: xor     ebx, ebx
0x7C5AB6: push    edi
0x7C5AB7: mov     edi, ecx
0x7C5AB9: mov     [esp+10h+var_4], ebx
0x7C5ABD: mov     eax, [edi+0F8h]
0x7C5AC3: test    eax, eax
0x7C5AC5: mov     [edi+104h], eax
0x7C5ACB: jnz     short loc_7C5AD3
0x7C5ACD: pop     edi
0x7C5ACE: pop     ebx
0x7C5ACF: add     esp, 8
0x7C5AD2: retn
0x7C5AD3: push    ebp
0x7C5AD4: push    esi
0x7C5AD5: mov     ecx, [eax]
0x7C5AD7: test    ecx, ecx
0x7C5AD9: mov     [edi+104h], ecx
0x7C5ADF: mov     ebp, [eax+8]
0x7C5AE2: jz      short loc_7C5B03
0x7C5AE4: test    ebp, ebp
0x7C5AE6: jz      short loc_7C5AFC
0x7C5AE8: lea     edx, [esp+18h+var_4]
0x7C5AEC: push    edx
0x7C5AED: mov     ecx, ebp
0x7C5AEF: call    sub_405AD0
0x7C5AF4: or      ebx, 1
0x7C5AF7: cmp     dword ptr [eax], 0
0x7C5AFA: jnz     short loc_7C5B03
0x7C5AFC: mov     [esp+18h+var_5], 1
0x7C5B01: jmp     short loc_7C5B08
0x7C5B03: mov     [esp+18h+var_5], 0
0x7C5B08: test    bl, 1
0x7C5B0B: jz      short loc_7C5B34
0x7C5B0D: mov     esi, [esp+18h+var_4]
0x7C5B11: and     ebx, 0FFFFFFFEh
0x7C5B14: test    esi, esi
0x7C5B16: jz      short loc_7C5B34
0x7C5B18: lea     eax, [esi+4]
0x7C5B1B: push    eax; lpAddend
0x7C5B1C: call    dword ptr ds:0A2807Ch
0x7C5B22: test    eax, eax
0x7C5B24: jnz     short loc_7C5B34
0x7C5B26: test    esi, esi
0x7C5B28: jz      short loc_7C5B34
0x7C5B2A: mov     edx, [esi]
0x7C5B2C: mov     eax, [edx]
0x7C5B2E: push    1
0x7C5B30: mov     ecx, esi
0x7C5B32: call    eax
0x7C5B34: cmp     [esp+18h+var_5], 0
0x7C5B39: jz      short loc_7C5B43
0x7C5B3B: mov     eax, [edi+104h]
0x7C5B41: jmp     short loc_7C5AD5
0x7C5B43: pop     esi
0x7C5B44: mov     eax, ebp
0x7C5B46: pop     ebp
0x7C5B47: pop     edi
0x7C5B48: pop     ebx
0x7C5B49: add     esp, 8
0x7C5B4C: retn
