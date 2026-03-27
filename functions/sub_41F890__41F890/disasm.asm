0x41F890: push    0FFFFFFFFh
0x41F892: push    offset SEH_787830
0x41F897: mov     eax, large fs:0
0x41F89D: push    eax
0x41F89E: push    ebx
0x41F89F: push    esi
0x41F8A0: push    edi
0x41F8A1: mov     eax, ___security_cookie
0x41F8A6: xor     eax, esp
0x41F8A8: push    eax
0x41F8A9: lea     eax, [esp+1Ch+var_C]
0x41F8AD: mov     large fs:0, eax
0x41F8B3: mov     esi, ecx
0x41F8B5: push    2; a2
0x41F8B7: call    BaseExtraList_GetExtraData
0x41F8BC: mov     ebx, [esp+1Ch+arg_0]
0x41F8C0: test    ebx, ebx
0x41F8C2: mov     edi, eax
0x41F8C4: jz      short loc_41F8FE
0x41F8C6: test    edi, edi
0x41F8C8: jnz     short loc_41F8FE
0x41F8CA: push    14h; Size
0x41F8CC: call    FormHeapAlloc
0x41F8D1: add     esp, 4
0x41F8D4: mov     [esp+1Ch+arg_0], eax
0x41F8D8: test    eax, eax
0x41F8DA: mov     [esp+1Ch+var_4], edi
0x41F8DE: jz      short loc_41F8EA
0x41F8E0: push    edi
0x41F8E1: mov     ecx, eax; this
0x41F8E3: call    ??0ExtraHavok@@QAE@XZ; ExtraHavok::ExtraHavok(void)
0x41F8E8: jmp     short loc_41F8EC
0x41F8EA: xor     eax, eax
0x41F8EC: push    eax; BSExtraData *
0x41F8ED: mov     ecx, esi; ExtraDataList *
0x41F8EF: mov     [esp+20h+var_4], 0FFFFFFFFh
0x41F8F7: mov     edi, eax
0x41F8F9: call    BaseExtraList_AddExtra
0x41F8FE: mov     esi, [edi+10h]
0x41F901: cmp     esi, ebx
0x41F903: jz      short loc_41F936
0x41F905: test    esi, esi
0x41F907: jz      short loc_41F925
0x41F909: lea     eax, [esi+4]
0x41F90C: push    eax; lpAddend
0x41F90D: call    ds:InterlockedDecrement
0x41F913: test    eax, eax
0x41F915: jnz     short loc_41F925
0x41F917: test    esi, esi
0x41F919: jz      short loc_41F925
0x41F91B: mov     edx, [esi]
0x41F91D: mov     eax, [edx]
0x41F91F: push    1
0x41F921: mov     ecx, esi
0x41F923: call    eax
0x41F925: test    ebx, ebx
0x41F927: mov     [edi+10h], ebx
0x41F92A: jz      short loc_41F936
0x41F92C: add     ebx, 4
0x41F92F: push    ebx; lpAddend
0x41F930: call    ds:InterlockedIncrement
0x41F936: mov     ecx, dword ptr [esp+1Ch+var_C]
0x41F93A: mov     large fs:0, ecx
0x41F941: pop     ecx
0x41F942: pop     edi
0x41F943: pop     esi
0x41F944: pop     ebx
0x41F945: add     esp, 0Ch
0x41F948: retn    4
