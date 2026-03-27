0x6A4BF0: push    0FFFFFFFFh
0x6A4BF2: push    offset SEH_8C8970
0x6A4BF7: mov     eax, large fs:0
0x6A4BFD: push    eax
0x6A4BFE: push    ecx
0x6A4BFF: push    esi
0x6A4C00: push    edi
0x6A4C01: mov     eax, ds:0B30AACh
0x6A4C06: xor     eax, esp
0x6A4C08: push    eax
0x6A4C09: lea     eax, [esp+1Ch+var_C]
0x6A4C0D: mov     large fs:0, eax
0x6A4C13: mov     esi, ecx
0x6A4C15: push    38h ; '8'; Size
0x6A4C17: call    FormHeapAlloc
0x6A4C1C: mov     edi, eax
0x6A4C1E: add     esp, 4
0x6A4C21: mov     [esp+1Ch+var_10], edi
0x6A4C25: test    edi, edi
0x6A4C27: mov     [esp+1Ch+var_4], 0
0x6A4C2F: jz      short loc_6A4C4C
0x6A4C31: mov     eax, [esi+0Ch]
0x6A4C34: mov     ecx, [esi+8]
0x6A4C37: mov     edx, [esi+24h]
0x6A4C3A: push    eax
0x6A4C3B: push    ecx
0x6A4C3C: push    edx
0x6A4C3D: mov     ecx, edi; this
0x6A4C3F: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x6A4C44: mov     dword ptr [edi], offset ??_7SoulTrapEffect@@6B@; const SoulTrapEffect::`vftable'
0x6A4C4A: jmp     short loc_6A4C4E
0x6A4C4C: xor     edi, edi
0x6A4C4E: mov     eax, [esi]
0x6A4C50: mov     edx, [eax+2Ch]
0x6A4C53: push    edi
0x6A4C54: mov     ecx, esi
0x6A4C56: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6A4C5E: call    edx
0x6A4C60: mov     eax, edi
0x6A4C62: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6A4C66: mov     large fs:0, ecx
0x6A4C6D: pop     ecx
0x6A4C6E: pop     edi
0x6A4C6F: pop     esi
0x6A4C70: add     esp, 10h
0x6A4C73: retn
