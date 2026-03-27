0x6A7F30: push    0FFFFFFFFh
0x6A7F32: push    offset SEH_8C62B0
0x6A7F37: mov     eax, large fs:0
0x6A7F3D: push    eax
0x6A7F3E: push    ecx
0x6A7F3F: push    esi
0x6A7F40: mov     eax, ds:0B30AACh
0x6A7F45: xor     eax, esp
0x6A7F47: push    eax
0x6A7F48: lea     eax, [esp+18h+var_C]
0x6A7F4C: mov     large fs:0, eax
0x6A7F52: push    3Ch ; '<'; Size
0x6A7F54: call    FormHeapAlloc
0x6A7F59: mov     esi, eax
0x6A7F5B: add     esp, 4
0x6A7F5E: mov     [esp+18h+var_10], esi
0x6A7F62: test    esi, esi
0x6A7F64: mov     [esp+18h+var_4], 0
0x6A7F6C: jz      short loc_6A7FA1
0x6A7F6E: mov     eax, [esp+18h+arg_8]
0x6A7F72: mov     ecx, [esp+18h+arg_4]
0x6A7F76: mov     edx, [esp+18h+arg_0]
0x6A7F7A: push    eax
0x6A7F7B: push    ecx
0x6A7F7C: push    edx
0x6A7F7D: mov     ecx, esi; this
0x6A7F7F: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x6A7F84: mov     dword ptr [esi], offset ??_7TurnUndeadEffect@@6B@; const TurnUndeadEffect::`vftable'
0x6A7F8A: mov     byte ptr [esi+38h], 0
0x6A7F8E: mov     eax, esi
0x6A7F90: mov     ecx, [esp+18h+var_C]
0x6A7F94: mov     large fs:0, ecx
0x6A7F9B: pop     ecx
0x6A7F9C: pop     esi
0x6A7F9D: add     esp, 10h
0x6A7FA0: retn
0x6A7FA1: xor     eax, eax
0x6A7FA3: mov     ecx, [esp+18h+var_C]
0x6A7FA7: mov     large fs:0, ecx
0x6A7FAE: pop     ecx
0x6A7FAF: pop     esi
0x6A7FB0: add     esp, 10h
0x6A7FB3: retn
