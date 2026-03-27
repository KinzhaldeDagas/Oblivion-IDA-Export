0x692E40: push    0FFFFFFFFh
0x692E42: push    offset SEH_8C62B0
0x692E47: mov     eax, large fs:0
0x692E4D: push    eax
0x692E4E: push    ecx
0x692E4F: push    esi
0x692E50: mov     eax, ds:0B30AACh
0x692E55: xor     eax, esp
0x692E57: push    eax
0x692E58: lea     eax, [esp+18h+var_C]
0x692E5C: mov     large fs:0, eax
0x692E62: push    3Ch ; '<'; Size
0x692E64: call    FormHeapAlloc
0x692E69: mov     esi, eax
0x692E6B: add     esp, 4
0x692E6E: mov     [esp+18h+var_10], esi
0x692E72: test    esi, esi
0x692E74: mov     [esp+18h+var_4], 0
0x692E7C: jz      short loc_692EB1
0x692E7E: mov     eax, [esp+18h+arg_8]
0x692E82: mov     ecx, [esp+18h+arg_4]
0x692E86: mov     edx, [esp+18h+arg_0]
0x692E8A: push    eax
0x692E8B: push    ecx
0x692E8C: push    edx
0x692E8D: mov     ecx, esi; this
0x692E8F: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x692E94: mov     dword ptr [esi], offset ??_7DemoralizeEffect@@6B@; const DemoralizeEffect::`vftable'
0x692E9A: mov     byte ptr [esi+38h], 0
0x692E9E: mov     eax, esi
0x692EA0: mov     ecx, [esp+18h+var_C]
0x692EA4: mov     large fs:0, ecx
0x692EAB: pop     ecx
0x692EAC: pop     esi
0x692EAD: add     esp, 10h
0x692EB0: retn
0x692EB1: xor     eax, eax
0x692EB3: mov     ecx, [esp+18h+var_C]
0x692EB7: mov     large fs:0, ecx
0x692EBE: pop     ecx
0x692EBF: pop     esi
0x692EC0: add     esp, 10h
0x692EC3: retn
