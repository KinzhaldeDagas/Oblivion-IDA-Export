0x6D23D0: push    0FFFFFFFFh
0x6D23D2: push    offset SEH_8C62B0
0x6D23D7: mov     eax, large fs:0
0x6D23DD: push    eax
0x6D23DE: push    ecx
0x6D23DF: push    esi
0x6D23E0: mov     eax, ds:0B30AACh
0x6D23E5: xor     eax, esp
0x6D23E7: push    eax
0x6D23E8: lea     eax, [esp+18h+var_C]
0x6D23EC: mov     large fs:0, eax
0x6D23F2: push    40h ; '@'; Size
0x6D23F4: call    FormHeapAlloc
0x6D23F9: mov     esi, eax
0x6D23FB: add     esp, 4
0x6D23FE: mov     [esp+18h+var_10], esi
0x6D2402: xor     eax, eax
0x6D2404: cmp     esi, eax
0x6D2406: mov     [esp+18h+var_4], eax
0x6D240A: jz      short loc_6D241B
0x6D240C: mov     ecx, esi
0x6D240E: call    sub_6EC180
0x6D2413: mov     dword ptr [esi], offset ??_7NiAlphaController@@6B@; const NiAlphaController::`vftable'
0x6D2419: mov     eax, esi
0x6D241B: mov     ecx, [esp+18h+var_C]
0x6D241F: mov     large fs:0, ecx
0x6D2426: pop     ecx
0x6D2427: pop     esi
0x6D2428: add     esp, 10h
0x6D242B: retn
