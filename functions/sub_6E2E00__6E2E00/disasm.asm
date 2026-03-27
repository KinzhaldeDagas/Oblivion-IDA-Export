0x6E2E00: push    0FFFFFFFFh
0x6E2E02: push    offset SEH_8C8970
0x6E2E07: mov     eax, large fs:0
0x6E2E0D: push    eax
0x6E2E0E: push    ecx
0x6E2E0F: push    esi
0x6E2E10: push    edi
0x6E2E11: mov     eax, ds:0B30AACh
0x6E2E16: xor     eax, esp
0x6E2E18: push    eax
0x6E2E19: lea     eax, [esp+1Ch+var_C]
0x6E2E1D: mov     large fs:0, eax
0x6E2E23: mov     edi, ecx
0x6E2E25: push    50h ; 'P'; Size
0x6E2E27: call    FormHeapAlloc
0x6E2E2C: mov     esi, eax
0x6E2E2E: add     esp, 4
0x6E2E31: mov     [esp+1Ch+var_10], esi
0x6E2E35: test    esi, esi
0x6E2E37: mov     [esp+1Ch+var_4], 0
0x6E2E3F: jz      short loc_6E2E5E
0x6E2E41: mov     ecx, esi; this
0x6E2E43: call    ??0NiExtraDataController@@QAE@XZ; NiExtraDataController::NiExtraDataController(void)
0x6E2E48: mov     dword ptr [esi], offset ??_7NiFloatsExtraDataController@@6B@; const NiFloatsExtraDataController::`vftable'
0x6E2E4E: mov     dword ptr [esi+48h], 0FFFFFFFFh
0x6E2E55: mov     dword ptr [esi+4Ch], 0
0x6E2E5C: jmp     short loc_6E2E60
0x6E2E5E: xor     esi, esi
0x6E2E60: mov     eax, [esp+1Ch+arg_0]
0x6E2E64: push    eax
0x6E2E65: push    esi
0x6E2E66: mov     ecx, edi
0x6E2E68: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6E2E70: call    sub_75E410
0x6E2E75: mov     ecx, [edi+48h]
0x6E2E78: mov     [esi+48h], ecx
0x6E2E7B: mov     eax, esi
0x6E2E7D: mov     ecx, [esp+1Ch+var_C]
0x6E2E81: mov     large fs:0, ecx
0x6E2E88: pop     ecx
0x6E2E89: pop     edi
0x6E2E8A: pop     esi
0x6E2E8B: add     esp, 10h
0x6E2E8E: retn    4
