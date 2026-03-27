0x74A8C0: push    ecx
0x74A8C1: push    edi
0x74A8C2: mov     edi, ecx
0x74A8C4: movzx   eax, word ptr [edi+8]
0x74A8C8: mov     ecx, [esp+8+arg_0]
0x74A8CC: cmp     ecx, eax
0x74A8CE: jz      loc_74AABB
0x74A8D4: movzx   eax, word ptr [edi+0Ah]
0x74A8D8: push    ebx
0x74A8D9: movzx   edx, ax
0x74A8DC: cmp     ecx, edx
0x74A8DE: push    ebp
0x74A8DF: push    esi
0x74A8E0: jnb     short loc_74A943
0x74A8E2: cmp     cx, ax
0x74A8E5: movzx   ebp, cx
0x74A8E8: jnb     short loc_74A93F
0x74A8EA: lea     ebx, [ebx+0]
0x74A8F0: mov     ecx, [edi+4]
0x74A8F3: movzx   eax, bp
0x74A8F6: cmp     dword ptr [ecx+eax*4], 0
0x74A8FA: lea     ebx, [ecx+eax*4]
0x74A8FD: setnz   al
0x74A900: test    al, al
0x74A902: jz      short loc_74A932
0x74A904: mov     esi, [ebx]
0x74A906: test    esi, esi
0x74A908: jz      short loc_74A92C
0x74A90A: lea     edx, [esi+4]
0x74A90D: push    edx; lpAddend
0x74A90E: call    dword ptr ds:0A2807Ch
0x74A914: test    eax, eax
0x74A916: jnz     short loc_74A926
0x74A918: test    esi, esi
0x74A91A: jz      short loc_74A926
0x74A91C: mov     eax, [esi]
0x74A91E: mov     edx, [eax]
0x74A920: push    1
0x74A922: mov     ecx, esi
0x74A924: call    edx
0x74A926: mov     dword ptr [ebx], 0
0x74A92C: add     word ptr [edi+0Ch], 0FFFFh
0x74A932: add     ebp, 1
0x74A935: cmp     bp, [edi+0Ah]
0x74A939: jb      short loc_74A8F0
0x74A93B: mov     ecx, [esp+14h+arg_0]
0x74A93F: mov     [edi+0Ah], cx
0x74A943: test    ecx, ecx
0x74A945: mov     ebp, [edi+4]
0x74A948: mov     [esp+14h+arg_0], ebp
0x74A94C: mov     [edi+8], cx
0x74A950: jbe     loc_74AA62
0x74A956: movzx   esi, cx
0x74A959: xor     ecx, ecx
0x74A95B: mov     eax, esi
0x74A95D: mov     edx, 4
0x74A962: mul     edx
0x74A964: seto    cl
0x74A967: neg     ecx
0x74A969: or      ecx, eax
0x74A96B: xor     eax, eax
0x74A96D: add     ecx, 4
0x74A970: setb    al
0x74A973: neg     eax
0x74A975: or      eax, ecx
0x74A977: push    eax; Size
0x74A978: call    FormHeapAlloc
0x74A97D: add     esp, 4
0x74A980: test    eax, eax
0x74A982: jz      short loc_74A999
0x74A984: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; Concurrency::details::_NonReentrantLock::_Release(void)
0x74A989: push    esi
0x74A98A: lea     ebx, [eax+4]
0x74A98D: push    4
0x74A98F: push    ebx
0x74A990: mov     [eax], esi
0x74A992: call    sub_401080
0x74A997: jmp     short loc_74A99B
0x74A999: xor     ebx, ebx
0x74A99B: xor     eax, eax
0x74A99D: cmp     [edi+0Ah], ax
0x74A9A1: mov     [edi+4], ebx
0x74A9A4: mov     [esp+14h+var_4], eax
0x74A9A8: jbe     short loc_74AA15
0x74A9AA: lea     ebx, [ebx+0]
0x74A9B0: mov     ebx, [edi+4]
0x74A9B3: mov     ecx, [esp+14h+arg_0]
0x74A9B7: movzx   esi, ax
0x74A9BA: add     esi, esi
0x74A9BC: add     esi, esi
0x74A9BE: mov     ebp, [ebx+esi]
0x74A9C1: add     ebx, esi
0x74A9C3: cmp     ebp, [esi+ecx]
0x74A9C6: jz      short loc_74AA00
0x74A9C8: test    ebp, ebp
0x74A9CA: jz      short loc_74A9E9
0x74A9CC: lea     edx, [ebp+4]
0x74A9CF: push    edx; lpAddend
0x74A9D0: call    dword ptr ds:0A2807Ch
0x74A9D6: test    eax, eax
0x74A9D8: jnz     short loc_74A9E9
0x74A9DA: test    ebp, ebp
0x74A9DC: jz      short loc_74A9E9
0x74A9DE: mov     eax, [ebp+0]
0x74A9E1: mov     edx, [eax]
0x74A9E3: push    1
0x74A9E5: mov     ecx, ebp
0x74A9E7: call    edx
0x74A9E9: mov     eax, [esp+14h+arg_0]
0x74A9ED: mov     esi, [esi+eax]
0x74A9F0: test    esi, esi
0x74A9F2: mov     [ebx], esi
0x74A9F4: jz      short loc_74AA00
0x74A9F6: add     esi, 4
0x74A9F9: push    esi; lpAddend
0x74A9FA: call    dword ptr ds:0A28078h
0x74AA00: mov     eax, [esp+14h+var_4]
0x74AA04: add     eax, 1
0x74AA07: cmp     ax, [edi+0Ah]
0x74AA0B: mov     [esp+14h+var_4], eax
0x74AA0F: jb      short loc_74A9B0
0x74AA11: mov     ebp, [esp+14h+arg_0]
0x74AA15: movzx   ebx, word ptr [edi+0Ah]
0x74AA19: cmp     bx, [edi+8]
0x74AA1D: jnb     short loc_74AA69
0x74AA1F: nop
0x74AA20: mov     edx, [edi+4]
0x74AA23: movzx   ecx, bx
0x74AA26: mov     esi, [edx+ecx*4]
0x74AA29: test    esi, esi
0x74AA2B: lea     ebp, [edx+ecx*4]
0x74AA2E: jz      short loc_74AA53
0x74AA30: lea     eax, [esi+4]
0x74AA33: push    eax; lpAddend
0x74AA34: call    dword ptr ds:0A2807Ch
0x74AA3A: test    eax, eax
0x74AA3C: jnz     short loc_74AA4C
0x74AA3E: test    esi, esi
0x74AA40: jz      short loc_74AA4C
0x74AA42: mov     edx, [esi]
0x74AA44: mov     eax, [edx]
0x74AA46: push    1
0x74AA48: mov     ecx, esi
0x74AA4A: call    eax
0x74AA4C: mov     dword ptr [ebp+0], 0
0x74AA53: add     ebx, 1
0x74AA56: cmp     bx, [edi+8]
0x74AA5A: jb      short loc_74AA20
0x74AA5C: mov     ebp, [esp+14h+arg_0]
0x74AA60: jmp     short loc_74AA69
0x74AA62: mov     dword ptr [edi+4], 0
0x74AA69: test    ebp, ebp
0x74AA6B: jz      short loc_74AAB8
0x74AA6D: mov     ebx, [ebp-4]
0x74AA70: lea     eax, [ebp-4]
0x74AA73: lea     edi, [ebp+ebx*4+0]
0x74AA77: sub     ebx, 1
0x74AA7A: mov     [esp+14h+arg_0], eax
0x74AA7E: js      short loc_74AAAF
0x74AA80: mov     esi, [edi-4]
0x74AA83: sub     edi, 4
0x74AA86: test    esi, esi
0x74AA88: jz      short loc_74AAA6
0x74AA8A: lea     ecx, [esi+4]
0x74AA8D: push    ecx; lpAddend
0x74AA8E: call    dword ptr ds:0A2807Ch
0x74AA94: test    eax, eax
0x74AA96: jnz     short loc_74AAA6
0x74AA98: test    esi, esi
0x74AA9A: jz      short loc_74AAA6
0x74AA9C: mov     edx, [esi]
0x74AA9E: mov     eax, [edx]
0x74AAA0: push    1
0x74AAA2: mov     ecx, esi
0x74AAA4: call    eax
0x74AAA6: sub     ebx, 1
0x74AAA9: jns     short loc_74AA80
0x74AAAB: mov     eax, [esp+14h+arg_0]
0x74AAAF: push    eax
0x74AAB0: call    FormHeapFree
0x74AAB5: add     esp, 4
0x74AAB8: pop     esi
0x74AAB9: pop     ebp
0x74AABA: pop     ebx
0x74AABB: pop     edi
0x74AABC: pop     ecx
0x74AABD: retn    4
