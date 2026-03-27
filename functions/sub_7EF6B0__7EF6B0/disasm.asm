0x7EF6B0: push    0FFFFFFFFh
0x7EF6B2: push    offset SEH_7EF6B0
0x7EF6B7: mov     eax, large fs:0
0x7EF6BD: push    eax
0x7EF6BE: sub     esp, 8
0x7EF6C1: push    ebx
0x7EF6C2: push    ebp
0x7EF6C3: push    esi
0x7EF6C4: push    edi
0x7EF6C5: mov     eax, ds:0B30AACh
0x7EF6CA: xor     eax, esp
0x7EF6CC: push    eax
0x7EF6CD: lea     eax, [esp+28h+var_C]
0x7EF6D1: mov     large fs:0, eax
0x7EF6D7: mov     ebp, ecx
0x7EF6D9: mov     eax, [ebp+0]
0x7EF6DC: mov     edx, [eax+80h]
0x7EF6E2: call    edx
0x7EF6E4: xor     edi, edi
0x7EF6E6: xor     ebx, ebx
0x7EF6E8: mov     [esp+28h+var_14], edi
0x7EF6EC: mov     [esp+28h+var_4], ebx
0x7EF6F0: mov     [esp+28h+var_10], ebx
0x7EF6F4: cmp     dword ptr ds:0B42E90h, 19Bh
0x7EF6FE: mov     byte ptr [esp+28h+var_4], 1
0x7EF703: jnz     loc_7EF818
0x7EF709: mov     eax, ds:0B46704h
0x7EF70E: cmp     eax, ebx
0x7EF710: jz      loc_7EF818
0x7EF716: mov     edi, eax
0x7EF718: cmp     edi, ebx
0x7EF71A: mov     [esp+28h+var_14], edi
0x7EF71E: jz      loc_7EF818
0x7EF724: mov     eax, [esp+28h+arg_C]
0x7EF728: mov     ecx, 1
0x7EF72D: add     [edi+60h], ecx
0x7EF730: mov     esi, [eax+18h]
0x7EF733: cmp     [esi+0A8h], ecx
0x7EF739: mov     edx, [edi+24h]
0x7EF73C: mov     eax, [edx]
0x7EF73E: setz    byte ptr [esp+28h+arg_C]
0x7EF743: cmp     eax, ebx
0x7EF745: jz      short loc_7EF750
0x7EF747: add     [eax+5Ch], ecx
0x7EF74A: mov     ebx, eax
0x7EF74C: mov     [esp+28h+var_10], ebx
0x7EF750: mov     eax, [esi+9Ch]
0x7EF756: push    eax; a2
0x7EF757: mov     ecx, ebx; this
0x7EF759: call    sub_76C910
0x7EF75E: mov     eax, [esi]
0x7EF760: mov     edx, [eax+68h]
0x7EF763: mov     ecx, esi
0x7EF765: call    edx
0x7EF767: push    eax
0x7EF768: push    ebx
0x7EF769: call    sub_8011E0
0x7EF76E: add     esp, 8
0x7EF771: cmp     byte ptr [esp+28h+arg_C], 0
0x7EF776: jz      short loc_7EF7AE
0x7EF778: cmp     dword ptr [esi+0A4h], 1
0x7EF77F: jnz     short loc_7EF797
0x7EF781: mov     eax, ds:0B466E8h
0x7EF786: push    eax; a2
0x7EF787: mov     ecx, edi; this
0x7EF789: call    sub_7AECB0
0x7EF78E: mov     ecx, ds:0B4670Ch
0x7EF794: push    ecx
0x7EF795: jmp     short loc_7EF7D0
0x7EF797: mov     ecx, ds:0B466ECh
0x7EF79D: push    ecx; a2
0x7EF79E: mov     ecx, edi; this
0x7EF7A0: call    sub_7AECB0
0x7EF7A5: mov     ecx, ds:0B4670Ch
0x7EF7AB: push    ecx
0x7EF7AC: jmp     short loc_7EF7D0
0x7EF7AE: cmp     dword ptr [esi+0A4h], 1
0x7EF7B5: mov     ecx, edi; this
0x7EF7B7: jnz     loc_7EF85C
0x7EF7BD: mov     edx, ds:0B466E0h
0x7EF7C3: push    edx; a2
0x7EF7C4: call    sub_7AECB0
0x7EF7C9: mov     edx, ds:0B46708h
0x7EF7CF: push    edx; a2
0x7EF7D0: mov     ecx, edi; this
0x7EF7D2: call    sub_7AEC60
0x7EF7D7: fld     dword ptr ds:0B2DAECh
0x7EF7DD: lea     eax, [ebp+0A8h]
0x7EF7E3: fstp    dword ptr [ebp+0A0h]
0x7EF7E9: push    eax
0x7EF7EA: lea     ecx, [ebp+94h]
0x7EF7F0: push    ecx
0x7EF7F1: lea     edx, [ebp+88h]
0x7EF7F7: push    edx
0x7EF7F8: lea     eax, [ebp+7Ch]
0x7EF7FB: push    eax
0x7EF7FC: mov     ecx, esi
0x7EF7FE: call    sub_7EF980
0x7EF803: mov     edx, [ebp+38h]
0x7EF806: lea     ecx, [esp+28h+var_14]
0x7EF80A: push    ecx
0x7EF80B: push    edx
0x7EF80C: lea     ecx, [ebp+40h]
0x7EF80F: call    sub_76CE40
0x7EF814: add     dword ptr [ebp+38h], 1
0x7EF818: or      esi, 0FFFFFFFFh
0x7EF81B: test    ebx, ebx
0x7EF81D: mov     byte ptr [esp+28h+var_4], 0
0x7EF822: jz      short loc_7EF830
0x7EF824: add     [ebx+5Ch], esi
0x7EF827: jnz     short loc_7EF830
0x7EF829: mov     ecx, ebx
0x7EF82B: call    sub_772560
0x7EF830: test    edi, edi
0x7EF832: mov     [esp+28h+var_4], esi
0x7EF836: jz      short loc_7EF844
0x7EF838: add     [edi+60h], esi
0x7EF83B: jnz     short loc_7EF844
0x7EF83D: mov     ecx, edi
0x7EF83F: call    sub_7604D0
0x7EF844: xor     eax, eax
0x7EF846: mov     ecx, [esp+28h+var_C]
0x7EF84A: mov     large fs:0, ecx
0x7EF851: pop     ecx
0x7EF852: pop     edi
0x7EF853: pop     esi
0x7EF854: pop     ebp
0x7EF855: pop     ebx
0x7EF856: add     esp, 14h
0x7EF859: retn    1Ch
0x7EF85C: mov     eax, ds:0B466E4h
0x7EF861: push    eax
0x7EF862: jmp     loc_7EF7C4
