0x99D569: cmp     [ebp-1Ch], ebx
0x99D56C: jz      short loc_99D58B
0x99D56E: mov     eax, edi
0x99D570: sar     eax, 5
0x99D573: and     edi, 1Fh
0x99D576: imul    edi, 28h ; '('
0x99D579: mov     eax, dword_BAAAC0[eax*4]
0x99D580: lea     eax, [eax+edi+0Ch]
0x99D584: push    eax; lpCriticalSection
0x99D585: call    ds:EnterCriticalSection
0x99D58B: mov     eax, [ebp-1Ch]
0x99D58E: call    __SEH_epilog4
0x99D593: retn
