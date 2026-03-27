0x876CF0: push    0FFFFFFFFh
0x876CF2: push    offset SEH_882120
0x876CF7: mov     eax, large fs:0
0x876CFD: push    eax
0x876CFE: push    ebx
0x876CFF: push    ebp
0x876D00: push    esi
0x876D01: push    edi
0x876D02: mov     eax, ds:0B30AACh
0x876D07: xor     eax, esp
0x876D09: push    eax
0x876D0A: lea     eax, [esp+20h+var_C]
0x876D0E: mov     large fs:0, eax
0x876D14: mov     edi, ecx
0x876D16: mov     eax, [esp+20h+arg_8]
0x876D1A: mov     ebx, [eax+0Ch]
0x876D1D: mov     esi, ds:0B4768Ch
0x876D23: push    ebx
0x876D24: call    sub_848E50
0x876D29: mov     edx, [edi]
0x876D2B: mov     eax, [esp+20h+arg_0]
0x876D2F: mov     edx, [edx+0BCh]
0x876D35: push    0
0x876D37: push    ebx
0x876D38: push    eax
0x876D39: mov     ecx, edi
0x876D3B: call    edx
0x876D3D: mov     eax, [esi+24h]
0x876D40: mov     ebp, [esp+20h+arg_C]
0x876D44: mov     ebx, [eax]
0x876D46: mov     edx, [ebp+0]
0x876D49: mov     eax, [edx+88h]
0x876D4F: push    0
0x876D51: mov     ecx, ebp
0x876D53: mov     [esp+24h+arg_8], ebx
0x876D57: call    eax
0x876D59: mov     ebx, [ebx+4]
0x876D5C: cmp     ebx, eax
0x876D5E: mov     [esp+20h+arg_0], eax
0x876D62: jz      short loc_876D9D
0x876D64: test    ebx, ebx
0x876D66: jz      short loc_876D88
0x876D68: lea     ecx, [ebx+4]
0x876D6B: push    ecx; lpAddend
0x876D6C: call    dword ptr ds:0A2807Ch
0x876D72: test    eax, eax
0x876D74: jnz     short loc_876D84
0x876D76: test    ebx, ebx
0x876D78: jz      short loc_876D84
0x876D7A: mov     edx, [ebx]
0x876D7C: mov     eax, [edx]
0x876D7E: push    1
0x876D80: mov     ecx, ebx
0x876D82: call    eax
0x876D84: mov     eax, [esp+20h+arg_0]
0x876D88: test    eax, eax
0x876D8A: mov     ecx, [esp+20h+arg_8]
0x876D8E: mov     [ecx+4], eax
0x876D91: jz      short loc_876D9D
0x876D93: add     eax, 4
0x876D96: push    eax; lpAddend
0x876D97: call    dword ptr ds:0A28078h
0x876D9D: mov     edx, [esi+24h]
0x876DA0: mov     ebx, [edx+4]
0x876DA3: push    0
0x876DA5: push    ebp
0x876DA6: mov     ecx, edi
0x876DA8: mov     [esp+28h+arg_8], ebx
0x876DAC: call    sub_848FD0
0x876DB1: mov     ebx, [ebx+4]
0x876DB4: cmp     ebx, eax
0x876DB6: mov     [esp+20h+arg_0], eax
0x876DBA: jz      short loc_876DF5
0x876DBC: test    ebx, ebx
0x876DBE: jz      short loc_876DE0
0x876DC0: lea     eax, [ebx+4]
0x876DC3: push    eax; lpAddend
0x876DC4: call    dword ptr ds:0A2807Ch
0x876DCA: test    eax, eax
0x876DCC: jnz     short loc_876DDC
0x876DCE: test    ebx, ebx
0x876DD0: jz      short loc_876DDC
0x876DD2: mov     edx, [ebx]
0x876DD4: mov     eax, [edx]
0x876DD6: push    1
0x876DD8: mov     ecx, ebx
0x876DDA: call    eax
0x876DDC: mov     eax, [esp+20h+arg_0]
0x876DE0: test    eax, eax
0x876DE2: mov     ecx, [esp+20h+arg_8]
0x876DE6: mov     [ecx+4], eax
0x876DE9: jz      short loc_876DF5
0x876DEB: add     eax, 4
0x876DEE: push    eax; lpAddend
0x876DEF: call    dword ptr ds:0A28078h
0x876DF5: mov     edx, [esi+24h]
0x876DF8: mov     eax, [edx+10h]
0x876DFB: mov     edx, [ebp+0]
0x876DFE: mov     [esp+20h+arg_8], eax
0x876E02: mov     eax, [edx+90h]
0x876E08: push    0
0x876E0A: mov     ecx, ebp
0x876E0C: call    eax
0x876E0E: mov     ecx, [esp+20h+arg_8]
0x876E12: mov     ebp, [ecx+4]
0x876E15: mov     ebx, eax
0x876E17: cmp     ebp, ebx
0x876E19: jz      short loc_876E51
0x876E1B: test    ebp, ebp
0x876E1D: jz      short loc_876E3C
0x876E1F: lea     edx, [ebp+4]
0x876E22: push    edx; lpAddend
0x876E23: call    dword ptr ds:0A2807Ch
0x876E29: test    eax, eax
0x876E2B: jnz     short loc_876E3C
0x876E2D: test    ebp, ebp
0x876E2F: jz      short loc_876E3C
0x876E31: mov     eax, [ebp+0]
0x876E34: mov     edx, [eax]
0x876E36: push    1
0x876E38: mov     ecx, ebp
0x876E3A: call    edx
0x876E3C: test    ebx, ebx
0x876E3E: mov     eax, [esp+20h+arg_8]
0x876E42: mov     [eax+4], ebx
0x876E45: jz      short loc_876E51
0x876E47: add     ebx, 4
0x876E4A: push    ebx; lpAddend
0x876E4B: call    dword ptr ds:0A28078h
0x876E51: mov     ecx, [esi+24h]
0x876E54: mov     ebp, [ecx+14h]
0x876E57: mov     eax, ds:0B43110h
0x876E5C: mov     ebx, [ebp+4]
0x876E5F: cmp     ebx, eax
0x876E61: mov     ecx, eax
0x876E63: mov     [esp+20h+arg_8], ecx
0x876E67: jz      short loc_876E9E
0x876E69: test    ebx, ebx
0x876E6B: jz      short loc_876E8D
0x876E6D: lea     edx, [ebx+4]
0x876E70: push    edx; lpAddend
0x876E71: call    dword ptr ds:0A2807Ch
0x876E77: test    eax, eax
0x876E79: jnz     short loc_876E89
0x876E7B: test    ebx, ebx
0x876E7D: jz      short loc_876E89
0x876E7F: mov     eax, [ebx]
0x876E81: mov     edx, [eax]
0x876E83: push    1
0x876E85: mov     ecx, ebx
0x876E87: call    edx
0x876E89: mov     ecx, [esp+20h+arg_8]
0x876E8D: test    ecx, ecx
0x876E8F: mov     [ebp+4], ecx
0x876E92: jz      short loc_876E9E
0x876E94: add     ecx, 4
0x876E97: push    ecx; lpAddend
0x876E98: call    dword ptr ds:0A28078h
0x876E9E: mov     ebx, 1
0x876EA3: add     [esi+60h], ebx
0x876EA6: mov     [esp+20h+arg_8], esi
0x876EAA: mov     ecx, [edi+38h]
0x876EAD: lea     eax, [esp+20h+arg_8]
0x876EB1: push    eax
0x876EB2: push    ecx
0x876EB3: lea     ecx, [edi+40h]
0x876EB6: mov     [esp+28h+var_4], 0
0x876EBE: call    sub_76CE40
0x876EC3: or      eax, 0FFFFFFFFh
0x876EC6: add     [esi+60h], eax
0x876EC9: mov     [esp+20h+var_4], eax
0x876ECD: jnz     short loc_876ED6
0x876ECF: mov     ecx, esi
0x876ED1: call    sub_7604D0
0x876ED6: add     [edi+38h], ebx
0x876ED9: mov     ecx, [esp+20h+var_C]
0x876EDD: mov     large fs:0, ecx
0x876EE4: pop     ecx
0x876EE5: pop     edi
0x876EE6: pop     esi
0x876EE7: pop     ebp
0x876EE8: pop     ebx
0x876EE9: add     esp, 0Ch
0x876EEC: retn    10h
