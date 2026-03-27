0x873C50: push    0FFFFFFFFh
0x873C52: push    offset SEH_882120
0x873C57: mov     eax, large fs:0
0x873C5D: push    eax
0x873C5E: push    ebx
0x873C5F: push    ebp
0x873C60: push    esi
0x873C61: push    edi
0x873C62: mov     eax, ds:0B30AACh
0x873C67: xor     eax, esp
0x873C69: push    eax
0x873C6A: lea     eax, [esp+20h+var_C]
0x873C6E: mov     large fs:0, eax
0x873C74: mov     edi, ecx
0x873C76: mov     eax, [esp+20h+arg_8]
0x873C7A: mov     ebx, [eax+0Ch]
0x873C7D: mov     esi, ds:0B4762Ch
0x873C83: push    ebx
0x873C84: call    sub_848E50
0x873C89: mov     edx, [edi]
0x873C8B: mov     eax, [esp+20h+arg_0]
0x873C8F: mov     edx, [edx+0BCh]
0x873C95: push    0
0x873C97: push    ebx
0x873C98: push    eax
0x873C99: mov     ecx, edi
0x873C9B: call    edx
0x873C9D: mov     eax, [esi+24h]
0x873CA0: mov     ebp, [esp+20h+arg_C]
0x873CA4: mov     ebx, [eax]
0x873CA6: mov     edx, [ebp+0]
0x873CA9: mov     eax, [edx+88h]
0x873CAF: push    0
0x873CB1: mov     ecx, ebp
0x873CB3: mov     [esp+24h+arg_8], ebx
0x873CB7: call    eax
0x873CB9: mov     ebx, [ebx+4]
0x873CBC: cmp     ebx, eax
0x873CBE: mov     [esp+20h+arg_0], eax
0x873CC2: jz      short loc_873CFD
0x873CC4: test    ebx, ebx
0x873CC6: jz      short loc_873CE8
0x873CC8: lea     ecx, [ebx+4]
0x873CCB: push    ecx; lpAddend
0x873CCC: call    dword ptr ds:0A2807Ch
0x873CD2: test    eax, eax
0x873CD4: jnz     short loc_873CE4
0x873CD6: test    ebx, ebx
0x873CD8: jz      short loc_873CE4
0x873CDA: mov     edx, [ebx]
0x873CDC: mov     eax, [edx]
0x873CDE: push    1
0x873CE0: mov     ecx, ebx
0x873CE2: call    eax
0x873CE4: mov     eax, [esp+20h+arg_0]
0x873CE8: test    eax, eax
0x873CEA: mov     ecx, [esp+20h+arg_8]
0x873CEE: mov     [ecx+4], eax
0x873CF1: jz      short loc_873CFD
0x873CF3: add     eax, 4
0x873CF6: push    eax; lpAddend
0x873CF7: call    dword ptr ds:0A28078h
0x873CFD: mov     edx, [esi+24h]
0x873D00: mov     ebx, [edx+4]
0x873D03: push    0
0x873D05: push    ebp
0x873D06: mov     ecx, edi
0x873D08: mov     [esp+28h+arg_8], ebx
0x873D0C: call    sub_848FD0
0x873D11: mov     ebx, [ebx+4]
0x873D14: cmp     ebx, eax
0x873D16: mov     [esp+20h+arg_0], eax
0x873D1A: jz      short loc_873D55
0x873D1C: test    ebx, ebx
0x873D1E: jz      short loc_873D40
0x873D20: lea     eax, [ebx+4]
0x873D23: push    eax; lpAddend
0x873D24: call    dword ptr ds:0A2807Ch
0x873D2A: test    eax, eax
0x873D2C: jnz     short loc_873D3C
0x873D2E: test    ebx, ebx
0x873D30: jz      short loc_873D3C
0x873D32: mov     edx, [ebx]
0x873D34: mov     eax, [edx]
0x873D36: push    1
0x873D38: mov     ecx, ebx
0x873D3A: call    eax
0x873D3C: mov     eax, [esp+20h+arg_0]
0x873D40: test    eax, eax
0x873D42: mov     ecx, [esp+20h+arg_8]
0x873D46: mov     [ecx+4], eax
0x873D49: jz      short loc_873D55
0x873D4B: add     eax, 4
0x873D4E: push    eax; lpAddend
0x873D4F: call    dword ptr ds:0A28078h
0x873D55: mov     edx, [esi+24h]
0x873D58: mov     eax, [edx+0Ch]
0x873D5B: mov     edx, [ebp+0]
0x873D5E: mov     [esp+20h+arg_8], eax
0x873D62: mov     eax, [edx+90h]
0x873D68: push    0
0x873D6A: mov     ecx, ebp
0x873D6C: call    eax
0x873D6E: mov     ecx, [esp+20h+arg_8]
0x873D72: mov     ebp, [ecx+4]
0x873D75: mov     ebx, eax
0x873D77: cmp     ebp, ebx
0x873D79: jz      short loc_873DB1
0x873D7B: test    ebp, ebp
0x873D7D: jz      short loc_873D9C
0x873D7F: lea     edx, [ebp+4]
0x873D82: push    edx; lpAddend
0x873D83: call    dword ptr ds:0A2807Ch
0x873D89: test    eax, eax
0x873D8B: jnz     short loc_873D9C
0x873D8D: test    ebp, ebp
0x873D8F: jz      short loc_873D9C
0x873D91: mov     eax, [ebp+0]
0x873D94: mov     edx, [eax]
0x873D96: push    1
0x873D98: mov     ecx, ebp
0x873D9A: call    edx
0x873D9C: test    ebx, ebx
0x873D9E: mov     eax, [esp+20h+arg_8]
0x873DA2: mov     [eax+4], ebx
0x873DA5: jz      short loc_873DB1
0x873DA7: add     ebx, 4
0x873DAA: push    ebx; lpAddend
0x873DAB: call    dword ptr ds:0A28078h
0x873DB1: mov     ecx, [esi+24h]
0x873DB4: mov     ebp, [ecx+10h]
0x873DB7: mov     eax, ds:0B43110h
0x873DBC: mov     ebx, [ebp+4]
0x873DBF: cmp     ebx, eax
0x873DC1: mov     ecx, eax
0x873DC3: mov     [esp+20h+arg_8], ecx
0x873DC7: jz      short loc_873DFE
0x873DC9: test    ebx, ebx
0x873DCB: jz      short loc_873DED
0x873DCD: lea     edx, [ebx+4]
0x873DD0: push    edx; lpAddend
0x873DD1: call    dword ptr ds:0A2807Ch
0x873DD7: test    eax, eax
0x873DD9: jnz     short loc_873DE9
0x873DDB: test    ebx, ebx
0x873DDD: jz      short loc_873DE9
0x873DDF: mov     eax, [ebx]
0x873DE1: mov     edx, [eax]
0x873DE3: push    1
0x873DE5: mov     ecx, ebx
0x873DE7: call    edx
0x873DE9: mov     ecx, [esp+20h+arg_8]
0x873DED: test    ecx, ecx
0x873DEF: mov     [ebp+4], ecx
0x873DF2: jz      short loc_873DFE
0x873DF4: add     ecx, 4
0x873DF7: push    ecx; lpAddend
0x873DF8: call    dword ptr ds:0A28078h
0x873DFE: mov     ebx, 1
0x873E03: add     [esi+60h], ebx
0x873E06: mov     [esp+20h+arg_8], esi
0x873E0A: mov     ecx, [edi+38h]
0x873E0D: lea     eax, [esp+20h+arg_8]
0x873E11: push    eax
0x873E12: push    ecx
0x873E13: lea     ecx, [edi+40h]
0x873E16: mov     [esp+28h+var_4], 0
0x873E1E: call    sub_76CE40
0x873E23: or      eax, 0FFFFFFFFh
0x873E26: add     [esi+60h], eax
0x873E29: mov     [esp+20h+var_4], eax
0x873E2D: jnz     short loc_873E36
0x873E2F: mov     ecx, esi
0x873E31: call    sub_7604D0
0x873E36: add     [edi+38h], ebx
0x873E39: mov     ecx, [esp+20h+var_C]
0x873E3D: mov     large fs:0, ecx
0x873E44: pop     ecx
0x873E45: pop     edi
0x873E46: pop     esi
0x873E47: pop     ebp
0x873E48: pop     ebx
0x873E49: add     esp, 0Ch
0x873E4C: retn    10h
