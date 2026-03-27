0x692AD0: push    0FFFFFFFFh
0x692AD2: push    offset SEH_8C8970
0x692AD7: mov     eax, large fs:0
0x692ADD: push    eax
0x692ADE: push    ecx
0x692ADF: push    esi
0x692AE0: push    edi
0x692AE1: mov     eax, ds:0B30AACh
0x692AE6: xor     eax, esp
0x692AE8: push    eax
0x692AE9: lea     eax, [esp+1Ch+var_C]
0x692AED: mov     large fs:0, eax
0x692AF3: mov     esi, ecx
0x692AF5: push    3Ch ; '<'; Size
0x692AF7: call    FormHeapAlloc
0x692AFC: mov     edi, eax
0x692AFE: add     esp, 4
0x692B01: mov     [esp+1Ch+var_10], edi
0x692B05: test    edi, edi
0x692B07: mov     [esp+1Ch+var_4], 0
0x692B0F: jz      short loc_692B2C
0x692B11: mov     eax, [esi+0Ch]
0x692B14: mov     ecx, [esi+8]
0x692B17: mov     edx, [esi+24h]
0x692B1A: push    eax; int
0x692B1B: push    ecx; int
0x692B1C: push    edx; int
0x692B1D: mov     ecx, edi; this
0x692B1F: call    ValueModifierEffect_constr
0x692B24: mov     dword ptr [edi], offset ??_7DarknessEffect@@6B@; const DarknessEffect::`vftable'
0x692B2A: jmp     short loc_692B2E
0x692B2C: xor     edi, edi
0x692B2E: mov     eax, [esi]
0x692B30: mov     edx, [eax+2Ch]
0x692B33: push    edi
0x692B34: mov     ecx, esi
0x692B36: mov     [esp+20h+var_4], 0FFFFFFFFh
0x692B3E: call    edx
0x692B40: mov     eax, edi
0x692B42: mov     ecx, dword ptr [esp+1Ch+var_C]
0x692B46: mov     large fs:0, ecx
0x692B4D: pop     ecx
0x692B4E: pop     edi
0x692B4F: pop     esi
0x692B50: add     esp, 10h
0x692B53: retn
