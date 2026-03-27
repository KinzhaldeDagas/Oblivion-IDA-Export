0x6D75C0: push    0FFFFFFFFh
0x6D75C2: push    offset SEH_6CF490
0x6D75C7: mov     eax, large fs:0
0x6D75CD: push    eax
0x6D75CE: push    ebx
0x6D75CF: push    ebp
0x6D75D0: push    esi
0x6D75D1: push    edi
0x6D75D2: mov     eax, ds:0B30AACh
0x6D75D7: xor     eax, esp
0x6D75D9: push    eax
0x6D75DA: lea     eax, [esp+20h+var_C]
0x6D75DE: mov     large fs:0, eax
0x6D75E4: mov     esi, ecx
0x6D75E6: mov     eax, [esp+20h+arg_4]
0x6D75EA: mov     ebp, [esp+20h+arg_0]
0x6D75EE: push    eax
0x6D75EF: push    ebp
0x6D75F0: call    sub_7214A0
0x6D75F5: mov     ecx, [esi+0Ch]
0x6D75F8: xor     ebx, ebx
0x6D75FA: mov     [ebp+0Ch], ecx
0x6D75FD: cmp     [esi+0Ch], ebx
0x6D7600: jbe     loc_6D76AF
0x6D7606: mov     edx, [esi]
0x6D7608: mov     eax, [edx+4]
0x6D760B: mov     ecx, esi
0x6D760D: call    eax
0x6D760F: cmp     eax, offset dword_B3DA08
0x6D7614: setz    al
0x6D7617: test    al, al
0x6D7619: jz      loc_6D76AF
0x6D761F: mov     edi, [esi+0Ch]
0x6D7622: xor     ecx, ecx
0x6D7624: mov     eax, edi
0x6D7626: mov     edx, 8
0x6D762B: mul     edx
0x6D762D: seto    cl
0x6D7630: neg     ecx
0x6D7632: or      ecx, eax
0x6D7634: xor     eax, eax
0x6D7636: add     ecx, 4
0x6D7639: setb    al
0x6D763C: neg     eax
0x6D763E: or      eax, ecx
0x6D7640: push    eax; Size
0x6D7641: call    FormHeapAlloc
0x6D7646: add     esp, 4
0x6D7649: mov     [esp+20h+arg_4], eax
0x6D764D: cmp     eax, ebx
0x6D764F: mov     [esp+20h+var_4], ebx
0x6D7653: jz      short loc_6D766D
0x6D7655: push    offset sub_6EC6B0; a5
0x6D765A: push    offset sub_6D73E0; a4
0x6D765F: push    edi; size
0x6D7660: lea     ebx, [eax+4]
0x6D7663: push    8; a2
0x6D7665: push    ebx; a1
0x6D7666: mov     [eax], edi
0x6D7668: call    ArrayConstructor
0x6D766D: xor     edi, edi
0x6D766F: mov     [ebp+10h], ebx
0x6D7672: cmp     [esi+0Ch], edi
0x6D7675: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6D767D: jbe     short loc_6D76B2
0x6D767F: nop
0x6D7680: mov     ecx, [esi+10h]
0x6D7683: mov     edx, [ebp+10h]
0x6D7686: lea     eax, ds:0[edi*8]
0x6D768D: fld     dword ptr [eax+ecx]
0x6D7690: fstp    dword ptr [eax+edx]
0x6D7693: mov     ecx, [esi+10h]
0x6D7696: mov     edx, [ecx+eax+4]
0x6D769A: mov     ecx, [ebp+10h]
0x6D769D: push    edx; Src
0x6D769E: add     ecx, eax
0x6D76A0: call    sub_6EC6C0
0x6D76A5: add     edi, 1
0x6D76A8: cmp     edi, [esi+0Ch]
0x6D76AB: jb      short loc_6D7680
0x6D76AD: jmp     short loc_6D76B2
0x6D76AF: mov     [ebp+10h], ebx
0x6D76B2: mov     ecx, [esp+20h+var_C]
0x6D76B6: mov     large fs:0, ecx
0x6D76BD: pop     ecx
0x6D76BE: pop     edi
0x6D76BF: pop     esi
0x6D76C0: pop     ebp
0x6D76C1: pop     ebx
0x6D76C2: add     esp, 0Ch
0x6D76C5: retn    8
