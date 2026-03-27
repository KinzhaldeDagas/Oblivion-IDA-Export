0x6F1670: push    0FFFFFFFFh
0x6F1672: push    offset SEH_6F1670
0x6F1677: mov     eax, large fs:0
0x6F167D: push    eax
0x6F167E: push    ecx
0x6F167F: mov     eax, ds:0B30AACh
0x6F1684: xor     eax, esp
0x6F1686: push    eax
0x6F1687: lea     eax, [esp+14h+var_C]
0x6F168B: mov     large fs:0, eax
0x6F1691: mov     eax, [esp+14h+arg_0]
0x6F1695: mov     [esp+14h+arg_0], eax
0x6F1699: mov     [esp+14h+var_10], eax
0x6F169D: test    eax, eax
0x6F169F: mov     [esp+14h+var_4], 0
0x6F16A7: jz      short loc_6F16D3
0x6F16A9: mov     edx, [esp+14h+arg_4]
0x6F16AD: mov     ecx, [edx]
0x6F16AF: mov     [eax], ecx
0x6F16B1: push    0FFFFFFFFh
0x6F16B3: lea     ecx, [eax+4]
0x6F16B6: push    0
0x6F16B8: add     edx, 4
0x6F16BB: mov     dword ptr [ecx+18h], 0Fh
0x6F16C2: mov     dword ptr [ecx+14h], 0
0x6F16C9: push    edx
0x6F16CA: mov     byte ptr [ecx+4], 0
0x6F16CE: call    sub_414420
0x6F16D3: mov     ecx, [esp+14h+var_C]
0x6F16D7: mov     large fs:0, ecx
0x6F16DE: pop     ecx
0x6F16DF: add     esp, 10h
0x6F16E2: retn
