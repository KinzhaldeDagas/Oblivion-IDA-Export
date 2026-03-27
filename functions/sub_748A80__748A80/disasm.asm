0x748A80: push    0
0x748A82: push    1
0x748A84: push    1
0x748A86: push    offset aNiprofile_log; "NiProfile.log"
0x748A8B: call    nullsub_retminus1?
0x748A90: add     esp, 10h
0x748A93: test    eax, eax
0x748A95: jl      short locret_748AA6
0x748A97: mov     ds:0B40638h, eax
0x748A9C: mov     ds:0B40644h, eax
0x748AA1: mov     ds:0B40650h, eax
0x748AA6: retn
