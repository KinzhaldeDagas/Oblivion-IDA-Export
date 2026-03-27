0x748A40: push    0
0x748A42: push    1
0x748A44: push    1
0x748A46: push    offset aNimemory_log; "NiMemory.log"
0x748A4B: call    nullsub_retminus1?
0x748A50: add     esp, 10h
0x748A53: test    eax, eax
0x748A55: jl      short locret_748A72
0x748A57: mov     ds:0B4065Ch, eax
0x748A5C: mov     ds:0B40668h, eax
0x748A61: mov     ds:0B40674h, eax
0x748A66: mov     ds:0B40680h, eax
0x748A6B: mov     byte ptr ds:0B40684h, 1
0x748A72: retn
