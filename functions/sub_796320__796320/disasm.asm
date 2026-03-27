0x796320: push    ebp
0x796321: push    esi
0x796322: mov     esi, ecx
0x796324: mov     ecx, [esi+0BCh]
0x79632A: test    ecx, ecx
0x79632C: lea     ebp, [esi+0B8h]
0x796332: jnz     short loc_796338
0x796334: xor     eax, eax
0x796336: jmp     short loc_796340
0x796338: mov     eax, [ebp+8]
0x79633B: sub     eax, ecx
0x79633D: sar     eax, 2
0x796340: movzx   ecx, word ptr [esi+22h]
0x796344: push    ebx
0x796345: mov     bx, word ptr [esp+0Ch+arg_4]
0x79634A: shr     eax, 1
0x79634C: cmp     ecx, eax
0x79634E: push    edi
0x79634F: jnz     loc_7963D7
0x796355: mov     ecx, [ebp+4]
0x796358: test    ecx, ecx
0x79635A: jnz     short loc_796360
0x79635C: xor     eax, eax
0x79635E: jmp     short loc_796368
0x796360: mov     eax, [ebp+8]
0x796363: sub     eax, ecx
0x796365: sar     eax, 2
0x796368: fldz
0x79636A: push    ecx
0x79636B: add     eax, 2
0x79636E: fstp    [esp+14h+var_14]; int
0x796371: push    eax; int
0x796372: mov     ecx, ebp; int
0x796374: call    sub_527160
0x796379: cmp     bx, 0FFFFh
0x79637D: jle     loc_796479
0x796383: cmp     byte ptr [esi], 0
0x796386: jz      short loc_7963D7
0x796388: mov     edx, [esi+0DCh]
0x79638E: test    edx, edx
0x796390: lea     ecx, [esi+0D8h]; int
0x796396: jnz     short loc_79639C
0x796398: xor     eax, eax
0x79639A: jmp     short loc_7963A1
0x79639C: mov     eax, [ecx+8]
0x79639F: sub     eax, edx
0x7963A1: push    0; int
0x7963A3: add     eax, 1
0x7963A6: push    eax; int
0x7963A7: call    sub_6EF4B0
0x7963AC: mov     edx, [esi+0CCh]
0x7963B2: test    edx, edx
0x7963B4: lea     ecx, [esi+0C8h]; int
0x7963BA: jnz     short loc_7963C0
0x7963BC: xor     eax, eax
0x7963BE: jmp     short loc_7963C8
0x7963C0: mov     eax, [ecx+8]
0x7963C3: sub     eax, edx
0x7963C5: sar     eax, 2
0x7963C8: fldz
0x7963CA: push    ecx
0x7963CB: add     eax, 2
0x7963CE: fstp    [esp+14h+var_14]; int
0x7963D1: push    eax; int
0x7963D2: call    sub_527160
0x7963D7: cmp     bx, 0FFFFh
0x7963DB: jle     loc_796479
0x7963E1: cmp     byte ptr [esi], 0
0x7963E4: jz      loc_796479
0x7963EA: mov     ecx, [esi+0DCh]
0x7963F0: test    ecx, ecx
0x7963F2: movzx   edi, word ptr [esi+22h]
0x7963F6: jz      short loc_796404
0x7963F8: mov     eax, [esi+0E0h]
0x7963FE: sub     eax, ecx
0x796400: cmp     edi, eax
0x796402: jb      short loc_796409
0x796404: call    __invalid_parameter_noinfo
0x796409: mov     edx, [esi+0DCh]
0x79640F: mov     [edi+edx], bl
0x796412: movzx   edi, word ptr [esi+22h]
0x796416: mov     ecx, [esi+0CCh]
0x79641C: add     edi, edi
0x79641E: test    ecx, ecx
0x796420: jz      short loc_796431
0x796422: mov     eax, [esi+0D0h]
0x796428: sub     eax, ecx
0x79642A: sar     eax, 2
0x79642D: cmp     edi, eax
0x79642F: jb      short loc_796436
0x796431: call    __invalid_parameter_noinfo
0x796436: mov     ebx, [esp+10h+arg_0]
0x79643A: mov     eax, [esi+0CCh]
0x796440: fld     dword ptr [ebx]
0x796442: fstp    dword ptr [eax+edi*4]
0x796445: movzx   edi, word ptr [esi+22h]
0x796449: mov     ecx, [esi+0CCh]
0x79644F: test    ecx, ecx
0x796451: lea     edi, [edi+edi+1]
0x796455: jz      short loc_796466
0x796457: mov     eax, [esi+0D0h]
0x79645D: sub     eax, ecx
0x79645F: sar     eax, 2
0x796462: cmp     edi, eax
0x796464: jb      short loc_79646B
0x796466: call    __invalid_parameter_noinfo
0x79646B: mov     ecx, [esi+0CCh]
0x796471: fld     dword ptr [ebx+4]
0x796474: fstp    dword ptr [ecx+edi*4]
0x796477: jmp     short loc_79647D
0x796479: mov     ebx, [esp+10h+arg_0]
0x79647D: movzx   edi, word ptr [esi+22h]
0x796481: mov     ecx, [ebp+4]
0x796484: add     edi, edi
0x796486: test    ecx, ecx
0x796488: jz      short loc_796496
0x79648A: mov     eax, [ebp+8]
0x79648D: sub     eax, ecx
0x79648F: sar     eax, 2
0x796492: cmp     edi, eax
0x796494: jb      short loc_79649B
0x796496: call    __invalid_parameter_noinfo
0x79649B: mov     edx, [ebp+4]
0x79649E: fld     dword ptr [ebx]
0x7964A0: fstp    dword ptr [edx+edi*4]
0x7964A3: call    sub_787680
0x7964A8: test    al, al
0x7964AA: fld     dword ptr [ebx+4]
0x7964AD: jz      short loc_7964B1
0x7964AF: fchs
0x7964B1: movzx   esi, word ptr [esi+22h]
0x7964B5: fstp    [esp+10h+arg_4]
0x7964B9: mov     ecx, [ebp+4]
0x7964BC: test    ecx, ecx
0x7964BE: pop     edi
0x7964BF: lea     esi, [esi+esi+1]
0x7964C3: pop     ebx
0x7964C4: jz      short loc_7964D2
0x7964C6: mov     eax, [ebp+8]
0x7964C9: sub     eax, ecx
0x7964CB: sar     eax, 2
0x7964CE: cmp     esi, eax
0x7964D0: jb      short loc_7964D7
0x7964D2: call    __invalid_parameter_noinfo
0x7964D7: mov     eax, [ebp+4]
0x7964DA: fld     [esp+8+arg_4]
0x7964DE: fstp    dword ptr [eax+esi*4]
0x7964E1: pop     esi
0x7964E2: pop     ebp
0x7964E3: retn    8
