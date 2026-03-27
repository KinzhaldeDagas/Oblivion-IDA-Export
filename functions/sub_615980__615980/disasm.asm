0x615980: fldz
0x615982: push    esi
0x615983: mov     esi, ecx
0x615985: fcomp   dword ptr [esi+184h]
0x61598B: fnstsw  ax
0x61598D: test    ah, 41h
0x615990: jnz     short loc_6159AE
0x615992: push    edi; a5
0x615993: mov     edi, [esi+3Ch]; a1
0x615996: push    0; a4
0x615998: call    sub_6135F0
0x61599D: push    eax; a3
0x61599E: push    edi; a2
0x61599F: call    TESObjectREFR_GetDistanceBetween?
0x6159A4: fstp    dword ptr [esi+184h]
0x6159AA: add     esp, 0Ch
0x6159AD: pop     edi
0x6159AE: fld     dword ptr [esi+184h]
0x6159B4: pop     esi
0x6159B5: retn
