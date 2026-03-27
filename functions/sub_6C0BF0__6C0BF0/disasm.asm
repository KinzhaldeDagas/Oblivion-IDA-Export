0x6C0BF0: mov     eax, [esp+arg_8]
0x6C0BF4: fld     [esp+arg_0]
0x6C0BF8: sub     esp, 10h
0x6C0BFB: lea     ecx, [eax+4]
0x6C0BFE: push    ecx; int
0x6C0BFF: add     eax, 30h ; '0'
0x6C0C02: push    eax; int
0x6C0C03: mov     eax, [esp+18h+arg_4]
0x6C0C07: lea     edx, [eax+20h]
0x6C0C0A: push    edx; int
0x6C0C0B: add     eax, 4
0x6C0C0E: push    eax; int
0x6C0C0F: push    ecx
0x6C0C10: lea     eax, [esp+24h+var_10]
0x6C0C14: fstp    [esp+24h+var_24]; float
0x6C0C17: push    eax; int
0x6C0C18: call    sub_714F80
0x6C0C1D: mov     edx, [eax]
0x6C0C1F: mov     ecx, [esp+28h+arg_C]
0x6C0C23: mov     [ecx], edx
0x6C0C25: mov     edx, [eax+4]
0x6C0C28: mov     [ecx+4], edx
0x6C0C2B: mov     edx, [eax+8]
0x6C0C2E: mov     [ecx+8], edx
0x6C0C31: mov     eax, [eax+0Ch]
0x6C0C34: mov     [ecx+0Ch], eax
0x6C0C37: add     esp, 28h
0x6C0C3A: retn
