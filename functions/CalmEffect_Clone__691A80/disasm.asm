0x691A80: push    0FFFFFFFFh
0x691A82: push    offset SEH_8C8970
0x691A87: mov     eax, large fs:0
0x691A8D: push    eax
0x691A8E: push    ecx
0x691A8F: push    esi
0x691A90: push    edi
0x691A91: mov     eax, ds:0B30AACh
0x691A96: xor     eax, esp
0x691A98: push    eax
0x691A99: lea     eax, [esp+1Ch+var_C]
0x691A9D: mov     large fs:0, eax
0x691AA3: mov     esi, ecx
0x691AA5: push    3Ch ; '<'; Size
0x691AA7: call    FormHeapAlloc
0x691AAC: mov     edi, eax
0x691AAE: add     esp, 4
0x691AB1: mov     [esp+1Ch+var_10], edi
0x691AB5: test    edi, edi
0x691AB7: mov     [esp+1Ch+var_4], 0
0x691ABF: jz      short loc_691ADC
0x691AC1: mov     eax, [esi+0Ch]
0x691AC4: mov     ecx, [esi+8]
0x691AC7: mov     edx, [esi+24h]
0x691ACA: push    eax; int
0x691ACB: push    ecx; int
0x691ACC: push    edx; int
0x691ACD: mov     ecx, edi; this
0x691ACF: call    ValueModifierEffect_constr
0x691AD4: mov     dword ptr [edi], offset ??_7CalmEffect@@6B@; const CalmEffect::`vftable'
0x691ADA: jmp     short loc_691ADE
0x691ADC: xor     edi, edi
0x691ADE: mov     eax, [esi]
0x691AE0: mov     edx, [eax+2Ch]
0x691AE3: push    edi
0x691AE4: mov     ecx, esi
0x691AE6: mov     [esp+20h+var_4], 0FFFFFFFFh
0x691AEE: call    edx
0x691AF0: mov     eax, edi
0x691AF2: mov     ecx, dword ptr [esp+1Ch+var_C]
0x691AF6: mov     large fs:0, ecx
0x691AFD: pop     ecx
0x691AFE: pop     edi
0x691AFF: pop     esi
0x691B00: add     esp, 10h
0x691B03: retn
