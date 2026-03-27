0x422C70: push    0FFFFFFFFh
0x422C72: push    offset SEH_8C62B0
0x422C77: mov     eax, large fs:0
0x422C7D: push    eax
0x422C7E: push    ecx
0x422C7F: push    esi
0x422C80: mov     eax, ___security_cookie
0x422C85: xor     eax, esp
0x422C87: push    eax
0x422C88: lea     eax, [esp+18h+var_C]
0x422C8C: mov     large fs:0, eax
0x422C92: mov     esi, ecx
0x422C94: push    59h ; 'Y'; a2
0x422C96: call    BaseExtraList_GetExtraData
0x422C9B: test    eax, eax
0x422C9D: jnz     short loc_422CEC
0x422C9F: push    10h; Size
0x422CA1: call    FormHeapAlloc
0x422CA6: add     esp, 4
0x422CA9: mov     [esp+18h+var_10], eax
0x422CAD: test    eax, eax
0x422CAF: mov     [esp+18h+var_4], 0
0x422CB7: jz      short loc_422CC7
0x422CB9: mov     ecx, [esp+18h+arg_0]
0x422CBD: push    ecx
0x422CBE: mov     ecx, eax; this
0x422CC0: call    ??0ExtraInfoGeneralTopic@@QAE@XZ; ExtraInfoGeneralTopic::ExtraInfoGeneralTopic(void)
0x422CC5: jmp     short loc_422CC9
0x422CC7: xor     eax, eax
0x422CC9: push    eax; BSExtraData *
0x422CCA: mov     ecx, esi; ExtraDataList *
0x422CCC: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x422CD4: call    BaseExtraList_AddExtra
0x422CD9: mov     ecx, [esp+18h+var_C]
0x422CDD: mov     large fs:0, ecx
0x422CE4: pop     ecx
0x422CE5: pop     esi
0x422CE6: add     esp, 10h
0x422CE9: retn    4
0x422CEC: mov     edx, [esp+18h+arg_0]
0x422CF0: mov     [eax+0Ch], edx
0x422CF3: mov     ecx, [esp+18h+var_C]
0x422CF7: mov     large fs:0, ecx
0x422CFE: pop     ecx
0x422CFF: pop     esi
0x422D00: add     esp, 10h
0x422D03: retn    4
