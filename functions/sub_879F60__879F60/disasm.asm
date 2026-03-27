0x879F60: push    0FFFFFFFFh
0x879F62: push    offset SEH_880560
0x879F67: mov     eax, large fs:0
0x879F6D: push    eax
0x879F6E: push    ebx
0x879F6F: push    ebp
0x879F70: push    esi
0x879F71: push    edi
0x879F72: mov     eax, ds:0B30AACh
0x879F77: xor     eax, esp
0x879F79: push    eax
0x879F7A: lea     eax, [esp+20h+var_C]
0x879F7E: mov     large fs:0, eax
0x879F84: mov     edi, ecx
0x879F86: mov     ecx, [esp+20h+arg_0]
0x879F8A: mov     eax, [edi]
0x879F8C: mov     edx, [eax+0BCh]
0x879F92: mov     esi, ds:0B476ECh
0x879F98: push    0
0x879F9A: push    0
0x879F9C: push    ecx
0x879F9D: mov     ecx, edi
0x879F9F: call    edx
0x879FA1: mov     eax, [esi+24h]
0x879FA4: mov     ecx, [esp+20h+arg_C]
0x879FA8: mov     ebx, [eax]
0x879FAA: push    0
0x879FAC: push    ecx
0x879FAD: mov     ecx, edi
0x879FAF: mov     [esp+28h+arg_0], ebx
0x879FB3: call    sub_848FD0
0x879FB8: mov     ebx, [ebx+4]
0x879FBB: mov     ebp, eax
0x879FBD: cmp     ebx, ebp
0x879FBF: jz      short loc_879FF6
0x879FC1: test    ebx, ebx
0x879FC3: jz      short loc_879FE1
0x879FC5: lea     edx, [ebx+4]
0x879FC8: push    edx; lpAddend
0x879FC9: call    dword ptr ds:0A2807Ch
0x879FCF: test    eax, eax
0x879FD1: jnz     short loc_879FE1
0x879FD3: test    ebx, ebx
0x879FD5: jz      short loc_879FE1
0x879FD7: mov     eax, [ebx]
0x879FD9: mov     edx, [eax]
0x879FDB: push    1
0x879FDD: mov     ecx, ebx
0x879FDF: call    edx
0x879FE1: test    ebp, ebp
0x879FE3: mov     eax, [esp+20h+arg_0]
0x879FE7: mov     [eax+4], ebp
0x879FEA: jz      short loc_879FF6
0x879FEC: add     ebp, 4
0x879FEF: push    ebp; lpAddend
0x879FF0: call    dword ptr ds:0A28078h
0x879FF6: mov     ecx, [esi+24h]
0x879FF9: mov     ebx, [ecx+4]
0x879FFC: mov     ecx, [esp+20h+arg_C]
0x87A000: mov     edx, [ecx]
0x87A002: mov     eax, [edx+88h]
0x87A008: push    0
0x87A00A: mov     [esp+24h+arg_0], ebx
0x87A00E: call    eax
0x87A010: mov     ebx, [ebx+4]
0x87A013: mov     ebp, eax
0x87A015: cmp     ebx, ebp
0x87A017: jz      short loc_87A04E
0x87A019: test    ebx, ebx
0x87A01B: jz      short loc_87A039
0x87A01D: lea     ecx, [ebx+4]
0x87A020: push    ecx; lpAddend
0x87A021: call    dword ptr ds:0A2807Ch
0x87A027: test    eax, eax
0x87A029: jnz     short loc_87A039
0x87A02B: test    ebx, ebx
0x87A02D: jz      short loc_87A039
0x87A02F: mov     edx, [ebx]
0x87A031: mov     eax, [edx]
0x87A033: push    1
0x87A035: mov     ecx, ebx
0x87A037: call    eax
0x87A039: test    ebp, ebp
0x87A03B: mov     ecx, [esp+20h+arg_0]
0x87A03F: mov     [ecx+4], ebp
0x87A042: jz      short loc_87A04E
0x87A044: add     ebp, 4
0x87A047: push    ebp; lpAddend
0x87A048: call    dword ptr ds:0A28078h
0x87A04E: mov     edx, [esi+24h]
0x87A051: mov     ebp, [edx+0Ch]
0x87A054: mov     eax, ds:0B43110h
0x87A059: mov     ebx, [ebp+4]
0x87A05C: cmp     ebx, eax
0x87A05E: mov     ecx, eax
0x87A060: mov     [esp+20h+arg_C], ecx
0x87A064: jz      short loc_87A09B
0x87A066: test    ebx, ebx
0x87A068: jz      short loc_87A08A
0x87A06A: lea     eax, [ebx+4]
0x87A06D: push    eax; lpAddend
0x87A06E: call    dword ptr ds:0A2807Ch
0x87A074: test    eax, eax
0x87A076: jnz     short loc_87A086
0x87A078: test    ebx, ebx
0x87A07A: jz      short loc_87A086
0x87A07C: mov     edx, [ebx]
0x87A07E: mov     eax, [edx]
0x87A080: push    1
0x87A082: mov     ecx, ebx
0x87A084: call    eax
0x87A086: mov     ecx, [esp+20h+arg_C]
0x87A08A: test    ecx, ecx
0x87A08C: mov     [ebp+4], ecx
0x87A08F: jz      short loc_87A09B
0x87A091: add     ecx, 4
0x87A094: push    ecx; lpAddend
0x87A095: call    dword ptr ds:0A28078h
0x87A09B: mov     ebx, 1
0x87A0A0: add     [esi+60h], ebx
0x87A0A3: mov     [esp+20h+arg_C], esi
0x87A0A7: mov     edx, [edi+38h]
0x87A0AA: lea     ecx, [esp+20h+arg_C]
0x87A0AE: push    ecx
0x87A0AF: push    edx
0x87A0B0: lea     ecx, [edi+40h]
0x87A0B3: mov     [esp+28h+var_4], 0
0x87A0BB: call    sub_76CE40
0x87A0C0: or      eax, 0FFFFFFFFh
0x87A0C3: add     [esi+60h], eax
0x87A0C6: mov     [esp+20h+var_4], eax
0x87A0CA: jnz     short loc_87A0D3
0x87A0CC: mov     ecx, esi
0x87A0CE: call    sub_7604D0
0x87A0D3: add     [edi+38h], ebx
0x87A0D6: mov     ecx, [esp+20h+var_C]
0x87A0DA: mov     large fs:0, ecx
0x87A0E1: pop     ecx
0x87A0E2: pop     edi
0x87A0E3: pop     esi
0x87A0E4: pop     ebp
0x87A0E5: pop     ebx
0x87A0E6: add     esp, 0Ch
0x87A0E9: retn    10h
