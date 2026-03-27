0x481890: push    edi
0x481891: mov     edi, [esp+4+arg_0]
0x481895: xor     cl, cl
0x481897: test    edi, edi
0x481899: jz      short loc_481915
0x48189B: push    ebx
0x48189C: mov     ebx, [esp+8+arg_10]
0x4818A0: test    ebx, ebx
0x4818A2: jz      short loc_481919
0x4818A4: fldz
0x4818A6: fcomp   [esp+8+arg_C]
0x4818AA: fnstsw  ax
0x4818AC: test    ah, 44h
0x4818AF: jnp     short loc_481919
0x4818B1: cmp     [esp+8+arg_14], cl
0x4818B5: jz      short loc_4818F6
0x4818B7: push    esi
0x4818B8: mov     esi, [edi+14h]
0x4818BB: test    esi, esi
0x4818BD: jz      short loc_4818E2
0x4818BF: lea     eax, [esi+4]
0x4818C2: push    eax; lpAddend
0x4818C3: call    dword ptr ds:0A2807Ch
0x4818C9: test    eax, eax
0x4818CB: jnz     short loc_4818DB
0x4818CD: test    esi, esi
0x4818CF: jz      short loc_4818DB
0x4818D1: mov     edx, [esi]
0x4818D3: mov     eax, [edx]
0x4818D5: push    1
0x4818D7: mov     ecx, esi
0x4818D9: call    eax
0x4818DB: mov     dword ptr [edi+14h], 0
0x4818E2: push    0
0x4818E4: push    offset Vector3_InitValue?
0x4818E9: push    offset Vector3_InitValue?
0x4818EE: mov     ecx, edi
0x4818F0: call    sub_959D60
0x4818F5: pop     esi
0x4818F6: fld     [esp+8+arg_C]
0x4818FA: mov     edx, [esp+8+arg_4]
0x4818FE: push    ebx; int
0x4818FF: push    ecx
0x481900: mov     ecx, [esp+10h+arg_8]
0x481904: fstp    [esp+10h+var_10]; float
0x481907: push    ecx; int
0x481908: push    edx; int
0x481909: push    edi; int
0x48190A: call    sub_47FBD0
0x48190F: add     esp, 14h
0x481912: pop     ebx
0x481913: pop     edi
0x481914: retn
0x481915: mov     al, cl
0x481917: pop     edi
0x481918: retn
0x481919: pop     ebx
0x48191A: mov     al, cl
0x48191C: pop     edi
0x48191D: retn
