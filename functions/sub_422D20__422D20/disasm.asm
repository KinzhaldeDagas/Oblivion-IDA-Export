0x422D20: push    0FFFFFFFFh
0x422D22: push    offset SEH_8C62B0
0x422D27: mov     eax, large fs:0
0x422D2D: push    eax
0x422D2E: push    ecx
0x422D2F: push    esi
0x422D30: mov     eax, ___security_cookie
0x422D35: xor     eax, esp
0x422D37: push    eax
0x422D38: lea     eax, [esp+18h+var_C]
0x422D3C: mov     large fs:0, eax
0x422D42: mov     esi, ecx
0x422D44: push    5Ch ; '\'; a2
0x422D46: call    BaseExtraList_GetExtraData
0x422D4B: test    eax, eax
0x422D4D: jnz     short loc_422D9F
0x422D4F: push    10h; Size
0x422D51: call    FormHeapAlloc
0x422D56: add     esp, 4
0x422D59: mov     [esp+18h+var_10], eax
0x422D5D: test    eax, eax
0x422D5F: mov     [esp+18h+var_4], 0
0x422D67: jz      short loc_422D7A
0x422D69: fld     [esp+18h+arg_0]
0x422D6D: push    ecx
0x422D6E: mov     ecx, eax
0x422D70: fstp    [esp+1Ch+var_1C]; float
0x422D73: call    sub_42AC00
0x422D78: jmp     short loc_422D7C
0x422D7A: xor     eax, eax
0x422D7C: push    eax; BSExtraData *
0x422D7D: mov     ecx, esi; ExtraDataList *
0x422D7F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x422D87: call    BaseExtraList_AddExtra
0x422D8C: mov     ecx, [esp+18h+var_C]
0x422D90: mov     large fs:0, ecx
0x422D97: pop     ecx
0x422D98: pop     esi
0x422D99: add     esp, 10h
0x422D9C: retn    4
0x422D9F: fld     [esp+18h+arg_0]
0x422DA3: fstp    dword ptr [eax+0Ch]
0x422DA6: mov     ecx, [esp+18h+var_C]
0x422DAA: mov     large fs:0, ecx
0x422DB1: pop     ecx
0x422DB2: pop     esi
0x422DB3: add     esp, 10h
0x422DB6: retn    4
