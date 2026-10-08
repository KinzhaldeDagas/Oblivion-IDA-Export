0x890720: mov     eax, [ecx+2A0h]; MorrowindMovements: commits pending state at proxy+0x2A0 into hkCharacterContext state slot proxy+0x1EC, then resets pending state to sentinel 0x0B. Use +0x1EC as active state when +0x2A0 is sentinel.
0x890726: cmp     eax, 0Bh
0x890729: jz      short locret_89073B
0x89072B: mov     [ecx+1ECh], eax; Writes pending state from proxy+0x2A0 into active hkCharacterContext state id at proxy+0x1EC.
0x890731: mov     dword ptr [ecx+2A0h], 0Bh; Resets proxy+0x2A0 to transition sentinel 0x0B after committing state.
0x89073B: retn
