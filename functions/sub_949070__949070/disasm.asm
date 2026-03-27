0x949070: push    ecx
0x949071: push    esi
0x949072: mov     esi, ecx
0x949074: mov     eax, [esi+0Ch]
0x949077: mov     ecx, [esi+8]
0x94907A: and     eax, 3FFFFFFFh
0x94907F: add     ecx, 46h ; 'F'
0x949082: cmp     eax, ecx
0x949084: jle     short loc_949103
0x949086: push    ebx
0x949087: push    edi
0x949088: mov     edi, [esp+10h+arg_0]
0x94908C: xor     ebx, ebx
0x94908E: test    edi, edi
0x949090: mov     [esp+10h+var_4], ebx
0x949094: jz      short loc_9490B4
0x949096: push    edi
0x949097: call    sub_8B1860
0x94909C: mov     ebx, eax
0x94909E: add     esp, 4
0x9490A1: inc     ebx
0x9490A2: mov     eax, ebx
0x9490A4: and     eax, 80000001h
0x9490A9: jns     short loc_9490B0
0x9490AB: dec     eax
0x9490AC: or      eax, 0FFFFFFFEh
0x9490AF: inc     eax
0x9490B0: mov     [esp+10h+var_4], eax
0x9490B4: mov     edx, [esp+10h+var_4]
0x9490B8: add     edx, ebx
0x9490BA: push    edx
0x9490BB: add     esi, 4
0x9490BE: call    sub_948DF0
0x9490C3: mov     cl, byte ptr [esp+14h+var_4]
0x9490C7: mov     esi, eax
0x9490C9: mov     al, bl
0x9490CB: add     al, cl
0x9490CD: add     esp, 4
0x9490D0: test    ebx, ebx
0x9490D2: mov     byte ptr [esi], 50h ; 'P'
0x9490D5: mov     [esi+1], al
0x9490D8: mov     word ptr [esi+2], 0
0x9490DE: mov     word ptr [esi+4], 0
0x9490E4: jle     short loc_949101
0x9490E6: push    ebx
0x9490E7: lea     ecx, [esi+6]
0x9490EA: push    edi
0x9490EB: push    ecx
0x9490EC: call    sub_8B1890
0x9490F1: mov     eax, [esp+1Ch+var_4]
0x9490F5: add     esp, 0Ch
0x9490F8: test    eax, eax
0x9490FA: jz      short loc_949101
0x9490FC: mov     byte ptr [esi+ebx+6], 0
0x949101: pop     edi
0x949102: pop     ebx
0x949103: pop     esi
0x949104: pop     ecx
0x949105: retn    4
