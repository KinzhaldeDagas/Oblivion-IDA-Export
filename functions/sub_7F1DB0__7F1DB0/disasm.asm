0x7F1DB0: push    0FFFFFFFFh
0x7F1DB2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x7F1DB7: mov     eax, large fs:0
0x7F1DBD: push    eax
0x7F1DBE: push    ecx
0x7F1DBF: push    ebx
0x7F1DC0: push    esi
0x7F1DC1: push    edi
0x7F1DC2: mov     eax, ds:0B30AACh
0x7F1DC7: xor     eax, esp
0x7F1DC9: push    eax
0x7F1DCA: lea     eax, [esp+20h+var_C]
0x7F1DCE: mov     large fs:0, eax
0x7F1DD4: mov     edi, ecx
0x7F1DD6: mov     eax, [edi]
0x7F1DD8: mov     edx, [eax+70h]
0x7F1DDB: call    edx
0x7F1DDD: push    2Ch ; ','; Size
0x7F1DDF: mov     ebx, eax
0x7F1DE1: call    FormHeapAlloc
0x7F1DE6: add     esp, 4
0x7F1DE9: mov     [esp+20h+var_10], eax
0x7F1DED: test    eax, eax
0x7F1DEF: mov     [esp+20h+var_4], 0
0x7F1DF7: jz      short loc_7F1E07
0x7F1DF9: push    1
0x7F1DFB: push    ebx
0x7F1DFC: mov     ecx, eax
0x7F1DFE: call    sub_7E3AE0
0x7F1E03: mov     esi, eax
0x7F1E05: jmp     short loc_7F1E09
0x7F1E07: xor     esi, esi
0x7F1E09: push    1
0x7F1E0B: mov     ecx, esi
0x7F1E0D: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7F1E15: call    sub_7263B0
0x7F1E1A: mov     edx, [edi]
0x7F1E1C: mov     eax, ebx
0x7F1E1E: shl     eax, 4
0x7F1E21: push    0; char
0x7F1E23: push    eax; Src
0x7F1E24: mov     eax, [edx+6Ch]
0x7F1E27: mov     ecx, edi
0x7F1E29: call    eax
0x7F1E2B: push    eax; char
0x7F1E2C: push    0; int
0x7F1E2E: mov     ecx, esi
0x7F1E30: call    sub_7260B0
0x7F1E35: push    10h
0x7F1E37: push    10h
0x7F1E39: push    ebx
0x7F1E3A: push    4
0x7F1E3C: push    0
0x7F1E3E: push    0
0x7F1E40: push    0
0x7F1E42: mov     ecx, esi
0x7F1E44: call    sub_7262A0
0x7F1E49: mov     eax, esi
0x7F1E4B: mov     ecx, [esp+20h+var_C]
0x7F1E4F: mov     large fs:0, ecx
0x7F1E56: pop     ecx
0x7F1E57: pop     edi
0x7F1E58: pop     esi
0x7F1E59: pop     ebx
0x7F1E5A: add     esp, 10h
0x7F1E5D: retn    4
