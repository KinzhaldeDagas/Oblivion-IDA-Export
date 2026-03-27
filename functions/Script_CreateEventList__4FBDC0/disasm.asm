0x4FBDC0: push    esi
0x4FBDC1: push    edi
0x4FBDC2: push    14h; Size
0x4FBDC4: mov     edi, ecx
0x4FBDC6: call    FormHeapAlloc
0x4FBDCB: xor     esi, esi
0x4FBDCD: add     esp, 4
0x4FBDD0: cmp     eax, esi
0x4FBDD2: jz      short loc_4FBDE6
0x4FBDD4: xor     ecx, ecx
0x4FBDD6: mov     [eax+4], ecx
0x4FBDD9: mov     [eax+8], ecx
0x4FBDDC: mov     [eax+0Ch], ecx
0x4FBDDF: mov     [eax], esi
0x4FBDE1: mov     [eax+10h], esi
0x4FBDE4: mov     esi, eax
0x4FBDE6: mov     ecx, edi
0x4FBDE8: call    sub_4FA910
0x4FBDED: mov     [esi], edi
0x4FBDEF: mov     [esi+0Ch], eax
0x4FBDF2: pop     edi
0x4FBDF3: mov     eax, esi
0x4FBDF5: pop     esi
0x4FBDF6: retn
