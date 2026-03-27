0x6A2DA0: push    0FFFFFFFFh
0x6A2DA2: push    offset SEH_8C8970
0x6A2DA7: mov     eax, large fs:0
0x6A2DAD: push    eax
0x6A2DAE: push    ecx
0x6A2DAF: push    esi
0x6A2DB0: push    edi
0x6A2DB1: mov     eax, ds:0B30AACh
0x6A2DB6: xor     eax, esp
0x6A2DB8: push    eax
0x6A2DB9: lea     eax, [esp+1Ch+var_C]
0x6A2DBD: mov     large fs:0, eax
0x6A2DC3: mov     esi, ecx
0x6A2DC5: push    3Ch ; '<'; Size
0x6A2DC7: call    FormHeapAlloc
0x6A2DCC: mov     edi, eax
0x6A2DCE: add     esp, 4
0x6A2DD1: mov     [esp+1Ch+var_10], edi
0x6A2DD5: test    edi, edi
0x6A2DD7: mov     [esp+1Ch+var_4], 0
0x6A2DDF: jz      short loc_6A2DFC
0x6A2DE1: mov     eax, [esi+0Ch]
0x6A2DE4: mov     ecx, [esi+8]
0x6A2DE7: mov     edx, [esi+24h]
0x6A2DEA: push    eax; int
0x6A2DEB: push    ecx; int
0x6A2DEC: push    edx; int
0x6A2DED: mov     ecx, edi; this
0x6A2DEF: call    ValueModifierEffect_constr
0x6A2DF4: mov     dword ptr [edi], offset ??_7NightEyeEffect@@6B@; const NightEyeEffect::`vftable'
0x6A2DFA: jmp     short loc_6A2DFE
0x6A2DFC: xor     edi, edi
0x6A2DFE: mov     eax, [esi]
0x6A2E00: mov     edx, [eax+2Ch]
0x6A2E03: push    edi
0x6A2E04: mov     ecx, esi
0x6A2E06: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6A2E0E: call    edx
0x6A2E10: mov     eax, edi
0x6A2E12: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6A2E16: mov     large fs:0, ecx
0x6A2E1D: pop     ecx
0x6A2E1E: pop     edi
0x6A2E1F: pop     esi
0x6A2E20: add     esp, 10h
0x6A2E23: retn
