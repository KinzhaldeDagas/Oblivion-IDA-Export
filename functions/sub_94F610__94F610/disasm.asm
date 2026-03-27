0x94F610: push    ebp
0x94F611: mov     ebp, esp
0x94F613: and     esp, 0FFFFFFF0h
0x94F616: sub     esp, 94h
0x94F61C: mov     eax, [ebp+arg_0]
0x94F61F: push    ebx
0x94F620: mov     ebx, [ebp+arg_4]
0x94F623: push    esi
0x94F624: push    edi
0x94F625: mov     edi, [eax+0Ch]
0x94F628: mov     esi, ecx
0x94F62A: push    ebx
0x94F62B: lea     ecx, [esi+0C0h]
0x94F631: call    sub_958600
0x94F636: mov     eax, [ebp+arg_0]
0x94F639: lea     ecx, [esp+0A0h+var_40]
0x94F63D: push    ecx
0x94F63E: lea     edx, [esp+0A4h+var_80]
0x94F642: push    edx
0x94F643: push    eax
0x94F644: mov     ecx, esi
0x94F646: call    sub_94D100
0x94F64B: lea     edx, [edi+20h]
0x94F64E: push    edx
0x94F64F: lea     eax, [esp+0A4h+var_80]
0x94F653: lea     ecx, [esi+50h]
0x94F656: push    eax
0x94F657: mov     [esp+0A8h+var_84], ecx
0x94F65B: call    sub_88FCC0
0x94F660: add     edi, 10h
0x94F663: push    edi
0x94F664: lea     edx, [esp+0A4h+var_40]
0x94F668: lea     ecx, [esi+40h]
0x94F66B: push    edx
0x94F66C: mov     [esp+0A8h+var_88], ecx
0x94F670: call    sub_88FCC0
0x94F675: mov     edi, [ebp+arg_8]
0x94F678: push    edi
0x94F679: mov     ecx, esi
0x94F67B: call    sub_94CF30
0x94F680: push    edi
0x94F681: mov     ecx, esi
0x94F683: call    sub_94CF80
0x94F688: mov     ecx, [esp+0A0h+var_84]
0x94F68C: mov     edx, [esp+0A0h+var_88]
0x94F690: mov     eax, [ebx]
0x94F692: push    edi
0x94F693: push    0FFFF0000h
0x94F698: push    ecx
0x94F699: push    edx
0x94F69A: mov     ecx, ebx
0x94F69C: call    dword ptr [eax+1Ch]
0x94F69F: pop     edi
0x94F6A0: pop     esi
0x94F6A1: pop     ebx
0x94F6A2: mov     esp, ebp
0x94F6A4: pop     ebp
0x94F6A5: retn    0Ch
