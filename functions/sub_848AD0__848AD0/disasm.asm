0x848AD0: push    0FFFFFFFFh
0x848AD2: push    offset SEH_880560
0x848AD7: mov     eax, large fs:0
0x848ADD: push    eax
0x848ADE: push    ebx
0x848ADF: push    ebp
0x848AE0: push    esi
0x848AE1: push    edi
0x848AE2: mov     eax, ds:0B30AACh
0x848AE7: xor     eax, esp
0x848AE9: push    eax
0x848AEA: lea     eax, [esp+20h+var_C]
0x848AEE: mov     large fs:0, eax
0x848AF4: mov     edi, ecx
0x848AF6: mov     eax, [esp+20h+arg_C]
0x848AFA: mov     ebx, [eax+0E0h]
0x848B00: test    ebx, ebx
0x848B02: mov     esi, ds:0B45BDCh
0x848B08: jz      loc_848C24
0x848B0E: mov     ecx, [esi+24h]
0x848B11: mov     ebp, [ecx]
0x848B13: push    0
0x848B15: push    eax
0x848B16: mov     ecx, edi
0x848B18: call    sub_848FD0
0x848B1D: push    eax; a2
0x848B1E: mov     ecx, ebp; this
0x848B20: call    sub_76C910
0x848B25: mov     edx, [esp+20h+arg_C]
0x848B29: push    edx
0x848B2A: push    ebp
0x848B2B: mov     ecx, edi
0x848B2D: call    sub_848FA0
0x848B32: mov     eax, [esi+24h]
0x848B35: mov     ebp, [eax+4]
0x848B38: mov     eax, [ebx+8]
0x848B3B: test    eax, eax
0x848B3D: jz      short loc_848B42
0x848B3F: push    eax
0x848B40: jmp     short loc_848B49
0x848B42: mov     ecx, ds:0B43120h
0x848B48: push    ecx; a2
0x848B49: mov     ecx, ebp; this
0x848B4B: call    sub_76C910
0x848B50: mov     edx, [esp+20h+arg_C]
0x848B54: push    edx
0x848B55: push    ebp
0x848B56: mov     ecx, edi
0x848B58: call    sub_848FA0
0x848B5D: cmp     dword ptr [esi+30h], 0
0x848B61: mov     ebp, [ebx+5Ch]
0x848B64: jnz     short loc_848B6E
0x848B66: call    sub_772DF0
0x848B6B: mov     [esi+30h], eax
0x848B6E: mov     ecx, [esi+30h]
0x848B71: push    0
0x848B73: push    ebp
0x848B74: push    13h
0x848B76: call    sub_772CD0
0x848B7B: cmp     dword ptr [esi+30h], 0
0x848B7F: mov     ebp, [ebx+60h]
0x848B82: jnz     short loc_848B8C
0x848B84: call    sub_772DF0
0x848B89: mov     [esi+30h], eax
0x848B8C: mov     ecx, [esi+30h]
0x848B8F: push    0
0x848B91: push    ebp
0x848B92: push    14h
0x848B94: call    sub_772CD0
0x848B99: cmp     dword ptr [esi+30h], 0
0x848B9D: mov     ebp, [ebx+64h]
0x848BA0: jnz     short loc_848BAA
0x848BA2: call    sub_772DF0
0x848BA7: mov     [esi+30h], eax
0x848BAA: mov     ecx, [esi+30h]
0x848BAD: push    1
0x848BAF: push    ebp
0x848BB0: push    0ABh ; '«'
0x848BB5: call    sub_772CD0
0x848BBA: cmp     dword ptr [esi+30h], 0
0x848BBE: mov     ebx, [ebx+68h]
0x848BC1: jnz     short loc_848BCB
0x848BC3: call    sub_772DF0
0x848BC8: mov     [esi+30h], eax
0x848BCB: mov     ecx, [esi+30h]
0x848BCE: push    0
0x848BD0: push    ebx
0x848BD1: push    17h
0x848BD3: call    sub_772CD0
0x848BD8: mov     eax, [esp+20h+arg_C]
0x848BDC: mov     ecx, [esp+20h+arg_0]
0x848BE0: push    eax
0x848BE1: push    ecx
0x848BE2: mov     ecx, edi
0x848BE4: call    sub_7D1C90
0x848BE9: mov     ebx, 1
0x848BEE: add     [esi+60h], ebx
0x848BF1: mov     [esp+20h+arg_C], esi
0x848BF5: mov     eax, [edi+38h]
0x848BF8: lea     edx, [esp+20h+arg_C]
0x848BFC: push    edx
0x848BFD: push    eax
0x848BFE: lea     ecx, [edi+40h]
0x848C01: mov     [esp+28h+var_4], 0
0x848C09: call    sub_76CE40
0x848C0E: or      eax, 0FFFFFFFFh
0x848C11: add     [esi+60h], eax
0x848C14: mov     [esp+20h+var_4], eax
0x848C18: jnz     short loc_848C21
0x848C1A: mov     ecx, esi
0x848C1C: call    sub_7604D0
0x848C21: add     [edi+38h], ebx
0x848C24: mov     ecx, [esp+20h+var_C]
0x848C28: mov     large fs:0, ecx
0x848C2F: pop     ecx
0x848C30: pop     edi
0x848C31: pop     esi
0x848C32: pop     ebp
0x848C33: pop     ebx
0x848C34: add     esp, 0Ch
0x848C37: retn    10h
