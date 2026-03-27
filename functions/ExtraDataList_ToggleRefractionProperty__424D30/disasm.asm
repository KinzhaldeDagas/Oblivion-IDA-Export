0x424D30: push    0FFFFFFFFh
0x424D32: push    offset SEH_6E3250
0x424D37: mov     eax, large fs:0
0x424D3D: push    eax
0x424D3E: push    esi
0x424D3F: push    edi
0x424D40: mov     eax, ___security_cookie
0x424D45: xor     eax, esp
0x424D47: push    eax
0x424D48: lea     eax, [esp+18h+var_C]
0x424D4C: mov     large fs:0, eax
0x424D52: mov     edi, ecx
0x424D54: push    51h ; 'Q'; a2
0x424D56: call    BaseExtraList_GetExtraData
0x424D5B: cmp     [esp+18h+enable], 0
0x424D60: mov     esi, eax
0x424D62: jz      short loc_424DBE
0x424D64: test    esi, esi
0x424D66: jnz     short loc_424DA3
0x424D68: push    10h; Size
0x424D6A: call    FormHeapAlloc
0x424D6F: add     esp, 4
0x424D72: mov     dword ptr [esp+18h+enable], eax
0x424D76: test    eax, eax
0x424D78: mov     [esp+18h+var_4], esi
0x424D7C: jz      short loc_424D8F
0x424D7E: fld     [esp+18h+arg_4]
0x424D82: push    ecx
0x424D83: mov     ecx, eax; this
0x424D85: fstp    [esp+1Ch+refractionAmount]; refractionAmount
0x424D88: call    ExtraRefractionProperty__ExtraRefractionProperty
0x424D8D: jmp     short loc_424D91
0x424D8F: xor     eax, eax
0x424D91: push    eax; BSExtraData *
0x424D92: mov     ecx, edi; ExtraDataList *
0x424D94: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x424D9C: mov     esi, eax
0x424D9E: call    BaseExtraList_AddExtra
0x424DA3: fld     [esp+18h+arg_4]
0x424DA7: fstp    dword ptr [esi+0Ch]
0x424DAA: mov     ecx, [esp+18h+var_C]
0x424DAE: mov     large fs:0, ecx
0x424DB5: pop     ecx
0x424DB6: pop     edi
0x424DB7: pop     esi
0x424DB8: add     esp, 0Ch
0x424DBB: retn    8
0x424DBE: test    esi, esi
0x424DC0: jz      short loc_424DCC
0x424DC2: push    1
0x424DC4: push    esi
0x424DC5: mov     ecx, edi
0x424DC7: call    BaseExtraList_RemoveExtraByPtr
0x424DCC: mov     ecx, [esp+18h+var_C]
0x424DD0: mov     large fs:0, ecx
0x424DD7: pop     ecx
0x424DD8: pop     edi
0x424DD9: pop     esi
0x424DDA: add     esp, 0Ch
0x424DDD: retn    8
