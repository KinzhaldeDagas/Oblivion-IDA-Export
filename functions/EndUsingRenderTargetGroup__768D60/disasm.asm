0x768D60: sub     esp, 8
0x768D63: push    ebp
0x768D64: mov     ebp, ecx
0x768D66: mov     ecx, [ebp+87Ch]
0x768D6C: mov     eax, [ecx]
0x768D6E: mov     edx, [eax+64h]
0x768D71: push    esi
0x768D72: xor     esi, esi
0x768D74: mov     [esp+10h+var_8], esi
0x768D78: call    edx
0x768D7A: test    eax, eax
0x768D7C: jbe     loc_768E73
0x768D82: push    ebx
0x768D83: push    edi
0x768D84: jmp     short loc_768D90
0x768D86: align 10h
0x768D90: mov     ecx, [ebp+87Ch]
0x768D96: mov     eax, [ecx]
0x768D98: mov     edx, [eax+80h]
0x768D9E: push    esi
0x768D9F: call    edx
0x768DA1: mov     esi, eax
0x768DA3: test    esi, esi
0x768DA5: jz      short loc_768DD0
0x768DA7: mov     eax, [esi]
0x768DA9: mov     edx, [eax+10h]
0x768DAC: mov     ecx, esi
0x768DAE: call    edx
0x768DB0: test    eax, eax
0x768DB2: jz      short loc_768DC6
0x768DB4: cmp     eax, offset unk_B42654
0x768DB9: jz      loc_768E7B
0x768DBF: mov     eax, [eax+4]
0x768DC2: test    eax, eax
0x768DC4: jnz     short loc_768DB4
0x768DC6: xor     al, al
0x768DC8: neg     al
0x768DCA: sbb     eax, eax
0x768DCC: and     eax, esi
0x768DCE: mov     esi, eax
0x768DD0: mov     eax, [esi]
0x768DD2: mov     edx, [eax+24h]
0x768DD5: mov     ecx, esi
0x768DD7: call    edx
0x768DD9: test    al, al
0x768DDB: jz      short loc_768E51
0x768DDD: lea     edi, [esi+4]
0x768DE0: push    edi; lpAddend
0x768DE1: call    dword ptr ds:0A28078h
0x768DE7: mov     eax, [ebp+8F8h]
0x768DED: test    eax, eax
0x768DEF: jz      short loc_768E01
0x768DF1: cmp     esi, [eax+8]
0x768DF4: lea     ecx, [eax+8]
0x768DF7: mov     edx, eax
0x768DF9: mov     eax, [eax]
0x768DFB: jz      short loc_768E03
0x768DFD: test    eax, eax
0x768DFF: jnz     short loc_768DF1
0x768E01: xor     edx, edx
0x768E03: test    edx, edx
0x768E05: push    edi; lpAddend
0x768E06: setz    bl
0x768E09: call    dword ptr ds:0A2807Ch
0x768E0F: test    eax, eax
0x768E11: jnz     short loc_768E1D
0x768E13: mov     eax, [esi]
0x768E15: mov     edx, [eax]
0x768E17: push    1
0x768E19: mov     ecx, esi
0x768E1B: call    edx
0x768E1D: test    bl, bl
0x768E1F: jz      short loc_768E51
0x768E21: push    edi; lpAddend
0x768E22: mov     [esp+1Ch+var_4], esi
0x768E26: call    dword ptr ds:0A28078h
0x768E2C: lea     eax, [esp+18h+var_4]
0x768E30: push    eax
0x768E31: lea     ecx, [ebp+8F4h]
0x768E37: call    sub_7C16B0
0x768E3C: push    edi; lpAddend
0x768E3D: call    dword ptr ds:0A2807Ch
0x768E43: test    eax, eax
0x768E45: jnz     short loc_768E51
0x768E47: mov     edx, [esi]
0x768E49: mov     eax, [edx]
0x768E4B: push    1
0x768E4D: mov     ecx, esi
0x768E4F: call    eax
0x768E51: mov     ecx, [ebp+87Ch]
0x768E57: mov     esi, [esp+18h+var_8]
0x768E5B: mov     edx, [ecx]
0x768E5D: mov     eax, [edx+64h]
0x768E60: add     esi, 1
0x768E63: mov     [esp+18h+var_8], esi
0x768E67: call    eax
0x768E69: cmp     esi, eax
0x768E6B: jb      loc_768D90
0x768E71: pop     edi
0x768E72: pop     ebx
0x768E73: pop     esi
0x768E74: mov     al, 1
0x768E76: pop     ebp
0x768E77: add     esp, 8
0x768E7A: retn
0x768E7B: mov     al, 1
0x768E7D: jmp     loc_768DC8
