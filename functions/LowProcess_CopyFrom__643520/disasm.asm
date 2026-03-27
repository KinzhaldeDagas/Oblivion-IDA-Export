0x643520: push    ebx
0x643521: push    esi
0x643522: mov     esi, [esp+8+a3]
0x643526: mov     eax, [esi]
0x643528: mov     edx, [eax+28h]
0x64352B: push    edi
0x64352C: mov     edi, ecx
0x64352E: mov     ebx, [edi]
0x643530: mov     ecx, esi
0x643532: call    edx
0x643534: mov     eax, [ebx+1Ch]
0x643537: push    ecx
0x643538: mov     ecx, edi
0x64353A: fstp    [esp+10h+var_10]
0x64353D: call    eax
0x64353F: mov     ecx, [esi+8]
0x643542: mov     [edi+8], ecx
0x643545: fld     dword ptr [esi+0Ch]
0x643548: xor     ebx, ebx
0x64354A: mov     [esi+8], ebx
0x64354D: fstp    dword ptr [edi+0Ch]
0x643550: mov     dl, [esi+1Fh]
0x643553: mov     [edi+1Fh], dl
0x643556: mov     eax, [esi]
0x643558: mov     edx, [eax+0C0h]
0x64355E: mov     ecx, esi
0x643560: call    edx
0x643562: mov     [edi+1Dh], al
0x643565: mov     eax, [esi]
0x643567: mov     edx, [eax+390h]
0x64356D: mov     ecx, esi
0x64356F: call    edx
0x643571: mov     [edi+1Ch], al
0x643574: mov     eax, [esi+44h]
0x643577: mov     [edi+44h], eax
0x64357A: mov     cl, [esi+84h]
0x643580: mov     [esi+44h], ebx
0x643583: mov     [edi+84h], cl
0x643589: fld     dword ptr [esi+28h]
0x64358C: fstp    dword ptr [edi+28h]
0x64358F: mov     edx, [esi+24h]
0x643592: mov     [edi+24h], edx
0x643595: mov     eax, [esi]
0x643597: mov     edx, [eax+148h]
0x64359D: mov     ecx, esi
0x64359F: call    edx
0x6435A1: mov     [edi+1Eh], al
0x6435A4: mov     eax, [esi+48h]
0x6435A7: cmp     eax, ebx
0x6435A9: jz      short loc_6435B1
0x6435AB: mov     [edi+48h], eax
0x6435AE: mov     [esi+48h], ebx
0x6435B1: mov     eax, [esi]
0x6435B3: mov     edx, [eax+40Ch]
0x6435B9: mov     ecx, esi
0x6435BB: call    edx
0x6435BD: test    eax, eax
0x6435BF: jz      short loc_6435EC
0x6435C1: cmp     [edi+34h], ebx
0x6435C4: jnz     short loc_6435D2
0x6435C6: mov     eax, [edi]
0x6435C8: mov     edx, [eax+408h]
0x6435CE: mov     ecx, edi
0x6435D0: call    edx
0x6435D2: mov     eax, [edi+34h]
0x6435D5: mov     edx, [esi]
0x6435D7: mov     ebx, [eax]
0x6435D9: mov     eax, [edx+40Ch]
0x6435DF: mov     ecx, esi
0x6435E1: call    eax
0x6435E3: mov     ecx, [edi+34h]
0x6435E6: mov     edx, [ebx+8]
0x6435E9: push    eax
0x6435EA: call    edx
0x6435EC: mov     eax, [esi]
0x6435EE: mov     edx, [eax+2Ch]
0x6435F1: mov     ecx, esi
0x6435F3: call    edx
0x6435F5: mov     [edi+18h], eax
0x6435F8: mov     eax, [esi+2Ch]
0x6435FB: mov     [edi+2Ch], eax
0x6435FE: mov     ecx, [esi+4]
0x643601: mov     [edi+4], ecx
0x643604: mov     edx, [esi+38h]
0x643607: lea     eax, [esi+70h]
0x64360A: push    eax
0x64360B: lea     ecx, [edi+70h]
0x64360E: mov     [edi+38h], edx
0x643611: call    AVCollection_CopyFrom
0x643616: fld     dword ptr [esi+88h]
0x64361C: fstp    dword ptr [edi+88h]
0x643622: fld     dword ptr [esi+8Ch]
0x643628: fstp    dword ptr [edi+8Ch]
0x64362E: pop     edi
0x64362F: pop     esi
0x643630: pop     ebx
0x643631: retn    4
