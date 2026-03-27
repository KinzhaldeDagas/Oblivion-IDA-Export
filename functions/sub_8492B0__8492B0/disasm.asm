0x8492B0: push    0FFFFFFFFh
0x8492B2: push    offset SEH_879360
0x8492B7: mov     eax, large fs:0
0x8492BD: push    eax
0x8492BE: push    ecx
0x8492BF: push    ebx
0x8492C0: push    ebp
0x8492C1: push    esi
0x8492C2: push    edi
0x8492C3: mov     eax, ds:0B30AACh
0x8492C8: xor     eax, esp
0x8492CA: push    eax
0x8492CB: lea     eax, [esp+24h+var_C]
0x8492CF: mov     large fs:0, eax
0x8492D5: mov     [esp+24h+var_10], ecx
0x8492D9: mov     eax, [esp+24h+arg_8]
0x8492DD: mov     eax, [eax+10h]
0x8492E0: mov     esi, ds:0B455E4h
0x8492E6: push    eax
0x8492E7: call    sub_848DA0
0x8492EC: mov     ecx, [esi+24h]
0x8492EF: mov     ebx, [esp+24h+arg_C]
0x8492F3: mov     edi, [ecx]
0x8492F5: mov     edx, [ebx]
0x8492F7: mov     eax, [edx+88h]
0x8492FD: push    0
0x8492FF: mov     ecx, ebx
0x849301: mov     [esp+28h+arg_8], edi
0x849305: call    eax
0x849307: mov     edi, [edi+4]
0x84930A: mov     ebp, eax
0x84930C: cmp     edi, ebp
0x84930E: jz      short loc_849347
0x849310: test    edi, edi
0x849312: jz      short loc_849330
0x849314: lea     ecx, [edi+4]
0x849317: push    ecx; lpAddend
0x849318: call    dword ptr ds:0A2807Ch
0x84931E: test    eax, eax
0x849320: jnz     short loc_849330
0x849322: test    edi, edi
0x849324: jz      short loc_849330
0x849326: mov     edx, [edi]
0x849328: mov     eax, [edx]
0x84932A: push    1
0x84932C: mov     ecx, edi
0x84932E: call    eax
0x849330: test    ebp, ebp
0x849332: mov     edi, [esp+24h+arg_8]
0x849336: mov     [edi+4], ebp
0x849339: jz      short loc_84934B
0x84933B: add     ebp, 4
0x84933E: push    ebp; lpAddend
0x84933F: call    dword ptr ds:0A28078h
0x849345: jmp     short loc_84934B
0x849347: mov     edi, [esp+24h+arg_8]
0x84934B: test    edi, edi
0x84934D: jz      short loc_849369
0x84934F: cmp     byte ptr ds:0B42CDDh, 0
0x849356: jz      short loc_849369
0x849358: mov     edx, [ebx]
0x84935A: mov     eax, [edx+78h]
0x84935D: mov     ecx, ebx
0x84935F: call    eax
0x849361: push    eax
0x849362: mov     ecx, edi
0x849364: call    sub_7715E0
0x849369: mov     ecx, [esi+24h]
0x84936C: mov     edi, [ecx+4]
0x84936F: mov     edx, [ebx]
0x849371: mov     eax, [edx+90h]
0x849377: push    0
0x849379: mov     ecx, ebx
0x84937B: mov     [esp+28h+arg_8], edi
0x84937F: call    eax
0x849381: mov     edi, [edi+4]
0x849384: mov     ebp, eax
0x849386: cmp     edi, ebp
0x849388: jz      short loc_8493C1
0x84938A: test    edi, edi
0x84938C: jz      short loc_8493AA
0x84938E: lea     ecx, [edi+4]
0x849391: push    ecx; lpAddend
0x849392: call    dword ptr ds:0A2807Ch
0x849398: test    eax, eax
0x84939A: jnz     short loc_8493AA
0x84939C: test    edi, edi
0x84939E: jz      short loc_8493AA
0x8493A0: mov     edx, [edi]
0x8493A2: mov     eax, [edx]
0x8493A4: push    1
0x8493A6: mov     ecx, edi
0x8493A8: call    eax
0x8493AA: test    ebp, ebp
0x8493AC: mov     edi, [esp+24h+arg_8]
0x8493B0: mov     [edi+4], ebp
0x8493B3: jz      short loc_8493C5
0x8493B5: add     ebp, 4
0x8493B8: push    ebp; lpAddend
0x8493B9: call    dword ptr ds:0A28078h
0x8493BF: jmp     short loc_8493C5
0x8493C1: mov     edi, [esp+24h+arg_8]
0x8493C5: test    edi, edi
0x8493C7: jz      short loc_8493E3
0x8493C9: cmp     byte ptr ds:0B42CDDh, 0
0x8493D0: jz      short loc_8493E3
0x8493D2: mov     edx, [ebx]
0x8493D4: mov     eax, [edx+78h]
0x8493D7: mov     ecx, ebx
0x8493D9: call    eax
0x8493DB: push    eax
0x8493DC: mov     ecx, edi
0x8493DE: call    sub_7715E0
0x8493E3: mov     ebx, 1
0x8493E8: add     [esi+60h], ebx
0x8493EB: mov     [esp+24h+arg_8], esi
0x8493EF: mov     edi, [esp+24h+var_10]
0x8493F3: mov     edx, [edi+38h]
0x8493F6: lea     ecx, [esp+24h+arg_8]
0x8493FA: push    ecx
0x8493FB: push    edx
0x8493FC: lea     ecx, [edi+40h]
0x8493FF: mov     [esp+2Ch+var_4], 0
0x849407: call    sub_76CE40
0x84940C: or      eax, 0FFFFFFFFh
0x84940F: add     [esi+60h], eax
0x849412: mov     [esp+24h+var_4], eax
0x849416: jnz     short loc_84941F
0x849418: mov     ecx, esi
0x84941A: call    sub_7604D0
0x84941F: add     [edi+38h], ebx
0x849422: mov     ecx, [esp+24h+var_C]
0x849426: mov     large fs:0, ecx
0x84942D: pop     ecx
0x84942E: pop     edi
0x84942F: pop     esi
0x849430: pop     ebp
0x849431: pop     ebx
0x849432: add     esp, 10h
0x849435: retn    10h
