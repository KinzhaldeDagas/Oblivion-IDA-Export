0x738F70: push    0FFFFFFFFh
0x738F72: push    offset ??1NiScreenPolygon@@UAE@XZ_SEH
0x738F77: mov     eax, large fs:0
0x738F7D: push    eax
0x738F7E: push    ecx
0x738F7F: push    esi
0x738F80: push    edi
0x738F81: mov     eax, ds:0B30AACh
0x738F86: xor     eax, esp
0x738F88: push    eax
0x738F89: lea     eax, [esp+1Ch+var_C]
0x738F8D: mov     large fs:0, eax
0x738F93: mov     esi, ecx
0x738F95: mov     [esp+1Ch+var_10], esi
0x738F99: mov     dword ptr [esi], offset ??_7NiScreenPolygon@@6B@; const NiScreenPolygon::`vftable'
0x738F9F: mov     eax, [esi+10h]
0x738FA2: push    eax
0x738FA3: mov     [esp+20h+var_4], 0
0x738FAB: call    FormHeapFree
0x738FB0: mov     eax, [esi+14h]
0x738FB3: push    eax
0x738FB4: call    FormHeapFree
0x738FB9: mov     eax, [esi+18h]
0x738FBC: push    eax
0x738FBD: call    FormHeapFree
0x738FC2: mov     edi, [esi+8]
0x738FC5: add     esp, 0Ch
0x738FC8: test    edi, edi
0x738FCA: jz      short loc_738FE8
0x738FCC: lea     eax, [edi+4]
0x738FCF: push    eax; lpAddend
0x738FD0: call    dword ptr ds:0A2807Ch
0x738FD6: test    eax, eax
0x738FD8: jnz     short loc_738FE8
0x738FDA: test    edi, edi
0x738FDC: jz      short loc_738FE8
0x738FDE: mov     edx, [edi]
0x738FE0: mov     eax, [edx]
0x738FE2: push    1
0x738FE4: mov     ecx, edi
0x738FE6: call    eax
0x738FE8: mov     ecx, esi
0x738FEA: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x738FF2: call    NiRefObject_destr
0x738FF7: mov     ecx, dword ptr [esp+1Ch+var_C]
0x738FFB: mov     large fs:0, ecx
0x739002: pop     ecx
0x739003: pop     edi
0x739004: pop     esi
0x739005: add     esp, 10h
0x739008: retn
