0x7C7DC0: sub     esp, 8
0x7C7DC3: cmp     [esp+8+arg_0], 0
0x7C7DC8: mov     [esp+8+var_4], ecx
0x7C7DCC: jz      short loc_7C7E48
0x7C7DCE: push    ebp
0x7C7DCF: mov     ebp, [ecx+0E8h]
0x7C7DD5: test    ebp, ebp
0x7C7DD7: jz      short loc_7C7E47
0x7C7DD9: push    ebx
0x7C7DDA: push    esi
0x7C7DDB: push    edi
0x7C7DDC: lea     esp, [esp+0]
0x7C7DE0: mov     esi, [ebp+8]
0x7C7DE3: test    esi, esi
0x7C7DE5: lea     eax, [ebp+8]
0x7C7DE8: mov     ebp, [ebp+0]
0x7C7DEB: jz      short loc_7C7E2C
0x7C7DED: lea     eax, [esp+18h+var_8]
0x7C7DF1: push    eax
0x7C7DF2: mov     ecx, esi
0x7C7DF4: call    sub_405AD0
0x7C7DF9: mov     ecx, [esp+18h+arg_0]
0x7C7DFD: cmp     [eax], ecx
0x7C7DFF: mov     eax, [esp+18h+var_8]
0x7C7E03: setz    bl
0x7C7E06: test    eax, eax
0x7C7E08: jz      short loc_7C7E28
0x7C7E0A: mov     edi, eax
0x7C7E0C: add     eax, 4
0x7C7E0F: push    eax; lpAddend
0x7C7E10: call    dword ptr ds:0A2807Ch
0x7C7E16: test    eax, eax
0x7C7E18: jnz     short loc_7C7E28
0x7C7E1A: test    edi, edi
0x7C7E1C: jz      short loc_7C7E28
0x7C7E1E: mov     edx, [edi]
0x7C7E20: mov     eax, [edx]
0x7C7E22: push    1
0x7C7E24: mov     ecx, edi
0x7C7E26: call    eax
0x7C7E28: test    bl, bl
0x7C7E2A: jnz     short loc_7C7E3A
0x7C7E2C: test    ebp, ebp
0x7C7E2E: jnz     short loc_7C7DE0
0x7C7E30: pop     edi
0x7C7E31: pop     esi
0x7C7E32: pop     ebx
0x7C7E33: pop     ebp
0x7C7E34: add     esp, 8
0x7C7E37: retn    4
0x7C7E3A: mov     ecx, [esp+18h+var_4]
0x7C7E3E: push    esi
0x7C7E3F: call    sub_7C77C0
0x7C7E44: pop     edi
0x7C7E45: pop     esi
0x7C7E46: pop     ebx
0x7C7E47: pop     ebp
0x7C7E48: add     esp, 8
0x7C7E4B: retn    4
