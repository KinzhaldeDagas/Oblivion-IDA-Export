0x6BF730: push    0FFFFFFFFh
0x6BF732: push    offset SEH_6CF490
0x6BF737: mov     eax, large fs:0
0x6BF73D: push    eax
0x6BF73E: push    ebx
0x6BF73F: push    ebp
0x6BF740: push    esi
0x6BF741: push    edi
0x6BF742: mov     eax, ds:0B30AACh
0x6BF747: xor     eax, esp
0x6BF749: push    eax
0x6BF74A: lea     eax, [esp+20h+var_C]
0x6BF74E: mov     large fs:0, eax
0x6BF754: mov     edi, [esp+20h+size]
0x6BF758: xor     ecx, ecx
0x6BF75A: mov     eax, edi
0x6BF75C: mov     edx, 10h
0x6BF761: mul     edx
0x6BF763: seto    cl
0x6BF766: neg     ecx
0x6BF768: or      ecx, eax
0x6BF76A: xor     eax, eax
0x6BF76C: add     ecx, 4
0x6BF76F: setb    al
0x6BF772: neg     eax
0x6BF774: or      eax, ecx
0x6BF776: push    eax; Size
0x6BF777: call    FormHeapAlloc
0x6BF77C: add     esp, 4
0x6BF77F: mov     [esp+20h+size], eax
0x6BF783: test    eax, eax
0x6BF785: mov     [esp+20h+var_4], 0
0x6BF78D: jz      short loc_6BF7AB
0x6BF78F: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6BF794: push    offset sub_7616D0; a4
0x6BF799: push    edi; size
0x6BF79A: lea     esi, [eax+4]
0x6BF79D: push    10h; a2
0x6BF79F: push    esi; a1
0x6BF7A0: mov     [eax], edi
0x6BF7A2: call    ArrayConstructor
0x6BF7A7: mov     ebp, esi
0x6BF7A9: jmp     short loc_6BF7AD
0x6BF7AB: xor     ebp, ebp
0x6BF7AD: test    edi, edi
0x6BF7AF: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6BF7B7: jbe     short loc_6BF7D0
0x6BF7B9: mov     ebx, [esp+20h+arg_0]
0x6BF7BD: mov     esi, ebp
0x6BF7BF: nop
0x6BF7C0: push    ebx
0x6BF7C1: mov     ecx, esi
0x6BF7C3: call    sub_6BC1C0
0x6BF7C8: add     esi, 10h
0x6BF7CB: sub     edi, 1
0x6BF7CE: jnz     short loc_6BF7C0
0x6BF7D0: mov     eax, ebp
0x6BF7D2: mov     ecx, [esp+20h+var_C]
0x6BF7D6: mov     large fs:0, ecx
0x6BF7DD: pop     ecx
0x6BF7DE: pop     edi
0x6BF7DF: pop     esi
0x6BF7E0: pop     ebp
0x6BF7E1: pop     ebx
0x6BF7E2: add     esp, 0Ch
0x6BF7E5: retn
