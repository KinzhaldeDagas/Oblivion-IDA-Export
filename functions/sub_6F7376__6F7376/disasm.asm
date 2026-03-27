0x6F7376: mov     eax, [edi+24h]
0x6F7379: mov     ecx, [eax]
0x6F737B: push    ecx; Dst
0x6F737C: call    _memcpy_s
0x6F7381: mov     eax, [edi+34h]
0x6F7384: sub     [eax], esi
0x6F7386: add     [esp+4+arg_18], esi
0x6F738A: mov     eax, [edi+24h]
0x6F738D: add     ebx, esi
0x6F738F: sub     ebp, esi
0x6F7391: add     esp, 10h
0x6F7394: add     [eax], esi
0x6F7396: mov     esi, [esp-0Ch+arg_18]
0x6F739A: jmp     short loc_6F73BB
0x6F739C: movzx   eax, byte ptr [ebx]
0x6F739F: mov     edx, [edi]
0x6F73A1: push    eax
0x6F73A2: mov     eax, [edx+4]
0x6F73A5: mov     ecx, edi
0x6F73A7: call    eax
0x6F73A9: cmp     eax, 0FFFFFFFFh
0x6F73AC: jz      short loc_6F73BF
0x6F73AE: add     esi, 1
0x6F73B1: add     ebx, 1
0x6F73B4: mov     [esp-0Ch+arg_18], esi
0x6F73B8: sub     ebp, 1
0x6F73BB: test    ebp, ebp
0x6F73BD: jg      short loc_6F7360
0x6F73BF: pop     ebx
0x6F73C0: pop     edi
0x6F73C1: mov     eax, esi
0x6F73C3: pop     esi
0x6F73C4: pop     ebp
0x6F73C5: pop     ecx
0x6F73C6: retn    8
