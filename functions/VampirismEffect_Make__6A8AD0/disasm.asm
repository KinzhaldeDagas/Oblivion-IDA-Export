0x6A8AD0: push    0FFFFFFFFh
0x6A8AD2: push    offset SEH_8C62B0
0x6A8AD7: mov     eax, large fs:0
0x6A8ADD: push    eax
0x6A8ADE: push    ecx
0x6A8ADF: push    esi
0x6A8AE0: mov     eax, ds:0B30AACh
0x6A8AE5: xor     eax, esp
0x6A8AE7: push    eax
0x6A8AE8: lea     eax, [esp+18h+var_C]
0x6A8AEC: mov     large fs:0, eax
0x6A8AF2: push    38h ; '8'; Size
0x6A8AF4: call    FormHeapAlloc
0x6A8AF9: mov     esi, eax
0x6A8AFB: add     esp, 4
0x6A8AFE: mov     [esp+18h+var_10], esi
0x6A8B02: xor     eax, eax
0x6A8B04: cmp     esi, eax
0x6A8B06: mov     [esp+18h+var_4], eax
0x6A8B0A: jz      short loc_6A8B2A
0x6A8B0C: mov     eax, [esp+18h+arg_8]
0x6A8B10: mov     ecx, [esp+18h+arg_4]
0x6A8B14: mov     edx, [esp+18h+arg_0]
0x6A8B18: push    eax
0x6A8B19: push    ecx
0x6A8B1A: push    edx
0x6A8B1B: mov     ecx, esi; this
0x6A8B1D: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x6A8B22: mov     dword ptr [esi], offset ??_7VampirismEffect@@6B@; const VampirismEffect::`vftable'
0x6A8B28: mov     eax, esi
0x6A8B2A: mov     ecx, [esp+18h+var_C]
0x6A8B2E: mov     large fs:0, ecx
0x6A8B35: pop     ecx
0x6A8B36: pop     esi
0x6A8B37: add     esp, 10h
0x6A8B3A: retn
