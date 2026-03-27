0x6E29A0: push    0FFFFFFFFh
0x6E29A2: push    offset SEH_8C8970
0x6E29A7: mov     eax, large fs:0
0x6E29AD: push    eax
0x6E29AE: push    ecx
0x6E29AF: push    esi
0x6E29B0: push    edi
0x6E29B1: mov     eax, ds:0B30AACh
0x6E29B6: xor     eax, esp
0x6E29B8: push    eax
0x6E29B9: lea     eax, [esp+1Ch+var_C]
0x6E29BD: mov     large fs:0, eax
0x6E29C3: mov     edi, ecx
0x6E29C5: push    50h ; 'P'; Size
0x6E29C7: call    FormHeapAlloc
0x6E29CC: mov     esi, eax
0x6E29CE: add     esp, 4
0x6E29D1: mov     [esp+1Ch+var_10], esi
0x6E29D5: test    esi, esi
0x6E29D7: mov     [esp+1Ch+var_4], 0
0x6E29DF: jz      short loc_6E29FE
0x6E29E1: mov     ecx, esi; this
0x6E29E3: call    ??0NiExtraDataController@@QAE@XZ; NiExtraDataController::NiExtraDataController(void)
0x6E29E8: mov     dword ptr [esi], offset ??_7NiFloatsExtraDataPoint3Controller@@6B@; const NiFloatsExtraDataPoint3Controller::`vftable'
0x6E29EE: mov     dword ptr [esi+48h], 0FFFFFFFFh
0x6E29F5: mov     dword ptr [esi+4Ch], 0
0x6E29FC: jmp     short loc_6E2A00
0x6E29FE: xor     esi, esi
0x6E2A00: mov     eax, [esp+1Ch+arg_0]
0x6E2A04: push    eax
0x6E2A05: push    esi
0x6E2A06: mov     ecx, edi
0x6E2A08: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6E2A10: call    sub_75E410
0x6E2A15: mov     ecx, [edi+48h]
0x6E2A18: mov     [esi+48h], ecx
0x6E2A1B: mov     eax, esi
0x6E2A1D: mov     ecx, [esp+1Ch+var_C]
0x6E2A21: mov     large fs:0, ecx
0x6E2A28: pop     ecx
0x6E2A29: pop     edi
0x6E2A2A: pop     esi
0x6E2A2B: add     esp, 10h
0x6E2A2E: retn    4
