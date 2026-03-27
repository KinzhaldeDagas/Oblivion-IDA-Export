0x54E630: push    esi
0x54E631: push    edi
0x54E632: mov     edi, [esp+8+arg_0]
0x54E636: test    edi, edi
0x54E638: mov     esi, ecx
0x54E63A: jz      short loc_54E6BB
0x54E63C: mov     eax, [edi]
0x54E63E: mov     edx, [eax+40h]
0x54E641: mov     ecx, edi
0x54E643: call    edx
0x54E645: test    al, al
0x54E647: jz      short loc_54E6BB
0x54E649: mov     eax, [edi]
0x54E64B: mov     edx, [eax+4]
0x54E64E: push    ebx
0x54E64F: mov     ebx, [esi]
0x54E651: mov     ecx, edi
0x54E653: add     ebx, 8
0x54E656: call    edx
0x54E658: push    eax
0x54E659: mov     eax, [ebx]
0x54E65B: mov     ecx, esi
0x54E65D: call    eax
0x54E65F: mov     edx, [edi]
0x54E661: mov     ebx, [esi]
0x54E663: mov     eax, [edx+0Ch]
0x54E666: mov     ecx, edi
0x54E668: add     ebx, 10h
0x54E66B: call    eax
0x54E66D: mov     edx, [ebx]
0x54E66F: push    ecx
0x54E670: mov     ecx, esi
0x54E672: fstp    [esp+10h+var_10]
0x54E675: call    edx
0x54E677: mov     eax, [edi]
0x54E679: mov     ebx, [esi]
0x54E67B: mov     edx, [eax+50h]
0x54E67E: push    1
0x54E680: mov     ecx, edi
0x54E682: add     ebx, 58h ; 'X'
0x54E685: call    edx
0x54E687: push    eax
0x54E688: mov     eax, [ebx]
0x54E68A: mov     ecx, esi
0x54E68C: call    eax
0x54E68E: xor     ebx, ebx
0x54E690: cmp     [esi+10h], ebx
0x54E693: jbe     short loc_54E6BA
0x54E695: push    ebp
0x54E696: mov     edx, [edi]
0x54E698: mov     ebp, [esi]
0x54E69A: mov     eax, [edx+48h]
0x54E69D: push    ebx
0x54E69E: mov     ecx, edi
0x54E6A0: add     ebp, 4Ch ; 'L'
0x54E6A3: call    eax
0x54E6A5: mov     edx, [ebp+0]
0x54E6A8: push    ecx
0x54E6A9: fstp    [esp+14h+var_14]
0x54E6AC: push    ebx
0x54E6AD: mov     ecx, esi
0x54E6AF: call    edx
0x54E6B1: add     ebx, 1
0x54E6B4: cmp     ebx, [esi+10h]
0x54E6B7: jb      short loc_54E696
0x54E6B9: pop     ebp
0x54E6BA: pop     ebx
0x54E6BB: pop     edi
0x54E6BC: pop     esi
0x54E6BD: retn    4
