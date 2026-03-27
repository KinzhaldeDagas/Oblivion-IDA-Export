0x442740: push    esi
0x442741: mov     esi, [esp+4+a2]
0x442745: test    esi, esi
0x442747: push    edi
0x442748: mov     edi, ecx
0x44274A: jz      short loc_442769
0x44274C: mov     ecx, esi; this
0x44274E: call    TESObjectCELL_IsInterior
0x442753: test    al, al
0x442755: push    esi; a2
0x442756: mov     ecx, edi; this
0x442758: jz      short loc_442764
0x44275A: call    sub_43FD70
0x44275F: pop     edi
0x442760: pop     esi
0x442761: retn    4
0x442764: call    sub_43FED0
0x442769: pop     edi
0x44276A: pop     esi
0x44276B: retn    4
