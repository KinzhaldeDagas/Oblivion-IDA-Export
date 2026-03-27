0x83FAC0: push    0FFFFFFFFh
0x83FAC2: push    offset SEH_882120
0x83FAC7: mov     eax, large fs:0
0x83FACD: push    eax
0x83FACE: push    ebx
0x83FACF: push    ebp
0x83FAD0: push    esi
0x83FAD1: push    edi
0x83FAD2: mov     eax, ds:0B30AACh
0x83FAD7: xor     eax, esp
0x83FAD9: push    eax
0x83FADA: lea     eax, [esp+20h+var_C]
0x83FADE: mov     large fs:0, eax
0x83FAE4: mov     esi, ecx
0x83FAE6: mov     edi, [esp+20h+arg_8]
0x83FAEA: mov     eax, [edi+10h]
0x83FAED: mov     ebx, ds:0B458A0h
0x83FAF3: push    eax
0x83FAF4: call    sub_848DA0
0x83FAF9: mov     ebp, [edi+0Ch]
0x83FAFC: push    ebp
0x83FAFD: mov     ecx, esi
0x83FAFF: call    sub_848E50
0x83FB04: mov     edi, [edi+10h]
0x83FB07: mov     ecx, [esp+20h+arg_0]
0x83FB0B: mov     eax, [esi]
0x83FB0D: mov     edx, [eax+0BCh]
0x83FB13: push    edi
0x83FB14: push    ebp
0x83FB15: push    ecx
0x83FB16: mov     ecx, esi
0x83FB18: call    edx
0x83FB1A: mov     eax, [ebx+24h]
0x83FB1D: mov     edi, [esp+20h+arg_C]
0x83FB21: mov     ebp, [eax]
0x83FB23: mov     edx, [edi]
0x83FB25: mov     eax, [edx+88h]
0x83FB2B: push    0
0x83FB2D: mov     ecx, edi
0x83FB2F: mov     [esp+24h+arg_8], ebp
0x83FB33: call    eax
0x83FB35: mov     ebp, [ebp+4]
0x83FB38: cmp     ebp, eax
0x83FB3A: mov     [esp+20h+arg_0], eax
0x83FB3E: jz      short loc_83FB7A
0x83FB40: test    ebp, ebp
0x83FB42: jz      short loc_83FB65
0x83FB44: lea     ecx, [ebp+4]
0x83FB47: push    ecx; lpAddend
0x83FB48: call    dword ptr ds:0A2807Ch
0x83FB4E: test    eax, eax
0x83FB50: jnz     short loc_83FB61
0x83FB52: test    ebp, ebp
0x83FB54: jz      short loc_83FB61
0x83FB56: mov     edx, [ebp+0]
0x83FB59: mov     eax, [edx]
0x83FB5B: push    1
0x83FB5D: mov     ecx, ebp
0x83FB5F: call    eax
0x83FB61: mov     eax, [esp+20h+arg_0]
0x83FB65: test    eax, eax
0x83FB67: mov     ecx, [esp+20h+arg_8]
0x83FB6B: mov     [ecx+4], eax
0x83FB6E: jz      short loc_83FB7A
0x83FB70: add     eax, 4
0x83FB73: push    eax; lpAddend
0x83FB74: call    dword ptr ds:0A28078h
0x83FB7A: mov     edx, [esp+20h+arg_8]
0x83FB7E: push    edi
0x83FB7F: push    edx
0x83FB80: mov     ecx, esi
0x83FB82: call    sub_848FA0
0x83FB87: mov     eax, [ebx+24h]
0x83FB8A: mov     ebp, [eax+4]
0x83FB8D: push    0
0x83FB8F: push    edi
0x83FB90: mov     ecx, esi
0x83FB92: mov     [esp+28h+arg_8], ebp
0x83FB96: call    sub_848FD0
0x83FB9B: mov     ebp, [ebp+4]
0x83FB9E: cmp     ebp, eax
0x83FBA0: mov     [esp+20h+arg_0], eax
0x83FBA4: jz      short loc_83FBE0
0x83FBA6: test    ebp, ebp
0x83FBA8: jz      short loc_83FBCB
0x83FBAA: lea     ecx, [ebp+4]
0x83FBAD: push    ecx; lpAddend
0x83FBAE: call    dword ptr ds:0A2807Ch
0x83FBB4: test    eax, eax
0x83FBB6: jnz     short loc_83FBC7
0x83FBB8: test    ebp, ebp
0x83FBBA: jz      short loc_83FBC7
0x83FBBC: mov     edx, [ebp+0]
0x83FBBF: mov     eax, [edx]
0x83FBC1: push    1
0x83FBC3: mov     ecx, ebp
0x83FBC5: call    eax
0x83FBC7: mov     eax, [esp+20h+arg_0]
0x83FBCB: test    eax, eax
0x83FBCD: mov     ecx, [esp+20h+arg_8]
0x83FBD1: mov     [ecx+4], eax
0x83FBD4: jz      short loc_83FBE0
0x83FBD6: add     eax, 4
0x83FBD9: push    eax; lpAddend
0x83FBDA: call    dword ptr ds:0A28078h
0x83FBE0: mov     edx, [esp+20h+arg_8]
0x83FBE4: push    edi
0x83FBE5: push    edx
0x83FBE6: mov     ecx, esi
0x83FBE8: call    sub_848FA0
0x83FBED: mov     eax, [ebx+24h]
0x83FBF0: mov     ebp, [eax+10h]
0x83FBF3: mov     edx, [edi]
0x83FBF5: mov     eax, [edx+90h]
0x83FBFB: push    0
0x83FBFD: mov     ecx, edi
0x83FBFF: mov     [esp+24h+arg_8], ebp
0x83FC03: call    eax
0x83FC05: mov     ebp, [ebp+4]
0x83FC08: cmp     ebp, eax
0x83FC0A: mov     [esp+20h+arg_0], eax
0x83FC0E: jz      short loc_83FC4A
0x83FC10: test    ebp, ebp
0x83FC12: jz      short loc_83FC35
0x83FC14: lea     ecx, [ebp+4]
0x83FC17: push    ecx; lpAddend
0x83FC18: call    dword ptr ds:0A2807Ch
0x83FC1E: test    eax, eax
0x83FC20: jnz     short loc_83FC31
0x83FC22: test    ebp, ebp
0x83FC24: jz      short loc_83FC31
0x83FC26: mov     edx, [ebp+0]
0x83FC29: mov     eax, [edx]
0x83FC2B: push    1
0x83FC2D: mov     ecx, ebp
0x83FC2F: call    eax
0x83FC31: mov     eax, [esp+20h+arg_0]
0x83FC35: test    eax, eax
0x83FC37: mov     ecx, [esp+20h+arg_8]
0x83FC3B: mov     [ecx+4], eax
0x83FC3E: jz      short loc_83FC4A
0x83FC40: add     eax, 4
0x83FC43: push    eax; lpAddend
0x83FC44: call    dword ptr ds:0A28078h
0x83FC4A: mov     edx, [esp+20h+arg_8]
0x83FC4E: push    edi
0x83FC4F: push    edx
0x83FC50: mov     ecx, esi
0x83FC52: call    sub_848FA0
0x83FC57: mov     ecx, [ebx+24h]
0x83FC5A: mov     edi, [ecx+18h]
0x83FC5D: mov     eax, ds:0B43108h
0x83FC62: mov     ebp, [edi+4]
0x83FC65: add     edi, 4
0x83FC68: cmp     ebp, eax
0x83FC6A: mov     [esp+20h+arg_8], eax
0x83FC6E: jz      short loc_83FCA5
0x83FC70: test    ebp, ebp
0x83FC72: jz      short loc_83FC95
0x83FC74: lea     edx, [ebp+4]
0x83FC77: push    edx; lpAddend
0x83FC78: call    dword ptr ds:0A2807Ch
0x83FC7E: test    eax, eax
0x83FC80: jnz     short loc_83FC91
0x83FC82: test    ebp, ebp
0x83FC84: jz      short loc_83FC91
0x83FC86: mov     eax, [ebp+0]
0x83FC89: mov     edx, [eax]
0x83FC8B: push    1
0x83FC8D: mov     ecx, ebp
0x83FC8F: call    edx
0x83FC91: mov     eax, [esp+20h+arg_8]
0x83FC95: test    eax, eax
0x83FC97: mov     [edi], eax
0x83FC99: jz      short loc_83FCA5
0x83FC9B: add     eax, 4
0x83FC9E: push    eax; lpAddend
0x83FC9F: call    dword ptr ds:0A28078h
0x83FCA5: mov     eax, [ebx+24h]
0x83FCA8: mov     ebp, [eax+1Ch]
0x83FCAB: mov     eax, ds:0B4310Ch
0x83FCB0: mov     edi, [ebp+4]
0x83FCB3: cmp     edi, eax
0x83FCB5: mov     ecx, eax
0x83FCB7: mov     [esp+20h+arg_8], ecx
0x83FCBB: jz      short loc_83FCF2
0x83FCBD: test    edi, edi
0x83FCBF: jz      short loc_83FCE1
0x83FCC1: lea     ecx, [edi+4]
0x83FCC4: push    ecx; lpAddend
0x83FCC5: call    dword ptr ds:0A2807Ch
0x83FCCB: test    eax, eax
0x83FCCD: jnz     short loc_83FCDD
0x83FCCF: test    edi, edi
0x83FCD1: jz      short loc_83FCDD
0x83FCD3: mov     edx, [edi]
0x83FCD5: mov     eax, [edx]
0x83FCD7: push    1
0x83FCD9: mov     ecx, edi
0x83FCDB: call    eax
0x83FCDD: mov     ecx, [esp+20h+arg_8]
0x83FCE1: test    ecx, ecx
0x83FCE3: mov     [ebp+4], ecx
0x83FCE6: jz      short loc_83FCF2
0x83FCE8: add     ecx, 4
0x83FCEB: push    ecx; lpAddend
0x83FCEC: call    dword ptr ds:0A28078h
0x83FCF2: mov     edi, 1
0x83FCF7: add     [ebx+60h], edi
0x83FCFA: mov     [esp+20h+arg_8], ebx
0x83FCFE: mov     edx, [esi+38h]
0x83FD01: lea     ecx, [esp+20h+arg_8]
0x83FD05: push    ecx
0x83FD06: push    edx
0x83FD07: lea     ecx, [esi+40h]
0x83FD0A: mov     [esp+28h+var_4], 0
0x83FD12: call    sub_76CE40
0x83FD17: or      eax, 0FFFFFFFFh
0x83FD1A: add     [ebx+60h], eax
0x83FD1D: mov     [esp+20h+var_4], eax
0x83FD21: jnz     short loc_83FD2A
0x83FD23: mov     ecx, ebx
0x83FD25: call    sub_7604D0
0x83FD2A: add     [esi+38h], edi
0x83FD2D: mov     ecx, [esp+20h+var_C]
0x83FD31: mov     large fs:0, ecx
0x83FD38: pop     ecx
0x83FD39: pop     edi
0x83FD3A: pop     esi
0x83FD3B: pop     ebp
0x83FD3C: pop     ebx
0x83FD3D: add     esp, 0Ch
0x83FD40: retn    10h
