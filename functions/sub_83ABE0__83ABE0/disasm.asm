0x83ABE0: sub     esp, 10h
0x83ABE3: mov     eax, ds:0B25AD8h
0x83ABE8: fld1
0x83ABEA: mov     edx, ds:0B25AD0h
0x83ABF0: mov     ecx, ds:0B25AD4h
0x83ABF6: mov     [esp+10h+var_8], eax
0x83ABFA: mov     eax, [esp+10h+arg_0]
0x83ABFE: mov     eax, [eax+0B4h]
0x83AC04: cmp     dword ptr [eax+24h], 0
0x83AC08: push    esi
0x83AC09: mov     esi, ds:0B25ADCh
0x83AC0F: jz      short loc_83AC19
0x83AC11: fst     [esp+14h+var_10]
0x83AC15: mov     edx, [esp+14h+var_10]
0x83AC19: cmp     [esp+14h+arg_4], 0
0x83AC1E: jz      short loc_83AC2A
0x83AC20: fstp    [esp+14h+var_C]
0x83AC24: mov     ecx, [esp+14h+var_C]
0x83AC28: jmp     short loc_83AC2C
0x83AC2A: fstp    st
0x83AC2C: mov     eax, [esp+14h+arg_8]
0x83AC30: test    eax, eax
0x83AC32: jz      short loc_83AC39
0x83AC34: fld     dword ptr [eax+4Ch]
0x83AC37: jmp     short loc_83AC3F
0x83AC39: fld     dword ptr ds:0A37CC8h
0x83AC3F: sub     esp, 10h
0x83AC42: fstp    [esp+24h+var_8]
0x83AC46: mov     eax, esp
0x83AC48: mov     [eax], edx
0x83AC4A: mov     [eax+4], ecx
0x83AC4D: mov     ecx, [esp+24h+var_8]
0x83AC51: mov     [eax+8], ecx
0x83AC54: push    1Fh
0x83AC56: mov     [eax+0Ch], esi
0x83AC59: call    sub_7ECAE0
0x83AC5E: add     esp, 14h
0x83AC61: pop     esi
0x83AC62: add     esp, 10h
0x83AC65: retn    0Ch
