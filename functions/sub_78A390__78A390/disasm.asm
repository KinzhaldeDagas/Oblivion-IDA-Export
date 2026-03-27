0x78A390: sub     esp, 0Ch
0x78A393: push    esi
0x78A394: mov     esi, ecx
0x78A396: mov     eax, [esi+60h]
0x78A399: test    eax, eax
0x78A39B: jz      loc_78A715
0x78A3A1: mov     edx, [eax+6Ch]
0x78A3A4: test    edx, edx
0x78A3A6: push    ebx
0x78A3A7: mov     ebx, [esp+14h+Src]
0x78A3AB: jnz     short loc_78A3B1
0x78A3AD: xor     ecx, ecx
0x78A3AF: jmp     short loc_78A3B9
0x78A3B1: mov     ecx, [eax+70h]
0x78A3B4: sub     ecx, edx
0x78A3B6: sar     ecx, 2
0x78A3B9: mov     eax, 0AAAAAAABh
0x78A3BE: mul     ecx
0x78A3C0: shr     edx, 1
0x78A3C2: mov     [ebx+4Ch], dx
0x78A3C6: push    edi
0x78A3C7: mov     edi, [esi+60h]
0x78A3CA: mov     eax, [edi+5Ch]
0x78A3CD: test    eax, eax
0x78A3CF: jz      short loc_78A3DB
0x78A3D1: mov     ecx, [edi+60h]
0x78A3D4: sub     ecx, eax
0x78A3D6: sar     ecx, 2
0x78A3D9: jnz     short loc_78A3DF
0x78A3DB: xor     edi, edi
0x78A3DD: jmp     short loc_78A3F5
0x78A3DF: test    eax, eax
0x78A3E1: jz      short loc_78A3ED
0x78A3E3: mov     edx, [edi+60h]
0x78A3E6: sub     edx, eax
0x78A3E8: sar     edx, 2
0x78A3EB: jnz     short loc_78A3F2
0x78A3ED: call    __invalid_parameter_noinfo
0x78A3F2: mov     edi, [edi+5Ch]
0x78A3F5: mov     [ebx+50h], edi
0x78A3F8: mov     edi, [esi+60h]
0x78A3FB: mov     eax, [edi+6Ch]
0x78A3FE: test    eax, eax
0x78A400: jz      short loc_78A40C
0x78A402: mov     ecx, [edi+70h]
0x78A405: sub     ecx, eax
0x78A407: sar     ecx, 2
0x78A40A: jnz     short loc_78A410
0x78A40C: xor     edi, edi
0x78A40E: jmp     short loc_78A426
0x78A410: test    eax, eax
0x78A412: jz      short loc_78A41E
0x78A414: mov     edx, [edi+70h]
0x78A417: sub     edx, eax
0x78A419: sar     edx, 2
0x78A41C: jnz     short loc_78A423
0x78A41E: call    __invalid_parameter_noinfo
0x78A423: mov     edi, [edi+6Ch]
0x78A426: mov     [ebx+60h], edi
0x78A429: mov     edi, [esi+60h]
0x78A42C: mov     eax, [edi+8Ch]
0x78A432: test    eax, eax
0x78A434: jz      short loc_78A443
0x78A436: mov     ecx, [edi+90h]
0x78A43C: sub     ecx, eax
0x78A43E: sar     ecx, 2
0x78A441: jnz     short loc_78A447
0x78A443: xor     edi, edi
0x78A445: jmp     short loc_78A463
0x78A447: test    eax, eax
0x78A449: jz      short loc_78A458
0x78A44B: mov     edx, [edi+90h]
0x78A451: sub     edx, eax
0x78A453: sar     edx, 2
0x78A456: jnz     short loc_78A45D
0x78A458: call    __invalid_parameter_noinfo
0x78A45D: mov     edi, [edi+8Ch]
0x78A463: mov     [ebx+54h], edi
0x78A466: mov     edi, [esi+60h]
0x78A469: mov     eax, [edi+9Ch]
0x78A46F: test    eax, eax
0x78A471: jz      short loc_78A480
0x78A473: mov     ecx, [edi+0A0h]
0x78A479: sub     ecx, eax
0x78A47B: sar     ecx, 2
0x78A47E: jnz     short loc_78A484
0x78A480: xor     edi, edi
0x78A482: jmp     short loc_78A4A0
0x78A484: test    eax, eax
0x78A486: jz      short loc_78A495
0x78A488: mov     edx, [edi+0A0h]
0x78A48E: sub     edx, eax
0x78A490: sar     edx, 2
0x78A493: jnz     short loc_78A49A
0x78A495: call    __invalid_parameter_noinfo
0x78A49A: mov     edi, [edi+9Ch]
0x78A4A0: mov     [ebx+58h], edi
0x78A4A3: mov     edi, [esi+60h]
0x78A4A6: mov     eax, [edi+0ACh]
0x78A4AC: test    eax, eax
0x78A4AE: jz      short loc_78A4BD
0x78A4B0: mov     ecx, [edi+0B0h]
0x78A4B6: sub     ecx, eax
0x78A4B8: sar     ecx, 2
0x78A4BB: jnz     short loc_78A4C1
0x78A4BD: xor     edi, edi
0x78A4BF: jmp     short loc_78A4DD
0x78A4C1: test    eax, eax
0x78A4C3: jz      short loc_78A4D2
0x78A4C5: mov     edx, [edi+0B0h]
0x78A4CB: sub     edx, eax
0x78A4CD: sar     edx, 2
0x78A4D0: jnz     short loc_78A4D7
0x78A4D2: call    __invalid_parameter_noinfo
0x78A4D7: mov     edi, [edi+0ACh]
0x78A4DD: mov     [ebx+5Ch], edi
0x78A4E0: mov     edi, [esi+60h]
0x78A4E3: mov     eax, [edi+0BCh]
0x78A4E9: test    eax, eax
0x78A4EB: jz      short loc_78A4FA
0x78A4ED: mov     ecx, [edi+0C0h]
0x78A4F3: sub     ecx, eax
0x78A4F5: sar     ecx, 2
0x78A4F8: jnz     short loc_78A4FE
0x78A4FA: xor     edi, edi
0x78A4FC: jmp     short loc_78A51A
0x78A4FE: test    eax, eax
0x78A500: jz      short loc_78A50F
0x78A502: mov     edx, [edi+0C0h]
0x78A508: sub     edx, eax
0x78A50A: sar     edx, 2
0x78A50D: jnz     short loc_78A514
0x78A50F: call    __invalid_parameter_noinfo
0x78A514: mov     edi, [edi+0BCh]
0x78A51A: mov     [ebx+64h], edi
0x78A51D: mov     edi, [esi+60h]
0x78A520: mov     eax, [edi+0ECh]
0x78A526: test    eax, eax
0x78A528: jz      short loc_78A537
0x78A52A: mov     ecx, [edi+0F0h]
0x78A530: sub     ecx, eax
0x78A532: sar     ecx, 2
0x78A535: jnz     short loc_78A53B
0x78A537: xor     edi, edi
0x78A539: jmp     short loc_78A557
0x78A53B: test    eax, eax
0x78A53D: jz      short loc_78A54C
0x78A53F: mov     edx, [edi+0F0h]
0x78A545: sub     edx, eax
0x78A547: sar     edx, 2
0x78A54A: jnz     short loc_78A551
0x78A54C: call    __invalid_parameter_noinfo
0x78A551: mov     edi, [edi+0ECh]
0x78A557: mov     [ebx+68h], edi
0x78A55A: mov     edi, [esi+60h]
0x78A55D: mov     eax, [edi+0FCh]
0x78A563: test    eax, eax
0x78A565: jz      short loc_78A574
0x78A567: mov     ecx, [edi+100h]
0x78A56D: sub     ecx, eax
0x78A56F: sar     ecx, 2
0x78A572: jnz     short loc_78A578
0x78A574: xor     edi, edi
0x78A576: jmp     short loc_78A594
0x78A578: test    eax, eax
0x78A57A: jz      short loc_78A589
0x78A57C: mov     edx, [edi+100h]
0x78A582: sub     edx, eax
0x78A584: sar     edx, 2
0x78A587: jnz     short loc_78A58E
0x78A589: call    __invalid_parameter_noinfo
0x78A58E: mov     edi, [edi+0FCh]
0x78A594: mov     [ebx+6Ch], edi
0x78A597: mov     edi, [esi+60h]
0x78A59A: mov     eax, [edi+10Ch]
0x78A5A0: test    eax, eax
0x78A5A2: jz      short loc_78A5AE
0x78A5A4: mov     ecx, [edi+110h]
0x78A5AA: sub     ecx, eax
0x78A5AC: jnz     short loc_78A5B2
0x78A5AE: xor     edi, edi
0x78A5B0: jmp     short loc_78A5CB
0x78A5B2: test    eax, eax
0x78A5B4: jz      short loc_78A5C0
0x78A5B6: mov     edx, [edi+110h]
0x78A5BC: sub     edx, eax
0x78A5BE: jnz     short loc_78A5C5
0x78A5C0: call    __invalid_parameter_noinfo
0x78A5C5: mov     edi, [edi+10Ch]
0x78A5CB: mov     ax, word ptr [esp+18h+MaxCount]
0x78A5D0: cmp     ax, 0FFFFh
0x78A5D4: mov     [ebx+70h], edi
0x78A5D7: jnz     short loc_78A5EA
0x78A5D9: fld     dword ptr ds:0A30634h
0x78A5DF: push    ecx
0x78A5E0: mov     ecx, esi
0x78A5E2: fstp    [esp+1Ch+var_1C]; float
0x78A5E5: call    sub_787C70
0x78A5EA: movzx   edi, ax
0x78A5ED: movsx   eax, di
0x78A5F0: mov     [ebx+3Ch], eax
0x78A5F3: mov     ecx, [esi+60h]
0x78A5F6: push    edi
0x78A5F7: call    sub_7886C0
0x78A5FC: mov     [ebx+40h], ax
0x78A600: mov     ecx, [esi+60h]
0x78A603: push    edi
0x78A604: call    sub_788720
0x78A609: mov     [ebx+44h], eax
0x78A60C: mov     ecx, [esi+60h]
0x78A60F: push    edi
0x78A610: call    sub_7945B0
0x78A615: mov     [ebx+48h], eax
0x78A618: cmp     byte ptr ds:0B4297Ch, 0
0x78A61F: jz      loc_78A6FD
0x78A625: mov     eax, [esi]
0x78A627: fld     dword ptr ds:0A30634h
0x78A62D: mov     cx, [eax+0C0h]
0x78A634: fstp    [esp+18h+var_C]
0x78A638: add     cx, 1
0x78A63C: movzx   edi, cx
0x78A63F: mov     ecx, [esi+34h]
0x78A642: test    ecx, ecx
0x78A644: mov     [esp+18h+Src], 0FFFFFFFFh
0x78A64C: jz      short loc_78A653
0x78A64E: fld     dword ptr [ecx+10h]
0x78A651: jmp     short loc_78A656
0x78A653: fld     dword ptr [eax+14h]
0x78A656: movzx   edx, byte ptr [esi+44h]
0x78A65A: fstp    [esp+18h+MaxCount]
0x78A65E: mov     [esp+18h+var_8], edx
0x78A662: lea     eax, [esp+18h+MaxCount]
0x78A666: push    eax; int
0x78A667: fild    [esp+1Ch+var_8]
0x78A66B: lea     ecx, [esp+1Ch+Src]
0x78A66F: push    ecx; int
0x78A670: lea     edx, [esp+20h+var_4]
0x78A674: fstp    [esp+20h+var_8]
0x78A678: push    edx; int
0x78A679: fld     [esp+24h+var_8]
0x78A67D: lea     eax, [esp+24h+var_C]
0x78A681: push    eax; int
0x78A682: sub     esp, 10h
0x78A685: fstp    [esp+38h+var_2C]; float
0x78A689: fld     dword ptr [esi+20h]
0x78A68C: fstp    [esp+38h+var_30]; float
0x78A690: fld     dword ptr [esi+28h]
0x78A693: fstp    [esp+38h+var_34]; float
0x78A697: fld     dword ptr [esi+1Ch]
0x78A69A: fstp    [esp+38h+var_38]; float
0x78A69D: push    edi; int
0x78A69E: fld     [esp+3Ch+MaxCount]
0x78A6A2: push    ecx
0x78A6A3: fstp    [esp+40h+var_40]; float
0x78A6A6: call    sub_787220
0x78A6AB: movsx   ecx, word ptr [esp+40h+Src]
0x78A6B0: movzx   eax, di
0x78A6B3: lea     edx, [eax-2]
0x78A6B6: add     esp, 28h
0x78A6B9: cmp     ecx, edx
0x78A6BB: jnz     short loc_78A6CD
0x78A6BD: fld     [esp+18h+var_C]
0x78A6C1: pop     edi
0x78A6C2: fstp    dword ptr [ebx+74h]
0x78A6C5: pop     ebx
0x78A6C6: pop     esi
0x78A6C7: add     esp, 0Ch
0x78A6CA: retn    8
0x78A6CD: add     eax, 0FFFFFFFFh
0x78A6D0: cmp     ecx, eax
0x78A6D2: jnz     short loc_78A6ED
0x78A6D4: fld     dword ptr ds:0A40098h
0x78A6DA: pop     edi
0x78A6DB: fstp    dword ptr [ebx+74h]
0x78A6DE: mov     dword ptr [ebx+3Ch], 0FFFFFFFFh
0x78A6E5: pop     ebx
0x78A6E6: pop     esi
0x78A6E7: add     esp, 0Ch
0x78A6EA: retn    8
0x78A6ED: fld     [esp+18h+var_8]
0x78A6F1: pop     edi
0x78A6F2: fstp    dword ptr [ebx+74h]
0x78A6F5: pop     ebx
0x78A6F6: pop     esi
0x78A6F7: add     esp, 0Ch
0x78A6FA: retn    8
0x78A6FD: movzx   eax, byte ptr [esi+44h]
0x78A701: mov     [esp+18h+MaxCount], eax
0x78A705: pop     edi
0x78A706: fild    [esp+14h+MaxCount]
0x78A70A: fstp    dword ptr [ebx+74h]
0x78A70D: pop     ebx
0x78A70E: pop     esi
0x78A70F: add     esp, 0Ch
0x78A712: retn    8
0x78A715: pop     esi
0x78A716: add     esp, 0Ch
0x78A719: mov     [esp+MaxCount], 44h ; 'D'; MaxCount
0x78A721: mov     [esp+Src], offset aNoFrondGeometr; "no frond geometry exists, possible prio"...
0x78A729: mov     ecx, offset dword_B2B614
0x78A72E: jmp     sub_414500
