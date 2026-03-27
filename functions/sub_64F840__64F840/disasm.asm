0x64F840: push    esi
0x64F841: push    edi
0x64F842: mov     edi, ecx
0x64F844: mov     eax, [edi]
0x64F846: mov     edx, [eax+184h]
0x64F84C: call    edx
0x64F84E: mov     esi, [eax+28h]
0x64F851: test    esi, esi
0x64F853: jnz     short loc_64F85C
0x64F855: pop     edi
0x64F856: xor     al, al
0x64F858: pop     esi
0x64F859: retn    8
0x64F85C: push    ebx
0x64F85D: mov     ecx, esi
0x64F85F: call    TargetData__GetTargetType
0x64F864: mov     ecx, esi
0x64F866: mov     ebx, eax
0x64F868: call    TargetData__GetTargetType
0x64F86D: test    eax, eax
0x64F86F: jnz     short loc_64F8AC
0x64F871: mov     ecx, esi
0x64F873: call    sub_569E60
0x64F878: mov     ecx, esi
0x64F87A: mov     ebx, eax
0x64F87C: call    sub_569E60
0x64F881: mov     eax, [eax+0Ch]
0x64F884: add     edi, 0E0h ; 'à'
0x64F88A: push    edi
0x64F88B: push    eax
0x64F88C: mov     eax, [ebx]
0x64F88E: mov     edx, [eax+170h]
0x64F894: push    1
0x64F896: push    0
0x64F898: mov     ecx, ebx
0x64F89A: call    edx
0x64F89C: mov     ecx, [esp+1Ch+arg_0]
0x64F8A0: push    eax
0x64F8A1: call    sub_5E4A00
0x64F8A6: pop     ebx
0x64F8A7: pop     edi
0x64F8A8: pop     esi
0x64F8A9: retn    8
0x64F8AC: add     edi, 0E0h ; 'à'
0x64F8B2: cmp     ebx, 1
0x64F8B5: push    edi
0x64F8B6: push    0
0x64F8B8: jnz     short loc_64F8D8
0x64F8BA: mov     eax, [esp+14h+arg_4]
0x64F8BE: push    eax
0x64F8BF: push    0
0x64F8C1: mov     ecx, esi
0x64F8C3: call    sub_569E70
0x64F8C8: mov     ecx, [esp+1Ch+arg_0]
0x64F8CC: push    eax
0x64F8CD: call    sub_5E4A00
0x64F8D2: pop     ebx
0x64F8D3: pop     edi
0x64F8D4: pop     esi
0x64F8D5: retn    8
0x64F8D8: mov     ecx, [esp+14h+arg_4]
0x64F8DC: push    ecx
0x64F8DD: mov     ecx, esi
0x64F8DF: call    sub_569E80
0x64F8E4: mov     ecx, [esp+18h+arg_0]
0x64F8E8: push    eax
0x64F8E9: push    0
0x64F8EB: call    sub_5E4A00
0x64F8F0: pop     ebx
0x64F8F1: pop     edi
0x64F8F2: pop     esi
0x64F8F3: retn    8
