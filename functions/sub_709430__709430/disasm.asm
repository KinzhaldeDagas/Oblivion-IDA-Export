0x709430: push    esi
0x709431: push    edi
0x709432: mov     edi, [esp+8+arg_0]
0x709436: mov     eax, [edi+21Ch]
0x70943C: mov     edx, [eax+4]
0x70943F: mov     esi, ecx
0x709441: push    1
0x709443: lea     ecx, [esp+0Ch+arg_0]
0x709447: push    ecx
0x709448: push    4
0x70944A: push    esi
0x70944B: push    eax
0x70944C: mov     [esp+1Ch+arg_0], 4
0x709454: call    edx
0x709456: mov     eax, [edi+21Ch]
0x70945C: push    1
0x70945E: lea     ecx, [esp+20h+arg_0]
0x709462: push    ecx
0x709463: push    4
0x709465: lea     edx, [esi+4]
0x709468: push    edx
0x709469: push    eax
0x70946A: mov     eax, [eax+4]
0x70946D: mov     [esp+30h+arg_0], 4
0x709475: call    eax
0x709477: mov     edi, [edi+21Ch]
0x70947D: mov     edx, [edi+4]
0x709480: push    1
0x709482: lea     ecx, [esp+34h+arg_0]
0x709486: push    ecx
0x709487: push    4
0x709489: add     esi, 8
0x70948C: push    esi
0x70948D: push    edi
0x70948E: mov     [esp+44h+arg_0], 4
0x709496: call    edx
0x709498: add     esp, 3Ch
0x70949B: pop     edi
0x70949C: pop     esi
0x70949D: retn    4
