0x812470: push    0FFFFFFFFh
0x812472: push    offset SEH_801380
0x812477: mov     eax, large fs:0
0x81247D: push    eax
0x81247E: push    ecx
0x81247F: push    esi
0x812480: push    edi
0x812481: mov     eax, ds:0B30AACh
0x812486: xor     eax, esp
0x812488: push    eax
0x812489: lea     eax, [esp+1Ch+var_C]
0x81248D: mov     large fs:0, eax
0x812493: mov     edi, ecx
0x812495: lea     eax, [esp+1Ch+var_10]
0x812499: push    eax
0x81249A: call    sub_7606A0
0x81249F: add     esp, 4
0x8124A2: mov     esi, eax
0x8124A4: mov     ecx, [edi+7Ch]
0x8124A7: cmp     ecx, [esi]
0x8124A9: mov     [esp+1Ch+var_4], 0
0x8124B1: jz      short loc_8124CF
0x8124B3: test    ecx, ecx
0x8124B5: jz      short loc_8124C2
0x8124B7: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x8124BB: jnz     short loc_8124C2
0x8124BD: call    sub_7604D0
0x8124C2: mov     eax, [esi]
0x8124C4: test    eax, eax
0x8124C6: mov     [edi+7Ch], eax
0x8124C9: jz      short loc_8124CF
0x8124CB: add     dword ptr [eax+60h], 1
0x8124CF: mov     eax, [esp+1Ch+var_10]
0x8124D3: test    eax, eax
0x8124D5: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x8124DD: jz      short loc_8124F2
0x8124DF: add     dword ptr [eax+60h], 0FFFFFFFFh
0x8124E3: mov     ecx, eax
0x8124E5: add     eax, 60h ; '`'
0x8124E8: cmp     dword ptr [eax], 0
0x8124EB: jnz     short loc_8124F2
0x8124ED: call    sub_7604D0
0x8124F2: mov     ecx, edi
0x8124F4: call    sub_811A30
0x8124F9: mov     al, 1
0x8124FB: mov     ecx, [esp+1Ch+var_C]
0x8124FF: mov     large fs:0, ecx
0x812506: pop     ecx
0x812507: pop     edi
0x812508: pop     esi
0x812509: add     esp, 10h
0x81250C: retn
