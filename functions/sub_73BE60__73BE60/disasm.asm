0x73BE60: push    0FFFFFFFFh
0x73BE62: push    offset SEH_8C8900
0x73BE67: mov     eax, large fs:0
0x73BE6D: push    eax
0x73BE6E: push    ecx
0x73BE6F: mov     eax, ds:0B30AACh
0x73BE74: xor     eax, esp
0x73BE76: push    eax
0x73BE77: lea     eax, [esp+14h+var_C]
0x73BE7B: mov     large fs:0, eax
0x73BE81: push    174h; Size
0x73BE86: call    FormHeapAlloc
0x73BE8B: add     esp, 4
0x73BE8E: mov     [esp+14h+var_10], eax
0x73BE92: test    eax, eax
0x73BE94: mov     [esp+14h+var_4], 0
0x73BE9C: jz      short loc_73BEB5
0x73BE9E: mov     ecx, eax; this
0x73BEA0: call    ??0NiTextureEffect@@QAE@XZ; NiTextureEffect::NiTextureEffect(void)
0x73BEA5: mov     ecx, [esp+14h+var_C]
0x73BEA9: mov     large fs:0, ecx
0x73BEB0: pop     ecx
0x73BEB1: add     esp, 10h
0x73BEB4: retn
0x73BEB5: xor     eax, eax
0x73BEB7: mov     ecx, [esp+14h+var_C]
0x73BEBB: mov     large fs:0, ecx
0x73BEC2: pop     ecx
0x73BEC3: add     esp, 10h
0x73BEC6: retn
