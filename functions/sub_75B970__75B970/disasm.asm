0x75B970: push    ebx
0x75B971: push    esi
0x75B972: push    edi
0x75B973: mov     edi, [esp+0Ch+arg_0]
0x75B977: push    edi
0x75B978: mov     esi, ecx
0x75B97A: call    sub_752E40
0x75B97F: mov     ecx, [esi+18h]
0x75B982: mov     eax, [edi]
0x75B984: mov     edx, [eax+2Ch]
0x75B987: push    ecx
0x75B988: mov     ecx, edi
0x75B98A: call    edx
0x75B98C: push    edi
0x75B98D: lea     ecx, [esi+1Ch]
0x75B990: call    sub_7094A0
0x75B995: mov     eax, [edi+220h]
0x75B99B: push    1
0x75B99D: lea     ecx, [esp+10h+arg_0]
0x75B9A1: push    ecx
0x75B9A2: mov     ebx, 4
0x75B9A7: push    ebx
0x75B9A8: lea     edx, [esi+28h]
0x75B9AB: push    edx
0x75B9AC: push    eax
0x75B9AD: mov     eax, [eax+8]
0x75B9B0: mov     [esp+20h+arg_0], ebx
0x75B9B4: call    eax
0x75B9B6: mov     eax, [edi+220h]
0x75B9BC: push    1
0x75B9BE: lea     ecx, [esp+24h+arg_0]
0x75B9C2: push    ecx
0x75B9C3: push    ebx
0x75B9C4: lea     edx, [esi+2Ch]
0x75B9C7: push    edx
0x75B9C8: push    eax
0x75B9C9: mov     eax, [eax+8]
0x75B9CC: mov     [esp+34h+arg_0], ebx
0x75B9D0: call    eax
0x75B9D2: mov     eax, [edi+220h]
0x75B9D8: push    1
0x75B9DA: lea     ecx, [esp+38h+arg_0]
0x75B9DE: push    ecx
0x75B9DF: push    ebx
0x75B9E0: lea     edx, [esi+30h]
0x75B9E3: push    edx
0x75B9E4: push    eax
0x75B9E5: mov     eax, [eax+8]
0x75B9E8: mov     [esp+48h+arg_0], ebx
0x75B9EC: call    eax
0x75B9EE: mov     edi, [edi+220h]
0x75B9F4: mov     edx, [edi+8]
0x75B9F7: push    1
0x75B9F9: lea     ecx, [esp+4Ch+arg_0]
0x75B9FD: push    ecx
0x75B9FE: push    ebx
0x75B9FF: add     esi, 34h ; '4'
0x75BA02: push    esi
0x75BA03: push    edi
0x75BA04: mov     [esp+5Ch+arg_0], ebx
0x75BA08: call    edx
0x75BA0A: add     esp, 50h
0x75BA0D: pop     edi
0x75BA0E: pop     esi
0x75BA0F: pop     ebx
0x75BA10: retn    4
