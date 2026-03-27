0x531D80: mov     eax, ds:0B2EB3Ch
0x531D85: add     eax, 1
0x531D88: and     eax, 0FFFFh
0x531D8D: mov     ds:0B2EB3Ch, eax
0x531D92: jnz     short locret_531D9E
0x531D94: mov     eax, 0Ah
0x531D99: mov     ds:0B2EB3Ch, eax
0x531D9E: retn
