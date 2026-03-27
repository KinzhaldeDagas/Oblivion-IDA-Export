0x8C6E80: push    0FFFFFFFFh
0x8C6E82: push    offset SEH_8C6E80
0x8C6E87: mov     eax, large fs:0
0x8C6E8D: push    eax
0x8C6E8E: push    ecx
0x8C6E8F: push    ebx
0x8C6E90: push    esi
0x8C6E91: push    edi
0x8C6E92: mov     eax, ds:0B30AACh
0x8C6E97: xor     eax, esp
0x8C6E99: push    eax
0x8C6E9A: lea     eax, [esp+20h+var_C]
0x8C6E9E: mov     large fs:0, eax
0x8C6EA4: mov     esi, ecx
0x8C6EA6: mov     [esp+20h+var_10], esi
0x8C6EAA: mov     eax, [esi+0B0h]
0x8C6EB0: test    eax, eax
0x8C6EB2: mov     edi, ds:0BA9DE4h
0x8C6EB8: mov     ebx, large fs:2Ch
0x8C6EBF: mov     [esp+20h+var_4], 0Ah
0x8C6EC7: js      short loc_8C6EF4
0x8C6EC9: mov     ecx, [ebx+edi*4]
0x8C6ECC: mov     ecx, [ecx+19Ch]
0x8C6ED2: test    ecx, ecx
0x8C6ED4: jnz     short loc_8C6EDC
0x8C6ED6: mov     ecx, ds:0BA7D9Ch
0x8C6EDC: mov     edx, [esi+0A8h]
0x8C6EE2: and     eax, 3FFFFFFFh
0x8C6EE7: add     eax, eax
0x8C6EE9: push    14h
0x8C6EEB: add     eax, eax
0x8C6EED: push    eax
0x8C6EEE: push    edx
0x8C6EEF: call    sub_8A75D0
0x8C6EF4: mov     eax, [esi+0A4h]
0x8C6EFA: test    eax, eax
0x8C6EFC: mov     byte ptr [esp+20h+var_4], 9
0x8C6F01: js      short loc_8C6F2E
0x8C6F03: mov     ecx, [ebx+edi*4]
0x8C6F06: mov     ecx, [ecx+19Ch]
0x8C6F0C: test    ecx, ecx
0x8C6F0E: jnz     short loc_8C6F16
0x8C6F10: mov     ecx, ds:0BA7D9Ch
0x8C6F16: mov     edx, [esi+9Ch]
0x8C6F1C: and     eax, 3FFFFFFFh
0x8C6F21: add     eax, eax
0x8C6F23: push    14h
0x8C6F25: add     eax, eax
0x8C6F27: push    eax
0x8C6F28: push    edx
0x8C6F29: call    sub_8A75D0
0x8C6F2E: mov     eax, [esi+98h]
0x8C6F34: test    eax, eax
0x8C6F36: mov     byte ptr [esp+20h+var_4], 8
0x8C6F3B: js      short loc_8C6F68
0x8C6F3D: mov     ecx, [ebx+edi*4]
0x8C6F40: mov     ecx, [ecx+19Ch]
0x8C6F46: test    ecx, ecx
0x8C6F48: jnz     short loc_8C6F50
0x8C6F4A: mov     ecx, ds:0BA7D9Ch
0x8C6F50: mov     edx, [esi+90h]
0x8C6F56: and     eax, 3FFFFFFFh
0x8C6F5B: add     eax, eax
0x8C6F5D: push    14h
0x8C6F5F: add     eax, eax
0x8C6F61: push    eax
0x8C6F62: push    edx
0x8C6F63: call    sub_8A75D0
0x8C6F68: mov     eax, [esi+8Ch]
0x8C6F6E: test    eax, eax
0x8C6F70: mov     byte ptr [esp+20h+var_4], 7
0x8C6F75: js      short loc_8C6FA2
0x8C6F77: mov     ecx, [ebx+edi*4]
0x8C6F7A: mov     ecx, [ecx+19Ch]
0x8C6F80: test    ecx, ecx
0x8C6F82: jnz     short loc_8C6F8A
0x8C6F84: mov     ecx, ds:0BA7D9Ch
0x8C6F8A: mov     edx, [esi+84h]
0x8C6F90: and     eax, 3FFFFFFFh
0x8C6F95: add     eax, eax
0x8C6F97: push    14h
0x8C6F99: add     eax, eax
0x8C6F9B: push    eax
0x8C6F9C: push    edx
0x8C6F9D: call    sub_8A75D0
0x8C6FA2: mov     eax, [esi+80h]
0x8C6FA8: test    eax, eax
0x8C6FAA: mov     byte ptr [esp+20h+var_4], 6
0x8C6FAF: js      short loc_8C6FD9
0x8C6FB1: mov     ecx, [ebx+edi*4]
0x8C6FB4: mov     ecx, [ecx+19Ch]
0x8C6FBA: test    ecx, ecx
0x8C6FBC: jnz     short loc_8C6FC4
0x8C6FBE: mov     ecx, ds:0BA7D9Ch
0x8C6FC4: mov     edx, [esi+78h]
0x8C6FC7: and     eax, 3FFFFFFFh
0x8C6FCC: add     eax, eax
0x8C6FCE: push    14h
0x8C6FD0: add     eax, eax
0x8C6FD2: push    eax
0x8C6FD3: push    edx
0x8C6FD4: call    sub_8A75D0
0x8C6FD9: mov     eax, [esi+74h]
0x8C6FDC: test    eax, eax
0x8C6FDE: mov     byte ptr [esp+20h+var_4], 5
0x8C6FE3: js      short loc_8C700D
0x8C6FE5: mov     ecx, [ebx+edi*4]
0x8C6FE8: mov     ecx, [ecx+19Ch]
0x8C6FEE: test    ecx, ecx
0x8C6FF0: jnz     short loc_8C6FF8
0x8C6FF2: mov     ecx, ds:0BA7D9Ch
0x8C6FF8: mov     edx, [esi+6Ch]
0x8C6FFB: and     eax, 3FFFFFFFh
0x8C7000: add     eax, eax
0x8C7002: push    14h
0x8C7004: add     eax, eax
0x8C7006: push    eax
0x8C7007: push    edx
0x8C7008: call    sub_8A75D0
0x8C700D: mov     eax, [esi+68h]
0x8C7010: test    eax, eax
0x8C7012: mov     byte ptr [esp+20h+var_4], 4
0x8C7017: js      short loc_8C7041
0x8C7019: mov     ecx, [ebx+edi*4]
0x8C701C: mov     ecx, [ecx+19Ch]
0x8C7022: test    ecx, ecx
0x8C7024: jnz     short loc_8C702C
0x8C7026: mov     ecx, ds:0BA7D9Ch
0x8C702C: mov     edx, [esi+60h]
0x8C702F: and     eax, 3FFFFFFFh
0x8C7034: add     eax, eax
0x8C7036: push    14h
0x8C7038: add     eax, eax
0x8C703A: push    eax
0x8C703B: push    edx
0x8C703C: call    sub_8A75D0
0x8C7041: mov     eax, [esi+5Ch]
0x8C7044: test    eax, eax
0x8C7046: mov     byte ptr [esp+20h+var_4], 3
0x8C704B: js      short loc_8C7071
0x8C704D: mov     ecx, [ebx+edi*4]
0x8C7050: mov     ecx, [ecx+19Ch]
0x8C7056: test    ecx, ecx
0x8C7058: jnz     short loc_8C7060
0x8C705A: mov     ecx, ds:0BA7D9Ch
0x8C7060: mov     edx, [esi+54h]
0x8C7063: push    14h
0x8C7065: and     eax, 3FFFFFFFh
0x8C706A: push    eax
0x8C706B: push    edx
0x8C706C: call    sub_8A75D0
0x8C7071: mov     eax, [esi+50h]
0x8C7074: test    eax, eax
0x8C7076: mov     byte ptr [esp+20h+var_4], 2
0x8C707B: js      short loc_8C70A5
0x8C707D: mov     ecx, [ebx+edi*4]
0x8C7080: mov     ecx, [ecx+19Ch]
0x8C7086: test    ecx, ecx
0x8C7088: jnz     short loc_8C7090
0x8C708A: mov     ecx, ds:0BA7D9Ch
0x8C7090: mov     edx, [esi+48h]
0x8C7093: and     eax, 3FFFFFFFh
0x8C7098: add     eax, eax
0x8C709A: push    14h
0x8C709C: add     eax, eax
0x8C709E: push    eax
0x8C709F: push    edx
0x8C70A0: call    sub_8A75D0
0x8C70A5: mov     eax, [esi+44h]
0x8C70A8: test    eax, eax
0x8C70AA: mov     byte ptr [esp+20h+var_4], 1
0x8C70AF: js      short loc_8C70D9
0x8C70B1: mov     ecx, [ebx+edi*4]
0x8C70B4: mov     ecx, [ecx+19Ch]
0x8C70BA: test    ecx, ecx
0x8C70BC: jnz     short loc_8C70C4
0x8C70BE: mov     ecx, ds:0BA7D9Ch
0x8C70C4: mov     edx, [esi+3Ch]
0x8C70C7: and     eax, 3FFFFFFFh
0x8C70CC: add     eax, eax
0x8C70CE: push    14h
0x8C70D0: add     eax, eax
0x8C70D2: push    eax
0x8C70D3: push    edx
0x8C70D4: call    sub_8A75D0
0x8C70D9: mov     eax, [esi+38h]
0x8C70DC: test    eax, eax
0x8C70DE: mov     byte ptr [esp+20h+var_4], 0
0x8C70E3: js      short loc_8C710D
0x8C70E5: mov     ecx, [ebx+edi*4]
0x8C70E8: mov     ecx, [ecx+19Ch]
0x8C70EE: test    ecx, ecx
0x8C70F0: jnz     short loc_8C70F8
0x8C70F2: mov     ecx, ds:0BA7D9Ch
0x8C70F8: mov     edx, [esi+30h]
0x8C70FB: and     eax, 3FFFFFFFh
0x8C7100: add     eax, eax
0x8C7102: push    14h
0x8C7104: add     eax, eax
0x8C7106: push    eax
0x8C7107: push    edx
0x8C7108: call    sub_8A75D0
0x8C710D: mov     eax, [esi+2Ch]
0x8C7110: test    eax, eax
0x8C7112: mov     [esp+20h+var_4], 0FFFFFFFFh
0x8C711A: js      short loc_8C7144
0x8C711C: mov     ecx, [ebx+edi*4]
0x8C711F: mov     ecx, [ecx+19Ch]
0x8C7125: test    ecx, ecx
0x8C7127: jnz     short loc_8C712F
0x8C7129: mov     ecx, ds:0BA7D9Ch
0x8C712F: mov     edx, [esi+24h]
0x8C7132: and     eax, 3FFFFFFFh
0x8C7137: add     eax, eax
0x8C7139: push    14h
0x8C713B: add     eax, eax
0x8C713D: push    eax
0x8C713E: push    edx
0x8C713F: call    sub_8A75D0
0x8C7144: mov     ecx, [esp+20h+var_C]
0x8C7148: mov     large fs:0, ecx
0x8C714F: pop     ecx
0x8C7150: pop     edi
0x8C7151: pop     esi
0x8C7152: pop     ebx
0x8C7153: add     esp, 10h
0x8C7156: retn
