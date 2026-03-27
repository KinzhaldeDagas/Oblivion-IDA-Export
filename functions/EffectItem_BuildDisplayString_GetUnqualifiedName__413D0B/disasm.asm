0x413D0B: lea     eax, [esp+arg_10]
0x413D0F: push    eax
0x413D10: mov     ecx, esi
0x413D12: call    EffectItem_GetName
0x413D17: mov     eax, [eax]
0x413D19: push    ebx; a3
0x413D1A: push    eax; a2
0x413D1B: mov     ecx, edi; this
0x413D1D: mov     [esp+0Ch+arg_8C], 2
0x413D28: call    BSStringT_Set
0x413D2D: mov     ecx, [esp+4+arg_C]
0x413D31: push    ecx
0x413D32: mov     byte ptr [esp+8+arg_8C], bl
0x413D39: call    FormHeapFree
0x413D3E: add     esp, 4
