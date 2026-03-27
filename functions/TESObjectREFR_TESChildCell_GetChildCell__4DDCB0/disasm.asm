0x4DDCB0: push    esi
0x4DDCB1: mov     esi, ecx
0x4DDCB3: push    edi
0x4DDCB4: mov     edi, [esi+28h]
0x4DDCB7: lea     ecx, [esi-18h]; this
0x4DDCBA: call    TESObjectREFR_IsPersistent?
0x4DDCBF: test    al, al
0x4DDCC1: jnz     short loc_4DDCCD
0x4DDCC3: mov     eax, [esi-10h]
0x4DDCC6: shr     eax, 0Eh
0x4DDCC9: test    al, 1
0x4DDCCB: jz      short loc_4DDCE6
0x4DDCCD: test    edi, edi
0x4DDCCF: jz      short loc_4DDCDC
0x4DDCD1: mov     ecx, edi; this
0x4DDCD3: call    TESObjectCELL_IsInterior
0x4DDCD8: test    al, al
0x4DDCDA: jnz     short loc_4DDCE6
0x4DDCDC: pop     edi
0x4DDCDD: lea     ecx, [esi+2Ch]
0x4DDCE0: pop     esi
0x4DDCE1: jmp     sub_41FF80
0x4DDCE6: mov     eax, edi
0x4DDCE8: pop     edi
0x4DDCE9: pop     esi
0x4DDCEA: retn
