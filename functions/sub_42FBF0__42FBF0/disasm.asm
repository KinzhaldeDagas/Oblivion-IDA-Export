0x42FBF0: mov     eax, [ecx+0Ch]
0x42FBF3: test    eax, eax
0x42FBF5: jz      short locret_42FC16
0x42FBF7: push    esi
0x42FBF8: lea     esi, [eax+2Ch]
0x42FBFB: mov     eax, [esi+8]
0x42FBFE: push    0FFFFFFFFh; dwMilliseconds
0x42FC00: push    eax; hHandle
0x42FC01: call    ds:WaitForSingleObject
0x42FC07: cmp     eax, 102h
0x42FC0C: jz      short loc_42FC15
0x42FC0E: push    esi; lpAddend
0x42FC0F: call    ds:InterlockedDecrement
0x42FC15: pop     esi
0x42FC16: retn
