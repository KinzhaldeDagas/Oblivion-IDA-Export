0x693A30: push    0FFFFFFFFh
0x693A32: push    offset SEH_8C62B0
0x693A37: mov     eax, large fs:0
0x693A3D: push    eax
0x693A3E: push    ecx
0x693A3F: push    esi
0x693A40: mov     eax, ds:0B30AACh
0x693A45: xor     eax, esp
0x693A47: push    eax
0x693A48: lea     eax, [esp+18h+var_C]
0x693A4C: mov     large fs:0, eax
0x693A52: push    38h ; '8'; Size
0x693A54: call    FormHeapAlloc
0x693A59: mov     esi, eax
0x693A5B: add     esp, 4
0x693A5E: mov     [esp+18h+var_10], esi
0x693A62: xor     eax, eax
0x693A64: cmp     esi, eax
0x693A66: mov     [esp+18h+var_4], eax
0x693A6A: jz      short loc_693A8A
0x693A6C: mov     eax, [esp+18h+arg_8]
0x693A70: mov     ecx, [esp+18h+arg_4]
0x693A74: mov     edx, [esp+18h+arg_0]
0x693A78: push    eax
0x693A79: push    ecx
0x693A7A: push    edx
0x693A7B: mov     ecx, esi; this
0x693A7D: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x693A82: mov     dword ptr [esi], offset ??_7DispelEffect@@6B@; const DispelEffect::`vftable'
0x693A88: mov     eax, esi
0x693A8A: mov     ecx, [esp+18h+var_C]
0x693A8E: mov     large fs:0, ecx
0x693A95: pop     ecx
0x693A96: pop     esi
0x693A97: add     esp, 10h
0x693A9A: retn
