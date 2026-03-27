0x7E2CB0: push    0FFFFFFFFh
0x7E2CB2: push    offset SEH_8C8970
0x7E2CB7: mov     eax, large fs:0
0x7E2CBD: push    eax
0x7E2CBE: push    ecx
0x7E2CBF: push    esi
0x7E2CC0: push    edi
0x7E2CC1: mov     eax, ds:0B30AACh
0x7E2CC6: xor     eax, esp
0x7E2CC8: push    eax
0x7E2CC9: lea     eax, [esp+1Ch+var_C]
0x7E2CCD: mov     large fs:0, eax
0x7E2CD3: mov     edi, ecx
0x7E2CD5: push    6Ch ; 'l'; Size
0x7E2CD7: call    FormHeapAlloc
0x7E2CDC: add     esp, 4
0x7E2CDF: mov     [esp+1Ch+var_10], eax
0x7E2CE3: test    eax, eax
0x7E2CE5: mov     [esp+1Ch+var_4], 0
0x7E2CED: jz      short loc_7E2CFA
0x7E2CEF: mov     ecx, eax; this
0x7E2CF1: call    ??0BSShaderProperty@@QAE@XZ; BSShaderProperty::BSShaderProperty(void)
0x7E2CF6: mov     esi, eax
0x7E2CF8: jmp     short loc_7E2CFC
0x7E2CFA: xor     esi, esi
0x7E2CFC: mov     eax, [esp+1Ch+arg_0]
0x7E2D00: push    eax
0x7E2D01: push    esi
0x7E2D02: mov     ecx, edi
0x7E2D04: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7E2D0C: call    sub_73DA70
0x7E2D11: mov     ecx, [edi+1Ch]
0x7E2D14: mov     [esi+1Ch], ecx
0x7E2D17: fld     dword ptr [edi+20h]
0x7E2D1A: fstp    dword ptr [esi+20h]
0x7E2D1D: mov     dword ptr [esi+24h], 0
0x7E2D24: mov     eax, esi
0x7E2D26: mov     ecx, [esp+1Ch+var_C]
0x7E2D2A: mov     large fs:0, ecx
0x7E2D31: pop     ecx
0x7E2D32: pop     edi
0x7E2D33: pop     esi
0x7E2D34: add     esp, 10h
0x7E2D37: retn    4
