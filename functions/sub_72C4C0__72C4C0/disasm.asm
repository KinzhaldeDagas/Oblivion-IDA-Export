0x72C4C0: push    ecx
0x72C4C1: mov     edx, [esp+4+arg_0]
0x72C4C5: push    ebp
0x72C4C6: mov     ebp, ecx
0x72C4C8: push    edi
0x72C4C9: movzx   edi, word ptr [ebp+1Ch]
0x72C4CD: cmp     di, [edx+1Ch]
0x72C4D1: mov     [esp+0Ch+var_4], ebp
0x72C4D5: jz      short loc_72C4DF
0x72C4D7: pop     edi
0x72C4D8: xor     al, al
0x72C4DA: pop     ebp
0x72C4DB: pop     ecx
0x72C4DC: retn    4
0x72C4DF: movzx   eax, word ptr [ebp+1Eh]
0x72C4E3: cmp     ax, [edx+1Eh]
0x72C4E7: jnz     short loc_72C4D7
0x72C4E9: movzx   eax, word ptr [ebp+20h]
0x72C4ED: cmp     ax, [edx+20h]
0x72C4F1: jnz     short loc_72C4D7
0x72C4F3: movzx   ecx, word ptr [ebp+22h]
0x72C4F7: cmp     cx, [edx+22h]
0x72C4FB: jnz     short loc_72C4D7
0x72C4FD: push    ebx
0x72C4FE: movzx   ebx, word ptr [ebp+24h]
0x72C502: cmp     bx, [edx+24h]
0x72C506: jz      short loc_72C511
0x72C508: pop     ebx
0x72C509: pop     edi
0x72C50A: xor     al, al
0x72C50C: pop     ebp
0x72C50D: pop     ecx
0x72C50E: retn    4
0x72C511: mov     ecx, [edx+4]
0x72C514: mov     edx, [ebp+4]
0x72C517: movzx   eax, ax
0x72C51A: add     eax, eax
0x72C51C: cmp     eax, 4
0x72C51F: push    esi
0x72C520: jb      short loc_72C536
0x72C522: mov     esi, [edx]
0x72C524: cmp     esi, [ecx]
0x72C526: jnz     short loc_72C53A
0x72C528: sub     eax, 4
0x72C52B: add     ecx, 4
0x72C52E: add     edx, 4
0x72C531: cmp     eax, 4
0x72C534: jnb     short loc_72C522
0x72C536: test    eax, eax
0x72C538: jz      short loc_72C59F
0x72C53A: movzx   ebp, byte ptr [ecx]
0x72C53D: movzx   esi, byte ptr [edx]
0x72C540: sub     esi, ebp
0x72C542: jnz     short loc_72C589
0x72C544: sub     eax, 1
0x72C547: add     ecx, 1
0x72C54A: add     edx, 1
0x72C54D: test    eax, eax
0x72C54F: jz      short loc_72C59B
0x72C551: movzx   ebp, byte ptr [ecx]
0x72C554: movzx   esi, byte ptr [edx]
0x72C557: sub     esi, ebp
0x72C559: jnz     short loc_72C589
0x72C55B: sub     eax, 1
0x72C55E: add     ecx, 1
0x72C561: add     edx, 1
0x72C564: test    eax, eax
0x72C566: jz      short loc_72C59B
0x72C568: movzx   ebp, byte ptr [ecx]
0x72C56B: movzx   esi, byte ptr [edx]
0x72C56E: sub     esi, ebp
0x72C570: jnz     short loc_72C589
0x72C572: sub     eax, 1
0x72C575: add     ecx, 1
0x72C578: add     edx, 1
0x72C57B: test    eax, eax
0x72C57D: jz      short loc_72C59B
0x72C57F: movzx   eax, byte ptr [ecx]
0x72C582: movzx   esi, byte ptr [edx]
0x72C585: sub     esi, eax
0x72C587: jz      short loc_72C59B
0x72C589: test    esi, esi
0x72C58B: mov     ebp, [esp+14h+var_4]
0x72C58F: mov     eax, 1
0x72C594: jg      short loc_72C5A1
0x72C596: or      eax, 0FFFFFFFFh
0x72C599: jmp     short loc_72C5A1
0x72C59B: mov     ebp, [esp+14h+var_4]
0x72C59F: xor     eax, eax
0x72C5A1: test    eax, eax
0x72C5A3: jnz     loc_72C78F
0x72C5A9: mov     ecx, [esp+14h+arg_0]
0x72C5AD: mov     ecx, [ecx+0Ch]
0x72C5B0: mov     edx, [ebp+0Ch]
0x72C5B3: movzx   edi, di
0x72C5B6: lea     eax, [edi+edi]
0x72C5B9: cmp     eax, 4
0x72C5BC: jb      short loc_72C5D4
0x72C5BE: mov     edi, edi
0x72C5C0: mov     esi, [edx]
0x72C5C2: cmp     esi, [ecx]
0x72C5C4: jnz     short loc_72C5D8
0x72C5C6: sub     eax, 4
0x72C5C9: add     ecx, 4
0x72C5CC: add     edx, 4
0x72C5CF: cmp     eax, 4
0x72C5D2: jnb     short loc_72C5C0
0x72C5D4: test    eax, eax
0x72C5D6: jz      short loc_72C63D
0x72C5D8: movzx   esi, byte ptr [edx]
0x72C5DB: movzx   ebp, byte ptr [ecx]
0x72C5DE: sub     esi, ebp
0x72C5E0: jnz     short loc_72C627
0x72C5E2: sub     eax, 1
0x72C5E5: add     ecx, 1
0x72C5E8: add     edx, 1
0x72C5EB: test    eax, eax
0x72C5ED: jz      short loc_72C639
0x72C5EF: movzx   esi, byte ptr [edx]
0x72C5F2: movzx   ebp, byte ptr [ecx]
0x72C5F5: sub     esi, ebp
0x72C5F7: jnz     short loc_72C627
0x72C5F9: sub     eax, 1
0x72C5FC: add     ecx, 1
0x72C5FF: add     edx, 1
0x72C602: test    eax, eax
0x72C604: jz      short loc_72C639
0x72C606: movzx   esi, byte ptr [edx]
0x72C609: movzx   ebp, byte ptr [ecx]
0x72C60C: sub     esi, ebp
0x72C60E: jnz     short loc_72C627
0x72C610: sub     eax, 1
0x72C613: add     ecx, 1
0x72C616: add     edx, 1
0x72C619: test    eax, eax
0x72C61B: jz      short loc_72C639
0x72C61D: movzx   esi, byte ptr [edx]
0x72C620: movzx   edx, byte ptr [ecx]
0x72C623: sub     esi, edx
0x72C625: jz      short loc_72C639
0x72C627: test    esi, esi
0x72C629: mov     ebp, [esp+14h+var_4]
0x72C62D: mov     eax, 1
0x72C632: jg      short loc_72C63F
0x72C634: or      eax, 0FFFFFFFFh
0x72C637: jmp     short loc_72C63F
0x72C639: mov     ebp, [esp+14h+var_4]
0x72C63D: xor     eax, eax
0x72C63F: test    eax, eax
0x72C641: jnz     loc_72C78F
0x72C647: mov     ecx, [esp+14h+arg_0]
0x72C64B: mov     ecx, [ecx+8]
0x72C64E: mov     edx, [ebp+8]
0x72C651: movzx   eax, bx
0x72C654: imul    eax, edi
0x72C657: mov     [esp+14h+var_4], eax
0x72C65B: add     eax, eax
0x72C65D: add     eax, eax
0x72C65F: cmp     eax, 4
0x72C662: jb      short loc_72C678
0x72C664: mov     esi, [edx]
0x72C666: cmp     esi, [ecx]
0x72C668: jnz     short loc_72C67C
0x72C66A: sub     eax, 4
0x72C66D: add     ecx, 4
0x72C670: add     edx, 4
0x72C673: cmp     eax, 4
0x72C676: jnb     short loc_72C664
0x72C678: test    eax, eax
0x72C67A: jz      short loc_72C6D9
0x72C67C: movzx   edi, byte ptr [ecx]
0x72C67F: movzx   esi, byte ptr [edx]
0x72C682: sub     esi, edi
0x72C684: jnz     short loc_72C6CB
0x72C686: sub     eax, 1
0x72C689: add     ecx, 1
0x72C68C: add     edx, 1
0x72C68F: test    eax, eax
0x72C691: jz      short loc_72C6D9
0x72C693: movzx   edi, byte ptr [ecx]
0x72C696: movzx   esi, byte ptr [edx]
0x72C699: sub     esi, edi
0x72C69B: jnz     short loc_72C6CB
0x72C69D: sub     eax, 1
0x72C6A0: add     ecx, 1
0x72C6A3: add     edx, 1
0x72C6A6: test    eax, eax
0x72C6A8: jz      short loc_72C6D9
0x72C6AA: movzx   edi, byte ptr [ecx]
0x72C6AD: movzx   esi, byte ptr [edx]
0x72C6B0: sub     esi, edi
0x72C6B2: jnz     short loc_72C6CB
0x72C6B4: sub     eax, 1
0x72C6B7: add     ecx, 1
0x72C6BA: add     edx, 1
0x72C6BD: test    eax, eax
0x72C6BF: jz      short loc_72C6D9
0x72C6C1: movzx   eax, byte ptr [ecx]
0x72C6C4: movzx   esi, byte ptr [edx]
0x72C6C7: sub     esi, eax
0x72C6C9: jz      short loc_72C6D9
0x72C6CB: test    esi, esi
0x72C6CD: mov     eax, 1
0x72C6D2: jg      short loc_72C6DB
0x72C6D4: or      eax, 0FFFFFFFFh
0x72C6D7: jmp     short loc_72C6DB
0x72C6D9: xor     eax, eax
0x72C6DB: test    eax, eax
0x72C6DD: jnz     loc_72C78F
0x72C6E3: movzx   eax, word ptr [ebp+22h]
0x72C6E7: test    ax, ax
0x72C6EA: mov     edi, [esp+14h+arg_0]
0x72C6EE: jnz     loc_72C799
0x72C6F4: movzx   eax, word ptr [ebp+1Eh]
0x72C6F8: mov     ecx, [edi+14h]
0x72C6FB: mov     edx, [ebp+14h]
0x72C6FE: movzx   eax, ax
0x72C701: lea     eax, [eax+eax*2]
0x72C704: add     eax, eax
0x72C706: cmp     eax, 4
0x72C709: jb      short loc_72C724
0x72C70B: jmp     short loc_72C710
0x72C70D: align 10h
0x72C710: mov     esi, [edx]
0x72C712: cmp     esi, [ecx]
0x72C714: jnz     short loc_72C728
0x72C716: sub     eax, 4
0x72C719: add     ecx, 4
0x72C71C: add     edx, 4
0x72C71F: cmp     eax, 4
0x72C722: jnb     short loc_72C710
0x72C724: test    eax, eax
0x72C726: jz      short loc_72C785
0x72C728: movzx   esi, byte ptr [edx]
0x72C72B: movzx   ebx, byte ptr [ecx]
0x72C72E: sub     esi, ebx
0x72C730: jnz     short loc_72C777
0x72C732: sub     eax, 1
0x72C735: add     ecx, 1
0x72C738: add     edx, 1
0x72C73B: test    eax, eax
0x72C73D: jz      short loc_72C785
0x72C73F: movzx   esi, byte ptr [edx]
0x72C742: movzx   ebx, byte ptr [ecx]
0x72C745: sub     esi, ebx
0x72C747: jnz     short loc_72C777
0x72C749: sub     eax, 1
0x72C74C: add     ecx, 1
0x72C74F: add     edx, 1
0x72C752: test    eax, eax
0x72C754: jz      short loc_72C785
0x72C756: movzx   esi, byte ptr [edx]
0x72C759: movzx   ebx, byte ptr [ecx]
0x72C75C: sub     esi, ebx
0x72C75E: jnz     short loc_72C777
0x72C760: sub     eax, 1
0x72C763: add     ecx, 1
0x72C766: add     edx, 1
0x72C769: test    eax, eax
0x72C76B: jz      short loc_72C785
0x72C76D: movzx   esi, byte ptr [edx]
0x72C770: movzx   ecx, byte ptr [ecx]
0x72C773: sub     esi, ecx
0x72C775: jz      short loc_72C785
0x72C777: test    esi, esi
0x72C779: mov     eax, 1
0x72C77E: jg      short loc_72C787
0x72C780: or      eax, 0FFFFFFFFh
0x72C783: jmp     short loc_72C787
0x72C785: xor     eax, eax
0x72C787: test    eax, eax
0x72C789: jz      loc_72C8C2
0x72C78F: pop     esi
0x72C790: pop     ebx
0x72C791: pop     edi
0x72C792: xor     al, al
0x72C794: pop     ebp
0x72C795: pop     ecx
0x72C796: retn    4
0x72C799: mov     ecx, [edi+18h]
0x72C79C: mov     edx, [ebp+18h]
0x72C79F: movzx   eax, ax
0x72C7A2: add     eax, eax
0x72C7A4: cmp     eax, 4
0x72C7A7: jb      short loc_72C7C4
0x72C7A9: lea     esp, [esp+0]
0x72C7B0: mov     esi, [edx]
0x72C7B2: cmp     esi, [ecx]
0x72C7B4: jnz     short loc_72C7C8
0x72C7B6: sub     eax, 4
0x72C7B9: add     ecx, 4
0x72C7BC: add     edx, 4
0x72C7BF: cmp     eax, 4
0x72C7C2: jnb     short loc_72C7B0
0x72C7C4: test    eax, eax
0x72C7C6: jz      short loc_72C825
0x72C7C8: movzx   ebx, byte ptr [ecx]
0x72C7CB: movzx   esi, byte ptr [edx]
0x72C7CE: sub     esi, ebx
0x72C7D0: jnz     short loc_72C817
0x72C7D2: sub     eax, 1
0x72C7D5: add     ecx, 1
0x72C7D8: add     edx, 1
0x72C7DB: test    eax, eax
0x72C7DD: jz      short loc_72C825
0x72C7DF: movzx   ebx, byte ptr [ecx]
0x72C7E2: movzx   esi, byte ptr [edx]
0x72C7E5: sub     esi, ebx
0x72C7E7: jnz     short loc_72C817
0x72C7E9: sub     eax, 1
0x72C7EC: add     ecx, 1
0x72C7EF: add     edx, 1
0x72C7F2: test    eax, eax
0x72C7F4: jz      short loc_72C825
0x72C7F6: movzx   ebx, byte ptr [ecx]
0x72C7F9: movzx   esi, byte ptr [edx]
0x72C7FC: sub     esi, ebx
0x72C7FE: jnz     short loc_72C817
0x72C800: sub     eax, 1
0x72C803: add     ecx, 1
0x72C806: add     edx, 1
0x72C809: test    eax, eax
0x72C80B: jz      short loc_72C825
0x72C80D: movzx   eax, byte ptr [ecx]
0x72C810: movzx   esi, byte ptr [edx]
0x72C813: sub     esi, eax
0x72C815: jz      short loc_72C825
0x72C817: test    esi, esi
0x72C819: mov     eax, 1
0x72C81E: jg      short loc_72C827
0x72C820: or      eax, 0FFFFFFFFh
0x72C823: jmp     short loc_72C827
0x72C825: xor     eax, eax
0x72C827: test    eax, eax
0x72C829: jnz     loc_72C78F
0x72C82F: mov     ecx, ebp
0x72C831: call    sub_72C4A0
0x72C836: mov     ecx, [edi+14h]
0x72C839: mov     edx, [ebp+14h]
0x72C83C: add     eax, eax
0x72C83E: cmp     eax, 4
0x72C841: jb      short loc_72C857
0x72C843: mov     esi, [edx]
0x72C845: cmp     esi, [ecx]
0x72C847: jnz     short loc_72C85B
0x72C849: sub     eax, 4
0x72C84C: add     ecx, 4
0x72C84F: add     edx, 4
0x72C852: cmp     eax, 4
0x72C855: jnb     short loc_72C843
0x72C857: test    eax, eax
0x72C859: jz      short loc_72C8B8
0x72C85B: movzx   esi, byte ptr [edx]
0x72C85E: movzx   ebx, byte ptr [ecx]
0x72C861: sub     esi, ebx
0x72C863: jnz     short loc_72C8AA
0x72C865: sub     eax, 1
0x72C868: add     ecx, 1
0x72C86B: add     edx, 1
0x72C86E: test    eax, eax
0x72C870: jz      short loc_72C8B8
0x72C872: movzx   esi, byte ptr [edx]
0x72C875: movzx   ebx, byte ptr [ecx]
0x72C878: sub     esi, ebx
0x72C87A: jnz     short loc_72C8AA
0x72C87C: sub     eax, 1
0x72C87F: add     ecx, 1
0x72C882: add     edx, 1
0x72C885: test    eax, eax
0x72C887: jz      short loc_72C8B8
0x72C889: movzx   esi, byte ptr [edx]
0x72C88C: movzx   ebx, byte ptr [ecx]
0x72C88F: sub     esi, ebx
0x72C891: jnz     short loc_72C8AA
0x72C893: sub     eax, 1
0x72C896: add     ecx, 1
0x72C899: add     edx, 1
0x72C89C: test    eax, eax
0x72C89E: jz      short loc_72C8B8
0x72C8A0: movzx   esi, byte ptr [edx]
0x72C8A3: movzx   ecx, byte ptr [ecx]
0x72C8A6: sub     esi, ecx
0x72C8A8: jz      short loc_72C8B8
0x72C8AA: test    esi, esi
0x72C8AC: mov     eax, 1
0x72C8B1: jg      short loc_72C8BA
0x72C8B3: or      eax, 0FFFFFFFFh
0x72C8B6: jmp     short loc_72C8BA
0x72C8B8: xor     eax, eax
0x72C8BA: test    eax, eax
0x72C8BC: jnz     loc_72C78F
0x72C8C2: mov     edx, [ebp+10h]
0x72C8C5: mov     esi, [edi+10h]
0x72C8C8: xor     eax, eax
0x72C8CA: test    edx, edx
0x72C8CC: setz    al
0x72C8CF: xor     ecx, ecx
0x72C8D1: test    esi, esi
0x72C8D3: setz    cl
0x72C8D6: cmp     eax, ecx
0x72C8D8: jnz     loc_72C78F
0x72C8DE: test    edx, edx
0x72C8E0: jz      loc_72C970
0x72C8E6: mov     eax, [esp+14h+var_4]
0x72C8EA: cmp     eax, 4
0x72C8ED: mov     ecx, esi
0x72C8EF: jb      short loc_72C905
0x72C8F1: mov     esi, [edx]
0x72C8F3: cmp     esi, [ecx]
0x72C8F5: jnz     short loc_72C909
0x72C8F7: sub     eax, 4
0x72C8FA: add     ecx, 4
0x72C8FD: add     edx, 4
0x72C900: cmp     eax, 4
0x72C903: jnb     short loc_72C8F1
0x72C905: test    eax, eax
0x72C907: jz      short loc_72C966
0x72C909: movzx   edi, byte ptr [ecx]
0x72C90C: movzx   esi, byte ptr [edx]
0x72C90F: sub     esi, edi
0x72C911: jnz     short loc_72C958
0x72C913: sub     eax, 1
0x72C916: add     ecx, 1
0x72C919: add     edx, 1
0x72C91C: test    eax, eax
0x72C91E: jz      short loc_72C966
0x72C920: movzx   edi, byte ptr [ecx]
0x72C923: movzx   esi, byte ptr [edx]
0x72C926: sub     esi, edi
0x72C928: jnz     short loc_72C958
0x72C92A: sub     eax, 1
0x72C92D: add     ecx, 1
0x72C930: add     edx, 1
0x72C933: test    eax, eax
0x72C935: jz      short loc_72C966
0x72C937: movzx   edi, byte ptr [ecx]
0x72C93A: movzx   esi, byte ptr [edx]
0x72C93D: sub     esi, edi
0x72C93F: jnz     short loc_72C958
0x72C941: sub     eax, 1
0x72C944: add     ecx, 1
0x72C947: add     edx, 1
0x72C94A: test    eax, eax
0x72C94C: jz      short loc_72C966
0x72C94E: movzx   eax, byte ptr [ecx]
0x72C951: movzx   esi, byte ptr [edx]
0x72C954: sub     esi, eax
0x72C956: jz      short loc_72C966
0x72C958: test    esi, esi
0x72C95A: mov     eax, 1
0x72C95F: jg      short loc_72C968
0x72C961: or      eax, 0FFFFFFFFh
0x72C964: jmp     short loc_72C968
0x72C966: xor     eax, eax
0x72C968: test    eax, eax
0x72C96A: jnz     loc_72C78F
0x72C970: pop     esi
0x72C971: pop     ebx
0x72C972: pop     edi
0x72C973: mov     al, 1
0x72C975: pop     ebp
0x72C976: pop     ecx
0x72C977: retn    4
