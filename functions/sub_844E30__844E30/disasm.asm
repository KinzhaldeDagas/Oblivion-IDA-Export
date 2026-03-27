0x844E30: push    0FFFFFFFFh
0x844E32: push    offset SEH_851CA0
0x844E37: mov     eax, large fs:0
0x844E3D: push    eax
0x844E3E: push    ecx
0x844E3F: push    ebx
0x844E40: push    ebp
0x844E41: push    esi
0x844E42: push    edi
0x844E43: mov     eax, ds:0B30AACh
0x844E48: xor     eax, esp
0x844E4A: push    eax
0x844E4B: lea     eax, [esp+24h+var_C]
0x844E4F: mov     large fs:0, eax
0x844E55: mov     edi, ecx
0x844E57: mov     ecx, [esp+24h+arg_0]
0x844E5B: mov     eax, [edi]
0x844E5D: mov     ebx, ds:0B45BB4h
0x844E63: mov     edx, [eax+0BCh]
0x844E69: push    0
0x844E6B: push    0
0x844E6D: push    ecx
0x844E6E: mov     ecx, edi
0x844E70: mov     [esp+30h+var_10], ebx
0x844E74: call    edx
0x844E76: mov     esi, [esp+24h+arg_C]
0x844E7A: mov     eax, [esi+1Ch]
0x844E7D: shr     eax, 1Ch
0x844E80: movzx   eax, ax
0x844E83: push    eax
0x844E84: call    GetShadowSceneNode
0x844E89: add     esp, 4
0x844E8C: cmp     byte ptr ds:0B43074h, 0
0x844E93: jz      short loc_844ED0
0x844E95: test    dword ptr [esi+1Ch], 200000h
0x844E9C: jbe     short loc_844EAA
0x844E9E: mov     ecx, ds:0B430F4h
0x844EA4: mov     [esp+24h+arg_0], ecx
0x844EA8: jmp     short loc_844EF3
0x844EAA: test    eax, eax
0x844EAC: jz      short loc_844EFA
0x844EAE: cmp     byte ptr ds:0B430ADh, 0
0x844EB5: jz      short loc_844EC4
0x844EB7: mov     ecx, [eax+120h]; this
0x844EBD: call    BSRenderedTexture__GetInnerTexture
0x844EC2: jmp     short loc_844EEF
0x844EC4: mov     edx, ds:0B430F4h
0x844ECA: mov     [esp+24h+arg_0], edx
0x844ECE: jmp     short loc_844EF3
0x844ED0: test    eax, eax
0x844ED2: jz      short loc_844EFA
0x844ED4: cmp     byte ptr ds:0B430ADh, 0
0x844EDB: jz      short loc_844EEA
0x844EDD: mov     ecx, [eax+120h]; this
0x844EE3: call    BSRenderedTexture__GetInnerTexture
0x844EE8: jmp     short loc_844EEF
0x844EEA: mov     eax, ds:0B430F4h
0x844EEF: mov     [esp+24h+arg_0], eax
0x844EF3: cmp     [esp+24h+arg_0], 0
0x844EF8: jnz     short loc_844F04
0x844EFA: mov     ecx, ds:0B430F4h
0x844F00: mov     [esp+24h+arg_0], ecx
0x844F04: cmp     byte ptr ds:0B42CE3h, 0
0x844F0B: jnz     short loc_844F1F
0x844F0D: fld     dword ptr [esi+0A4h]
0x844F13: fmul    dword ptr ds:0B464A4h
0x844F19: fstp    dword ptr ds:0B464A4h
0x844F1F: mov     edx, [ebx+24h]
0x844F22: mov     ebx, [edx]
0x844F24: push    0
0x844F26: push    esi
0x844F27: mov     ecx, edi
0x844F29: call    sub_848FD0
0x844F2E: mov     esi, [ebx+4]
0x844F31: mov     ebp, eax
0x844F33: cmp     esi, ebp
0x844F35: jz      short loc_844F68
0x844F37: test    esi, esi
0x844F39: jz      short loc_844F57
0x844F3B: lea     eax, [esi+4]
0x844F3E: push    eax; lpAddend
0x844F3F: call    dword ptr ds:0A2807Ch
0x844F45: test    eax, eax
0x844F47: jnz     short loc_844F57
0x844F49: test    esi, esi
0x844F4B: jz      short loc_844F57
0x844F4D: mov     edx, [esi]
0x844F4F: mov     eax, [edx]
0x844F51: push    1
0x844F53: mov     ecx, esi
0x844F55: call    eax
0x844F57: test    ebp, ebp
0x844F59: mov     [ebx+4], ebp
0x844F5C: jz      short loc_844F68
0x844F5E: add     ebp, 4
0x844F61: push    ebp; lpAddend
0x844F62: call    dword ptr ds:0A28078h
0x844F68: mov     ecx, [esp+24h+arg_C]
0x844F6C: push    ecx
0x844F6D: push    ebx
0x844F6E: mov     ecx, edi
0x844F70: call    sub_848FA0
0x844F75: mov     ebx, [esp+24h+var_10]
0x844F79: mov     edx, [ebx+24h]
0x844F7C: mov     ebp, [edx+4]
0x844F7F: mov     esi, [ebp+4]
0x844F82: mov     eax, [esp+24h+arg_0]
0x844F86: cmp     esi, eax
0x844F88: jz      short loc_844FBF
0x844F8A: test    esi, esi
0x844F8C: jz      short loc_844FAE
0x844F8E: lea     eax, [esi+4]
0x844F91: push    eax; lpAddend
0x844F92: call    dword ptr ds:0A2807Ch
0x844F98: test    eax, eax
0x844F9A: jnz     short loc_844FAA
0x844F9C: test    esi, esi
0x844F9E: jz      short loc_844FAA
0x844FA0: mov     edx, [esi]
0x844FA2: mov     eax, [edx]
0x844FA4: push    1
0x844FA6: mov     ecx, esi
0x844FA8: call    eax
0x844FAA: mov     eax, [esp+24h+arg_0]
0x844FAE: test    eax, eax
0x844FB0: mov     [ebp+4], eax
0x844FB3: jz      short loc_844FBF
0x844FB5: add     eax, 4
0x844FB8: push    eax; lpAddend
0x844FB9: call    dword ptr ds:0A28078h
0x844FBF: mov     esi, 1
0x844FC4: add     [ebx+60h], esi
0x844FC7: mov     [esp+24h+arg_C], ebx
0x844FCB: mov     edx, [edi+38h]
0x844FCE: lea     ecx, [esp+24h+arg_C]
0x844FD2: push    ecx
0x844FD3: push    edx
0x844FD4: lea     ecx, [edi+40h]
0x844FD7: mov     [esp+2Ch+var_4], 0
0x844FDF: call    sub_76CE40
0x844FE4: or      eax, 0FFFFFFFFh
0x844FE7: add     [ebx+60h], eax
0x844FEA: mov     [esp+24h+var_4], eax
0x844FEE: jnz     short loc_844FF7
0x844FF0: mov     ecx, ebx
0x844FF2: call    sub_7604D0
0x844FF7: add     [edi+38h], esi
0x844FFA: mov     ecx, [esp+24h+var_C]
0x844FFE: mov     large fs:0, ecx
0x845005: pop     ecx
0x845006: pop     edi
0x845007: pop     esi
0x845008: pop     ebp
0x845009: pop     ebx
0x84500A: add     esp, 10h
0x84500D: retn    10h
