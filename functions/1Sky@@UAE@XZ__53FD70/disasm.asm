0x53FD70: push    0FFFFFFFFh
0x53FD72: push    offset ??1Sky@@UAE@XZ_SEH
0x53FD77: mov     eax, large fs:0
0x53FD7D: push    eax
0x53FD7E: sub     esp, 8
0x53FD81: push    ebp
0x53FD82: push    esi
0x53FD83: push    edi
0x53FD84: mov     eax, ds:0B30AACh
0x53FD89: xor     eax, esp
0x53FD8B: push    eax
0x53FD8C: lea     eax, [esp+24h+var_C]
0x53FD90: mov     large fs:0, eax
0x53FD96: mov     edi, ecx
0x53FD98: mov     [esp+24h+var_10], edi
0x53FD9C: mov     dword ptr [edi], offset ??_7Sky@@6B@; const Sky::`vftable'
0x53FDA2: mov     ecx, [edi+20h]
0x53FDA5: test    ecx, ecx
0x53FDA7: mov     [esp+24h+var_4], 1
0x53FDAF: jz      short loc_53FDB9
0x53FDB1: mov     eax, [ecx]
0x53FDB3: mov     edx, [eax]
0x53FDB5: push    1
0x53FDB7: call    edx
0x53FDB9: mov     ecx, [edi+24h]
0x53FDBC: test    ecx, ecx
0x53FDBE: jz      short loc_53FDC8
0x53FDC0: mov     eax, [ecx]
0x53FDC2: mov     edx, [eax]
0x53FDC4: push    1
0x53FDC6: call    edx
0x53FDC8: mov     ecx, [edi+2Ch]
0x53FDCB: test    ecx, ecx
0x53FDCD: jz      short loc_53FDD7
0x53FDCF: mov     eax, [ecx]
0x53FDD1: mov     edx, [eax]
0x53FDD3: push    1
0x53FDD5: call    edx
0x53FDD7: mov     ecx, [edi+28h]
0x53FDDA: test    ecx, ecx
0x53FDDC: jz      short loc_53FDE6
0x53FDDE: mov     eax, [ecx]
0x53FDE0: mov     edx, [eax]
0x53FDE2: push    1
0x53FDE4: call    edx
0x53FDE6: mov     ecx, [edi+30h]
0x53FDE9: test    ecx, ecx
0x53FDEB: jz      short loc_53FDF5
0x53FDED: mov     eax, [ecx]
0x53FDEF: mov     edx, [eax]
0x53FDF1: push    1
0x53FDF3: call    edx
0x53FDF5: mov     ecx, [edi+34h]
0x53FDF8: test    ecx, ecx
0x53FDFA: jz      short loc_53FE04
0x53FDFC: mov     eax, [ecx]
0x53FDFE: mov     edx, [eax]
0x53FE00: push    1
0x53FE02: call    edx
0x53FE04: mov     ecx, [edi+38h]
0x53FE07: test    ecx, ecx
0x53FE09: jz      short loc_53FE13
0x53FE0B: mov     eax, [ecx]
0x53FE0D: mov     edx, [eax]
0x53FE0F: push    1
0x53FE11: call    edx
0x53FE13: mov     esi, [edi+8]
0x53FE16: test    esi, esi
0x53FE18: jz      short loc_53FE3D
0x53FE1A: lea     eax, [esi+4]
0x53FE1D: push    eax; lpAddend
0x53FE1E: call    dword ptr ds:0A2807Ch
0x53FE24: test    eax, eax
0x53FE26: jnz     short loc_53FE36
0x53FE28: test    esi, esi
0x53FE2A: jz      short loc_53FE36
0x53FE2C: mov     edx, [esi]
0x53FE2E: mov     eax, [edx]
0x53FE30: push    1
0x53FE32: mov     ecx, esi
0x53FE34: call    eax
0x53FE36: mov     dword ptr [edi+8], 0
0x53FE3D: mov     eax, [edi+4]
0x53FE40: test    eax, eax
0x53FE42: jz      short loc_53FE83
0x53FE44: cmp     dword ptr [eax+1Ch], 0
0x53FE48: jz      short loc_53FE83
0x53FE4A: mov     ecx, [eax+1Ch]
0x53FE4D: mov     edx, [ecx]
0x53FE4F: mov     edx, [edx+88h]
0x53FE55: push    eax
0x53FE56: lea     eax, [esp+28h+var_14]
0x53FE5A: push    eax
0x53FE5B: call    edx
0x53FE5D: mov     eax, [esp+24h+var_14]
0x53FE61: test    eax, eax
0x53FE63: jz      short loc_53FE83
0x53FE65: mov     esi, eax
0x53FE67: add     eax, 4
0x53FE6A: push    eax; lpAddend
0x53FE6B: call    dword ptr ds:0A2807Ch
0x53FE71: test    eax, eax
0x53FE73: jnz     short loc_53FE83
0x53FE75: test    esi, esi
0x53FE77: jz      short loc_53FE83
0x53FE79: mov     eax, [esi]
0x53FE7B: mov     edx, [eax]
0x53FE7D: push    1
0x53FE7F: mov     ecx, esi
0x53FE81: call    edx
0x53FE83: mov     esi, [edi+4]
0x53FE86: test    esi, esi
0x53FE88: jz      short loc_53FEAD
0x53FE8A: lea     eax, [esi+4]
0x53FE8D: push    eax; lpAddend
0x53FE8E: call    dword ptr ds:0A2807Ch
0x53FE94: test    eax, eax
0x53FE96: jnz     short loc_53FEA6
0x53FE98: test    esi, esi
0x53FE9A: jz      short loc_53FEA6
0x53FE9C: mov     edx, [esi]
0x53FE9E: mov     eax, [edx]
0x53FEA0: push    1
0x53FEA2: mov     ecx, esi
0x53FEA4: call    eax
0x53FEA6: mov     dword ptr [edi+4], 0
0x53FEAD: mov     esi, [edi+0E0h]
0x53FEB3: test    esi, esi
0x53FEB5: jz      short loc_53FEE5
0x53FEB7: mov     eax, [esi]
0x53FEB9: test    eax, eax
0x53FEBB: jz      short loc_53FEE5
0x53FEBD: mov     ebp, [eax]
0x53FEBF: test    ebp, ebp
0x53FEC1: jz      short loc_53FED3
0x53FEC3: mov     ecx, ebp; this
0x53FEC5: call    sub_6B73E0
0x53FECA: push    ebp
0x53FECB: call    FormHeapFree
0x53FED0: add     esp, 4
0x53FED3: mov     eax, [esi]
0x53FED5: push    eax
0x53FED6: call    FormHeapFree
0x53FEDB: mov     esi, [esi+4]
0x53FEDE: add     esp, 4
0x53FEE1: test    esi, esi
0x53FEE3: jnz     short loc_53FEB7
0x53FEE5: mov     esi, [edi+0E0h]
0x53FEEB: cmp     dword ptr [esi+4], 0
0x53FEEF: jz      short loc_53FF07
0x53FEF1: mov     eax, [esi+4]
0x53FEF4: mov     ebp, [eax+4]
0x53FEF7: push    eax
0x53FEF8: call    FormHeapFree
0x53FEFD: add     esp, 4
0x53FF00: test    ebp, ebp
0x53FF02: mov     [esi+4], ebp
0x53FF05: jnz     short loc_53FEF1
0x53FF07: mov     dword ptr [esi], 0
0x53FF0D: mov     eax, [edi+0E0h]
0x53FF13: push    eax
0x53FF14: call    FormHeapFree
0x53FF19: mov     esi, [edi+8]
0x53FF1C: add     esp, 4
0x53FF1F: test    esi, esi
0x53FF21: mov     byte ptr [esp+24h+var_4], 0
0x53FF26: jz      short loc_53FF44
0x53FF28: lea     ecx, [esi+4]
0x53FF2B: push    ecx; lpAddend
0x53FF2C: call    dword ptr ds:0A2807Ch
0x53FF32: test    eax, eax
0x53FF34: jnz     short loc_53FF44
0x53FF36: test    esi, esi
0x53FF38: jz      short loc_53FF44
0x53FF3A: mov     edx, [esi]
0x53FF3C: mov     eax, [edx]
0x53FF3E: push    1
0x53FF40: mov     ecx, esi
0x53FF42: call    eax
0x53FF44: mov     edi, [edi+4]
0x53FF47: test    edi, edi
0x53FF49: mov     [esp+24h+var_4], 0FFFFFFFFh
0x53FF51: jz      short loc_53FF6F
0x53FF53: lea     ecx, [edi+4]
0x53FF56: push    ecx; lpAddend
0x53FF57: call    dword ptr ds:0A2807Ch
0x53FF5D: test    eax, eax
0x53FF5F: jnz     short loc_53FF6F
0x53FF61: test    edi, edi
0x53FF63: jz      short loc_53FF6F
0x53FF65: mov     edx, [edi]
0x53FF67: mov     eax, [edx]
0x53FF69: push    1
0x53FF6B: mov     ecx, edi
0x53FF6D: call    eax
0x53FF6F: mov     ecx, dword ptr [esp+24h+var_C]
0x53FF73: mov     large fs:0, ecx
0x53FF7A: pop     ecx
0x53FF7B: pop     edi
0x53FF7C: pop     esi
0x53FF7D: pop     ebp
0x53FF7E: add     esp, 14h
0x53FF81: retn
