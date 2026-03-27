0x422BA0: push    0FFFFFFFFh
0x422BA2: push    offset SEH_8C62B0
0x422BA7: mov     eax, large fs:0
0x422BAD: push    eax
0x422BAE: push    ecx
0x422BAF: push    esi
0x422BB0: mov     eax, ___security_cookie
0x422BB5: xor     eax, esp
0x422BB7: push    eax
0x422BB8: lea     eax, [esp+18h+var_C]
0x422BBC: mov     large fs:0, eax
0x422BC2: mov     esi, ecx
0x422BC4: push    55h ; 'U'; a2
0x422BC6: call    BaseExtraList_GetExtraData
0x422BCB: test    eax, eax
0x422BCD: jnz     short loc_422C1C
0x422BCF: push    10h; Size
0x422BD1: call    FormHeapAlloc
0x422BD6: add     esp, 4
0x422BD9: mov     [esp+18h+var_10], eax
0x422BDD: test    eax, eax
0x422BDF: mov     [esp+18h+var_4], 0
0x422BE7: jz      short loc_422BF7
0x422BE9: mov     ecx, [esp+18h+arg_0]
0x422BED: push    ecx
0x422BEE: mov     ecx, eax
0x422BF0: call    sub_42A090
0x422BF5: jmp     short loc_422BF9
0x422BF7: xor     eax, eax
0x422BF9: push    eax; BSExtraData *
0x422BFA: mov     ecx, esi; ExtraDataList *
0x422BFC: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x422C04: call    BaseExtraList_AddExtra
0x422C09: mov     ecx, [esp+18h+var_C]
0x422C0D: mov     large fs:0, ecx
0x422C14: pop     ecx
0x422C15: pop     esi
0x422C16: add     esp, 10h
0x422C19: retn    4
0x422C1C: mov     dl, byte ptr [esp+18h+arg_0]
0x422C20: mov     [eax+0Ch], dl
0x422C23: mov     ecx, [esp+18h+var_C]
0x422C27: mov     large fs:0, ecx
0x422C2E: pop     ecx
0x422C2F: pop     esi
0x422C30: add     esp, 10h
0x422C33: retn    4
