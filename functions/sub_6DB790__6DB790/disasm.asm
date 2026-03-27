0x6DB790: push    0FFFFFFFFh
0x6DB792: push    offset SEH_6E3B20
0x6DB797: mov     eax, large fs:0
0x6DB79D: push    eax
0x6DB79E: push    esi
0x6DB79F: push    edi
0x6DB7A0: mov     eax, ds:0B30AACh
0x6DB7A5: xor     eax, esp
0x6DB7A7: push    eax
0x6DB7A8: lea     eax, [esp+18h+var_C]
0x6DB7AC: mov     large fs:0, eax
0x6DB7B2: mov     edi, ecx
0x6DB7B4: fld     [esp+18h+arg_4]
0x6DB7B8: sub     esp, 8
0x6DB7BB: fstp    [esp+20h+var_1C]
0x6DB7BF: fld     [esp+20h+arg_0]
0x6DB7C3: fstp    [esp+20h+var_20]
0x6DB7C6: call    sub_6EBA60
0x6DB7CB: mov     ecx, [edi+1Ch]
0x6DB7CE: test    ecx, ecx
0x6DB7D0: mov     esi, eax
0x6DB7D2: jz      short loc_6DB839
0x6DB7D4: fld     [esp+18h+arg_4]
0x6DB7D8: sub     esp, 8
0x6DB7DB: fstp    [esp+20h+var_1C]; float
0x6DB7DF: lea     eax, [esp+20h+arg_4]
0x6DB7E3: fld     [esp+20h+arg_0]
0x6DB7E7: fstp    [esp+20h+var_20]; float
0x6DB7EA: push    eax; int
0x6DB7EB: call    sub_6E35A0
0x6DB7F0: mov     ecx, [esp+18h+arg_4]
0x6DB7F4: push    ecx
0x6DB7F5: mov     ecx, esi
0x6DB7F7: mov     [esp+1Ch+var_4], 0
0x6DB7FF: call    sub_6DABF0
0x6DB804: mov     edi, [esp+18h+arg_4]
0x6DB808: test    edi, edi
0x6DB80A: mov     dword ptr [esi+14h], 0
0x6DB811: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6DB819: jz      short loc_6DB837
0x6DB81B: lea     edx, [edi+4]
0x6DB81E: push    edx; lpAddend
0x6DB81F: call    dword ptr ds:0A2807Ch
0x6DB825: test    eax, eax
0x6DB827: jnz     short loc_6DB837
0x6DB829: test    edi, edi
0x6DB82B: jz      short loc_6DB837
0x6DB82D: mov     eax, [edi]
0x6DB82F: mov     edx, [eax]
0x6DB831: push    1
0x6DB833: mov     ecx, edi
0x6DB835: call    edx
0x6DB837: mov     eax, esi
0x6DB839: mov     ecx, dword ptr [esp+18h+var_C]
0x6DB83D: mov     large fs:0, ecx
0x6DB844: pop     ecx
0x6DB845: pop     edi
0x6DB846: pop     esi
0x6DB847: add     esp, 0Ch
0x6DB84A: retn    8
