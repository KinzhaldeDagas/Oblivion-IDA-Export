0x480DE0: push    ebx
0x480DE1: mov     ebx, [esp+4+arg_4]
0x480DE5: test    byte ptr [ebx+18h], 1
0x480DE9: push    ebp
0x480DEA: mov     ebp, [esp+8+arg_0]
0x480DEE: jz      short loc_480E14
0x480DF0: test    ebp, ebp
0x480DF2: jz      short loc_480E14
0x480DF4: mov     eax, [ebp+0]
0x480DF7: mov     edx, [eax+4]
0x480DFA: mov     ecx, ebp
0x480DFC: call    edx
0x480DFE: test    eax, eax
0x480E00: jz      short loc_480E14
0x480E02: cmp     eax, offset unk_B365AC
0x480E07: jz      loc_480E8D
0x480E0D: mov     eax, [eax+4]
0x480E10: test    eax, eax
0x480E12: jnz     short loc_480E02
0x480E14: test    byte ptr [ebx+18h], 2
0x480E18: jz      short loc_480E7C
0x480E1A: mov     ecx, ebp
0x480E1C: call    sub_452A60
0x480E21: test    eax, eax
0x480E23: jz      short loc_480E40
0x480E25: mov     edx, [eax]
0x480E27: mov     ecx, eax
0x480E29: mov     eax, [edx+4]
0x480E2C: call    eax
0x480E2E: test    eax, eax
0x480E30: jz      short loc_480E40
0x480E32: cmp     eax, offset dword_B35288
0x480E37: jz      short loc_480E8D
0x480E39: mov     eax, [eax+4]
0x480E3C: test    eax, eax
0x480E3E: jnz     short loc_480E32
0x480E40: test    byte ptr [ebx+18h], 2
0x480E44: jz      short loc_480E7C
0x480E46: mov     ecx, ebp
0x480E48: call    sub_452A60
0x480E4D: test    eax, eax
0x480E4F: jz      short loc_480E7C
0x480E51: mov     ecx, ebp
0x480E53: call    sub_452A60
0x480E58: cmp     dword ptr [eax+8], 0
0x480E5C: jz      short loc_480E7C
0x480E5E: push    esi
0x480E5F: push    edi
0x480E60: mov     ecx, ebp
0x480E62: call    sub_452A60
0x480E67: mov     esi, [eax+8]
0x480E6A: mov     edi, offset aArrow; "Arrow"
0x480E6F: mov     ecx, 6
0x480E74: xor     edx, edx
0x480E76: repe cmpsb
0x480E78: pop     edi
0x480E79: pop     esi
0x480E7A: jz      short loc_480E8D
0x480E7C: mov     eax, [ebx+0Ch]
0x480E7F: cmp     eax, [ebx+14h]
0x480E82: jnz     short loc_480E87
0x480E84: mov     [ebx+10h], ebp
0x480E87: add     eax, 1
0x480E8A: mov     [ebx+0Ch], eax
0x480E8D: pop     ebp
0x480E8E: pop     ebx
0x480E8F: retn
