0x6A8A00: push    0FFFFFFFFh
0x6A8A02: push    offset SEH_8C8970
0x6A8A07: mov     eax, large fs:0
0x6A8A0D: push    eax
0x6A8A0E: push    ecx
0x6A8A0F: push    esi
0x6A8A10: push    edi
0x6A8A11: mov     eax, ds:0B30AACh
0x6A8A16: xor     eax, esp
0x6A8A18: push    eax
0x6A8A19: lea     eax, [esp+1Ch+var_C]
0x6A8A1D: mov     large fs:0, eax
0x6A8A23: mov     esi, ecx
0x6A8A25: push    38h ; '8'; Size
0x6A8A27: call    FormHeapAlloc
0x6A8A2C: mov     edi, eax
0x6A8A2E: add     esp, 4
0x6A8A31: mov     [esp+1Ch+var_10], edi
0x6A8A35: test    edi, edi
0x6A8A37: mov     [esp+1Ch+var_4], 0
0x6A8A3F: jz      short loc_6A8A5C
0x6A8A41: mov     eax, [esi+0Ch]
0x6A8A44: mov     ecx, [esi+8]
0x6A8A47: mov     edx, [esi+24h]
0x6A8A4A: push    eax
0x6A8A4B: push    ecx
0x6A8A4C: push    edx
0x6A8A4D: mov     ecx, edi; this
0x6A8A4F: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x6A8A54: mov     dword ptr [edi], offset ??_7VampirismEffect@@6B@; const VampirismEffect::`vftable'
0x6A8A5A: jmp     short loc_6A8A5E
0x6A8A5C: xor     edi, edi
0x6A8A5E: mov     eax, [esi]
0x6A8A60: mov     edx, [eax+2Ch]
0x6A8A63: push    edi
0x6A8A64: mov     ecx, esi
0x6A8A66: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6A8A6E: call    edx
0x6A8A70: mov     eax, edi
0x6A8A72: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6A8A76: mov     large fs:0, ecx
0x6A8A7D: pop     ecx
0x6A8A7E: pop     edi
0x6A8A7F: pop     esi
0x6A8A80: add     esp, 10h
0x6A8A83: retn
