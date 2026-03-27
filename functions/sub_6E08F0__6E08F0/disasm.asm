0x6E08F0: push    0FFFFFFFFh
0x6E08F2: push    offset SEH_8C62B0
0x6E08F7: mov     eax, large fs:0
0x6E08FD: push    eax
0x6E08FE: push    ecx
0x6E08FF: push    esi
0x6E0900: mov     eax, ds:0B30AACh
0x6E0905: xor     eax, esp
0x6E0907: push    eax
0x6E0908: lea     eax, [esp+18h+var_C]
0x6E090C: mov     large fs:0, eax
0x6E0912: push    40h ; '@'; Size
0x6E0914: call    FormHeapAlloc
0x6E0919: mov     esi, eax
0x6E091B: add     esp, 4
0x6E091E: mov     [esp+18h+var_10], esi
0x6E0922: xor     eax, eax
0x6E0924: cmp     esi, eax
0x6E0926: mov     [esp+18h+var_4], eax
0x6E092A: jz      short loc_6E093B
0x6E092C: mov     ecx, esi
0x6E092E: call    sub_6EC180
0x6E0933: mov     dword ptr [esi], offset ??_7NiLightDimmerController@@6B@; const NiLightDimmerController::`vftable'
0x6E0939: mov     eax, esi
0x6E093B: mov     ecx, [esp+18h+var_C]
0x6E093F: mov     large fs:0, ecx
0x6E0946: pop     ecx
0x6E0947: pop     esi
0x6E0948: add     esp, 10h
0x6E094B: retn
