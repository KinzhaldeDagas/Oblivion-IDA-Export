0x7124F0: mov     eax, [esp+arg_0]
0x7124F4: test    eax, eax
0x7124F6: jnz     short loc_7124FE
0x7124F8: or      eax, 0FFFFFFFFh
0x7124FB: retn    4
0x7124FE: lea     edx, [esp+arg_0]
0x712502: push    edx
0x712503: push    eax
0x712504: add     ecx, 244h
0x71250A: mov     [esp+8+arg_0], 0FFFFFFFFh
0x712512: call    NiTMap_GetAt
0x712517: mov     eax, [esp+arg_0]
0x71251B: retn    4
