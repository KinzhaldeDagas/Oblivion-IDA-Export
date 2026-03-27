0x7917E0: push    ecx
0x7917E1: push    ebx
0x7917E2: push    ebp
0x7917E3: mov     ebp, [esp+0Ch+arg_0]
0x7917E7: push    esi
0x7917E8: push    edi
0x7917E9: mov     esi, ecx
0x7917EB: lea     eax, [esp+14h+var_4]
0x7917EF: push    eax
0x7917F0: mov     ecx, ebp
0x7917F2: mov     [esp+18h+var_4], esi
0x7917F6: call    sub_791770
0x7917FB: xor     edi, edi
0x7917FD: xor     ebx, ebx
0x7917FF: nop
0x791800: mov     eax, [esi+0Ch]
0x791803: test    eax, eax
0x791805: jz      short loc_79185A
0x791807: mov     ecx, [esi+10h]
0x79180A: sub     ecx, eax
0x79180C: mov     eax, 2AAAAAABh
0x791811: imul    ecx
0x791813: sar     edx, 1
0x791815: mov     eax, edx
0x791817: shr     eax, 1Fh
0x79181A: add     eax, edx
0x79181C: cmp     edi, eax
0x79181E: jnb     short loc_79185A
0x791820: mov     eax, [esi+0Ch]
0x791823: test    eax, eax
0x791825: jz      short loc_791840
0x791827: mov     ecx, [esi+10h]
0x79182A: sub     ecx, eax
0x79182C: mov     eax, 2AAAAAABh
0x791831: imul    ecx
0x791833: sar     edx, 1
0x791835: mov     eax, edx
0x791837: shr     eax, 1Fh
0x79183A: add     eax, edx
0x79183C: cmp     edi, eax
0x79183E: jb      short loc_791845
0x791840: call    __invalid_parameter_noinfo
0x791845: mov     ecx, [esi+0Ch]
0x791848: mov     ecx, [ecx+ebx+8]
0x79184C: push    ebp
0x79184D: call    sub_7917E0
0x791852: add     edi, 1
0x791855: add     ebx, 0Ch
0x791858: jmp     short loc_791800
0x79185A: pop     edi
0x79185B: pop     esi
0x79185C: pop     ebp
0x79185D: pop     ebx
0x79185E: pop     ecx
0x79185F: retn    4
