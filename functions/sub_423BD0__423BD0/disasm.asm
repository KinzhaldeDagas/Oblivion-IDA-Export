0x423BD0: push    0FFFFFFFFh
0x423BD2: push    offset SEH_6E3250
0x423BD7: mov     eax, large fs:0
0x423BDD: push    eax
0x423BDE: push    ebx
0x423BDF: push    esi
0x423BE0: mov     eax, ___security_cookie
0x423BE5: xor     eax, esp
0x423BE7: push    eax
0x423BE8: lea     eax, [esp+18h+var_C]
0x423BEC: mov     large fs:0, eax
0x423BF2: mov     esi, ecx
0x423BF4: push    38h ; '8'; a2
0x423BF6: call    BaseExtraList_GetExtraData
0x423BFB: mov     ebx, [esp+18h+arg_0]
0x423BFF: cmp     bl, 0FFh
0x423C02: jz      short loc_423C69
0x423C04: test    eax, eax
0x423C06: jnz     short loc_423C52
0x423C08: push    10h; Size
0x423C0A: call    FormHeapAlloc
0x423C0F: add     esp, 4
0x423C12: mov     [esp+18h+arg_0], eax
0x423C16: test    eax, eax
0x423C18: mov     [esp+18h+var_4], 0
0x423C20: jz      short loc_423C2C
0x423C22: push    ebx
0x423C23: mov     ecx, eax
0x423C25: call    sub_42A160
0x423C2A: jmp     short loc_423C2E
0x423C2C: xor     eax, eax
0x423C2E: push    eax; BSExtraData *
0x423C2F: mov     ecx, esi; ExtraDataList *
0x423C31: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x423C39: call    BaseExtraList_AddExtra
0x423C3E: mov     ecx, [esp+18h+var_C]
0x423C42: mov     large fs:0, ecx
0x423C49: pop     ecx
0x423C4A: pop     esi
0x423C4B: pop     ebx
0x423C4C: add     esp, 0Ch
0x423C4F: retn    4
0x423C52: mov     [eax+0Ch], bl
0x423C55: mov     ecx, [esp+18h+var_C]
0x423C59: mov     large fs:0, ecx
0x423C60: pop     ecx
0x423C61: pop     esi
0x423C62: pop     ebx
0x423C63: add     esp, 0Ch
0x423C66: retn    4
0x423C69: test    eax, eax
0x423C6B: jz      short loc_423C77
0x423C6D: push    1
0x423C6F: push    eax
0x423C70: mov     ecx, esi
0x423C72: call    BaseExtraList_RemoveExtraByPtr
0x423C77: mov     ecx, [esp+18h+var_C]
0x423C7B: mov     large fs:0, ecx
0x423C82: pop     ecx
0x423C83: pop     esi
0x423C84: pop     ebx
0x423C85: add     esp, 0Ch
0x423C88: retn    4
