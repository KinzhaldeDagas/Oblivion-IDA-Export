0x42C4A0: push    ebx
0x42C4A1: mov     ebx, [esp+4+Size]
0x42C4A5: push    ebp
0x42C4A6: push    esi
0x42C4A7: mov     esi, ecx
0x42C4A9: mov     eax, [esi+14h]
0x42C4AC: push    edi
0x42C4AD: mov     edi, [esi+10h]
0x42C4B0: sub     edi, eax
0x42C4B2: xor     ebp, ebp
0x42C4B4: cmp     ebx, edi
0x42C4B6: jbe     short loc_42C513
0x42C4B8: test    edi, edi
0x42C4BA: jbe     short loc_42C4DA
0x42C4BC: mov     ecx, [esi+18h]
0x42C4BF: mov     ebp, [esp+10h+Dst]
0x42C4C3: push    edi; Size
0x42C4C4: add     ecx, eax
0x42C4C6: push    ecx; Src
0x42C4C7: push    ebp; Dst
0x42C4C8: call    _memcpy
0x42C4CD: add     ebp, edi
0x42C4CF: add     esp, 0Ch
0x42C4D2: mov     [esp+10h+Dst], ebp
0x42C4D6: sub     ebx, edi
0x42C4D8: mov     ebp, edi
0x42C4DA: xor     eax, eax
0x42C4DC: mov     [esi+10h], eax
0x42C4DF: mov     [esi+14h], eax
0x42C4E2: mov     eax, [esi+0Ch]
0x42C4E5: cmp     ebx, eax
0x42C4E7: push    ebp; int
0x42C4E8: mov     ecx, esi
0x42C4EA: jbe     short loc_42C500
0x42C4EC: mov     edx, [esp+14h+Dst]
0x42C4F0: push    ebx; Count
0x42C4F1: push    edx; DstBuf
0x42C4F2: call    sub_42C3E0
0x42C4F7: pop     edi
0x42C4F8: pop     esi
0x42C4F9: add     eax, ebp
0x42C4FB: pop     ebp
0x42C4FC: pop     ebx
0x42C4FD: retn    8
0x42C500: push    eax; Count
0x42C501: mov     eax, [esi+18h]
0x42C504: push    eax; DstBuf
0x42C505: call    sub_42C3E0
0x42C50A: cmp     eax, ebx
0x42C50C: mov     [esi+10h], eax
0x42C50F: jnb     short loc_42C513
0x42C511: mov     ebx, eax
0x42C513: mov     ecx, [esi+18h]
0x42C516: add     ecx, [esi+14h]
0x42C519: mov     edx, [esp+10h+Dst]
0x42C51D: push    ebx; Size
0x42C51E: push    ecx; Src
0x42C51F: push    edx; Dst
0x42C520: call    _memcpy
0x42C525: add     [esi+14h], ebx
0x42C528: add     esp, 0Ch
0x42C52B: pop     edi
0x42C52C: pop     esi
0x42C52D: lea     eax, [ebx+ebp]
0x42C530: pop     ebp
0x42C531: pop     ebx
0x42C532: retn    8
