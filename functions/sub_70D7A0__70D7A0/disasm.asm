0x70D7A0: sub     esp, 8
0x70D7A3: push    esi
0x70D7A4: mov     esi, [esp+0Ch+arg_0]
0x70D7A8: push    edi
0x70D7A9: push    esi
0x70D7AA: mov     edi, ecx
0x70D7AC: call    sub_707F00
0x70D7B1: cmp     dword ptr [esi+0D8h], 0A000102h
0x70D7BB: jnb     short loc_70D7CA
0x70D7BD: movzx   eax, word ptr [esi+258h]
0x70D7C4: mov     [esp+10h+var_8], eax
0x70D7C8: jmp     short loc_70D7EF
0x70D7CA: mov     eax, [esi+21Ch]
0x70D7D0: push    1
0x70D7D2: lea     ecx, [esp+14h+arg_0]
0x70D7D6: push    ecx
0x70D7D7: push    2
0x70D7D9: lea     edx, [esp+1Ch+var_8]
0x70D7DD: push    edx
0x70D7DE: push    eax
0x70D7DF: mov     eax, [eax+4]
0x70D7E2: mov     [esp+24h+arg_0], 2
0x70D7EA: call    eax
0x70D7EC: add     esp, 14h
0x70D7EF: mov     eax, [esi+21Ch]
0x70D7F5: push    ebx
0x70D7F6: push    1
0x70D7F8: lea     ecx, [esp+18h+arg_0]
0x70D7FC: push    ecx
0x70D7FD: mov     ebx, 4
0x70D802: push    ebx
0x70D803: lea     edx, [edi+0ECh]
0x70D809: push    edx
0x70D80A: push    eax
0x70D80B: mov     eax, [eax+4]
0x70D80E: mov     [esp+28h+arg_0], ebx
0x70D812: call    eax
0x70D814: mov     eax, [esi+21Ch]
0x70D81A: push    1
0x70D81C: lea     ecx, [esp+2Ch+arg_0]
0x70D820: push    ecx
0x70D821: push    ebx
0x70D822: lea     edx, [edi+0F0h]
0x70D828: push    edx
0x70D829: push    eax
0x70D82A: mov     eax, [eax+4]
0x70D82D: mov     [esp+3Ch+arg_0], ebx
0x70D831: call    eax
0x70D833: mov     eax, [esi+21Ch]
0x70D839: push    1
0x70D83B: lea     ecx, [esp+40h+arg_0]
0x70D83F: push    ecx
0x70D840: push    ebx
0x70D841: lea     edx, [edi+0F4h]
0x70D847: push    edx
0x70D848: push    eax
0x70D849: mov     eax, [eax+4]
0x70D84C: mov     [esp+50h+arg_0], ebx
0x70D850: call    eax
0x70D852: mov     eax, [esi+21Ch]
0x70D858: push    1
0x70D85A: lea     ecx, [esp+54h+arg_0]
0x70D85E: push    ecx
0x70D85F: push    ebx
0x70D860: lea     edx, [edi+0F8h]
0x70D866: push    edx
0x70D867: push    eax
0x70D868: mov     eax, [eax+4]
0x70D86B: mov     [esp+64h+arg_0], ebx
0x70D86F: call    eax
0x70D871: mov     eax, [esi+21Ch]
0x70D877: add     esp, 50h
0x70D87A: push    1
0x70D87C: lea     ecx, [esp+18h+arg_0]
0x70D880: push    ecx
0x70D881: push    ebx
0x70D882: lea     edx, [edi+0FCh]
0x70D888: push    edx
0x70D889: push    eax
0x70D88A: mov     eax, [eax+4]
0x70D88D: mov     [esp+28h+arg_0], ebx
0x70D891: call    eax
0x70D893: mov     eax, [esi+21Ch]
0x70D899: push    1
0x70D89B: lea     ecx, [esp+2Ch+arg_0]
0x70D89F: push    ecx
0x70D8A0: push    ebx
0x70D8A1: lea     edx, [edi+100h]
0x70D8A7: push    edx
0x70D8A8: push    eax
0x70D8A9: mov     eax, [eax+4]
0x70D8AC: mov     [esp+3Ch+arg_0], ebx
0x70D8B0: call    eax
0x70D8B2: add     esp, 28h
0x70D8B5: cmp     dword ptr [esi+0D8h], 0A000105h
0x70D8BF: jnb     short loc_70D8CA
0x70D8C1: mov     byte ptr [edi+104h], 0
0x70D8C8: jmp     short loc_70D8FD
0x70D8CA: mov     eax, [esi+21Ch]
0x70D8D0: push    1
0x70D8D2: lea     ecx, [esp+18h+var_4]
0x70D8D6: push    ecx
0x70D8D7: push    1
0x70D8D9: lea     edx, [esp+20h+arg_0]
0x70D8DD: push    edx
0x70D8DE: push    eax
0x70D8DF: mov     eax, [eax+4]
0x70D8E2: mov     [esp+28h+var_4], 1
0x70D8EA: call    eax
0x70D8EC: add     esp, 14h
0x70D8EF: cmp     byte ptr [esp+14h+arg_0], 0
0x70D8F4: setnz   cl
0x70D8F7: mov     [edi+104h], cl
0x70D8FD: mov     eax, [esi+21Ch]
0x70D903: push    1
0x70D905: lea     edx, [esp+18h+arg_0]
0x70D909: push    edx
0x70D90A: mov     edx, [eax+4]
0x70D90D: push    ebx
0x70D90E: lea     ecx, [edi+110h]
0x70D914: push    ecx
0x70D915: push    eax
0x70D916: mov     [esp+28h+arg_0], ebx
0x70D91A: call    edx
0x70D91C: mov     eax, [esi+21Ch]
0x70D922: push    1
0x70D924: lea     ecx, [esp+2Ch+arg_0]
0x70D928: push    ecx
0x70D929: push    ebx
0x70D92A: lea     edx, [edi+114h]
0x70D930: push    edx
0x70D931: push    eax
0x70D932: mov     eax, [eax+4]
0x70D935: mov     [esp+3Ch+arg_0], ebx
0x70D939: call    eax
0x70D93B: mov     eax, [esi+21Ch]
0x70D941: push    1
0x70D943: lea     ecx, [esp+40h+arg_0]
0x70D947: push    ecx
0x70D948: push    ebx
0x70D949: lea     edx, [edi+118h]
0x70D94F: push    edx
0x70D950: push    eax
0x70D951: mov     eax, [eax+4]
0x70D954: mov     [esp+50h+arg_0], ebx
0x70D958: call    eax
0x70D95A: mov     eax, [esi+21Ch]
0x70D960: push    1
0x70D962: lea     ecx, [esp+54h+arg_0]
0x70D966: push    ecx
0x70D967: push    ebx
0x70D968: lea     edx, [edi+11Ch]
0x70D96E: push    edx
0x70D96F: push    eax
0x70D970: mov     eax, [eax+4]
0x70D973: mov     [esp+64h+arg_0], ebx
0x70D977: call    eax
0x70D979: mov     eax, [esi+21Ch]
0x70D97F: mov     edx, [eax+4]
0x70D982: add     esp, 50h
0x70D985: push    1
0x70D987: lea     ecx, [esp+18h+arg_0]
0x70D98B: push    ecx
0x70D98C: push    ebx
0x70D98D: add     edi, 120h
0x70D993: push    edi
0x70D994: push    eax
0x70D995: mov     [esp+28h+arg_0], ebx
0x70D999: call    edx
0x70D99B: add     esp, 14h
0x70D99E: mov     ecx, esi
0x70D9A0: call    sub_712A20
0x70D9A5: mov     ecx, esi
0x70D9A7: call    sub_712AE0
0x70D9AC: cmp     dword ptr [esi+0D8h], 4010004h
0x70D9B6: pop     ebx
0x70D9B7: jb      short loc_70D9DB
0x70D9B9: mov     ecx, esi
0x70D9BB: call    sub_712AE0
0x70D9C0: mov     eax, [esi+0D8h]
0x70D9C6: cmp     eax, 0A000107h
0x70D9CB: jb      short loc_70D9DB
0x70D9CD: cmp     eax, 0A00010Fh
0x70D9D2: jnb     short loc_70D9DB
0x70D9D4: mov     ecx, esi
0x70D9D6: call    sub_712AE0
0x70D9DB: pop     edi
0x70D9DC: pop     esi
0x70D9DD: add     esp, 8
0x70D9E0: retn    4
