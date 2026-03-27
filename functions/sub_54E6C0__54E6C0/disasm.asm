0x54E6C0: push    ebp
0x54E6C1: mov     ebp, esp
0x54E6C3: and     esp, 0FFFFFFF8h
0x54E6C6: sub     esp, 0Ch
0x54E6C9: push    ebx
0x54E6CA: mov     ebx, [ebp+arg_0]
0x54E6CD: test    ebx, ebx
0x54E6CF: push    esi
0x54E6D0: push    edi
0x54E6D1: mov     esi, ecx
0x54E6D3: jz      loc_54E763
0x54E6D9: mov     eax, [ebx]
0x54E6DB: mov     edx, [eax+40h]
0x54E6DE: mov     ecx, ebx
0x54E6E0: call    edx
0x54E6E2: test    al, al
0x54E6E4: jz      short loc_54E763
0x54E6E6: mov     eax, [ebx]
0x54E6E8: mov     edx, [eax+4]
0x54E6EB: mov     ecx, ebx
0x54E6ED: call    edx
0x54E6EF: mov     edi, eax
0x54E6F1: mov     eax, [esi]
0x54E6F3: mov     edx, [eax+4]
0x54E6F6: mov     ecx, esi
0x54E6F8: call    edx
0x54E6FA: cmp     edi, eax
0x54E6FC: jnz     short loc_54E763
0x54E6FE: mov     eax, [ebx]
0x54E700: mov     edx, [eax+50h]
0x54E703: mov     ecx, ebx
0x54E705: call    edx
0x54E707: mov     edi, eax
0x54E709: mov     eax, [esi]
0x54E70B: mov     edx, [eax+50h]
0x54E70E: mov     ecx, esi
0x54E710: call    edx
0x54E712: cmp     edi, eax
0x54E714: jnz     short loc_54E763
0x54E716: mov     eax, [esi]
0x54E718: mov     edx, [eax+50h]
0x54E71B: mov     ecx, esi
0x54E71D: xor     edi, edi
0x54E71F: call    edx
0x54E721: test    eax, eax
0x54E723: jbe     short loc_54E758
0x54E725: mov     eax, [ebx]
0x54E727: mov     edx, [eax+48h]
0x54E72A: push    edi
0x54E72B: mov     ecx, ebx
0x54E72D: call    edx
0x54E72F: fstp    [esp+18h+var_C+4]
0x54E733: mov     eax, [esi]
0x54E735: mov     edx, [eax+48h]
0x54E738: push    edi
0x54E739: mov     ecx, esi
0x54E73B: call    edx
0x54E73D: fcomp   [esp+18h+var_C+4]
0x54E741: fnstsw  ax
0x54E743: test    ah, 44h
0x54E746: jp      short loc_54E763
0x54E748: mov     eax, [esi]
0x54E74A: mov     edx, [eax+50h]
0x54E74D: mov     ecx, esi
0x54E74F: add     edi, 1
0x54E752: call    edx
0x54E754: cmp     edi, eax
0x54E756: jb      short loc_54E725
0x54E758: xor     al, al
0x54E75A: pop     edi
0x54E75B: pop     esi
0x54E75C: pop     ebx
0x54E75D: mov     esp, ebp
0x54E75F: pop     ebp
0x54E760: retn    4
0x54E763: pop     edi
0x54E764: pop     esi
0x54E765: mov     al, 1
0x54E767: pop     ebx
0x54E768: mov     esp, ebp
0x54E76A: pop     ebp
0x54E76B: retn    4
