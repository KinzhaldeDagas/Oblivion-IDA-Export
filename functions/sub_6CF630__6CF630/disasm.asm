0x6CF630: sub     esp, 40h
0x6CF633: push    ebx
0x6CF634: mov     ebx, ecx
0x6CF636: test    byte ptr [ebx+0Ch], 1
0x6CF63A: jz      short loc_6CF643
0x6CF63C: fld     dword ptr [ebx+20h]
0x6CF63F: fstp    [esp+44h+arg_0]
0x6CF643: fld     [esp+44h+arg_0]
0x6CF647: fld     st
0x6CF649: fld     dword ptr ds:0A79F00h
0x6CF64F: fucompp
0x6CF651: fnstsw  ax
0x6CF653: test    ah, 44h
0x6CF656: jp      short loc_6CF663
0x6CF658: fstp    st
0x6CF65A: xor     al, al
0x6CF65C: pop     ebx
0x6CF65D: add     esp, 40h
0x6CF660: retn    0Ch
0x6CF663: mov     eax, [esp+44h+arg_4]
0x6CF667: push    ebp
0x6CF668: push    esi
0x6CF669: push    edi
0x6CF66A: push    eax; int
0x6CF66B: push    ecx
0x6CF66C: fstp    [esp+58h+var_58]; float
0x6CF66F: call    sub_6CEE20
0x6CF674: cmp     byte ptr [ebx+54h], 0
0x6CF678: jnz     short loc_6CF68C
0x6CF67A: lea     ebp, [ebx+30h]
0x6CF67D: mov     ecx, ebp
0x6CF67F: call    sub_6CBC10
0x6CF684: test    al, al
0x6CF686: jz      loc_6CF726
0x6CF68C: mov     eax, ds:0B24268h
0x6CF691: fld     dword ptr ds:0A79E10h
0x6CF697: mov     ecx, ds:0B24260h
0x6CF69D: fstp    [esp+50h+var_24]
0x6CF6A1: mov     edx, ds:0B24264h
0x6CF6A7: mov     [esp+50h+var_38], eax
0x6CF6AB: mov     eax, ds:0B3CBACh
0x6CF6B0: mov     [esp+50h+var_2C], eax
0x6CF6B4: movzx   eax, byte ptr [ebx+0Fh]
0x6CF6B8: mov     [esp+50h+var_40], ecx
0x6CF6BC: imul    eax, 68h ; 'h'
0x6CF6BF: mov     ecx, ds:0B3CBA4h
0x6CF6C5: mov     [esp+50h+var_34], ecx
0x6CF6C9: mov     ecx, ds:0B3CBB0h
0x6CF6CF: mov     [esp+50h+var_3C], edx
0x6CF6D3: mov     edx, ds:0B3CBA8h
0x6CF6D9: mov     [esp+50h+var_28], ecx
0x6CF6DD: mov     ecx, [ebx+50h]
0x6CF6E0: mov     [esp+50h+var_30], edx
0x6CF6E4: lea     edx, [esp+50h+var_40]
0x6CF6E8: push    edx
0x6CF6E9: lea     ecx, [eax+ecx+4]
0x6CF6ED: call    sub_6CB4D0
0x6CF6F2: lea     ebp, [ebx+30h]
0x6CF6F5: mov     ecx, ebp
0x6CF6F7: call    sub_6CBC10
0x6CF6FC: test    al, al
0x6CF6FE: jz      short loc_6CF706
0x6CF700: lea     esi, [esp+50h+var_40]
0x6CF704: jmp     short loc_6CF719
0x6CF706: lea     edx, [esp+50h+var_40]
0x6CF70A: push    edx
0x6CF70B: lea     eax, [esp+54h+var_20]
0x6CF70F: push    eax
0x6CF710: mov     ecx, ebp
0x6CF712: call    sub_6CB640
0x6CF717: mov     esi, eax
0x6CF719: mov     ecx, 8
0x6CF71E: mov     edi, ebp
0x6CF720: rep movsd
0x6CF722: mov     byte ptr [ebx+54h], 0
0x6CF726: mov     ecx, ebp
0x6CF728: call    sub_6CBC10
0x6CF72D: test    al, al
0x6CF72F: jz      short loc_6CF73D
0x6CF731: pop     edi
0x6CF732: pop     esi
0x6CF733: pop     ebp
0x6CF734: xor     al, al
0x6CF736: pop     ebx
0x6CF737: add     esp, 40h
0x6CF73A: retn    0Ch
0x6CF73D: movzx   ecx, byte ptr [ebx+0Fh]
0x6CF741: mov     edx, [ebx+50h]
0x6CF744: imul    ecx, 68h ; 'h'
0x6CF747: lea     eax, [ecx+edx+4]
0x6CF74B: push    eax
0x6CF74C: lea     ecx, [esp+54h+var_20]
0x6CF750: push    ecx
0x6CF751: mov     ecx, ebp
0x6CF753: call    sub_6CB640
0x6CF758: mov     edi, [esp+50h+arg_8]
0x6CF75C: mov     esi, eax
0x6CF75E: mov     ecx, 8
0x6CF763: rep movsd
0x6CF765: pop     edi
0x6CF766: pop     esi
0x6CF767: pop     ebp
0x6CF768: mov     al, 1
0x6CF76A: pop     ebx
0x6CF76B: add     esp, 40h
0x6CF76E: retn    0Ch
