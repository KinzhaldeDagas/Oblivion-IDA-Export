0x8CC570: push    ebp
0x8CC571: mov     ebp, esp
0x8CC573: and     esp, 0FFFFFFF0h
0x8CC576: sub     esp, 54h
0x8CC579: push    ebx
0x8CC57A: mov     ebx, [ebp+arg_0]
0x8CC57D: mov     eax, [ebx+88h]
0x8CC583: xor     edx, edx
0x8CC585: push    esi
0x8CC586: cmp     eax, edx
0x8CC588: mov     eax, [ebp+arg_4]
0x8CC58B: push    edi
0x8CC58C: jz      short loc_8CC5AA
0x8CC58E: lea     ecx, [esp+60h+var_48]
0x8CC592: push    ecx
0x8CC593: mov     ecx, ebx
0x8CC595: mov     byte ptr [esp+64h+var_48], 3
0x8CC59A: mov     [esp+64h+var_44], eax
0x8CC59E: call    sub_898820
0x8CC5A3: pop     edi
0x8CC5A4: pop     esi
0x8CC5A5: pop     ebx
0x8CC5A6: mov     esp, ebp
0x8CC5A8: pop     ebp
0x8CC5A9: retn
0x8CC5AA: mov     eax, [eax+14h]
0x8CC5AD: cmp     eax, edx
0x8CC5AF: mov     dword ptr [ebx+88h], 1
0x8CC5B9: jz      loc_8CC7C8
0x8CC5BF: mov     ecx, ds:0BA9DE4h
0x8CC5C5: mov     eax, large fs:2Ch
0x8CC5CB: mov     eax, [eax+ecx*4]
0x8CC5CE: mov     ecx, [eax+19Ch]
0x8CC5D4: cmp     ecx, edx
0x8CC5D6: mov     esi, [ebx+2A4h]
0x8CC5DC: mov     [esp+60h+var_30], edx
0x8CC5E0: mov     [esp+60h+var_2C], edx
0x8CC5E4: mov     [esp+60h+var_28], 80000000h
0x8CC5EC: mov     [esp+60h+var_4C], eax
0x8CC5F0: jnz     short loc_8CC5F8
0x8CC5F2: mov     ecx, ds:0BA7D9Ch
0x8CC5F8: mov     edx, [ecx+20h]
0x8CC5FB: lea     eax, ds:10h[esi*8]
0x8CC602: and     eax, 0FFFFFFF0h
0x8CC605: lea     edi, [edx+eax]
0x8CC608: cmp     edi, [ecx+2Ch]
0x8CC60B: ja      short loc_8CC614
0x8CC60D: mov     [ecx+20h], edi
0x8CC610: mov     eax, edx
0x8CC612: jmp     short loc_8CC61A
0x8CC614: mov     edx, [ecx]
0x8CC616: push    eax
0x8CC617: call    dword ptr [edx+0Ch]
0x8CC61A: mov     ecx, [esp+60h+var_4C]
0x8CC61E: mov     ecx, [ecx+19Ch]
0x8CC624: or      esi, 80000000h
0x8CC62A: mov     [esp+60h+var_30], eax
0x8CC62E: mov     [esp+60h+var_24], eax
0x8CC632: xor     eax, eax
0x8CC634: cmp     ecx, eax
0x8CC636: mov     [esp+60h+var_28], esi
0x8CC63A: mov     esi, [ebx+2A4h]
0x8CC640: mov     [esp+60h+var_40], eax
0x8CC644: mov     [esp+60h+var_3C], eax
0x8CC648: mov     [esp+60h+var_38], 80000000h
0x8CC650: jnz     short loc_8CC658
0x8CC652: mov     ecx, ds:0BA7D9Ch
0x8CC658: mov     eax, [ecx+20h]
0x8CC65B: lea     edx, ds:10h[esi*8]
0x8CC662: and     edx, 0FFFFFFF0h
0x8CC665: lea     edi, [eax+edx]
0x8CC668: cmp     edi, [ecx+2Ch]
0x8CC66B: ja      short loc_8CC672
0x8CC66D: mov     [ecx+20h], edi
0x8CC670: jmp     short loc_8CC678
0x8CC672: mov     eax, [ecx]
0x8CC674: push    edx
0x8CC675: call    dword ptr [eax+0Ch]
0x8CC678: mov     [esp+60h+var_40], eax
0x8CC67C: mov     [esp+60h+var_34], eax
0x8CC680: lea     eax, [esp+60h+var_20]
0x8CC684: push    eax
0x8CC685: mov     eax, [ebx+74h]
0x8CC688: or      esi, 80000000h
0x8CC68E: mov     [esp+64h+var_38], esi
0x8CC692: fld     dword ptr [eax+8]
0x8CC695: mov     esi, [ebp+arg_4]
0x8CC698: fmul    dword ptr ds:0A3D65Ch
0x8CC69E: mov     ecx, [esi+14h]
0x8CC6A1: mov     eax, [esi+1Ch]
0x8CC6A4: mov     edx, [ecx]
0x8CC6A6: push    ecx
0x8CC6A7: fstp    [esp+68h+var_68]
0x8CC6AA: push    eax
0x8CC6AB: call    dword ptr [edx+0Ch]
0x8CC6AE: mov     ecx, [ebx+64h]
0x8CC6B1: lea     eax, [esp+60h+var_40]
0x8CC6B5: push    eax
0x8CC6B6: lea     eax, [esp+64h+var_30]
0x8CC6BA: push    eax
0x8CC6BB: push    1
0x8CC6BD: lea     eax, [esp+6Ch+var_20]
0x8CC6C1: push    eax
0x8CC6C2: add     esi, 28h ; '('
0x8CC6C5: lea     eax, [esp+70h+var_48]
0x8CC6C9: mov     [esp+70h+var_48], esi
0x8CC6CD: mov     edx, [ecx]
0x8CC6CF: push    eax
0x8CC6D0: call    dword ptr [edx+18h]
0x8CC6D3: mov     ecx, [esp+60h+var_2C]
0x8CC6D7: mov     edx, [esp+60h+var_3C]
0x8CC6DB: add     edx, ecx
0x8CC6DD: test    edx, edx
0x8CC6DF: jle     short loc_8CC726
0x8CC6E1: lea     eax, [esp+60h+var_40]
0x8CC6E5: push    eax
0x8CC6E6: lea     ecx, [esp+64h+var_30]
0x8CC6EA: push    ecx
0x8CC6EB: call    sub_8D84F0
0x8CC6F0: mov     edx, [esp+68h+var_3C]
0x8CC6F4: mov     eax, [esp+68h+var_40]
0x8CC6F8: mov     ecx, [ebx+68h]
0x8CC6FB: add     esp, 8
0x8CC6FE: push    edx
0x8CC6FF: push    eax
0x8CC700: call    sub_8D83E0
0x8CC705: mov     eax, [ebx+78h]
0x8CC708: test    eax, eax
0x8CC70A: jz      short loc_8CC711
0x8CC70C: add     eax, 8
0x8CC70F: jmp     short loc_8CC713
0x8CC711: xor     eax, eax
0x8CC713: mov     ecx, [esp+60h+var_2C]
0x8CC717: mov     edx, [esp+60h+var_30]
0x8CC71B: push    eax
0x8CC71C: push    ecx
0x8CC71D: mov     ecx, [ebx+68h]
0x8CC720: push    edx
0x8CC721: call    sub_8D8370
0x8CC726: mov     esi, [esp+60h+var_4C]
0x8CC72A: mov     ecx, [esi+19Ch]
0x8CC730: test    ecx, ecx
0x8CC732: mov     eax, [esp+60h+var_34]
0x8CC736: jnz     short loc_8CC73E
0x8CC738: mov     ecx, ds:0BA7D9Ch
0x8CC73E: cmp     eax, [ecx+28h]
0x8CC741: mov     [ecx+20h], eax
0x8CC744: jnz     short loc_8CC74C
0x8CC746: mov     edx, [ecx]
0x8CC748: push    eax
0x8CC749: call    dword ptr [edx+10h]
0x8CC74C: mov     eax, [esp+60h+var_38]
0x8CC750: test    eax, eax
0x8CC752: js      short loc_8CC779
0x8CC754: mov     ecx, [esi+19Ch]
0x8CC75A: test    ecx, ecx
0x8CC75C: jnz     short loc_8CC764
0x8CC75E: mov     ecx, ds:0BA7D9Ch
0x8CC764: and     eax, 3FFFFFFFh
0x8CC769: push    14h
0x8CC76B: shl     eax, 3
0x8CC76E: push    eax
0x8CC76F: mov     eax, [esp+68h+var_40]
0x8CC773: push    eax
0x8CC774: call    sub_8A75D0
0x8CC779: mov     ecx, [esi+19Ch]
0x8CC77F: test    ecx, ecx
0x8CC781: mov     eax, [esp+60h+var_24]
0x8CC785: jnz     short loc_8CC78D
0x8CC787: mov     ecx, ds:0BA7D9Ch
0x8CC78D: cmp     eax, [ecx+28h]
0x8CC790: mov     [ecx+20h], eax
0x8CC793: jnz     short loc_8CC79B
0x8CC795: mov     edx, [ecx]
0x8CC797: push    eax
0x8CC798: call    dword ptr [edx+10h]
0x8CC79B: mov     eax, [esp+60h+var_28]
0x8CC79F: test    eax, eax
0x8CC7A1: js      short loc_8CC7C8
0x8CC7A3: mov     ecx, [esi+19Ch]
0x8CC7A9: test    ecx, ecx
0x8CC7AB: jnz     short loc_8CC7B3
0x8CC7AD: mov     ecx, ds:0BA7D9Ch
0x8CC7B3: and     eax, 3FFFFFFFh
0x8CC7B8: push    14h
0x8CC7BA: shl     eax, 3
0x8CC7BD: push    eax
0x8CC7BE: mov     eax, [esp+68h+var_30]
0x8CC7C2: push    eax
0x8CC7C3: call    sub_8A75D0
0x8CC7C8: dec     dword ptr [ebx+88h]
0x8CC7CE: jnz     short loc_8CC7EB
0x8CC7D0: mov     eax, [ebx+84h]
0x8CC7D6: test    eax, eax
0x8CC7D8: jz      short loc_8CC7EB
0x8CC7DA: mov     al, [ebx+90h]
0x8CC7E0: test    al, al
0x8CC7E2: jnz     short loc_8CC7EB
0x8CC7E4: mov     ecx, ebx
0x8CC7E6: call    sub_899210
0x8CC7EB: pop     edi
0x8CC7EC: pop     esi
0x8CC7ED: pop     ebx
0x8CC7EE: mov     esp, ebp
0x8CC7F0: pop     ebp
0x8CC7F1: retn
