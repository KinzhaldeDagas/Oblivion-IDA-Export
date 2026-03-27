0x719110: sub     esp, 8
0x719113: push    ebx
0x719114: push    esi
0x719115: push    edi
0x719116: mov     edi, [esp+14h+arg_0]
0x71911A: push    edi
0x71911B: mov     esi, ecx
0x71911D: call    sub_700AC0
0x719122: cmp     dword ptr [edi+0D8h], 14010002h
0x71912C: mov     eax, [edi+21Ch]
0x719132: push    1
0x719134: jnb     loc_7192BA
0x71913A: lea     ecx, [esp+18h+var_8]
0x71913E: push    ecx
0x71913F: push    1
0x719141: lea     edx, [esp+20h+arg_0]
0x719145: push    edx
0x719146: push    eax
0x719147: mov     eax, [eax+4]
0x71914A: mov     [esp+28h+var_8], 1
0x719152: call    eax
0x719154: add     esp, 14h
0x719157: cmp     byte ptr [esp+14h+arg_0], 0
0x71915C: jz      short loc_719165
0x71915E: or      word ptr [esi+18h], 1
0x719163: jmp     short loc_71916B
0x719165: and     word ptr [esi+18h], 0FFFEh
0x71916B: mov     eax, [edi+21Ch]
0x719171: push    1
0x719173: lea     ecx, [esp+18h+var_8]
0x719177: push    ecx
0x719178: mov     ebx, 4
0x71917D: push    ebx
0x71917E: lea     edx, [esp+20h+var_4]
0x719182: push    edx
0x719183: push    eax
0x719184: mov     eax, [eax+4]
0x719187: mov     [esp+28h+var_8], ebx
0x71918B: call    eax
0x71918D: movzx   ecx, word ptr [esi+18h]
0x719191: mov     edx, [esp+28h+var_4]
0x719195: and     cx, 0FFFh
0x71919A: shl     edx, 0Ch
0x71919D: or      cx, dx
0x7191A0: mov     [esi+18h], cx
0x7191A4: mov     eax, [edi+21Ch]
0x7191AA: push    1
0x7191AC: lea     ecx, [esp+2Ch+var_4]
0x7191B0: push    ecx
0x7191B1: push    ebx
0x7191B2: lea     edx, [esi+1Ch]
0x7191B5: push    edx
0x7191B6: push    eax
0x7191B7: mov     eax, [eax+4]
0x7191BA: mov     [esp+3Ch+var_4], ebx
0x7191BE: call    eax
0x7191C0: mov     eax, [edi+21Ch]
0x7191C6: push    1
0x7191C8: lea     ecx, [esp+40h+var_4]
0x7191CC: push    ecx
0x7191CD: push    ebx
0x7191CE: lea     edx, [esi+20h]
0x7191D1: push    edx
0x7191D2: push    eax
0x7191D3: mov     eax, [eax+4]
0x7191D6: mov     [esp+50h+var_4], ebx
0x7191DA: call    eax
0x7191DC: mov     eax, [edi+21Ch]
0x7191E2: push    1
0x7191E4: lea     ecx, [esp+54h+var_4]
0x7191E8: push    ecx
0x7191E9: push    ebx
0x7191EA: lea     edx, [esp+5Ch+var_8]
0x7191EE: push    edx
0x7191EF: push    eax
0x7191F0: mov     eax, [eax+4]
0x7191F3: mov     [esp+64h+var_4], ebx
0x7191F7: call    eax
0x7191F9: movzx   ecx, word ptr [esi+18h]
0x7191FD: mov     edx, [esp+64h+var_8]
0x719201: lea     eax, [edx+edx]
0x719204: and     cx, 0FFF1h
0x719209: or      cx, ax
0x71920C: add     esp, 50h
0x71920F: mov     [esi+18h], cx
0x719213: mov     eax, [edi+21Ch]
0x719219: push    1
0x71921B: lea     ecx, [esp+18h+var_4]
0x71921F: push    ecx
0x719220: push    ebx
0x719221: lea     edx, [esp+20h+var_8]
0x719225: push    edx
0x719226: push    eax
0x719227: mov     eax, [eax+4]
0x71922A: mov     [esp+28h+var_4], ebx
0x71922E: call    eax
0x719230: movzx   ecx, word ptr [esi+18h]
0x719234: mov     edx, [esp+28h+var_8]
0x719238: and     cx, 0FF8Fh
0x71923D: shl     edx, 4
0x719240: or      cx, dx
0x719243: mov     [esi+18h], cx
0x719247: mov     eax, [edi+21Ch]
0x71924D: push    1
0x71924F: lea     ecx, [esp+2Ch+var_4]
0x719253: push    ecx
0x719254: mov     [esp+30h+var_4], ebx
0x719258: push    ebx
0x719259: lea     edx, [esp+34h+var_8]
0x71925D: push    edx
0x71925E: push    eax
0x71925F: mov     eax, [eax+4]
0x719262: call    eax
0x719264: movzx   ecx, word ptr [esi+18h]
0x719268: mov     edx, [esp+3Ch+var_8]
0x71926C: and     cx, 0FC7Fh
0x719271: shl     edx, 7
0x719274: push    1
0x719276: or      cx, dx
0x719279: lea     eax, [esp+40h+var_4]
0x71927D: push    eax
0x71927E: mov     [esi+18h], cx
0x719282: mov     edi, [edi+21Ch]
0x719288: mov     edx, [edi+4]
0x71928B: push    ebx
0x71928C: lea     ecx, [esp+48h+var_8]
0x719290: push    ecx
0x719291: push    edi
0x719292: mov     [esp+50h+var_4], ebx
0x719296: call    edx
0x719298: mov     ax, [esi+18h]
0x71929C: mov     ecx, [esp+50h+var_8]
0x7192A0: add     esp, 3Ch
0x7192A3: and     ax, 0F3FFh
0x7192A7: shl     ecx, 0Ah
0x7192AA: or      ax, cx
0x7192AD: pop     edi
0x7192AE: mov     [esi+18h], ax
0x7192B2: pop     esi
0x7192B3: pop     ebx
0x7192B4: add     esp, 8
0x7192B7: retn    4
0x7192BA: lea     edx, [esp+18h+arg_0]
0x7192BE: push    edx
0x7192BF: mov     edx, [eax+4]
0x7192C2: push    2
0x7192C4: lea     ecx, [esi+18h]
0x7192C7: push    ecx
0x7192C8: push    eax
0x7192C9: mov     [esp+28h+arg_0], 2
0x7192D1: call    edx
0x7192D3: mov     eax, [edi+21Ch]
0x7192D9: push    1
0x7192DB: lea     ecx, [esp+2Ch+arg_0]
0x7192DF: push    ecx
0x7192E0: mov     ebx, 4
0x7192E5: push    ebx
0x7192E6: lea     edx, [esi+1Ch]
0x7192E9: push    edx
0x7192EA: push    eax
0x7192EB: mov     eax, [eax+4]
0x7192EE: mov     [esp+3Ch+arg_0], ebx
0x7192F2: call    eax
0x7192F4: mov     edi, [edi+21Ch]
0x7192FA: mov     edx, [edi+4]
0x7192FD: push    1
0x7192FF: lea     ecx, [esp+40h+arg_0]
0x719303: push    ecx
0x719304: push    ebx
0x719305: add     esi, 20h ; ' '
0x719308: push    esi
0x719309: push    edi
0x71930A: mov     [esp+50h+arg_0], ebx
0x71930E: call    edx
0x719310: add     esp, 3Ch
0x719313: pop     edi
0x719314: pop     esi
0x719315: pop     ebx
0x719316: add     esp, 8
0x719319: retn    4
