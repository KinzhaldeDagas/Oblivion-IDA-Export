0x6DD880: push    ecx
0x6DD881: push    esi
0x6DD882: mov     esi, [esp+8+arg_0]
0x6DD886: push    edi
0x6DD887: push    esi
0x6DD888: mov     edi, ecx
0x6DD88A: call    sub_715F40
0x6DD88F: cmp     dword ptr [esi+0D8h], 0A000102h
0x6DD899: jnb     short loc_6DD8AC
0x6DD89B: mov     ax, [esi+25Ah]
0x6DD8A2: shr     ax, 5
0x6DD8A6: mov     [edi+3Ch], ax
0x6DD8AA: jmp     short loc_6DD8D0
0x6DD8AC: mov     eax, [esi+21Ch]
0x6DD8B2: push    1
0x6DD8B4: lea     ecx, [esp+10h+arg_0]
0x6DD8B8: push    ecx
0x6DD8B9: push    2
0x6DD8BB: lea     edx, [edi+3Ch]
0x6DD8BE: push    edx
0x6DD8BF: push    eax
0x6DD8C0: mov     eax, [eax+4]
0x6DD8C3: mov     [esp+20h+arg_0], 2
0x6DD8CB: call    eax
0x6DD8CD: add     esp, 14h
0x6DD8D0: mov     eax, [esi+21Ch]
0x6DD8D6: push    1
0x6DD8D8: lea     ecx, [esp+10h+arg_0]
0x6DD8DC: push    ecx
0x6DD8DD: push    4
0x6DD8DF: lea     edx, [esp+18h+var_4]
0x6DD8E3: push    edx
0x6DD8E4: push    eax
0x6DD8E5: mov     eax, [eax+4]
0x6DD8E8: mov     [esp+20h+arg_0], 4
0x6DD8F0: call    eax
0x6DD8F2: mov     ecx, [esp+20h+var_4]
0x6DD8F6: push    1
0x6DD8F8: lea     edx, [esp+24h+arg_0]
0x6DD8FC: push    edx
0x6DD8FD: mov     [edi+68h], ecx
0x6DD900: mov     eax, [esi+21Ch]
0x6DD906: mov     edx, [eax+4]
0x6DD909: push    4
0x6DD90B: lea     ecx, [edi+58h]
0x6DD90E: push    ecx
0x6DD90F: push    eax
0x6DD910: mov     [esp+34h+arg_0], 4
0x6DD918: call    edx
0x6DD91A: mov     eax, [esi+21Ch]
0x6DD920: push    1
0x6DD922: lea     ecx, [esp+38h+arg_0]
0x6DD926: push    ecx
0x6DD927: push    4
0x6DD929: lea     edx, [edi+5Ch]
0x6DD92C: push    edx
0x6DD92D: push    eax
0x6DD92E: mov     eax, [eax+4]
0x6DD931: mov     [esp+48h+arg_0], 4
0x6DD939: call    eax
0x6DD93B: mov     eax, [esi+21Ch]
0x6DD941: mov     edx, [eax+4]
0x6DD944: push    1
0x6DD946: lea     ecx, [esp+4Ch+arg_0]
0x6DD94A: push    ecx
0x6DD94B: push    2
0x6DD94D: add     edi, 60h ; '`'
0x6DD950: push    edi
0x6DD951: push    eax
0x6DD952: mov     [esp+5Ch+arg_0], 2
0x6DD95A: call    edx
0x6DD95C: add     esp, 50h
0x6DD95F: mov     ecx, esi
0x6DD961: call    sub_712A20
0x6DD966: mov     ecx, esi
0x6DD968: call    sub_712A20
0x6DD96D: pop     edi
0x6DD96E: pop     esi
0x6DD96F: pop     ecx
0x6DD970: retn    4
