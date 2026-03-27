0x459370: push    ebx
0x459371: push    ebp
0x459372: push    esi
0x459373: mov     esi, ecx
0x459375: mov     ebp, [esi+14h]
0x459378: push    edi
0x459379: mov     edi, [esp+10h+arg_4]
0x45937D: mov     [esi+14h], edi
0x459380: mov     ecx, ds:0B33B00h
0x459386: mov     eax, [ecx+14h]
0x459389: mov     bx, [eax]
0x45938C: add     eax, 2
0x45938F: mov     [ecx+14h], eax
0x459392: mov     ecx, [esp+10h+arg_0]
0x459396: mov     word ptr [esp+10h+arg_4], bx
0x45939B: mov     eax, [esp+10h+arg_4]
0x45939F: push    eax
0x4593A0: call    sub_4E31E0
0x4593A5: movzx   ecx, bx
0x4593A8: lea     edx, [ecx+edi+2]
0x4593AC: cmp     edx, [esi+14h]
0x4593AF: jz      short loc_4593C3
0x4593B1: mov     ecx, ds:0B34D90h
0x4593B7: mov     eax, [ecx]
0x4593B9: mov     edx, [eax+18h]
0x4593BC: push    offset aLoadhavokdataC; "LoadHavokData() call did not properly e"...
0x4593C1: call    edx
0x4593C3: pop     edi
0x4593C4: mov     [esi+14h], ebp
0x4593C7: pop     esi
0x4593C8: pop     ebp
0x4593C9: pop     ebx
0x4593CA: retn    8
