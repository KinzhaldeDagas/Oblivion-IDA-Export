0x691D10: push    0FFFFFFFFh
0x691D12: push    offset SEH_8C8970
0x691D17: mov     eax, large fs:0
0x691D1D: push    eax
0x691D1E: push    ecx
0x691D1F: push    esi
0x691D20: push    edi
0x691D21: mov     eax, ds:0B30AACh
0x691D26: xor     eax, esp
0x691D28: push    eax
0x691D29: lea     eax, [esp+1Ch+var_C]
0x691D2D: mov     large fs:0, eax
0x691D33: mov     esi, ecx
0x691D35: push    3Ch ; '<'; Size
0x691D37: call    FormHeapAlloc
0x691D3C: mov     edi, eax
0x691D3E: add     esp, 4
0x691D41: mov     [esp+1Ch+var_10], edi
0x691D45: test    edi, edi
0x691D47: mov     [esp+1Ch+var_4], 0
0x691D4F: jz      short loc_691D6C
0x691D51: mov     eax, [esi+0Ch]
0x691D54: mov     ecx, [esi+8]
0x691D57: mov     edx, [esi+24h]
0x691D5A: push    eax; int
0x691D5B: push    ecx; int
0x691D5C: push    edx; int
0x691D5D: mov     ecx, edi; this
0x691D5F: call    ValueModifierEffect_constr
0x691D64: mov     dword ptr [edi], offset ??_7ChameleonEffect@@6B@; const ChameleonEffect::`vftable'
0x691D6A: jmp     short loc_691D6E
0x691D6C: xor     edi, edi
0x691D6E: mov     eax, [esi]
0x691D70: mov     edx, [eax+2Ch]
0x691D73: push    edi
0x691D74: mov     ecx, esi
0x691D76: mov     [esp+20h+var_4], 0FFFFFFFFh
0x691D7E: call    edx
0x691D80: mov     eax, edi
0x691D82: mov     ecx, dword ptr [esp+1Ch+var_C]
0x691D86: mov     large fs:0, ecx
0x691D8D: pop     ecx
0x691D8E: pop     edi
0x691D8F: pop     esi
0x691D90: add     esp, 10h
0x691D93: retn
