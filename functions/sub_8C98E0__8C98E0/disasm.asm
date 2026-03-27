0x8C98E0: push    ebp
0x8C98E1: mov     ebp, esp
0x8C98E3: and     esp, 0FFFFFFF0h
0x8C98E6: sub     esp, 8
0x8C98E9: push    esi
0x8C98EA: mov     esi, ecx
0x8C98EC: cmp     dword ptr [esi+0Ch], 0
0x8C98F0: push    edi
0x8C98F1: mov     edi, [ebp+arg_0]
0x8C98F4: jnz     short loc_8C9968
0x8C98F6: push    1
0x8C98F8: push    60h ; '`'
0x8C98FA: mov     ecx, offset FormHeap
0x8C98FF: call    j_MemoryHeap_Alloc
0x8C9904: mov     dl, al
0x8C9906: and     dl, 0Fh
0x8C9909: mov     cl, 10h
0x8C990B: sub     cl, dl
0x8C990D: movzx   edx, cl
0x8C9910: add     eax, edx
0x8C9912: mov     [eax-1], cl
0x8C9915: mov     dword ptr [eax], 0
0x8C991B: xorps   xmm0, xmm0
0x8C991E: fld     dword ptr ds:0B2EFC4h
0x8C9924: mov     dword ptr [eax+8], 0
0x8C992B: fstp    dword ptr [eax+4]
0x8C992E: movaps  xmmword ptr [eax+10h], xmm0
0x8C9932: fld1
0x8C9934: movaps  xmmword ptr [eax+20h], xmm0
0x8C9938: movaps  xmmword ptr [eax+30h], xmm0
0x8C993C: fst     dword ptr [eax+10h]
0x8C993F: fst     dword ptr [eax+24h]
0x8C9942: fstp    dword ptr [eax+38h]
0x8C9945: movaps  xmmword ptr [eax+40h], xmm0
0x8C9949: cmp     dword ptr [esi+8], 0
0x8C994D: mov     [esi+0Ch], eax
0x8C9950: jz      short loc_8C995A
0x8C9952: push    eax
0x8C9953: mov     ecx, esi
0x8C9955: call    sub_8C9380
0x8C995A: mov     byte ptr [edi], 1
0x8C995D: mov     eax, [esi+0Ch]
0x8C9960: pop     edi
0x8C9961: pop     esi
0x8C9962: mov     esp, ebp
0x8C9964: pop     ebp
0x8C9965: retn    4
0x8C9968: mov     byte ptr [edi], 0
0x8C996B: mov     eax, [esi+0Ch]
0x8C996E: pop     edi
0x8C996F: pop     esi
0x8C9970: mov     esp, ebp
0x8C9972: pop     ebp
0x8C9973: retn    4
