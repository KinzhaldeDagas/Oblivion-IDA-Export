0x6D4620: push    0FFFFFFFFh
0x6D4622: push    offset SEH_8C62B0
0x6D4627: mov     eax, large fs:0
0x6D462D: push    eax
0x6D462E: push    ecx
0x6D462F: push    esi
0x6D4630: mov     eax, ds:0B30AACh
0x6D4635: xor     eax, esp
0x6D4637: push    eax
0x6D4638: lea     eax, [esp+18h+var_C]
0x6D463C: mov     large fs:0, eax
0x6D4642: push    40h ; '@'; Size
0x6D4644: call    FormHeapAlloc
0x6D4649: mov     esi, eax
0x6D464B: add     esp, 4
0x6D464E: mov     [esp+18h+var_10], esi
0x6D4652: xor     eax, eax
0x6D4654: cmp     esi, eax
0x6D4656: mov     [esp+18h+var_4], eax
0x6D465A: jz      short loc_6D466B
0x6D465C: mov     ecx, esi
0x6D465E: call    sub_6EC630
0x6D4663: mov     dword ptr [esi], offset ??_7NiVisController@@6B@; const NiVisController::`vftable'
0x6D4669: mov     eax, esi
0x6D466B: mov     ecx, [esp+18h+var_C]
0x6D466F: mov     large fs:0, ecx
0x6D4676: pop     ecx
0x6D4677: pop     esi
0x6D4678: add     esp, 10h
0x6D467B: retn
