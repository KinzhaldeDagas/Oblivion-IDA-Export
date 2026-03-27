0x83DEE0: push    0FFFFFFFFh
0x83DEE2: push    offset SEH_882120
0x83DEE7: mov     eax, large fs:0
0x83DEED: push    eax
0x83DEEE: push    ebx
0x83DEEF: push    ebp
0x83DEF0: push    esi
0x83DEF1: push    edi
0x83DEF2: mov     eax, ds:0B30AACh
0x83DEF7: xor     eax, esp
0x83DEF9: push    eax
0x83DEFA: lea     eax, [esp+20h+var_C]
0x83DEFE: mov     large fs:0, eax
0x83DF04: mov     esi, ecx
0x83DF06: mov     ebx, [esp+20h+arg_8]
0x83DF0A: mov     eax, [ebx+10h]
0x83DF0D: mov     edi, ds:0B45834h
0x83DF13: push    eax
0x83DF14: call    sub_848C40
0x83DF19: mov     ebx, [ebx+0Ch]
0x83DF1C: push    ebx
0x83DF1D: mov     ecx, esi
0x83DF1F: call    sub_848E50
0x83DF24: mov     ecx, [esp+20h+arg_0]
0x83DF28: mov     eax, [esi]
0x83DF2A: mov     edx, [eax+0BCh]
0x83DF30: push    0
0x83DF32: push    ebx
0x83DF33: push    ecx
0x83DF34: mov     ecx, esi
0x83DF36: call    edx
0x83DF38: mov     eax, [edi+24h]
0x83DF3B: mov     ebx, [esp+20h+arg_C]
0x83DF3F: mov     ebp, [eax]
0x83DF41: mov     edx, [ebx]
0x83DF43: mov     eax, [edx+88h]
0x83DF49: push    0
0x83DF4B: mov     ecx, ebx
0x83DF4D: mov     [esp+24h+arg_8], ebp
0x83DF51: call    eax
0x83DF53: mov     ebp, [ebp+4]
0x83DF56: cmp     ebp, eax
0x83DF58: mov     [esp+20h+arg_0], eax
0x83DF5C: jz      short loc_83DF98
0x83DF5E: test    ebp, ebp
0x83DF60: jz      short loc_83DF83
0x83DF62: lea     ecx, [ebp+4]
0x83DF65: push    ecx; lpAddend
0x83DF66: call    dword ptr ds:0A2807Ch
0x83DF6C: test    eax, eax
0x83DF6E: jnz     short loc_83DF7F
0x83DF70: test    ebp, ebp
0x83DF72: jz      short loc_83DF7F
0x83DF74: mov     edx, [ebp+0]
0x83DF77: mov     eax, [edx]
0x83DF79: push    1
0x83DF7B: mov     ecx, ebp
0x83DF7D: call    eax
0x83DF7F: mov     eax, [esp+20h+arg_0]
0x83DF83: test    eax, eax
0x83DF85: mov     ecx, [esp+20h+arg_8]
0x83DF89: mov     [ecx+4], eax
0x83DF8C: jz      short loc_83DF98
0x83DF8E: add     eax, 4
0x83DF91: push    eax; lpAddend
0x83DF92: call    dword ptr ds:0A28078h
0x83DF98: mov     edx, [esp+20h+arg_8]
0x83DF9C: push    ebx
0x83DF9D: push    edx
0x83DF9E: mov     ecx, esi
0x83DFA0: call    sub_848FA0
0x83DFA5: mov     eax, [edi+24h]
0x83DFA8: mov     ebp, [eax+4]
0x83DFAB: push    0
0x83DFAD: push    ebx
0x83DFAE: mov     ecx, esi
0x83DFB0: mov     [esp+28h+arg_8], ebp
0x83DFB4: call    sub_848FD0
0x83DFB9: mov     ebp, [ebp+4]
0x83DFBC: cmp     ebp, eax
0x83DFBE: mov     [esp+20h+arg_0], eax
0x83DFC2: jz      short loc_83DFFE
0x83DFC4: test    ebp, ebp
0x83DFC6: jz      short loc_83DFE9
0x83DFC8: lea     ecx, [ebp+4]
0x83DFCB: push    ecx; lpAddend
0x83DFCC: call    dword ptr ds:0A2807Ch
0x83DFD2: test    eax, eax
0x83DFD4: jnz     short loc_83DFE5
0x83DFD6: test    ebp, ebp
0x83DFD8: jz      short loc_83DFE5
0x83DFDA: mov     edx, [ebp+0]
0x83DFDD: mov     eax, [edx]
0x83DFDF: push    1
0x83DFE1: mov     ecx, ebp
0x83DFE3: call    eax
0x83DFE5: mov     eax, [esp+20h+arg_0]
0x83DFE9: test    eax, eax
0x83DFEB: mov     ecx, [esp+20h+arg_8]
0x83DFEF: mov     [ecx+4], eax
0x83DFF2: jz      short loc_83DFFE
0x83DFF4: add     eax, 4
0x83DFF7: push    eax; lpAddend
0x83DFF8: call    dword ptr ds:0A28078h
0x83DFFE: mov     edx, [esp+20h+arg_8]
0x83E002: push    ebx
0x83E003: push    edx
0x83E004: mov     ecx, esi
0x83E006: call    sub_848FA0
0x83E00B: mov     ecx, [edi+24h]
0x83E00E: mov     ebx, [ecx+18h]
0x83E011: mov     eax, ds:0B43108h
0x83E016: mov     ebp, [ebx+4]
0x83E019: add     ebx, 4
0x83E01C: cmp     ebp, eax
0x83E01E: mov     [esp+20h+arg_8], eax
0x83E022: jz      short loc_83E059
0x83E024: test    ebp, ebp
0x83E026: jz      short loc_83E049
0x83E028: lea     edx, [ebp+4]
0x83E02B: push    edx; lpAddend
0x83E02C: call    dword ptr ds:0A2807Ch
0x83E032: test    eax, eax
0x83E034: jnz     short loc_83E045
0x83E036: test    ebp, ebp
0x83E038: jz      short loc_83E045
0x83E03A: mov     eax, [ebp+0]
0x83E03D: mov     edx, [eax]
0x83E03F: push    1
0x83E041: mov     ecx, ebp
0x83E043: call    edx
0x83E045: mov     eax, [esp+20h+arg_8]
0x83E049: test    eax, eax
0x83E04B: mov     [ebx], eax
0x83E04D: jz      short loc_83E059
0x83E04F: add     eax, 4
0x83E052: push    eax; lpAddend
0x83E053: call    dword ptr ds:0A28078h
0x83E059: mov     eax, [edi+24h]
0x83E05C: mov     ebp, [eax+1Ch]
0x83E05F: mov     eax, ds:0B4310Ch
0x83E064: mov     ebx, [ebp+4]
0x83E067: cmp     ebx, eax
0x83E069: mov     ecx, eax
0x83E06B: mov     [esp+20h+arg_8], ecx
0x83E06F: jz      short loc_83E0A6
0x83E071: test    ebx, ebx
0x83E073: jz      short loc_83E095
0x83E075: lea     ecx, [ebx+4]
0x83E078: push    ecx; lpAddend
0x83E079: call    dword ptr ds:0A2807Ch
0x83E07F: test    eax, eax
0x83E081: jnz     short loc_83E091
0x83E083: test    ebx, ebx
0x83E085: jz      short loc_83E091
0x83E087: mov     edx, [ebx]
0x83E089: mov     eax, [edx]
0x83E08B: push    1
0x83E08D: mov     ecx, ebx
0x83E08F: call    eax
0x83E091: mov     ecx, [esp+20h+arg_8]
0x83E095: test    ecx, ecx
0x83E097: mov     [ebp+4], ecx
0x83E09A: jz      short loc_83E0A6
0x83E09C: add     ecx, 4
0x83E09F: push    ecx; lpAddend
0x83E0A0: call    dword ptr ds:0A28078h
0x83E0A6: mov     ebx, 1
0x83E0AB: add     [edi+60h], ebx
0x83E0AE: mov     [esp+20h+arg_8], edi
0x83E0B2: mov     edx, [esi+38h]
0x83E0B5: lea     ecx, [esp+20h+arg_8]
0x83E0B9: push    ecx
0x83E0BA: push    edx
0x83E0BB: lea     ecx, [esi+40h]
0x83E0BE: mov     [esp+28h+var_4], 0
0x83E0C6: call    sub_76CE40
0x83E0CB: or      eax, 0FFFFFFFFh
0x83E0CE: add     [edi+60h], eax
0x83E0D1: mov     [esp+20h+var_4], eax
0x83E0D5: jnz     short loc_83E0DE
0x83E0D7: mov     ecx, edi
0x83E0D9: call    sub_7604D0
0x83E0DE: add     [esi+38h], ebx
0x83E0E1: mov     ecx, [esp+20h+var_C]
0x83E0E5: mov     large fs:0, ecx
0x83E0EC: pop     ecx
0x83E0ED: pop     edi
0x83E0EE: pop     esi
0x83E0EF: pop     ebp
0x83E0F0: pop     ebx
0x83E0F1: add     esp, 0Ch
0x83E0F4: retn    10h
