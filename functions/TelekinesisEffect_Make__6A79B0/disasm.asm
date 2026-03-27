0x6A79B0: push    0FFFFFFFFh
0x6A79B2: push    offset SEH_8C8900
0x6A79B7: mov     eax, large fs:0
0x6A79BD: push    eax
0x6A79BE: push    ecx
0x6A79BF: mov     eax, ds:0B30AACh
0x6A79C4: xor     eax, esp
0x6A79C6: push    eax
0x6A79C7: lea     eax, [esp+14h+var_C]
0x6A79CB: mov     large fs:0, eax
0x6A79D1: push    50h ; 'P'; Size
0x6A79D3: call    FormHeapAlloc
0x6A79D8: add     esp, 4
0x6A79DB: mov     [esp+14h+var_10], eax
0x6A79DF: test    eax, eax
0x6A79E1: mov     [esp+14h+var_4], 0
0x6A79E9: jz      short loc_6A7A11
0x6A79EB: mov     ecx, [esp+14h+arg_8]
0x6A79EF: mov     edx, [esp+14h+arg_4]
0x6A79F3: push    ecx; int
0x6A79F4: mov     ecx, [esp+18h+arg_0]
0x6A79F8: push    edx; int
0x6A79F9: push    ecx; int
0x6A79FA: mov     ecx, eax; this
0x6A79FC: call    TelekinesisEffect_constr
0x6A7A01: mov     ecx, [esp+14h+var_C]
0x6A7A05: mov     large fs:0, ecx
0x6A7A0C: pop     ecx
0x6A7A0D: add     esp, 10h
0x6A7A10: retn
0x6A7A11: xor     eax, eax
0x6A7A13: mov     ecx, [esp+14h+var_C]
0x6A7A17: mov     large fs:0, ecx
0x6A7A1E: pop     ecx
0x6A7A1F: add     esp, 10h
0x6A7A22: retn
