0x6939A0: push    0FFFFFFFFh
0x6939A2: push    offset SEH_8C8970
0x6939A7: mov     eax, large fs:0
0x6939AD: push    eax
0x6939AE: push    ecx
0x6939AF: push    esi
0x6939B0: push    edi
0x6939B1: mov     eax, ds:0B30AACh
0x6939B6: xor     eax, esp
0x6939B8: push    eax
0x6939B9: lea     eax, [esp+1Ch+var_C]
0x6939BD: mov     large fs:0, eax
0x6939C3: mov     esi, ecx
0x6939C5: push    38h ; '8'; Size
0x6939C7: call    FormHeapAlloc
0x6939CC: mov     edi, eax
0x6939CE: add     esp, 4
0x6939D1: mov     [esp+1Ch+var_10], edi
0x6939D5: test    edi, edi
0x6939D7: mov     [esp+1Ch+var_4], 0
0x6939DF: jz      short loc_6939FC
0x6939E1: mov     eax, [esi+0Ch]
0x6939E4: mov     ecx, [esi+8]
0x6939E7: mov     edx, [esi+24h]
0x6939EA: push    eax
0x6939EB: push    ecx
0x6939EC: push    edx
0x6939ED: mov     ecx, edi; this
0x6939EF: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x6939F4: mov     dword ptr [edi], offset ??_7DispelEffect@@6B@; const DispelEffect::`vftable'
0x6939FA: jmp     short loc_6939FE
0x6939FC: xor     edi, edi
0x6939FE: mov     eax, [esi]
0x693A00: mov     edx, [eax+2Ch]
0x693A03: push    edi
0x693A04: mov     ecx, esi
0x693A06: mov     [esp+20h+var_4], 0FFFFFFFFh
0x693A0E: call    edx
0x693A10: mov     eax, edi
0x693A12: mov     ecx, dword ptr [esp+1Ch+var_C]
0x693A16: mov     large fs:0, ecx
0x693A1D: pop     ecx
0x693A1E: pop     edi
0x693A1F: pop     esi
0x693A20: add     esp, 10h
0x693A23: retn
