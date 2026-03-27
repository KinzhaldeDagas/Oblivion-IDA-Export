0x6E3BE0: sub     esp, 14h
0x6E3BE3: push    esi
0x6E3BE4: mov     esi, ecx
0x6E3BE6: fld     dword ptr [esi+8]
0x6E3BE9: fld     [esp+18h+arg_0]
0x6E3BED: fld     st
0x6E3BEF: fucomp  st(2)
0x6E3BF1: fnstsw  ax
0x6E3BF3: fstp    st(1)
0x6E3BF5: test    ah, 44h
0x6E3BF8: jp      short loc_6E3C30
0x6E3BFA: mov     edx, [esi+0Ch]
0x6E3BFD: fstp    st
0x6E3BFF: mov     eax, [esp+18h+arg_8]
0x6E3C03: lea     ecx, [esi+0Ch]
0x6E3C06: mov     [eax], edx
0x6E3C08: mov     edx, [ecx+4]
0x6E3C0B: mov     [eax+4], edx
0x6E3C0E: mov     edx, [ecx+8]
0x6E3C11: mov     [eax+8], edx
0x6E3C14: mov     edx, [ecx+0Ch]
0x6E3C17: push    offset dword_B24FD4
0x6E3C1C: mov     [eax+0Ch], edx
0x6E3C1F: call    sub_73B770
0x6E3C24: test    al, al
0x6E3C26: setz    al
0x6E3C29: pop     esi
0x6E3C2A: add     esp, 14h
0x6E3C2D: retn    0Ch
0x6E3C30: mov     eax, [esi+1Ch]
0x6E3C33: test    eax, eax
0x6E3C35: push    edi
0x6E3C36: jz      short loc_6E3C82
0x6E3C38: mov     ecx, [eax+8]
0x6E3C3B: test    ecx, ecx
0x6E3C3D: mov     dl, [eax+14h]
0x6E3C40: mov     edi, [eax+10h]
0x6E3C43: mov     eax, [eax+0Ch]
0x6E3C46: mov     [esp+1Ch+var_14], dl
0x6E3C4A: jbe     short loc_6E3C82
0x6E3C4C: mov     edx, dword ptr [esp+1Ch+var_14]
0x6E3C50: push    edx; char
0x6E3C51: lea     edx, [esi+20h]
0x6E3C54: push    edx; int
0x6E3C55: push    ecx; int
0x6E3C56: push    edi; int
0x6E3C57: push    eax; int
0x6E3C58: push    ecx
0x6E3C59: lea     eax, [esp+34h+var_10]
0x6E3C5D: fstp    [esp+34h+var_34]; float
0x6E3C60: push    eax; int
0x6E3C61: call    sub_6BE040
0x6E3C66: mov     ecx, [eax]
0x6E3C68: mov     [esi+0Ch], ecx
0x6E3C6B: mov     edx, [eax+4]
0x6E3C6E: mov     [esi+10h], edx
0x6E3C71: mov     ecx, [eax+8]
0x6E3C74: mov     [esi+14h], ecx
0x6E3C77: mov     edx, [eax+0Ch]
0x6E3C7A: add     esp, 1Ch
0x6E3C7D: mov     [esi+18h], edx
0x6E3C80: jmp     short loc_6E3C84
0x6E3C82: fstp    st
0x6E3C84: lea     edi, [esi+0Ch]
0x6E3C87: push    offset dword_B24FD4
0x6E3C8C: mov     ecx, edi
0x6E3C8E: call    sub_73B770
0x6E3C93: test    al, al
0x6E3C95: jz      short loc_6E3CA1
0x6E3C97: pop     edi
0x6E3C98: xor     al, al
0x6E3C9A: pop     esi
0x6E3C9B: add     esp, 14h
0x6E3C9E: retn    0Ch
0x6E3CA1: mov     ecx, [edi]
0x6E3CA3: fld     [esp+1Ch+arg_0]
0x6E3CA7: mov     eax, [esp+1Ch+arg_8]
0x6E3CAB: mov     [eax], ecx
0x6E3CAD: mov     edx, [edi+4]
0x6E3CB0: mov     [eax+4], edx
0x6E3CB3: mov     ecx, [edi+8]
0x6E3CB6: mov     [eax+8], ecx
0x6E3CB9: mov     edx, [edi+0Ch]
0x6E3CBC: mov     [eax+0Ch], edx
0x6E3CBF: fstp    dword ptr [esi+8]
0x6E3CC2: pop     edi
0x6E3CC3: mov     al, 1
0x6E3CC5: pop     esi
0x6E3CC6: add     esp, 14h
0x6E3CC9: retn    0Ch
