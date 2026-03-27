0x68EA50: push    0FFFFFFFFh
0x68EA52: push    offset ActiveEffect_Base_CreateDynamic_SEH
0x68EA57: mov     eax, large fs:0
0x68EA5D: push    eax
0x68EA5E: sub     esp, 44h
0x68EA61: push    esi
0x68EA62: mov     eax, ds:0B30AACh
0x68EA67: xor     eax, esp
0x68EA69: push    eax
0x68EA6A: lea     eax, [esp+58h+var_C]
0x68EA6E: mov     large fs:0, eax
0x68EA74: mov     esi, [esp+58h+arg_8]
0x68EA78: mov     eax, [esi+1Ch]
0x68EA7B: cmp     dword ptr [eax+98h], 46464553h
0x68EA85: jnz     short ActiveEffect_Base_CreateDynamic___NotScriptEffect
