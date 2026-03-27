0x73DAB0: push    0FFFFFFFFh
0x73DAB2: push    offset SEH_8C8970
0x73DAB7: mov     eax, large fs:0
0x73DABD: push    eax
0x73DABE: push    ecx
0x73DABF: push    esi
0x73DAC0: push    edi
0x73DAC1: mov     eax, ds:0B30AACh
0x73DAC6: xor     eax, esp
0x73DAC8: push    eax
0x73DAC9: lea     eax, [esp+1Ch+var_C]
0x73DACD: mov     large fs:0, eax
0x73DAD3: mov     edi, ecx
0x73DAD5: push    1Ch; Size
0x73DAD7: call    FormHeapAlloc
0x73DADC: mov     esi, eax
0x73DADE: add     esp, 4
0x73DAE1: mov     [esp+1Ch+var_10], esi
0x73DAE5: test    esi, esi
0x73DAE7: mov     [esp+1Ch+var_4], 0
0x73DAEF: jz      short loc_73DB06
0x73DAF1: mov     ecx, esi; this
0x73DAF3: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x73DAF8: mov     dword ptr [esi], offset ??_7NiShadeProperty@@6B@; const NiShadeProperty::`vftable'
0x73DAFE: mov     word ptr [esi+18h], 1
0x73DB04: jmp     short loc_73DB08
0x73DB06: xor     esi, esi
0x73DB08: mov     eax, [esp+1Ch+arg_0]
0x73DB0C: push    eax
0x73DB0D: push    esi
0x73DB0E: mov     ecx, edi
0x73DB10: mov     [esp+24h+var_4], 0FFFFFFFFh
0x73DB18: call    sub_700A60
0x73DB1D: mov     cx, [edi+18h]
0x73DB21: mov     [esi+18h], cx
0x73DB25: mov     eax, esi
0x73DB27: mov     ecx, [esp+1Ch+var_C]
0x73DB2B: mov     large fs:0, ecx
0x73DB32: pop     ecx
0x73DB33: pop     edi
0x73DB34: pop     esi
0x73DB35: add     esp, 10h
0x73DB38: retn    4
