0x420C60: push    0FFFFFFFFh
0x420C62: push    offset SEH_8C62B0
0x420C67: mov     eax, large fs:0
0x420C6D: push    eax
0x420C6E: push    ecx
0x420C6F: push    esi
0x420C70: mov     eax, ___security_cookie
0x420C75: xor     eax, esp
0x420C77: push    eax
0x420C78: lea     eax, [esp+18h+var_C]
0x420C7C: mov     large fs:0, eax
0x420C82: mov     esi, ecx
0x420C84: fldz
0x420C86: push    4Ch ; 'L'; a2
0x420C88: fcomp   [esp+1Ch+arg_0]
0x420C8C: fnstsw  ax
0x420C8E: test    ah, 44h
0x420C91: jnp     short loc_420D05
0x420C93: call    BaseExtraList_GetExtraData
0x420C98: test    eax, eax
0x420C9A: jz      short loc_420CB6
0x420C9C: fld     [esp+18h+arg_0]
0x420CA0: fstp    dword ptr [eax+0Ch]
0x420CA3: mov     ecx, [esp+18h+var_C]
0x420CA7: mov     large fs:0, ecx
0x420CAE: pop     ecx
0x420CAF: pop     esi
0x420CB0: add     esp, 10h
0x420CB3: retn    4
0x420CB6: push    10h; Size
0x420CB8: call    FormHeapAlloc
0x420CBD: add     esp, 4
0x420CC0: mov     [esp+18h+var_10], eax
0x420CC4: test    eax, eax
0x420CC6: mov     [esp+18h+var_4], 0
0x420CCE: jz      short loc_420CD9
0x420CD0: mov     ecx, eax
0x420CD2: call    ExtraNorthRotation_Create
0x420CD7: jmp     short loc_420CDB
0x420CD9: xor     eax, eax
0x420CDB: fld     [esp+18h+arg_0]
0x420CDF: push    eax; BSExtraData *
0x420CE0: mov     ecx, esi; ExtraDataList *
0x420CE2: fstp    dword ptr [eax+0Ch]
0x420CE5: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x420CED: call    BaseExtraList_AddExtra
0x420CF2: mov     ecx, [esp+18h+var_C]
0x420CF6: mov     large fs:0, ecx
0x420CFD: pop     ecx
0x420CFE: pop     esi
0x420CFF: add     esp, 10h
0x420D02: retn    4
0x420D05: call    BaseExtraList_RemoveExtraByType
0x420D0A: mov     ecx, [esp+18h+var_C]
0x420D0E: mov     large fs:0, ecx
0x420D15: pop     ecx
0x420D16: pop     esi
0x420D17: add     esp, 10h
0x420D1A: retn    4
