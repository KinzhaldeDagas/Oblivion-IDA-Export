0x6D0B60: sub     esp, 8
0x6D0B63: push    ebx
0x6D0B64: push    esi
0x6D0B65: mov     esi, ecx
0x6D0B67: mov     eax, [esi+50h]
0x6D0B6A: mov     ebx, [eax+8]
0x6D0B6D: push    edi
0x6D0B6E: xor     edi, edi
0x6D0B70: test    ebx, ebx
0x6D0B72: jbe     loc_6D0C1C
0x6D0B78: jmp     short loc_6D0B80
0x6D0B7A: align 10h
0x6D0B80: mov     edx, [esi]
0x6D0B82: mov     eax, [edx+80h]
0x6D0B88: push    edi
0x6D0B89: mov     ecx, esi
0x6D0B8B: call    eax
0x6D0B8D: fldz
0x6D0B8F: movzx   ecx, word ptr [esi+4Ah]
0x6D0B93: fst     [esp+14h+var_4]
0x6D0B97: cmp     edi, ecx
0x6D0B99: jnb     short loc_6D0BA5
0x6D0B9B: mov     edx, [esi+44h]
0x6D0B9E: fld     dword ptr [edx+edi*4]
0x6D0BA1: fstp    [esp+14h+var_4]
0x6D0BA5: test    edi, edi
0x6D0BA7: fld     [esp+14h+var_4]
0x6D0BAB: fstp    [esp+14h+var_8]
0x6D0BAF: jnz     short loc_6D0BD0
0x6D0BB1: mov     ecx, [esi+50h]
0x6D0BB4: cmp     byte ptr [ecx+14h], 0
0x6D0BB8: jz      short loc_6D0BD0
0x6D0BBA: cmp     byte ptr [esi+59h], 0
0x6D0BBE: jz      short loc_6D0BC6
0x6D0BC0: fstp    [esp+14h+var_8]
0x6D0BC4: jmp     short loc_6D0BF3
0x6D0BC6: fstp    st
0x6D0BC8: fld1
0x6D0BCA: fstp    [esp+14h+var_8]
0x6D0BCE: jmp     short loc_6D0BF3
0x6D0BD0: test    eax, eax
0x6D0BD2: fstp    st
0x6D0BD4: jz      short loc_6D0C11
0x6D0BD6: mov     edx, [eax]
0x6D0BD8: fld     dword ptr [esi+28h]
0x6D0BDB: mov     edx, [edx+5Ch]
0x6D0BDE: lea     ecx, [esp+14h+var_8]
0x6D0BE2: push    ecx
0x6D0BE3: mov     ecx, [esi+30h]
0x6D0BE6: push    ecx
0x6D0BE7: push    ecx
0x6D0BE8: mov     ecx, eax
0x6D0BEA: fstp    [esp+20h+var_20]
0x6D0BED: call    edx
0x6D0BEF: test    al, al
0x6D0BF1: jz      short loc_6D0C11
0x6D0BF3: movzx   eax, word ptr [esi+4Ah]
0x6D0BF7: fld     [esp+14h+var_8]
0x6D0BFB: cmp     edi, eax
0x6D0BFD: fstp    [esp+14h+var_4]
0x6D0C01: jnb     short loc_6D0C11
0x6D0C03: lea     ecx, [esp+14h+var_4]
0x6D0C07: push    ecx
0x6D0C08: push    edi
0x6D0C09: lea     ecx, [esi+40h]
0x6D0C0C: call    sub_4CA210
0x6D0C11: add     edi, 1
0x6D0C14: cmp     edi, ebx
0x6D0C16: jb      loc_6D0B80
0x6D0C1C: pop     edi
0x6D0C1D: pop     esi
0x6D0C1E: pop     ebx
0x6D0C1F: add     esp, 8
0x6D0C22: retn    4
