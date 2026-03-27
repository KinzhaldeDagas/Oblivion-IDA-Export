0x96DA10: push    ebx
0x96DA11: mov     ebx, dword ptr [esp+4+ArgList]
0x96DA15: push    esi
0x96DA16: mov     eax, ebx
0x96DA18: push    edi
0x96DA19: lea     edx, [eax+1]
0x96DA1C: lea     esp, [esp+0]
0x96DA20: mov     cl, [eax]
0x96DA22: add     eax, 1
0x96DA25: test    cl, cl
0x96DA27: jnz     short loc_96DA20
0x96DA29: sub     eax, edx
0x96DA2B: lea     edi, [eax+20h]
0x96DA2E: push    edi; Size
0x96DA2F: call    FormHeapAlloc
0x96DA34: mov     esi, eax
0x96DA36: mov     eax, [esp+10h+arg_4]
0x96DA3A: add     esp, 4
0x96DA3D: cmp     eax, 3; switch 4 cases
0x96DA40: ja      short def_96DA42
0x96DA42: jmp     ds:jpt_96DA42[eax*4]; switch jump
0x96DA49: push    ebx; jumptable 0096DA42 case 0
0x96DA4A: push    offset aSPropagate_on_; "%s = PROPAGATE_ON_SUCCESS"
0x96DA4F: push    edi; SizeInBytes
0x96DA50: push    esi; DstBuf
0x96DA51: call    sub_6C5D40
0x96DA56: add     esp, 10h
0x96DA59: pop     edi
0x96DA5A: mov     eax, esi
0x96DA5C: pop     esi
0x96DA5D: pop     ebx
0x96DA5E: retn    8
0x96DA61: push    ebx; jumptable 0096DA42 case 1
0x96DA62: push    offset aSPropagate_o_0; "%s = PROPAGATE_ON_FAILURE"
0x96DA67: push    edi; SizeInBytes
0x96DA68: push    esi; DstBuf
0x96DA69: call    sub_6C5D40
0x96DA6E: add     esp, 10h
0x96DA71: pop     edi
0x96DA72: mov     eax, esi
0x96DA74: pop     esi
0x96DA75: pop     ebx
0x96DA76: retn    8
0x96DA79: push    ebx; jumptable 0096DA42 case 2
0x96DA7A: push    offset aSPropagate_alw; "%s = PROPAGATE_ALWAYS"
0x96DA7F: push    edi; SizeInBytes
0x96DA80: push    esi; DstBuf
0x96DA81: call    sub_6C5D40
0x96DA86: add     esp, 10h
0x96DA89: pop     edi
0x96DA8A: mov     eax, esi
0x96DA8C: pop     esi
0x96DA8D: pop     ebx
0x96DA8E: retn    8
0x96DA91: push    ebx; jumptable 0096DA42 case 3
0x96DA92: push    offset aSPropagate_nev; "%s = PROPAGATE_NEVER"
0x96DA97: push    edi; SizeInBytes
0x96DA98: push    esi; DstBuf
0x96DA99: call    sub_6C5D40
0x96DA9E: add     esp, 10h
0x96DAA1: pop     edi
0x96DAA2: mov     eax, esi
0x96DAA4: pop     esi
0x96DAA5: pop     ebx
0x96DAA6: retn    8
