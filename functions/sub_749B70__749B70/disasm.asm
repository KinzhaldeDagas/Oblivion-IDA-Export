0x749B70: push    ecx
0x749B71: push    esi
0x749B72: push    edi
0x749B73: mov     edi, [esp+0Ch+arg_0]
0x749B77: push    edi
0x749B78: mov     esi, ecx
0x749B7A: call    sub_7178F0
0x749B7F: mov     eax, [edi+21Ch]
0x749B85: push    1
0x749B87: lea     ecx, [esp+10h+var_4]
0x749B8B: push    ecx
0x749B8C: push    1
0x749B8E: lea     edx, [esp+18h+arg_0]
0x749B92: push    edx
0x749B93: push    eax
0x749B94: mov     eax, [eax+4]
0x749B97: mov     [esp+20h+var_4], 1
0x749B9F: call    eax
0x749BA1: add     esp, 14h
0x749BA4: cmp     byte ptr [esp+0Ch+arg_0], 0
0x749BA9: setnz   cl
0x749BAC: mov     [esi+0C0h], cl
0x749BB2: mov     ecx, edi
0x749BB4: call    sub_712AE0
0x749BB9: pop     edi
0x749BBA: pop     esi
0x749BBB: pop     ecx
0x749BBC: retn    4
