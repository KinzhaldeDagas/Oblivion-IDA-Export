0x46B590: push    esi
0x46B591: mov     esi, ecx
0x46B593: call    TESForm_RemoveFromGlobalLists
0x46B598: mov     ecx, ds:0B33B00h; this
0x46B59E: test    ecx, ecx
0x46B5A0: jz      short loc_46B5AA
0x46B5A2: push    0; a3
0x46B5A4: push    esi; a2
0x46B5A5: call    sub_45B780
0x46B5AA: or      dword ptr [esi+8], 4000h
0x46B5B1: pop     esi
0x46B5B2: retn
