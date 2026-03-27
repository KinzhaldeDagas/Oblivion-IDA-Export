0x701F00: push    0FFFFFFFFh
0x701F02: push    offset SEH_8C62B0
0x701F07: mov     eax, large fs:0
0x701F0D: push    eax
0x701F0E: push    ecx
0x701F0F: push    esi
0x701F10: mov     eax, ds:0B30AACh
0x701F15: xor     eax, esp
0x701F17: push    eax
0x701F18: lea     eax, [esp+18h+var_C]
0x701F1C: mov     large fs:0, eax
0x701F22: push    48h ; 'H'; Size
0x701F24: call    FormHeapAlloc
0x701F29: add     esp, 4
0x701F2C: mov     [esp+18h+var_10], eax
0x701F30: test    eax, eax
0x701F32: mov     [esp+18h+var_4], 0
0x701F3A: jz      short loc_701F47
0x701F3C: mov     ecx, eax; this
0x701F3E: call    ??0NiSourceTexture@@QAE@XZ; NiSourceTexture::NiSourceTexture(void)
0x701F43: mov     esi, eax
0x701F45: jmp     short loc_701F49
0x701F47: xor     esi, esi
0x701F49: mov     eax, [esp+18h+arg_4]
0x701F4D: mov     ecx, [eax]
0x701F4F: mov     [esi+18h], ecx
0x701F52: mov     edx, [eax+4]
0x701F55: mov     cl, [esp+18h+arg_8]
0x701F59: mov     [esi+1Ch], edx
0x701F5C: mov     eax, [eax+8]
0x701F5F: mov     edx, [esp+18h+arg_0]
0x701F63: mov     [esi+20h], eax
0x701F66: mov     [esi+41h], cl
0x701F69: mov     [esi+44h], edx
0x701F6C: cmp     byte ptr ds:0B256CCh, 0
0x701F73: mov     [esp+18h+var_4], 0FFFFFFFFh
0x701F7B: jz      short loc_701FA7
0x701F7D: mov     eax, [esi]
0x701F7F: mov     edx, [eax+5Ch]
0x701F82: mov     ecx, esi
0x701F84: call    edx
0x701F86: test    al, al
0x701F88: jnz     short loc_701FA7
0x701F8A: mov     eax, [esi]
0x701F8C: mov     edx, [eax]
0x701F8E: push    1
0x701F90: mov     ecx, esi
0x701F92: call    edx
0x701F94: xor     eax, eax
0x701F96: mov     ecx, [esp+18h+var_C]
0x701F9A: mov     large fs:0, ecx
0x701FA1: pop     ecx
0x701FA2: pop     esi
0x701FA3: add     esp, 10h
0x701FA6: retn
0x701FA7: mov     eax, esi
0x701FA9: mov     ecx, [esp+18h+var_C]
0x701FAD: mov     large fs:0, ecx
0x701FB4: pop     ecx
0x701FB5: pop     esi
0x701FB6: add     esp, 10h
0x701FB9: retn
