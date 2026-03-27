0x7348B0: push    ebp
0x7348B1: push    edi
0x7348B2: mov     ebp, ecx
0x7348B4: xor     edi, edi
0x7348B6: cmp     [ebp+10Eh], di
0x7348BD: jbe     short loc_734916
0x7348BF: mov     eax, [esp+8+arg_4]
0x7348C3: push    esi
0x7348C4: mov     esi, [esp+0Ch+arg_0]
0x7348C8: jmp     short loc_7348D0
0x7348CA: align 10h
0x7348D0: movzx   ecx, byte ptr [esi+1]
0x7348D4: and     cl, 0FCh
0x7348D7: add     cl, cl
0x7348D9: mov     [eax], cl
0x7348DB: movzx   edx, byte ptr [esi]
0x7348DE: movzx   ecx, byte ptr [esi+1]
0x7348E2: shr     dl, 2
0x7348E5: and     dl, 38h
0x7348E8: shl     cl, 6
0x7348EB: add     dl, cl
0x7348ED: mov     [eax+1], dl
0x7348F0: movzx   edx, byte ptr [esi]
0x7348F3: add     eax, 1
0x7348F6: add     dl, dl
0x7348F8: add     dl, dl
0x7348FA: add     eax, 1
0x7348FD: add     dl, dl
0x7348FF: mov     [eax], dl
0x734901: movzx   ecx, word ptr [ebp+10Eh]
0x734908: add     edi, 1
0x73490B: add     eax, 1
0x73490E: add     esi, 2
0x734911: cmp     edi, ecx
0x734913: jb      short loc_7348D0
0x734915: pop     esi
0x734916: pop     edi
0x734917: pop     ebp
0x734918: retn    8
