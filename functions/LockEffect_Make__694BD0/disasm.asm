0x694BD0: push    0FFFFFFFFh
0x694BD2: push    offset SEH_8C62B0
0x694BD7: mov     eax, large fs:0
0x694BDD: push    eax
0x694BDE: push    ecx
0x694BDF: push    esi
0x694BE0: mov     eax, ds:0B30AACh
0x694BE5: xor     eax, esp
0x694BE7: push    eax
0x694BE8: lea     eax, [esp+18h+var_C]
0x694BEC: mov     large fs:0, eax
0x694BF2: push    38h ; '8'; Size
0x694BF4: call    FormHeapAlloc
0x694BF9: mov     esi, eax
0x694BFB: add     esp, 4
0x694BFE: mov     [esp+18h+var_10], esi
0x694C02: xor     eax, eax
0x694C04: cmp     esi, eax
0x694C06: mov     [esp+18h+var_4], eax
0x694C0A: jz      short loc_694C2A
0x694C0C: mov     eax, [esp+18h+arg_8]
0x694C10: mov     ecx, [esp+18h+arg_4]
0x694C14: mov     edx, [esp+18h+arg_0]
0x694C18: push    eax
0x694C19: push    ecx
0x694C1A: push    edx
0x694C1B: mov     ecx, esi; this
0x694C1D: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x694C22: mov     dword ptr [esi], offset ??_7LockEffect@@6B@; const LockEffect::`vftable'
0x694C28: mov     eax, esi
0x694C2A: mov     ecx, [esp+18h+var_C]
0x694C2E: mov     large fs:0, ecx
0x694C35: pop     ecx
0x694C36: pop     esi
0x694C37: add     esp, 10h
0x694C3A: retn
