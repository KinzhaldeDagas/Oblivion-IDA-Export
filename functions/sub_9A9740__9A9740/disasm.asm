0x9A9740: push    ebx
0x9A9741: mov     ebx, [esp+4+arg_0]
0x9A9745: push    esi
0x9A9746: mov     esi, ecx
0x9A9748: mov     eax, [esi]
0x9A974A: mov     edx, [eax+44h]
0x9A974D: push    edi
0x9A974E: push    ebx
0x9A974F: call    edx
0x9A9751: mov     edi, eax
0x9A9753: cmp     edi, 0FFFFFFFFh
0x9A9756: jz      short loc_9A979B
0x9A9758: mov     eax, [esi+10h]
0x9A975B: mov     eax, [eax+edi*4]
0x9A975E: test    eax, eax
0x9A9760: jz      short loc_9A977C
0x9A9762: mov     ecx, [eax+14h]
0x9A9765: and     ecx, 0F0000000h
0x9A976B: cmp     ecx, 40000000h
0x9A9771: jnz     short loc_9A977C
0x9A9773: push    ebx
0x9A9774: call    sub_77CB50
0x9A9779: add     esp, 4
0x9A977C: lea     edx, [esp+0Ch+arg_0]
0x9A9780: push    edx
0x9A9781: push    edi
0x9A9782: lea     ecx, [esi+0Ch]
0x9A9785: mov     [esp+14h+arg_0], 0
0x9A978D: call    sub_9A9670
0x9A9792: mov     eax, [esi+24h]
0x9A9795: pop     edi
0x9A9796: pop     esi
0x9A9797: pop     ebx
0x9A9798: retn    4
0x9A979B: mov     dword ptr [esi+24h], 80000010h
0x9A97A2: mov     eax, [esi+24h]
0x9A97A5: pop     edi
0x9A97A6: pop     esi
0x9A97A7: pop     ebx
0x9A97A8: retn    4
