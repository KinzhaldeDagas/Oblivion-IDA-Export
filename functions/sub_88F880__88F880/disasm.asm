0x88F880: push    ebx
0x88F881: push    esi
0x88F882: mov     esi, [esp+8+arg_4]
0x88F886: test    esi, esi
0x88F888: mov     ebx, ecx
0x88F88A: jz      short loc_88F8B8
0x88F88C: mov     eax, [esi]
0x88F88E: mov     edx, [eax+4]
0x88F891: mov     ecx, esi
0x88F893: call    edx
0x88F895: test    eax, eax
0x88F897: jz      short loc_88F8AE
0x88F899: lea     esp, [esp+0]
0x88F8A0: cmp     eax, offset dword_BA7D84
0x88F8A5: jz      short loc_88F8CC
0x88F8A7: mov     eax, [eax+4]
0x88F8AA: test    eax, eax
0x88F8AC: jnz     short loc_88F8A0
0x88F8AE: xor     al, al
0x88F8B0: neg     al
0x88F8B2: sbb     eax, eax
0x88F8B4: and     eax, esi
0x88F8B6: mov     esi, eax
0x88F8B8: fld1
0x88F8BA: push    ebp
0x88F8BB: mov     ebp, [esp+0Ch+arg_0]
0x88F8BF: cmp     ebp, 6
0x88F8C2: jge     short loc_88F8D0
0x88F8C4: fldz
0x88F8C6: fstp    [esp+0Ch+arg_4]
0x88F8CA: jmp     short loc_88F8D4
0x88F8CC: mov     al, 1
0x88F8CE: jmp     short loc_88F8B0
0x88F8D0: fst     [esp+0Ch+arg_4]
0x88F8D4: test    esi, esi
0x88F8D6: fld     [esp+0Ch+arg_4]
0x88F8DA: fst     [esp+0Ch+arg_0]
0x88F8DE: jnz     short loc_88F8EB
0x88F8E0: mov     esi, [ebx+10h]
0x88F8E3: test    esi, esi
0x88F8E5: jz      loc_88F9C1
0x88F8EB: mov     eax, [esi+8]
0x88F8EE: test    eax, eax
0x88F8F0: jz      short loc_88F8FC
0x88F8F2: add     eax, 14h
0x88F8F5: jz      short loc_88F8FC
0x88F8F7: mov     eax, [eax+1Ch]
0x88F8FA: jmp     short loc_88F8FE
0x88F8FC: xor     eax, eax
0x88F8FE: mov     ecx, eax
0x88F900: and     cl, 3Fh
0x88F903: cmp     cl, 8
0x88F906: jnz     loc_88F99B
0x88F90C: shr     eax, 8
0x88F90F: and     eax, 1Fh
0x88F912: mov     ecx, eax
0x88F914: fld     dword ptr ds:0B2E660h[ecx*8]
0x88F91B: fstp    [esp+0Ch+arg_4]
0x88F91F: fld     [esp+0Ch+arg_4]
0x88F923: fcom    st(2)
0x88F925: fnstsw  ax
0x88F927: test    ah, 41h
0x88F92A: jnz     short loc_88F93A
0x88F92C: fstp    st
0x88F92E: fstp    st
0x88F930: fst     [esp+0Ch+arg_4]
0x88F934: fstp    [esp+0Ch+arg_0]
0x88F938: jmp     short loc_88F94F
0x88F93A: fstp    st(2)
0x88F93C: fld     dword ptr ds:0B2E664h[ecx*8]
0x88F943: fmul    st, st(1)
0x88F945: fstp    [esp+0Ch+arg_0]
0x88F949: fmulp   st(1), st
0x88F94B: fstp    [esp+0Ch+arg_4]
0x88F94F: and     word ptr [ebx+0Ch], 0FDFFh
0x88F955: cmp     ebp, 6
0x88F958: jge     short loc_88F9C5
0x88F95A: push    edi
0x88F95B: mov     edi, [esi+8]
0x88F95E: test    edi, edi
0x88F960: jz      short loc_88F977
0x88F962: mov     ecx, esi
0x88F964: call    sub_89F570
0x88F969: mov     ecx, edi
0x88F96B: call    sub_8A6410
0x88F970: mov     ecx, esi
0x88F972: call    sub_89F570
0x88F977: mov     ecx, ebx
0x88F979: call    sub_452A60
0x88F97E: test    eax, eax
0x88F980: pop     edi
0x88F981: jz      short loc_88F9C5
0x88F983: push    offset dword_BA7F3C
0x88F988: mov     ecx, eax
0x88F98A: call    sub_700010
0x88F98F: test    eax, eax
0x88F991: jz      short loc_88F9C5
0x88F993: and     word ptr [eax+8], 0FFF7h
0x88F999: jmp     short loc_88F9C5
0x88F99B: mov     edx, [esi]
0x88F99D: fstp    st(1)
0x88F99F: mov     eax, [edx+9Ch]
0x88F9A5: fstp    st
0x88F9A7: push    ebp
0x88F9A8: mov     ecx, esi
0x88F9AA: call    eax
0x88F9AC: test    al, al
0x88F9AE: jnz     short loc_88F9C5
0x88F9B0: cmp     ebp, 6
0x88F9B3: jge     short loc_88F9C5
0x88F9B5: fld1
0x88F9B7: fst     [esp+0Ch+arg_4]
0x88F9BB: fstp    [esp+0Ch+arg_0]
0x88F9BF: jmp     short loc_88F9C5
0x88F9C1: fstp    st(1)
0x88F9C3: fstp    st
0x88F9C5: cmp     [ebx+1Ch], ebp
0x88F9C8: pop     ebp
0x88F9C9: jz      short loc_88F9DD
0x88F9CB: mov     cl, [ebx+0Ch]
0x88F9CE: shr     cl, 6
0x88F9D1: test    cl, 1
0x88F9D4: jnz     short loc_88F9DD
0x88F9D6: mov     ecx, ebx
0x88F9D8: call    sub_88EB20
0x88F9DD: fld     [esp+8+arg_0]
0x88F9E1: mov     ecx, ebx
0x88F9E3: fstp    dword ptr [ebx+18h]
0x88F9E6: fld     [esp+8+arg_4]
0x88F9EA: fstp    dword ptr [ebx+14h]
0x88F9ED: call    sub_88F040
0x88F9F2: mov     ecx, [ebx+10h]
0x88F9F5: test    ecx, ecx
0x88F9F7: jz      short loc_88FA21
0x88F9F9: mov     eax, [ecx+8]
0x88F9FC: test    eax, eax
0x88F9FE: jz      short loc_88FA0A
0x88FA00: add     eax, 14h
0x88FA03: jz      short loc_88FA0A
0x88FA05: mov     eax, [eax+1Ch]
0x88FA08: jmp     short loc_88FA0C
0x88FA0A: xor     eax, eax
0x88FA0C: and     al, 3Fh
0x88FA0E: cmp     al, 8
0x88FA10: jnz     short loc_88FA21
0x88FA12: mov     eax, [ebx+20h]
0x88FA15: test    eax, eax
0x88FA17: jz      short loc_88FA21
0x88FA19: mov     edx, [ecx]
0x88FA1B: push    eax
0x88FA1C: mov     eax, [edx+5Ch]
0x88FA1F: call    eax
0x88FA21: pop     esi
0x88FA22: pop     ebx
0x88FA23: retn    8
