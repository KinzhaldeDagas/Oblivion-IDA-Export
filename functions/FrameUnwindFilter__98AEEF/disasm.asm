0x98AEEF: mov     eax, [esp+arg_0]
0x98AEF3: mov     eax, [eax]
0x98AEF5: mov     eax, [eax]
0x98AEF7: cmp     eax, 0E0434F4Dh
0x98AEFC: jz      short loc_98AF16
0x98AEFE: cmp     eax, 0E06D7363h
0x98AF03: jnz     short loc_98AF30
0x98AF05: call    __getptd
0x98AF0A: and     dword ptr [eax+90h], 0
0x98AF11: jmp     ?terminate@@YAXXZ
0x98AF16: call    __getptd
0x98AF1B: cmp     dword ptr [eax+90h], 0
0x98AF22: jle     short loc_98AF30
0x98AF24: call    __getptd
0x98AF29: add     eax, 90h
0x98AF2E: dec     dword ptr [eax]
0x98AF30: xor     eax, eax
0x98AF32: retn
