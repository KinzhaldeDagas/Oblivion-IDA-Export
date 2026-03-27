0x42C6F0: push    ebx
0x42C6F1: push    ebp
0x42C6F2: mov     ebp, [esp+8+Size]
0x42C6F6: push    esi
0x42C6F7: mov     esi, ecx
0x42C6F9: mov     eax, [esi+16Ch]
0x42C6FF: mov     ebx, [esi+15Ch]
0x42C705: push    edi
0x42C706: mov     edi, [esi+170h]
0x42C70C: sub     edi, eax
0x42C70E: cmp     ebp, edi
0x42C710: mov     [esp+10h+Size], 0
0x42C718: jbe     loc_42C895
0x42C71E: test    edi, edi
0x42C720: jbe     short loc_42C747
0x42C722: mov     ecx, [esp+10h+Dst]
0x42C726: test    ecx, ecx
0x42C728: jz      short loc_42C741
0x42C72A: mov     edx, [esi+160h]
0x42C730: push    edi; Size
0x42C731: add     edx, eax
0x42C733: push    edx; Src
0x42C734: push    ecx; Dst
0x42C735: call    _memcpy
0x42C73A: add     esp, 0Ch
0x42C73D: add     [esp+10h+Dst], edi
0x42C741: sub     ebp, edi
0x42C743: mov     [esp+10h+Size], edi
0x42C747: test    ebp, ebp
0x42C749: mov     dword ptr [esi+16Ch], 0
0x42C753: mov     dword ptr [esi+170h], 0
0x42C75D: jbe     loc_42C85E
0x42C763: mov     eax, [esi+168h]
0x42C769: test    eax, eax
0x42C76B: mov     [ebx+10h], eax
0x42C76E: mov     ecx, [esi+160h]
0x42C774: mov     [ebx+0Ch], ecx
0x42C777: jz      loc_42C818
0x42C77D: lea     ecx, [ecx+0]
0x42C780: mov     edi, [esi+10h]
0x42C783: sub     edi, [esi+14h]
0x42C786: mov     [ebx+4], edi
0x42C789: mov     edx, [esi+18h]
0x42C78C: add     edx, [esi+14h]
0x42C78F: test    edi, edi
0x42C791: mov     [ebx], edx
0x42C793: jz      short loc_42C7B9
0x42C795: push    2
0x42C797: push    ebx
0x42C798: call    zlib_Inflate
0x42C79D: add     esp, 8
0x42C7A0: cmp     eax, 0FFFFFFFEh
0x42C7A3: jz      short loc_42C7F3
0x42C7A5: cmp     eax, 2
0x42C7A8: jz      short loc_42C7F3
0x42C7AA: cmp     eax, 0FFFFFFFDh
0x42C7AD: jz      short loc_42C7F3
0x42C7AF: cmp     eax, 0FFFFFFFCh
0x42C7B2: jz      short loc_42C7F3
0x42C7B4: cmp     eax, 1
0x42C7B7: jz      short loc_42C818
0x42C7B9: mov     eax, edi
0x42C7BB: sub     eax, [ebx+4]
0x42C7BE: add     [esi+14h], eax
0x42C7C1: sub     edi, [ebx+4]
0x42C7C4: add     [esi+148h], edi
0x42C7CA: cmp     dword ptr [ebx+4], 0
0x42C7CE: jnz     short loc_42C7EB
0x42C7D0: mov     ecx, esi
0x42C7D2: call    NiFile_Flush
0x42C7D7: mov     ecx, [esi+0Ch]
0x42C7DA: mov     edx, [esi+18h]
0x42C7DD: push    0; int
0x42C7DF: push    ecx; Count
0x42C7E0: push    edx; DstBuf
0x42C7E1: mov     ecx, esi
0x42C7E3: call    sub_42C3E0
0x42C7E8: mov     [esi+10h], eax
0x42C7EB: cmp     dword ptr [ebx+10h], 0
0x42C7EF: jnz     short loc_42C780
0x42C7F1: jmp     short loc_42C818
0x42C7F3: push    ebx
0x42C7F4: call    Zlib_inflateEnd
0x42C7F9: lea     eax, [esi+3Ch]
0x42C7FC: add     esp, 4
0x42C7FF: test    eax, eax
0x42C801: jnz     short loc_42C808
0x42C803: mov     eax, offset aUnknown_1; "<Unknown>"
0x42C808: push    eax; ArgList
0x42C809: push    offset aErrorInflating; "Error inflating ZLib stream for file %s"...
0x42C80E: call    PrintError
0x42C813: add     esp, 8
0x42C816: xor     ebp, ebp
0x42C818: mov     eax, [esi+168h]
0x42C81E: sub     eax, [ebx+10h]
0x42C821: mov     [esi+170h], eax
0x42C827: jz      short loc_42C85E
0x42C829: cmp     ebp, eax
0x42C82B: jbe     short loc_42C869
0x42C82D: mov     ecx, [esp+10h+Dst]
0x42C831: add     [esp+10h+Size], eax
0x42C835: sub     ebp, eax
0x42C837: test    ecx, ecx
0x42C839: jz      short loc_42C856
0x42C83B: push    eax; Size
0x42C83C: mov     eax, [esi+160h]
0x42C842: push    eax; Src
0x42C843: push    ecx; Dst
0x42C844: call    _memcpy
0x42C849: mov     ecx, [esi+170h]
0x42C84F: add     esp, 0Ch
0x42C852: add     [esp+10h+Dst], ecx
0x42C856: test    ebp, ebp
0x42C858: ja      loc_42C763
0x42C85E: mov     eax, [esp+10h+Size]
0x42C862: pop     edi
0x42C863: pop     esi
0x42C864: pop     ebp
0x42C865: pop     ebx
0x42C866: retn    8
0x42C869: mov     eax, [esp+10h+Dst]
0x42C86D: test    eax, eax
0x42C86F: jz      short loc_42C882
0x42C871: mov     edx, [esi+160h]
0x42C877: push    ebp; Size
0x42C878: push    edx; Src
0x42C879: push    eax; Dst
0x42C87A: call    _memcpy
0x42C87F: add     esp, 0Ch
0x42C882: add     [esi+16Ch], ebp
0x42C888: mov     eax, [esp+10h+Size]
0x42C88C: pop     edi
0x42C88D: pop     esi
0x42C88E: add     eax, ebp
0x42C890: pop     ebp
0x42C891: pop     ebx
0x42C892: retn    8
0x42C895: mov     ecx, [esp+10h+Dst]
0x42C899: test    ecx, ecx
0x42C89B: jz      short loc_42C8B0
0x42C89D: mov     edx, [esi+160h]
0x42C8A3: push    ebp; Size
0x42C8A4: add     edx, eax
0x42C8A6: push    edx; Src
0x42C8A7: push    ecx; Dst
0x42C8A8: call    _memcpy
0x42C8AD: add     esp, 0Ch
0x42C8B0: add     [esi+16Ch], ebp
0x42C8B6: pop     edi
0x42C8B7: pop     esi
0x42C8B8: mov     eax, ebp
0x42C8BA: pop     ebp
0x42C8BB: pop     ebx
0x42C8BC: retn    8
