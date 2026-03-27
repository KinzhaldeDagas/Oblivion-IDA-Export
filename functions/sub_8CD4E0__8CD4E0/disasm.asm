0x8CD4E0: mov     eax, [esp+arg_0]
0x8CD4E4: mov     ecx, [eax+50h]
0x8CD4E7: mov     edx, [ecx]
0x8CD4E9: sub     esp, 0B8h
0x8CD4EF: push    ebx
0x8CD4F0: push    edi
0x8CD4F1: call    dword ptr [edx+8]
0x8CD4F4: mov     ebx, [esp+0C0h+arg_4]
0x8CD4FB: mov     edi, eax
0x8CD4FD: cmp     edi, ebx
0x8CD4FF: jz      loc_8CD9A2
0x8CD505: cmp     ebx, 7
0x8CD508: jz      short loc_8CD513
0x8CD50A: cmp     ebx, 6
0x8CD50D: jz      short loc_8CD513
0x8CD50F: mov     cl, 1
0x8CD511: jmp     short loc_8CD515
0x8CD513: xor     cl, cl
0x8CD515: cmp     edi, 7
0x8CD518: mov     byte ptr [esp+0C0h+var_B4], cl
0x8CD51C: jz      short loc_8CD527
0x8CD51E: cmp     edi, 6
0x8CD521: jz      short loc_8CD527
0x8CD523: mov     al, 1
0x8CD525: jmp     short loc_8CD529
0x8CD527: xor     al, al
0x8CD529: test    cl, cl
0x8CD52B: mov     ecx, [esp+0C0h+arg_0]
0x8CD532: mov     byte ptr [esp+0C0h+var_B8], al
0x8CD536: jz      short loc_8CD54D
0x8CD538: test    al, al
0x8CD53A: jnz     short loc_8CD54D
0x8CD53C: mov     eax, [ecx+50h]
0x8CD53F: mov     edx, [eax+0F0h]
0x8CD545: test    edx, edx
0x8CD547: jz      loc_8CD9A2
0x8CD54D: push    esi
0x8CD54E: call    sub_8BC720
0x8CD553: mov     eax, [esp+0C4h+arg_0]
0x8CD55A: mov     esi, [eax+8]
0x8CD55D: test    esi, esi
0x8CD55F: jz      loc_8CD934
0x8CD565: xor     ecx, ecx
0x8CD567: cmp     edi, 7
0x8CD56A: setz    cl
0x8CD56D: xor     edx, edx
0x8CD56F: cmp     ebx, 7
0x8CD572: setz    dl
0x8CD575: cmp     ecx, edx
0x8CD577: jz      loc_8CD934
0x8CD57D: lea     eax, [esp+0C4h+var_8C]
0x8CD581: mov     [esp+0C4h+var_98], eax
0x8CD585: mov     eax, 80000010h
0x8CD58A: mov     [esp+0C4h+var_90], eax
0x8CD58E: mov     [esp+0C4h+var_44], eax
0x8CD595: mov     eax, [esi+7Ch]
0x8CD598: push    ebp
0x8CD599: xor     ebp, ebp
0x8CD59B: lea     ecx, [esp+0C8h+var_40]
0x8CD5A2: mov     [esp+0C8h+var_4C], ecx
0x8CD5A6: mov     [esp+0C8h+var_94], ebp
0x8CD5AA: mov     [esp+0C8h+var_48], ebp
0x8CD5B1: mov     ecx, [eax+1BF8h]
0x8CD5B7: mov     eax, [eax+1BFCh]
0x8CD5BD: mov     [esp+0C8h+var_9C], ax
0x8CD5C2: movzx   eax, cx
0x8CD5C5: lea     edx, [esp+0C8h+var_A4]
0x8CD5C9: mov     [esp+0C8h+var_9A], cx
0x8CD5CE: lea     ecx, [esp+0C8h+var_98]
0x8CD5D2: mov     [esp+0C8h+var_B0], edx
0x8CD5D6: mov     byte ptr [esi+90h], 1
0x8CD5DD: mov     byte ptr [esi+91h], 0
0x8CD5E4: mov     edx, [esp+0C8h+arg_0]
0x8CD5EB: push    ecx
0x8CD5EC: push    edx
0x8CD5ED: mov     [esp+0D0h+var_AC], ebp
0x8CD5F1: mov     [esp+0D0h+var_A8], 80000001h
0x8CD5F9: mov     [esp+0D0h+var_A0], eax
0x8CD5FD: call    sub_8CB8A0
0x8CD602: add     esp, 8
0x8CD605: cmp     ebx, 7
0x8CD608: jz      short loc_8CD61F
0x8CD60A: mov     ecx, [esp+0C8h+arg_0]
0x8CD611: lea     eax, [esp+0C8h+var_4C]
0x8CD615: push    eax
0x8CD616: push    ecx
0x8CD617: push    esi
0x8CD618: call    sub_8CB740
0x8CD61D: jmp     short loc_8CD632
0x8CD61F: mov     eax, [esp+0C8h+arg_0]
0x8CD626: lea     edx, [esp+0C8h+var_4C]
0x8CD62A: push    edx
0x8CD62B: push    eax
0x8CD62C: push    esi
0x8CD62D: call    sub_8CBEE0
0x8CD632: mov     eax, [esp+0D4h+arg_0]
0x8CD639: mov     edx, [eax+54h]
0x8CD63C: add     esp, 0Ch
0x8CD63F: push    ebx
0x8CD640: lea     ecx, [esp+0CCh+var_B0]
0x8CD644: push    ecx
0x8CD645: push    eax
0x8CD646: add     edx, 44h ; 'D'
0x8CD649: push    edx
0x8CD64A: call    sub_8CB580
0x8CD64F: add     esp, 10h
0x8CD652: cmp     edi, 7
0x8CD655: jz      short loc_8CD66B
0x8CD657: mov     eax, [esp+0C8h+arg_0]
0x8CD65E: mov     eax, [eax+54h]
0x8CD661: cmp     dword ptr [eax+38h], 2
0x8CD665: jle     short loc_8CD66B
0x8CD667: mov     byte ptr [eax+26h], 1
0x8CD66B: mov     ecx, [esp+0C8h+arg_0]
0x8CD672: push    ecx
0x8CD673: push    esi
0x8CD674: call    sub_8CBE90
0x8CD679: mov     edx, [esp+0D0h+var_B8]
0x8CD67D: mov     eax, [esp+0D0h+var_B4]
0x8CD681: mov     ecx, [esp+0D0h+arg_0]
0x8CD688: push    edx
0x8CD689: push    eax
0x8CD68A: push    ebx
0x8CD68B: push    ecx
0x8CD68C: call    sub_8CBC60
0x8CD691: mov     edx, [esp+0E0h+arg_8]
0x8CD698: mov     eax, [esp+0E0h+arg_0]
0x8CD69F: push    edx
0x8CD6A0: push    eax
0x8CD6A1: push    esi
0x8CD6A2: call    sub_8CB640
0x8CD6A7: mov     edx, [esp+0ECh+arg_0]
0x8CD6AE: lea     ecx, [esp+0ECh+var_4C]
0x8CD6B5: push    ecx
0x8CD6B6: push    edx
0x8CD6B7: push    esi
0x8CD6B8: call    sub_8CD380
0x8CD6BD: mov     eax, [esp+0F8h+var_94]
0x8CD6C1: add     esp, 30h
0x8CD6C4: test    eax, eax
0x8CD6C6: mov     byte ptr [esi+91h], 1
0x8CD6CD: jle     loc_8CD75A
0x8CD6D3: mov     eax, [esp+0C8h+var_98]
0x8CD6D7: mov     edi, [eax+ebp*4]
0x8CD6DA: mov     ecx, edi
0x8CD6DC: call    sub_8D9A50
0x8CD6E1: mov     eax, [esi+88h]
0x8CD6E7: test    eax, eax
0x8CD6E9: push    edi
0x8CD6EA: push    esi
0x8CD6EB: jz      short loc_8CD6F7
0x8CD6ED: call    sub_91EF50
0x8CD6F2: add     esp, 8
0x8CD6F5: jmp     short loc_8CD733
0x8CD6F7: mov     dword ptr [esi+88h], 1
0x8CD701: call    sub_91EF50
0x8CD706: mov     eax, [esi+88h]
0x8CD70C: add     esp, 8
0x8CD70F: dec     eax
0x8CD710: mov     [esi+88h], eax
0x8CD716: jnz     short loc_8CD733
0x8CD718: mov     eax, [esi+84h]
0x8CD71E: test    eax, eax
0x8CD720: jz      short loc_8CD733
0x8CD722: mov     al, [esi+90h]
0x8CD728: test    al, al
0x8CD72A: jnz     short loc_8CD733
0x8CD72C: mov     ecx, esi
0x8CD72E: call    sub_899210
0x8CD733: cmp     word ptr [edi+4], 0
0x8CD738: jz      short loc_8CD74D
0x8CD73A: dec     word ptr [edi+6]
0x8CD73E: cmp     word ptr [edi+6], 0
0x8CD743: jnz     short loc_8CD74D
0x8CD745: mov     edx, [edi]
0x8CD747: push    1
0x8CD749: mov     ecx, edi
0x8CD74B: call    dword ptr [edx]
0x8CD74D: mov     eax, [esp+0C8h+var_94]
0x8CD751: inc     ebp
0x8CD752: cmp     ebp, eax
0x8CD754: jl      loc_8CD6D3
0x8CD75A: cmp     ebx, 7
0x8CD75D: mov     edx, [esp+0C8h+arg_0]
0x8CD764: jz      short loc_8CD7B7
0x8CD766: mov     eax, [edx+3Ch]
0x8CD769: lea     ebp, [edx+38h]
0x8CD76C: xor     edi, edi
0x8CD76E: test    eax, eax
0x8CD770: jle     short loc_8CD7B7
0x8CD772: mov     eax, [ebp+0]
0x8CD775: mov     ecx, [eax+edi*8+4]
0x8CD779: mov     eax, [ecx+10h]
0x8CD77C: add     eax, ecx
0x8CD77E: mov     cl, [edx+91h]
0x8CD784: test    cl, cl
0x8CD786: jnz     short loc_8CD7AF
0x8CD788: mov     cl, [eax+91h]
0x8CD78E: test    cl, cl
0x8CD790: jnz     short loc_8CD7AF
0x8CD792: mov     ecx, [edx+54h]
0x8CD795: cmp     ecx, [eax+54h]
0x8CD798: jz      short loc_8CD7AF
0x8CD79A: push    eax
0x8CD79B: push    edx
0x8CD79C: mov     edx, [edx+8]
0x8CD79F: push    edx
0x8CD7A0: call    sub_8CD320
0x8CD7A5: mov     edx, [esp+0D4h+arg_0]
0x8CD7AC: add     esp, 0Ch
0x8CD7AF: mov     eax, [ebp+4]
0x8CD7B2: inc     edi
0x8CD7B3: cmp     edi, eax
0x8CD7B5: jl      short loc_8CD772
0x8CD7B7: mov     ecx, [edx+54h]
0x8CD7BA: lea     eax, [esp+0C8h+var_B0]
0x8CD7BE: push    eax
0x8CD7BF: add     ecx, 44h ; 'D'
0x8CD7C2: push    ecx
0x8CD7C3: call    sub_8E6C30
0x8CD7C8: add     esp, 8
0x8CD7CB: cmp     ebx, 7
0x8CD7CE: pop     ebp
0x8CD7CF: jnz     short loc_8CD83F
0x8CD7D1: mov     edx, [esp+0C4h+arg_0]
0x8CD7D8: mov     eax, [edx+50h]
0x8CD7DB: mov     ecx, [esi+160h]
0x8CD7E1: add     eax, 10h
0x8CD7E4: push    eax; int
0x8CD7E5: push    ecx; float
0x8CD7E6: call    sub_8DD750
0x8CD7EB: mov     ecx, [esi+88h]
0x8CD7F1: push    esi
0x8CD7F2: lea     edx, [esp+0D0h+arg_0]
0x8CD7F9: inc     ecx
0x8CD7FA: push    1
0x8CD7FC: push    edx
0x8CD7FD: mov     [esi+88h], ecx
0x8CD803: call    sub_8D7400
0x8CD808: mov     ecx, [esi+8]
0x8CD80B: mov     eax, [ecx]
0x8CD80D: add     esp, 14h
0x8CD810: push    esi
0x8CD811: push    1
0x8CD813: lea     edx, [esp+0CCh+arg_0]
0x8CD81A: push    edx
0x8CD81B: call    dword ptr [eax+1Ch]
0x8CD81E: mov     eax, [esp+0C4h+arg_0]
0x8CD825: push    eax
0x8CD826: mov     eax, [eax+8]
0x8CD829: push    eax
0x8CD82A: call    sub_8DD030
0x8CD82F: mov     eax, [esi+88h]
0x8CD835: add     esp, 8
0x8CD838: dec     eax
0x8CD839: mov     [esi+88h], eax
0x8CD83F: mov     ecx, [esp+0C4h+arg_C]
0x8CD846: mov     edx, [esp+0C4h+arg_0]
0x8CD84D: push    1
0x8CD84F: push    ecx
0x8CD850: push    edx
0x8CD851: mov     ecx, esi
0x8CD853: call    sub_89B630
0x8CD858: mov     eax, [esi+88h]
0x8CD85E: test    eax, eax
0x8CD860: mov     byte ptr [esi+90h], 0
0x8CD867: jnz     short loc_8CD87A
0x8CD869: mov     eax, [esi+84h]
0x8CD86F: test    eax, eax
0x8CD871: jz      short loc_8CD87A
0x8CD873: mov     ecx, esi
0x8CD875: call    sub_899210
0x8CD87A: mov     eax, [esp+0C4h+var_A8]
0x8CD87E: test    eax, eax
0x8CD880: mov     esi, ds:0BA9DE4h
0x8CD886: mov     edi, large fs:2Ch
0x8CD88D: js      short loc_8CD8B7
0x8CD88F: mov     ecx, [edi+esi*4]
0x8CD892: mov     ecx, [ecx+19Ch]
0x8CD898: test    ecx, ecx
0x8CD89A: jnz     short loc_8CD8A2
0x8CD89C: mov     ecx, ds:0BA7D9Ch
0x8CD8A2: mov     edx, [esp+0C4h+var_B0]
0x8CD8A6: and     eax, 3FFFFFFFh
0x8CD8AB: push    14h
0x8CD8AD: shl     eax, 2
0x8CD8B0: push    eax
0x8CD8B1: push    edx
0x8CD8B2: call    sub_8A75D0
0x8CD8B7: mov     eax, [esp+0C4h+var_44]
0x8CD8BE: test    eax, eax
0x8CD8C0: js      short loc_8CD8EA
0x8CD8C2: mov     ecx, [edi+esi*4]
0x8CD8C5: mov     ecx, [ecx+19Ch]
0x8CD8CB: test    ecx, ecx
0x8CD8CD: jnz     short loc_8CD8D5
0x8CD8CF: mov     ecx, ds:0BA7D9Ch
0x8CD8D5: mov     edx, [esp+0C4h+var_4C]
0x8CD8D9: and     eax, 3FFFFFFFh
0x8CD8DE: push    14h
0x8CD8E0: shl     eax, 2
0x8CD8E3: push    eax
0x8CD8E4: push    edx
0x8CD8E5: call    sub_8A75D0
0x8CD8EA: mov     eax, [esp+0C4h+var_90]
0x8CD8EE: test    eax, eax
0x8CD8F0: js      loc_8CD995
0x8CD8F6: mov     ecx, [edi+esi*4]
0x8CD8F9: mov     ecx, [ecx+19Ch]
0x8CD8FF: test    ecx, ecx
0x8CD901: jnz     short loc_8CD909
0x8CD903: mov     ecx, ds:0BA7D9Ch
0x8CD909: mov     edx, [esp+0C4h+var_98]
0x8CD90D: and     eax, 3FFFFFFFh
0x8CD912: push    14h
0x8CD914: shl     eax, 2
0x8CD917: push    eax
0x8CD918: push    edx
0x8CD919: call    sub_8A75D0
0x8CD91E: mov     ecx, [esp+0C4h+arg_0]
0x8CD925: call    sub_8BC730
0x8CD92A: pop     esi
0x8CD92B: pop     edi
0x8CD92C: pop     ebx
0x8CD92D: add     esp, 0B8h
0x8CD933: retn
0x8CD934: mov     ecx, [esp+0C4h+var_B8]
0x8CD938: mov     edx, [esp+0C4h+var_B4]
0x8CD93C: push    ecx
0x8CD93D: push    edx
0x8CD93E: push    ebx
0x8CD93F: push    eax
0x8CD940: call    sub_8CBC60
0x8CD945: add     esp, 10h
0x8CD948: test    esi, esi
0x8CD94A: jz      short loc_8CD995
0x8CD94C: cmp     dword ptr [esi+0B4h], 4
0x8CD953: mov     byte ptr [esi+91h], 0
0x8CD95A: jl      short loc_8CD975
0x8CD95C: cmp     ebx, 6
0x8CD95F: jnz     short loc_8CD975
0x8CD961: mov     eax, [esp+0C4h+arg_0]
0x8CD968: mov     ecx, [esi+8]
0x8CD96B: push    eax
0x8CD96C: push    ecx
0x8CD96D: call    sub_8CC4E0
0x8CD972: add     esp, 8
0x8CD975: mov     edx, [esp+0C4h+arg_C]
0x8CD97C: push    1
0x8CD97E: mov     byte ptr [esi+91h], 1
0x8CD985: mov     eax, [esp+0C8h+arg_0]
0x8CD98C: push    edx
0x8CD98D: push    eax
0x8CD98E: mov     ecx, esi
0x8CD990: call    sub_89B630
0x8CD995: mov     ecx, [esp+0C4h+arg_0]
0x8CD99C: call    sub_8BC730
0x8CD9A1: pop     esi
0x8CD9A2: pop     edi
0x8CD9A3: pop     ebx
0x8CD9A4: add     esp, 0B8h
0x8CD9AA: retn
