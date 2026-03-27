0x459080: push    ebx
0x459081: push    ebp
0x459082: push    esi
0x459083: mov     esi, ecx
0x459085: mov     ebp, [esi+14h]
0x459088: push    edi
0x459089: mov     edi, [esp+10h+arg_4]
0x45908D: mov     [esi+14h], edi
0x459090: mov     ecx, ds:0B33B00h
0x459096: mov     eax, [ecx+14h]
0x459099: mov     bx, [eax]
0x45909C: add     eax, 2
0x45909F: mov     [ecx+14h], eax
0x4590A2: mov     ecx, [esp+10h+arg_0]
0x4590A6: push    0
0x4590A8: call    sub_4E2F70
0x4590AD: movzx   eax, bx
0x4590B0: lea     ecx, [eax+edi+2]
0x4590B4: cmp     ecx, [esi+14h]
0x4590B7: jz      short loc_4590CB
0x4590B9: mov     ecx, ds:0B34D90h
0x4590BF: mov     edx, [ecx]
0x4590C1: mov     eax, [edx+18h]
0x4590C4: push    offset aLoadattachedan; "LoadAttachedAnimations() call did not p"...
0x4590C9: call    eax
0x4590CB: pop     edi
0x4590CC: mov     [esi+14h], ebp
0x4590CF: pop     esi
0x4590D0: pop     ebp
0x4590D1: pop     ebx
0x4590D2: retn    8
