0x6F4AE0: push    0FFFFFFFFh
0x6F4AE2: push    offset SEH_6F4AE0
0x6F4AE7: mov     eax, large fs:0
0x6F4AED: push    eax
0x6F4AEE: sub     esp, 8
0x6F4AF1: mov     eax, ds:0B30AACh
0x6F4AF6: xor     eax, esp
0x6F4AF8: push    eax
0x6F4AF9: lea     eax, [esp+18h+var_C]
0x6F4AFD: mov     large fs:0, eax
0x6F4B03: sub     esp, 30h
0x6F4B06: mov     eax, esp
0x6F4B08: xor     edx, edx
0x6F4B0A: mov     dword ptr [eax+18h], 0Fh
0x6F4B11: mov     [eax+14h], edx
0x6F4B14: mov     [esp+48h+var_10], esp
0x6F4B18: mov     [eax+4], dl
0x6F4B1B: mov     [eax+24h], edx
0x6F4B1E: mov     [eax+28h], edx
0x6F4B21: mov     [eax+2Ch], edx
0x6F4B24: mov     eax, [esp+48h+arg_0]
0x6F4B28: push    eax
0x6F4B29: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x6F4B31: call    sub_6F4930
0x6F4B36: mov     ecx, [esp+18h+var_C]
0x6F4B3A: mov     large fs:0, ecx
0x6F4B41: pop     ecx
0x6F4B42: add     esp, 14h
0x6F4B45: retn    4
