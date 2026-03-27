0x8AB710: push    ecx
0x8AB711: mov     eax, [esp+4+arg_4]
0x8AB715: push    ebp
0x8AB716: mov     ebp, [esp+8+arg_0]
0x8AB71A: push    esi
0x8AB71B: push    edi
0x8AB71C: push    eax
0x8AB71D: push    ebp
0x8AB71E: mov     edi, ecx
0x8AB720: call    sub_715D80
0x8AB725: mov     ecx, [edi+3Ch]
0x8AB728: mov     [ebp+3Ch], ecx
0x8AB72B: mov     edx, [edi+50h]
0x8AB72E: lea     esi, [ebp+40h]
0x8AB731: push    edx
0x8AB732: mov     ecx, esi
0x8AB734: call    sub_8AA480
0x8AB739: xor     eax, eax
0x8AB73B: cmp     [edi+50h], eax
0x8AB73E: mov     [esp+10h+arg_0], eax
0x8AB742: jbe     short loc_8AB7A1
0x8AB744: mov     [esp+10h+arg_4], eax
0x8AB748: push    ebx
0x8AB749: lea     esp, [esp+0]
0x8AB750: mov     ebx, [edi+44h]
0x8AB753: mov     eax, [esi+0Ch]
0x8AB756: add     ebx, [esp+14h+arg_4]
0x8AB75A: cmp     eax, [esi+8]
0x8AB75D: mov     [esp+14h+var_4], eax
0x8AB761: jb      short loc_8AB774
0x8AB763: mov     ecx, [esi+14h]
0x8AB766: add     ecx, eax
0x8AB768: push    ecx
0x8AB769: mov     ecx, esi
0x8AB76B: call    sub_8AA480
0x8AB770: mov     eax, [esp+14h+var_4]
0x8AB774: push    ebx
0x8AB775: push    eax
0x8AB776: mov     ecx, esi
0x8AB778: call    sub_8AA710
0x8AB77D: mov     ecx, ebp
0x8AB77F: mov     dword ptr [ebp+3Ch], 0
0x8AB786: call    sub_8AABE0
0x8AB78B: mov     eax, [esp+14h+arg_0]
0x8AB78F: add     [esp+14h+arg_4], 0Ch
0x8AB794: add     eax, 1
0x8AB797: cmp     eax, [edi+50h]
0x8AB79A: mov     [esp+14h+arg_0], eax
0x8AB79E: jb      short loc_8AB750
0x8AB7A0: pop     ebx
0x8AB7A1: pop     edi
0x8AB7A2: pop     esi
0x8AB7A3: pop     ebp
0x8AB7A4: pop     ecx
0x8AB7A5: retn    8
