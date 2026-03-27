0x73D9C0: push    ecx
0x73D9C1: push    esi
0x73D9C2: push    edi
0x73D9C3: mov     edi, [esp+0Ch+arg_0]
0x73D9C7: push    edi
0x73D9C8: mov     esi, ecx
0x73D9CA: call    sub_709EE0
0x73D9CF: mov     eax, [edi+21Ch]
0x73D9D5: push    1
0x73D9D7: lea     ecx, [esp+10h+arg_0]
0x73D9DB: push    ecx
0x73D9DC: push    4
0x73D9DE: lea     edx, [esp+18h+var_4]
0x73D9E2: push    edx
0x73D9E3: push    eax
0x73D9E4: mov     eax, [eax+4]
0x73D9E7: mov     [esp+20h+arg_0], 4
0x73D9EF: call    eax
0x73D9F1: mov     eax, [esp+20h+var_4]
0x73D9F5: add     esp, 14h
0x73D9F8: cmp     eax, 2
0x73D9FB: mov     [esi+0DCh], eax
0x73DA01: jl      short loc_73DA0D
0x73DA03: mov     dword ptr [esi+0DCh], 0
0x73DA0D: cmp     dword ptr [edi+0D8h], 14000004h
0x73DA17: jnb     short loc_73DA20
0x73DA19: mov     ecx, edi
0x73DA1B: call    sub_712A20
0x73DA20: pop     edi
0x73DA21: pop     esi
0x73DA22: pop     ecx
0x73DA23: retn    4
