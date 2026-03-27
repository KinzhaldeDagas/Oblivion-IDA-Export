0x6DFCF0: push    0FFFFFFFFh
0x6DFCF2: push    offset SEH_8C8970
0x6DFCF7: mov     eax, large fs:0
0x6DFCFD: push    eax
0x6DFCFE: push    ecx
0x6DFCFF: push    esi
0x6DFD00: push    edi
0x6DFD01: mov     eax, ds:0B30AACh
0x6DFD06: xor     eax, esp
0x6DFD08: push    eax
0x6DFD09: lea     eax, [esp+1Ch+var_C]
0x6DFD0D: mov     large fs:0, eax
0x6DFD13: mov     edi, ecx
0x6DFD15: push    44h ; 'D'; Size
0x6DFD17: call    FormHeapAlloc
0x6DFD1C: add     esp, 4
0x6DFD1F: mov     [esp+1Ch+var_10], eax
0x6DFD23: xor     esi, esi
0x6DFD25: cmp     eax, esi
0x6DFD27: mov     [esp+1Ch+var_4], esi
0x6DFD2B: jz      short loc_6DFD39
0x6DFD2D: push    esi
0x6DFD2E: push    esi
0x6DFD2F: push    esi
0x6DFD30: mov     ecx, eax; this
0x6DFD32: call    ??0NiLookAtInterpolator@@QAE@XZ; NiLookAtInterpolator::NiLookAtInterpolator(void)
0x6DFD37: mov     esi, eax
0x6DFD39: mov     eax, [esp+1Ch+arg_0]
0x6DFD3D: push    eax
0x6DFD3E: push    esi
0x6DFD3F: mov     ecx, edi
0x6DFD41: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6DFD49: call    sub_6DF950
0x6DFD4E: mov     eax, esi
0x6DFD50: mov     ecx, [esp+1Ch+var_C]
0x6DFD54: mov     large fs:0, ecx
0x6DFD5B: pop     ecx
0x6DFD5C: pop     edi
0x6DFD5D: pop     esi
0x6DFD5E: add     esp, 10h
0x6DFD61: retn    4
