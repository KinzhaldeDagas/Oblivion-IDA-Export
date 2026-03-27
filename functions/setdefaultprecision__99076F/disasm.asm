0x99076F: push    esi
0x990770: push    30000h; Mask
0x990775: push    10000h; NewValue
0x99077A: xor     esi, esi
0x99077C: push    esi; CurrentState
0x99077D: call    __controlfp_s
0x990782: add     esp, 0Ch
0x990785: test    eax, eax
0x990787: jz      short loc_990796
0x990789: push    esi
0x99078A: push    esi
0x99078B: push    esi
0x99078C: push    esi
0x99078D: push    esi
0x99078E: call    __invoke_watson
0x990793: add     esp, 14h
0x990796: pop     esi
0x990797: retn
