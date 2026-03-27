0x841D30: push    0FFFFFFFFh
0x841D32: push    offset SEH_882120
0x841D37: mov     eax, large fs:0
0x841D3D: push    eax
0x841D3E: push    ebx
0x841D3F: push    ebp
0x841D40: push    esi
0x841D41: push    edi
0x841D42: mov     eax, ds:0B30AACh
0x841D47: xor     eax, esp
0x841D49: push    eax
0x841D4A: lea     eax, [esp+20h+var_C]
0x841D4E: mov     large fs:0, eax
0x841D54: mov     esi, ecx
0x841D56: mov     ebx, [esp+20h+arg_8]
0x841D5A: mov     eax, [ebx+10h]
0x841D5D: mov     edi, ds:0B456DCh
0x841D63: push    eax
0x841D64: call    sub_848C40
0x841D69: mov     ebx, [ebx+0Ch]
0x841D6C: push    ebx
0x841D6D: mov     ecx, esi
0x841D6F: call    sub_848E50
0x841D74: mov     ecx, [esp+20h+arg_0]
0x841D78: mov     eax, [esi]
0x841D7A: mov     edx, [eax+0BCh]
0x841D80: push    0
0x841D82: push    ebx
0x841D83: push    ecx
0x841D84: mov     ecx, esi
0x841D86: call    edx
0x841D88: mov     eax, [edi+24h]
0x841D8B: mov     ebx, [esp+20h+arg_C]
0x841D8F: mov     ebp, [eax]
0x841D91: mov     edx, [ebx]
0x841D93: mov     eax, [edx+88h]
0x841D99: push    0
0x841D9B: mov     ecx, ebx
0x841D9D: mov     [esp+24h+arg_8], ebp
0x841DA1: call    eax
0x841DA3: mov     ebp, [ebp+4]
0x841DA6: cmp     ebp, eax
0x841DA8: mov     [esp+20h+arg_0], eax
0x841DAC: jz      short loc_841DE8
0x841DAE: test    ebp, ebp
0x841DB0: jz      short loc_841DD3
0x841DB2: lea     ecx, [ebp+4]
0x841DB5: push    ecx; lpAddend
0x841DB6: call    dword ptr ds:0A2807Ch
0x841DBC: test    eax, eax
0x841DBE: jnz     short loc_841DCF
0x841DC0: test    ebp, ebp
0x841DC2: jz      short loc_841DCF
0x841DC4: mov     edx, [ebp+0]
0x841DC7: mov     eax, [edx]
0x841DC9: push    1
0x841DCB: mov     ecx, ebp
0x841DCD: call    eax
0x841DCF: mov     eax, [esp+20h+arg_0]
0x841DD3: test    eax, eax
0x841DD5: mov     ecx, [esp+20h+arg_8]
0x841DD9: mov     [ecx+4], eax
0x841DDC: jz      short loc_841DE8
0x841DDE: add     eax, 4
0x841DE1: push    eax; lpAddend
0x841DE2: call    dword ptr ds:0A28078h
0x841DE8: mov     edx, [esp+20h+arg_8]
0x841DEC: push    ebx
0x841DED: push    edx
0x841DEE: mov     ecx, esi
0x841DF0: call    sub_848FA0
0x841DF5: mov     eax, [edi+24h]
0x841DF8: mov     ebp, [eax+4]
0x841DFB: push    0
0x841DFD: push    ebx
0x841DFE: mov     ecx, esi
0x841E00: mov     [esp+28h+arg_8], ebp
0x841E04: call    sub_848FD0
0x841E09: mov     ebp, [ebp+4]
0x841E0C: cmp     ebp, eax
0x841E0E: mov     [esp+20h+arg_0], eax
0x841E12: jz      short loc_841E4E
0x841E14: test    ebp, ebp
0x841E16: jz      short loc_841E39
0x841E18: lea     ecx, [ebp+4]
0x841E1B: push    ecx; lpAddend
0x841E1C: call    dword ptr ds:0A2807Ch
0x841E22: test    eax, eax
0x841E24: jnz     short loc_841E35
0x841E26: test    ebp, ebp
0x841E28: jz      short loc_841E35
0x841E2A: mov     edx, [ebp+0]
0x841E2D: mov     eax, [edx]
0x841E2F: push    1
0x841E31: mov     ecx, ebp
0x841E33: call    eax
0x841E35: mov     eax, [esp+20h+arg_0]
0x841E39: test    eax, eax
0x841E3B: mov     ecx, [esp+20h+arg_8]
0x841E3F: mov     [ecx+4], eax
0x841E42: jz      short loc_841E4E
0x841E44: add     eax, 4
0x841E47: push    eax; lpAddend
0x841E48: call    dword ptr ds:0A28078h
0x841E4E: mov     edx, [esp+20h+arg_8]
0x841E52: push    ebx
0x841E53: push    edx
0x841E54: mov     ecx, esi
0x841E56: call    sub_848FA0
0x841E5B: mov     ebx, 1
0x841E60: add     [edi+60h], ebx
0x841E63: mov     [esp+20h+arg_8], edi
0x841E67: mov     ecx, [esi+38h]
0x841E6A: lea     eax, [esp+20h+arg_8]
0x841E6E: push    eax
0x841E6F: push    ecx
0x841E70: lea     ecx, [esi+40h]
0x841E73: mov     [esp+28h+var_4], 0
0x841E7B: call    sub_76CE40
0x841E80: or      eax, 0FFFFFFFFh
0x841E83: add     [edi+60h], eax
0x841E86: mov     [esp+20h+var_4], eax
0x841E8A: jnz     short loc_841E93
0x841E8C: mov     ecx, edi
0x841E8E: call    sub_7604D0
0x841E93: add     [esi+38h], ebx
0x841E96: mov     ecx, [esp+20h+var_C]
0x841E9A: mov     large fs:0, ecx
0x841EA1: pop     ecx
0x841EA2: pop     edi
0x841EA3: pop     esi
0x841EA4: pop     ebp
0x841EA5: pop     ebx
0x841EA6: add     esp, 0Ch
0x841EA9: retn    10h
