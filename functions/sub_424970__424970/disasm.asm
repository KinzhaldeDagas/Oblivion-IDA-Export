0x424970: push    0FFFFFFFFh
0x424972: push    offset SEH_6ACAB0
0x424977: mov     eax, large fs:0
0x42497D: push    eax
0x42497E: push    ebp
0x42497F: push    esi
0x424980: push    edi
0x424981: mov     eax, ___security_cookie
0x424986: xor     eax, esp
0x424988: push    eax
0x424989: lea     eax, [esp+1Ch+var_C]
0x42498D: mov     large fs:0, eax
0x424993: mov     edi, ecx
0x424995: push    19h; a2
0x424997: call    BaseExtraList_GetExtraData
0x42499C: xor     esi, esi
0x42499E: cmp     eax, esi
0x4249A0: jz      short loc_4249E7
0x4249A2: mov     ecx, [esp+1Ch+arg_0]
0x4249A6: cmp     ecx, esi
0x4249A8: jnz     short loc_4249C9
0x4249AA: push    1
0x4249AC: push    eax
0x4249AD: mov     ecx, edi
0x4249AF: call    BaseExtraList_RemoveExtraByPtr
0x4249B4: mov     ecx, [esp+1Ch+var_C]
0x4249B8: mov     large fs:0, ecx
0x4249BF: pop     ecx
0x4249C0: pop     edi
0x4249C1: pop     esi
0x4249C2: pop     ebp
0x4249C3: add     esp, 0Ch
0x4249C6: retn    4
0x4249C9: push    ecx
0x4249CA: mov     ecx, [eax+0Ch]
0x4249CD: call    sub_497370
0x4249D2: mov     ecx, [esp+1Ch+var_C]
0x4249D6: mov     large fs:0, ecx
0x4249DD: pop     ecx
0x4249DE: pop     edi
0x4249DF: pop     esi
0x4249E0: pop     ebp
0x4249E1: add     esp, 0Ch
0x4249E4: retn    4
0x4249E7: mov     ebp, [esp+1Ch+arg_0]
0x4249EB: cmp     ebp, esi
0x4249ED: jz      short loc_424A56
0x4249EF: push    10h; Size
0x4249F1: call    FormHeapAlloc
0x4249F6: add     esp, 4
0x4249F9: mov     [esp+1Ch+arg_0], eax
0x4249FD: cmp     eax, esi
0x4249FF: mov     [esp+1Ch+var_4], esi
0x424A03: jz      short loc_424A0E
0x424A05: mov     ecx, eax; this
0x424A07: call    ??0ExtraRagDollData@@QAE@XZ; ExtraRagDollData::ExtraRagDollData(void)
0x424A0C: mov     esi, eax
0x424A0E: push    8; Size
0x424A10: mov     [esp+20h+var_4], 0FFFFFFFFh
0x424A18: call    FormHeapAlloc
0x424A1D: add     esp, 4
0x424A20: mov     [esp+1Ch+arg_0], eax
0x424A24: test    eax, eax
0x424A26: mov     [esp+1Ch+var_4], 1
0x424A2E: jz      short loc_424A39
0x424A30: mov     ecx, eax
0x424A32: call    sub_497210
0x424A37: jmp     short loc_424A3B
0x424A39: xor     eax, eax
0x424A3B: push    ebp
0x424A3C: mov     ecx, eax
0x424A3E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x424A46: mov     [esi+0Ch], eax
0x424A49: call    sub_497370
0x424A4E: push    esi; BSExtraData *
0x424A4F: mov     ecx, edi; ExtraDataList *
0x424A51: call    BaseExtraList_AddExtra
0x424A56: mov     ecx, [esp+1Ch+var_C]
0x424A5A: mov     large fs:0, ecx
0x424A61: pop     ecx
0x424A62: pop     edi
0x424A63: pop     esi
0x424A64: pop     ebp
0x424A65: add     esp, 0Ch
0x424A68: retn    4
