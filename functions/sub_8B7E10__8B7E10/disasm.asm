0x8B7E10: push    0FFFFFFFFh
0x8B7E12: push    offset SEH_8C8900
0x8B7E17: mov     eax, large fs:0
0x8B7E1D: push    eax
0x8B7E1E: push    ecx
0x8B7E1F: mov     eax, ds:0B30AACh
0x8B7E24: xor     eax, esp
0x8B7E26: push    eax
0x8B7E27: lea     eax, [esp+14h+var_C]
0x8B7E2B: mov     large fs:0, eax
0x8B7E31: push    14h; Size
0x8B7E33: call    FormHeapAlloc
0x8B7E38: add     esp, 4
0x8B7E3B: mov     [esp+14h+var_10], eax
0x8B7E3F: test    eax, eax
0x8B7E41: mov     [esp+14h+var_4], 0
0x8B7E49: jz      short loc_8B7E62
0x8B7E4B: mov     ecx, eax
0x8B7E4D: call    sub_8B7D50
0x8B7E52: mov     ecx, [esp+14h+var_C]
0x8B7E56: mov     large fs:0, ecx
0x8B7E5D: pop     ecx
0x8B7E5E: add     esp, 10h
0x8B7E61: retn
0x8B7E62: xor     eax, eax
0x8B7E64: mov     ecx, [esp+14h+var_C]
0x8B7E68: mov     large fs:0, ecx
0x8B7E6F: pop     ecx
0x8B7E70: add     esp, 10h
0x8B7E73: retn
