0x7169C0: push    0FFFFFFFFh
0x7169C2: push    offset SEH_8C8970
0x7169C7: mov     eax, large fs:0
0x7169CD: push    eax
0x7169CE: push    ecx
0x7169CF: push    esi
0x7169D0: push    edi
0x7169D1: mov     eax, ds:0B30AACh
0x7169D6: xor     eax, esp
0x7169D8: push    eax
0x7169D9: lea     eax, [esp+1Ch+var_C]
0x7169DD: mov     large fs:0, eax
0x7169E3: mov     edi, ecx
0x7169E5: push    20h ; ' '; Size
0x7169E7: call    FormHeapAlloc
0x7169EC: add     esp, 4
0x7169EF: mov     [esp+1Ch+var_10], eax
0x7169F3: xor     esi, esi
0x7169F5: cmp     eax, esi
0x7169F7: mov     [esp+1Ch+var_4], esi
0x7169FB: jz      short loc_716A07
0x7169FD: push    esi
0x7169FE: mov     ecx, eax; this
0x716A00: call    ??0NiDefaultAVObjectPalette@@QAE@XZ; NiDefaultAVObjectPalette::NiDefaultAVObjectPalette(void)
0x716A05: mov     esi, eax
0x716A07: mov     eax, [esp+1Ch+arg_0]
0x716A0B: push    eax
0x716A0C: push    esi
0x716A0D: mov     ecx, edi
0x716A0F: mov     [esp+24h+var_4], 0FFFFFFFFh
0x716A17: call    sub_733850
0x716A1C: mov     eax, esi
0x716A1E: mov     ecx, [esp+1Ch+var_C]
0x716A22: mov     large fs:0, ecx
0x716A29: pop     ecx
0x716A2A: pop     edi
0x716A2B: pop     esi
0x716A2C: add     esp, 10h
0x716A2F: retn    4
