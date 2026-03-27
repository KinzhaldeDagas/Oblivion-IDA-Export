0x948880: push    ebx
0x948881: push    ebp
0x948882: mov     ebp, [esp+8+arg_0]
0x948886: mov     ebx, [ebp+4]
0x948889: push    esi
0x94888A: push    edi
0x94888B: push    ebx
0x94888C: mov     edi, ecx
0x94888E: call    sub_918440
0x948893: test    ebx, ebx
0x948895: jle     short loc_9488B5
0x948897: xor     esi, esi
0x948899: lea     esp, [esp+0]
0x9488A0: mov     eax, [ebp+0]
0x9488A3: push    3
0x9488A5: add     eax, esi
0x9488A7: push    eax
0x9488A8: mov     ecx, edi
0x9488AA: call    sub_918480
0x9488AF: add     esi, 10h
0x9488B2: dec     ebx
0x9488B3: jnz     short loc_9488A0
0x9488B5: mov     esi, [ebp+10h]
0x9488B8: push    esi
0x9488B9: mov     ecx, edi
0x9488BB: call    sub_918440
0x9488C0: test    esi, esi
0x9488C2: jle     short loc_948904
0x9488C4: xor     ebx, ebx
0x9488C6: mov     [esp+10h+arg_0], esi
0x9488CA: lea     ebx, [ebx+0]
0x9488D0: mov     esi, [ebp+0Ch]
0x9488D3: mov     ecx, [esi+ebx]
0x9488D6: add     esi, ebx
0x9488D8: push    ecx
0x9488D9: mov     ecx, edi
0x9488DB: call    sub_918440
0x9488E0: mov     edx, [esi+4]
0x9488E3: push    edx
0x9488E4: mov     ecx, edi
0x9488E6: call    sub_918440
0x9488EB: mov     eax, [esi+8]
0x9488EE: push    eax
0x9488EF: mov     ecx, edi
0x9488F1: call    sub_918440
0x9488F6: mov     eax, [esp+10h+arg_0]
0x9488FA: add     ebx, 0Ch
0x9488FD: dec     eax
0x9488FE: mov     [esp+10h+arg_0], eax
0x948902: jnz     short loc_9488D0
0x948904: pop     edi
0x948905: pop     esi
0x948906: pop     ebp
0x948907: pop     ebx
0x948908: retn    4
