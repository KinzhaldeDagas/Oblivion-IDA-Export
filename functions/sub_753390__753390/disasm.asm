0x753390: push    esi
0x753391: push    3Ch ; '<'; Size
0x753393: call    FormHeapAlloc
0x753398: mov     esi, eax
0x75339A: add     esp, 4
0x75339D: test    esi, esi
0x75339F: jz      short loc_7533CC
0x7533A1: mov     ecx, esi
0x7533A3: call    sub_75E800
0x7533A8: mov     dword ptr [esi], offset ??_7NiPSysVortexFieldModifier@@6B@; const NiPSysVortexFieldModifier::`vftable'
0x7533AE: mov     eax, ds:0B3F9A8h
0x7533B3: mov     [esi+30h], eax
0x7533B6: mov     ecx, ds:0B3F9ACh
0x7533BC: mov     [esi+34h], ecx
0x7533BF: mov     edx, ds:0B3F9B0h
0x7533C5: mov     [esi+38h], edx
0x7533C8: mov     eax, esi
0x7533CA: pop     esi
0x7533CB: retn
0x7533CC: xor     eax, eax
0x7533CE: pop     esi
0x7533CF: retn
