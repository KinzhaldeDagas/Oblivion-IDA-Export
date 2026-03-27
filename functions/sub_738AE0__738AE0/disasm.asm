0x738AE0: push    0FFFFFFFFh
0x738AE2: push    offset SEH_8C8900
0x738AE7: mov     eax, large fs:0
0x738AED: push    eax
0x738AEE: push    ecx
0x738AEF: mov     eax, ds:0B30AACh
0x738AF4: xor     eax, esp
0x738AF6: push    eax
0x738AF7: lea     eax, [esp+14h+var_C]
0x738AFB: mov     large fs:0, eax
0x738B01: push    70h ; 'p'; Size
0x738B03: call    FormHeapAlloc
0x738B08: add     esp, 4
0x738B0B: mov     [esp+14h+var_10], eax
0x738B0F: test    eax, eax
0x738B11: mov     [esp+14h+var_4], 0
0x738B19: jz      short loc_738B32
0x738B1B: mov     ecx, eax; this
0x738B1D: call    ??0NiScreenGeometryData@@QAE@XZ; NiScreenGeometryData::NiScreenGeometryData(void)
0x738B22: mov     ecx, [esp+14h+var_C]
0x738B26: mov     large fs:0, ecx
0x738B2D: pop     ecx
0x738B2E: add     esp, 10h
0x738B31: retn
0x738B32: xor     eax, eax
0x738B34: mov     ecx, [esp+14h+var_C]
0x738B38: mov     large fs:0, ecx
0x738B3F: pop     ecx
0x738B40: add     esp, 10h
0x738B43: retn
