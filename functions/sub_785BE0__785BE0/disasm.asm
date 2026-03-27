0x785BE0: push    0FFFFFFFFh
0x785BE2: push    offset SEH_785BE0
0x785BE7: mov     eax, large fs:0
0x785BED: push    eax
0x785BEE: push    ecx
0x785BEF: mov     eax, ds:0B30AACh
0x785BF4: xor     eax, esp
0x785BF6: push    eax
0x785BF7: lea     eax, [esp+14h+var_C]
0x785BFB: mov     large fs:0, eax
0x785C01: mov     eax, ecx
0x785C03: fldz
0x785C05: xor     ecx, ecx
0x785C07: fst     dword ptr [eax]
0x785C09: mov     [eax+10h], ecx
0x785C0C: fld1
0x785C0E: mov     [eax+14h], ecx
0x785C11: fstp    dword ptr [eax+4]
0x785C14: mov     [eax+18h], ecx
0x785C17: fstp    dword ptr [eax+8]
0x785C1A: mov     [eax+20h], ecx
0x785C1D: mov     [eax+24h], ecx
0x785C20: mov     [eax+28h], ecx
0x785C23: mov     [eax+30h], ecx
0x785C26: mov     [eax+34h], ecx
0x785C29: mov     [eax+38h], ecx
0x785C2C: mov     [eax+40h], ecx
0x785C2F: mov     [eax+44h], ecx
0x785C32: mov     [eax+48h], ecx
0x785C35: mov     [eax+50h], ecx
0x785C38: mov     [eax+54h], ecx
0x785C3B: mov     [eax+58h], ecx
0x785C3E: mov     ecx, [esp+14h+var_C]
0x785C42: mov     large fs:0, ecx
0x785C49: pop     ecx
0x785C4A: add     esp, 10h
0x785C4D: retn
