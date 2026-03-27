0x6A0540: mov     eax, [esp+arg_4]
0x6A0544: push    ebx
0x6A0545: push    esi
0x6A0546: push    edi
0x6A0547: mov     edi, [esp+0Ch+arg_0]
0x6A054B: push    0
0x6A054D: push    eax
0x6A054E: push    edi
0x6A054F: mov     esi, ecx
0x6A0551: call    nullsub_18
0x6A0556: test    edi, edi
0x6A0558: jz      short loc_6A056C
0x6A055A: mov     ecx, [edi+8]
0x6A055D: push    0
0x6A055F: call    MagicItem_GetFXEffect
0x6A0564: mov     ecx, [eax+78h]
0x6A0567: mov     [esi+34h], ecx
0x6A056A: jmp     short loc_6A0573
0x6A056C: mov     edx, [esp+0Ch+arg_8]
0x6A0570: mov     [esi+34h], edx
0x6A0573: mov     eax, [esi]
0x6A0575: fld     dword ptr [esi+20h]
0x6A0578: mov     edx, [eax+68h]
0x6A057B: fstp    [esp+0Ch+arg_4]
0x6A057F: mov     bl, [esi+24h]
0x6A0582: mov     ecx, esi
0x6A0584: call    edx
0x6A0586: fld     [esp+0Ch+arg_4]
0x6A058A: mov     eax, [esi]
0x6A058C: fstp    dword ptr [esi+20h]
0x6A058F: fldz
0x6A0591: mov     edx, [eax+50h]
0x6A0594: push    ecx
0x6A0595: fstp    [esp+10h+var_10]
0x6A0598: mov     ecx, esi
0x6A059A: mov     [esi+24h], bl
0x6A059D: call    edx
0x6A059F: pop     edi
0x6A05A0: pop     esi
0x6A05A1: pop     ebx
0x6A05A2: retn    0Ch
