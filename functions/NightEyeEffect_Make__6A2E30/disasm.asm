0x6A2E30: push    0FFFFFFFFh
0x6A2E32: push    offset SEH_8C62B0
0x6A2E37: mov     eax, large fs:0
0x6A2E3D: push    eax
0x6A2E3E: push    ecx
0x6A2E3F: push    esi
0x6A2E40: mov     eax, ds:0B30AACh
0x6A2E45: xor     eax, esp
0x6A2E47: push    eax
0x6A2E48: lea     eax, [esp+18h+var_C]
0x6A2E4C: mov     large fs:0, eax
0x6A2E52: push    3Ch ; '<'; Size
0x6A2E54: call    FormHeapAlloc
0x6A2E59: mov     esi, eax
0x6A2E5B: add     esp, 4
0x6A2E5E: mov     [esp+18h+var_10], esi
0x6A2E62: xor     eax, eax
0x6A2E64: cmp     esi, eax
0x6A2E66: mov     [esp+18h+var_4], eax
0x6A2E6A: jz      short loc_6A2E8A
0x6A2E6C: mov     eax, [esp+18h+arg_8]
0x6A2E70: mov     ecx, [esp+18h+arg_4]
0x6A2E74: mov     edx, [esp+18h+arg_0]
0x6A2E78: push    eax; int
0x6A2E79: push    ecx; int
0x6A2E7A: push    edx; int
0x6A2E7B: mov     ecx, esi; this
0x6A2E7D: call    ValueModifierEffect_constr
0x6A2E82: mov     dword ptr [esi], offset ??_7NightEyeEffect@@6B@; const NightEyeEffect::`vftable'
0x6A2E88: mov     eax, esi
0x6A2E8A: mov     ecx, dword ptr [esp+18h+var_C]
0x6A2E8E: mov     large fs:0, ecx
0x6A2E95: pop     ecx
0x6A2E96: pop     esi
0x6A2E97: add     esp, 10h
0x6A2E9A: retn
