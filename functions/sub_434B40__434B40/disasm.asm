0x434B40: push    0FFFFFFFFh
0x434B42: push    offset SEH_8C8970
0x434B47: mov     eax, large fs:0
0x434B4D: push    eax
0x434B4E: push    ecx
0x434B4F: push    esi
0x434B50: push    edi
0x434B51: mov     eax, ___security_cookie
0x434B56: xor     eax, esp
0x434B58: push    eax
0x434B59: lea     eax, [esp+1Ch+var_C]
0x434B5D: mov     large fs:0, eax
0x434B63: lea     esi, [ecx+8]
0x434B66: mov     ecx, [esi]
0x434B68: test    ecx, ecx
0x434B6A: jz      short loc_434BE1
0x434B6C: mov     eax, [ecx]
0x434B6E: mov     edx, [eax+98h]
0x434B74: call    edx
0x434B76: test    al, al
0x434B78: jz      short loc_434B90
0x434B7A: mov     edi, [esi]
0x434B7C: mov     eax, edi
0x434B7E: mov     ecx, [esp+1Ch+var_C]
0x434B82: mov     large fs:0, ecx
0x434B89: pop     ecx
0x434B8A: pop     edi
0x434B8B: pop     esi
0x434B8C: add     esp, 10h
0x434B8F: retn
0x434B90: push    0F0h ; 'ð'; Size
0x434B95: call    FormHeapAlloc
0x434B9A: add     esp, 4
0x434B9D: mov     [esp+1Ch+var_10], eax
0x434BA1: test    eax, eax
0x434BA3: mov     [esp+1Ch+var_4], 0
0x434BAB: jz      short loc_434BB9
0x434BAD: mov     edx, [esi]
0x434BAF: push    edx
0x434BB0: mov     ecx, eax
0x434BB2: call    sub_4A12E0
0x434BB7: jmp     short loc_434BBB
0x434BB9: xor     eax, eax
0x434BBB: push    eax; a2
0x434BBC: mov     ecx, esi; this
0x434BBE: mov     [esp+20h+var_4], 0FFFFFFFFh
0x434BC6: mov     edi, eax
0x434BC8: call    NiSmartPointer_Set??
0x434BCD: mov     eax, edi
0x434BCF: mov     ecx, [esp+1Ch+var_C]
0x434BD3: mov     large fs:0, ecx
0x434BDA: pop     ecx
0x434BDB: pop     edi
0x434BDC: pop     esi
0x434BDD: add     esp, 10h
0x434BE0: retn
0x434BE1: xor     eax, eax
0x434BE3: mov     ecx, [esp+1Ch+var_C]
0x434BE7: mov     large fs:0, ecx
0x434BEE: pop     ecx
0x434BEF: pop     edi
0x434BF0: pop     esi
0x434BF1: add     esp, 10h
0x434BF4: retn
