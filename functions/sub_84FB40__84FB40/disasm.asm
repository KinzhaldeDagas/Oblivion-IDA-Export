0x84FB40: push    0FFFFFFFFh
0x84FB42: push    offset SEH_851CA0
0x84FB47: mov     eax, large fs:0
0x84FB4D: push    eax
0x84FB4E: push    ecx
0x84FB4F: push    ebx
0x84FB50: push    ebp
0x84FB51: push    esi
0x84FB52: push    edi
0x84FB53: mov     eax, ds:0B30AACh
0x84FB58: xor     eax, esp
0x84FB5A: push    eax
0x84FB5B: lea     eax, [esp+24h+var_C]
0x84FB5F: mov     large fs:0, eax
0x84FB65: mov     ebp, ecx
0x84FB67: mov     esi, ds:0B459E0h
0x84FB6D: mov     eax, [esi+24h]
0x84FB70: mov     ebx, [esp+24h+arg_C]
0x84FB74: mov     edi, [eax]
0x84FB76: mov     edx, [ebx]
0x84FB78: mov     eax, [edx+8Ch]
0x84FB7E: push    0
0x84FB80: mov     ecx, ebx
0x84FB82: mov     [esp+28h+var_10], edi
0x84FB86: call    eax
0x84FB88: test    eax, eax
0x84FB8A: jz      short loc_84FB9E
0x84FB8C: mov     edx, [ebx]
0x84FB8E: mov     eax, [edx+8Ch]
0x84FB94: push    0
0x84FB96: mov     ecx, ebx
0x84FB98: call    eax
0x84FB9A: mov     ebx, eax
0x84FB9C: jmp     short loc_84FBB3
0x84FB9E: test    dword ptr [ebx+1Ch], 80h
0x84FBA5: mov     ebx, ds:0B430F0h
0x84FBAB: ja      short loc_84FBB3
0x84FBAD: mov     ebx, ds:0B430DCh
0x84FBB3: mov     edi, [edi+4]
0x84FBB6: cmp     edi, ebx
0x84FBB8: jz      short loc_84FBF1
0x84FBBA: test    edi, edi
0x84FBBC: jz      short loc_84FBDA
0x84FBBE: lea     ecx, [edi+4]
0x84FBC1: push    ecx; lpAddend
0x84FBC2: call    dword ptr ds:0A2807Ch
0x84FBC8: test    eax, eax
0x84FBCA: jnz     short loc_84FBDA
0x84FBCC: test    edi, edi
0x84FBCE: jz      short loc_84FBDA
0x84FBD0: mov     edx, [edi]
0x84FBD2: mov     eax, [edx]
0x84FBD4: push    1
0x84FBD6: mov     ecx, edi
0x84FBD8: call    eax
0x84FBDA: test    ebx, ebx
0x84FBDC: mov     edi, [esp+24h+var_10]
0x84FBE0: mov     [edi+4], ebx
0x84FBE3: jz      short loc_84FBF5
0x84FBE5: add     ebx, 4
0x84FBE8: push    ebx; lpAddend
0x84FBE9: call    dword ptr ds:0A28078h
0x84FBEF: jmp     short loc_84FBF5
0x84FBF1: mov     edi, [esp+24h+var_10]
0x84FBF5: test    edi, edi
0x84FBF7: jz      short loc_84FC15
0x84FBF9: cmp     byte ptr ds:0B42CDDh, 0
0x84FC00: jz      short loc_84FC15
0x84FC02: mov     ecx, [esp+24h+arg_C]
0x84FC06: mov     edx, [ecx]
0x84FC08: mov     eax, [edx+78h]
0x84FC0B: call    eax
0x84FC0D: push    eax
0x84FC0E: mov     ecx, edi
0x84FC10: call    sub_7715E0
0x84FC15: mov     edi, 1
0x84FC1A: add     [esi+60h], edi
0x84FC1D: mov     [esp+24h+arg_C], esi
0x84FC21: mov     edx, [ebp+38h]
0x84FC24: lea     ecx, [esp+24h+arg_C]
0x84FC28: push    ecx
0x84FC29: push    edx
0x84FC2A: lea     ecx, [ebp+40h]
0x84FC2D: mov     [esp+2Ch+var_4], 0
0x84FC35: call    sub_76CE40
0x84FC3A: or      eax, 0FFFFFFFFh
0x84FC3D: add     [esi+60h], eax
0x84FC40: mov     [esp+24h+var_4], eax
0x84FC44: jnz     short loc_84FC4D
0x84FC46: mov     ecx, esi
0x84FC48: call    sub_7604D0
0x84FC4D: add     [ebp+38h], edi
0x84FC50: mov     ecx, dword ptr [esp+24h+var_C]
0x84FC54: mov     large fs:0, ecx
0x84FC5B: pop     ecx
0x84FC5C: pop     edi
0x84FC5D: pop     esi
0x84FC5E: pop     ebp
0x84FC5F: pop     ebx
0x84FC60: add     esp, 10h
0x84FC63: retn    10h
