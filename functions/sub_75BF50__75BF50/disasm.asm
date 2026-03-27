0x75BF50: push    ecx
0x75BF51: push    esi
0x75BF52: push    edi
0x75BF53: mov     edi, [esp+0Ch+arg_0]
0x75BF57: push    edi
0x75BF58: mov     esi, ecx
0x75BF5A: call    sub_752E40
0x75BF5F: mov     al, [esi+18h]
0x75BF62: push    1
0x75BF64: lea     ecx, [esp+10h+var_4]
0x75BF68: push    ecx
0x75BF69: mov     byte ptr [esp+14h+arg_0], al
0x75BF6D: mov     eax, [edi+220h]
0x75BF73: push    1
0x75BF75: lea     edx, [esp+18h+arg_0]
0x75BF79: push    edx
0x75BF7A: push    eax
0x75BF7B: mov     eax, [eax+8]
0x75BF7E: mov     [esp+20h+var_4], 1
0x75BF86: call    eax
0x75BF88: mov     edx, [edi]
0x75BF8A: mov     eax, [esi+1Ch]
0x75BF8D: mov     edx, [edx+2Ch]
0x75BF90: add     esp, 14h
0x75BF93: push    eax
0x75BF94: mov     ecx, edi
0x75BF96: call    edx
0x75BF98: pop     edi
0x75BF99: pop     esi
0x75BF9A: pop     ecx
0x75BF9B: retn    4
