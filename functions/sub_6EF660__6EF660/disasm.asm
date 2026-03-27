0x6EF660: push    ebp
0x6EF661: mov     ebp, esp
0x6EF663: push    0FFFFFFFFh
0x6EF665: push    offset SEH_6EF660
0x6EF66A: mov     eax, large fs:0
0x6EF670: push    eax
0x6EF671: sub     esp, 4Ch
0x6EF674: push    ebx
0x6EF675: push    esi
0x6EF676: push    edi
0x6EF677: mov     eax, ds:0B30AACh
0x6EF67C: xor     eax, ebp
0x6EF67E: push    eax
0x6EF67F: lea     eax, [ebp+var_C]
0x6EF682: mov     large fs:0, eax
0x6EF688: mov     [ebp+var_10], esp
0x6EF68B: mov     esi, ecx
0x6EF68D: mov     [ebp+var_14], esi
0x6EF690: mov     eax, [ebp+arg_C]
0x6EF693: mov     ecx, [eax+4]
0x6EF696: fld     dword ptr [eax]
0x6EF698: mov     edx, [eax+8]
0x6EF69B: fstp    [ebp+var_58]
0x6EF69E: push    offset sub_794EB0; void (__thiscall *)(void *)
0x6EF6A3: push    offset sub_557340; void (__thiscall *)(void *, void *)
0x6EF6A8: push    3; int
0x6EF6AA: mov     [ebp+var_54], ecx
0x6EF6AD: mov     ecx, [eax+0Ch]
0x6EF6B0: push    10h; unsigned int
0x6EF6B2: add     eax, 10h
0x6EF6B5: mov     [ebp+var_50], edx
0x6EF6B8: push    eax; void *
0x6EF6B9: lea     edx, [ebp+var_48]
0x6EF6BC: push    edx; void *
0x6EF6BD: mov     [ebp+var_4C], ecx
0x6EF6C0: call    ??__C@YGXPAX0IHP6EX00@ZP6EX0@Z@Z; `eh vector copy constructor iterator'(void *,void *,uint,int,void (*)(void *,void *),void (*)(void *))
0x6EF6C5: mov     eax, [esi+4]
0x6EF6C8: xor     ecx, ecx
0x6EF6CA: cmp     eax, ecx
0x6EF6CC: mov     [ebp+var_4], ecx
0x6EF6CF: jnz     short loc_6EF6D5
0x6EF6D1: xor     ebx, ebx
0x6EF6D3: jmp     short loc_6EF6DD
0x6EF6D5: mov     ebx, [esi+0Ch]
0x6EF6D8: sub     ebx, eax
0x6EF6DA: sar     ebx, 6
0x6EF6DD: mov     edi, [ebp+arg_8]
0x6EF6E0: cmp     edi, ecx
0x6EF6E2: jz      loc_6EF8F2
0x6EF6E8: cmp     eax, ecx
0x6EF6EA: jz      short loc_6EF6F4
0x6EF6EC: mov     ecx, [esi+8]
0x6EF6EF: sub     ecx, eax
0x6EF6F1: sar     ecx, 6
0x6EF6F4: mov     edx, 3FFFFFFh
0x6EF6F9: sub     edx, ecx
0x6EF6FB: cmp     edx, edi
0x6EF6FD: jnb     short loc_6EF704
0x6EF6FF: call    sub_790B90
0x6EF704: test    eax, eax
0x6EF706: jnz     short loc_6EF70C
0x6EF708: xor     ecx, ecx
0x6EF70A: jmp     short loc_6EF714
0x6EF70C: mov     ecx, [esi+8]
0x6EF70F: sub     ecx, eax
0x6EF711: sar     ecx, 6
0x6EF714: add     ecx, edi
0x6EF716: cmp     ebx, ecx
0x6EF718: jnb     loc_6EF831
0x6EF71E: mov     ecx, ebx
0x6EF720: shr     ecx, 1
0x6EF722: mov     edx, 3FFFFFFh
0x6EF727: sub     edx, ecx
0x6EF729: cmp     edx, ebx
0x6EF72B: jnb     short loc_6EF731
0x6EF72D: xor     ebx, ebx
0x6EF72F: jmp     short loc_6EF733
0x6EF731: add     ebx, ecx
0x6EF733: test    eax, eax
0x6EF735: jnz     short loc_6EF73B
0x6EF737: xor     ecx, ecx
0x6EF739: jmp     short loc_6EF743
0x6EF73B: mov     ecx, [esi+8]
0x6EF73E: sub     ecx, eax
0x6EF740: sar     ecx, 6
0x6EF743: add     ecx, edi
0x6EF745: cmp     ebx, ecx
0x6EF747: jnb     short loc_6EF75B
0x6EF749: test    eax, eax
0x6EF74B: jnz     short loc_6EF751
0x6EF74D: xor     ebx, ebx
0x6EF74F: jmp     short loc_6EF759
0x6EF751: mov     ebx, [esi+8]
0x6EF754: sub     ebx, eax
0x6EF756: sar     ebx, 6
0x6EF759: add     ebx, edi
0x6EF75B: push    0
0x6EF75D: push    ebx; char *
0x6EF75E: call    sub_556350
0x6EF763: mov     ecx, [esi+4]
0x6EF766: mov     byte ptr [ebp+var_18], 0
0x6EF76A: mov     edx, [ebp+var_18]
0x6EF76D: push    edx
0x6EF76E: mov     [ebp+arg_8], eax
0x6EF771: mov     edx, [ebp+arg_8]
0x6EF774: push    edx
0x6EF775: push    esi
0x6EF776: push    eax
0x6EF777: mov     [ebp+arg_C], eax
0x6EF77A: mov     eax, [ebp+arg_4]
0x6EF77D: push    eax
0x6EF77E: push    ecx
0x6EF77F: mov     byte ptr [ebp+var_4], 1
0x6EF783: call    sub_557A10
0x6EF788: add     esp, 20h
0x6EF78B: lea     ecx, [ebp+var_58]
0x6EF78E: push    ecx
0x6EF78F: push    edi
0x6EF790: push    eax
0x6EF791: mov     ecx, esi
0x6EF793: mov     [ebp+arg_8], eax
0x6EF796: call    sub_6EF620
0x6EF79B: mov     ecx, [esi+8]
0x6EF79E: mov     byte ptr [ebp+var_18], 0
0x6EF7A2: mov     edx, [ebp+var_18]
0x6EF7A5: push    edx
0x6EF7A6: mov     [ebp+arg_8], eax
0x6EF7A9: mov     edx, [ebp+arg_8]
0x6EF7AC: push    edx
0x6EF7AD: push    esi
0x6EF7AE: push    eax
0x6EF7AF: mov     eax, [ebp+arg_4]
0x6EF7B2: push    ecx
0x6EF7B3: push    eax
0x6EF7B4: call    sub_557A10
0x6EF7B9: mov     ecx, [esi+4]
0x6EF7BC: add     esp, 18h
0x6EF7BF: test    ecx, ecx
0x6EF7C1: mov     [ebp+var_4], 0
0x6EF7C8: jnz     short loc_6EF7CE
0x6EF7CA: xor     eax, eax
0x6EF7CC: jmp     short loc_6EF7D6
0x6EF7CE: mov     eax, [esi+8]
0x6EF7D1: sub     eax, ecx
0x6EF7D3: sar     eax, 6
0x6EF7D6: add     edi, eax
0x6EF7D8: test    ecx, ecx
0x6EF7DA: jz      short loc_6EF7F4
0x6EF7DC: mov     edx, [esi+8]
0x6EF7DF: push    edx
0x6EF7E0: push    ecx
0x6EF7E1: mov     ecx, esi
0x6EF7E3: call    sub_557740
0x6EF7E8: mov     eax, [esi+4]
0x6EF7EB: push    eax
0x6EF7EC: call    FormHeapFree
0x6EF7F1: add     esp, 4
0x6EF7F4: mov     eax, [ebp+arg_C]
0x6EF7F7: shl     ebx, 6
0x6EF7FA: add     ebx, eax
0x6EF7FC: shl     edi, 6
0x6EF7FF: add     edi, eax
0x6EF801: mov     [esi+0Ch], ebx
0x6EF804: mov     [esi+8], edi
0x6EF807: mov     [esi+4], eax
0x6EF80A: jmp     loc_6EF8F2
0x6EF80F: mov     eax, [ebp+arg_8]
0x6EF812: mov     esi, [ebp+arg_C]
0x6EF815: mov     ecx, [ebp+var_14]
0x6EF818: push    eax
0x6EF819: push    esi
0x6EF81A: call    sub_557740
0x6EF81F: push    esi
0x6EF820: call    FormHeapFree
0x6EF825: add     esp, 4
0x6EF828: push    0
0x6EF82A: push    0
0x6EF82C: call    ThrowException??
0x6EF831: mov     eax, [esi+8]
0x6EF834: mov     ebx, [ebp+arg_4]
0x6EF837: mov     ecx, eax
0x6EF839: sub     ecx, ebx
0x6EF83B: sar     ecx, 6
0x6EF83E: cmp     ecx, edi
0x6EF840: mov     [ebp+var_18], eax
0x6EF843: jnb     short loc_6EF8BB
0x6EF845: mov     ecx, edi
0x6EF847: shl     ecx, 6
0x6EF84A: mov     [ebp+arg_C], ecx
0x6EF84D: add     ecx, ebx
0x6EF84F: push    ecx
0x6EF850: push    eax
0x6EF851: push    ebx
0x6EF852: mov     ecx, esi
0x6EF854: call    sub_559980
0x6EF859: mov     eax, [esi+8]
0x6EF85C: mov     ecx, eax
0x6EF85E: sub     ecx, ebx
0x6EF860: sar     ecx, 6
0x6EF863: lea     edx, [ebp+var_58]
0x6EF866: push    edx
0x6EF867: sub     edi, ecx
0x6EF869: push    edi
0x6EF86A: push    eax
0x6EF86B: mov     ecx, esi
0x6EF86D: mov     byte ptr [ebp+var_4], 3
0x6EF871: call    sub_6EF620
0x6EF876: mov     eax, [ebp+arg_C]
0x6EF879: add     [esi+8], eax
0x6EF87C: mov     esi, [esi+8]
0x6EF87F: lea     edx, [ebp+var_58]
0x6EF882: push    edx
0x6EF883: sub     esi, eax
0x6EF885: push    esi
0x6EF886: push    ebx
0x6EF887: mov     [ebp+var_4], 0
0x6EF88E: call    sub_6EF560
0x6EF893: add     esp, 0Ch
0x6EF896: jmp     short loc_6EF8F2
0x6EF898: mov     ecx, [ebp+var_14]
0x6EF89B: mov     eax, [ebp+arg_8]
0x6EF89E: mov     edx, [ecx+8]
0x6EF8A1: shl     eax, 6
0x6EF8A4: add     edx, eax
0x6EF8A6: push    edx
0x6EF8A7: mov     edx, [ebp+arg_4]
0x6EF8AA: add     eax, edx
0x6EF8AC: push    eax
0x6EF8AD: call    sub_557740
0x6EF8B2: push    0
0x6EF8B4: push    0
0x6EF8B6: call    ThrowException??
0x6EF8BB: shl     edi, 6
0x6EF8BE: mov     ecx, edi
0x6EF8C0: push    eax
0x6EF8C1: mov     edi, eax
0x6EF8C3: sub     edi, ecx
0x6EF8C5: push    eax
0x6EF8C6: mov     [ebp+arg_C], ecx
0x6EF8C9: push    edi
0x6EF8CA: mov     ecx, esi
0x6EF8CC: call    sub_559980
0x6EF8D1: mov     [esi+8], eax
0x6EF8D4: mov     eax, [ebp+var_18]
0x6EF8D7: push    eax
0x6EF8D8: push    edi
0x6EF8D9: push    ebx
0x6EF8DA: call    sub_558680
0x6EF8DF: mov     edx, [ebp+arg_C]
0x6EF8E2: lea     ecx, [ebp+var_58]
0x6EF8E5: push    ecx
0x6EF8E6: add     edx, ebx
0x6EF8E8: push    edx
0x6EF8E9: push    ebx
0x6EF8EA: call    sub_6EF560
0x6EF8EF: add     esp, 18h
0x6EF8F2: push    offset sub_794EB0; void (__thiscall *)(void *)
0x6EF8F7: push    3; int
0x6EF8F9: push    10h; unsigned int
0x6EF8FB: lea     eax, [ebp+var_48]
0x6EF8FE: push    eax; void *
0x6EF8FF: mov     [ebp+var_4], 0FFFFFFFFh
0x6EF906: call    $LN21
0x6EF90B: mov     ecx, [ebp+var_C]
0x6EF90E: mov     large fs:0, ecx
0x6EF915: pop     ecx
0x6EF916: pop     edi
0x6EF917: pop     esi
0x6EF918: pop     ebx
0x6EF919: mov     esp, ebp
0x6EF91B: pop     ebp
0x6EF91C: retn    10h
