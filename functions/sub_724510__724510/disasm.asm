0x724510: sub     esp, 34h
0x724513: push    esi
0x724514: push    edi
0x724515: mov     esi, ecx
0x724517: xor     edi, edi
0x724519: cmp     [esi+0B6h], di
0x724520: jbe     short loc_72458F
0x724522: push    ebx
0x724523: mov     eax, [esi+0B0h]
0x724529: mov     ebx, [eax+edi*4]
0x72452C: test    ebx, ebx
0x72452E: jz      short loc_724580
0x724530: mov     ecx, [esi+0F0h]
0x724536: mov     edx, [ecx+edi*4]
0x724539: cmp     edx, [esi+0E8h]
0x72453F: lea     eax, [esi+0E8h]
0x724545: jz      short loc_724577
0x724547: push    eax
0x724548: push    edi
0x724549: lea     ecx, [esi+0ECh]
0x72454F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x724554: fld     dword ptr [esi+0E4h]
0x72455A: movzx   ecx, byte ptr [esi+0DCh]
0x724561: mov     eax, [ebx]
0x724563: mov     edx, [eax+60h]
0x724566: shr     cl, 1
0x724568: and     ecx, 0FFFFFF01h
0x72456E: push    ecx
0x72456F: push    ecx
0x724570: mov     ecx, ebx
0x724572: fstp    [esp+48h+var_48]
0x724575: call    edx
0x724577: mov     eax, [ebx]
0x724579: mov     edx, [eax+50h]
0x72457C: mov     ecx, ebx
0x72457E: call    edx
0x724580: movzx   eax, word ptr [esi+0B6h]
0x724587: add     edi, 1
0x72458A: cmp     edi, eax
0x72458C: jb      short loc_724523
0x72458E: pop     ebx
0x72458F: lea     ecx, [esp+3Ch+var_34]
0x724593: push    ecx
0x724594: lea     ecx, [esi+64h]
0x724597: call    sub_718A80
0x72459C: lea     edx, [esp+3Ch+var_34]
0x7245A0: push    edx
0x7245A1: lea     eax, [esi+20h]
0x7245A4: push    eax
0x7245A5: lea     ecx, [esi+0CCh]
0x7245AB: call    sub_72A820
0x7245B0: pop     edi
0x7245B1: pop     esi
0x7245B2: add     esp, 34h
0x7245B5: retn
