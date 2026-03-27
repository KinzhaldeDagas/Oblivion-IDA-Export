0x41FFC0: push    0FFFFFFFFh
0x41FFC2: push    offset SEH_8C8970
0x41FFC7: mov     eax, large fs:0
0x41FFCD: push    eax
0x41FFCE: push    ecx
0x41FFCF: push    esi
0x41FFD0: push    edi
0x41FFD1: mov     eax, ___security_cookie
0x41FFD6: xor     eax, esp
0x41FFD8: push    eax
0x41FFD9: lea     eax, [esp+1Ch+var_C]
0x41FFDD: mov     large fs:0, eax
0x41FFE3: mov     edi, ecx
0x41FFE5: push    21h ; '!'; a2
0x41FFE7: call    BaseExtraList_GetExtraData
0x41FFEC: mov     esi, eax
0x41FFEE: test    esi, esi
0x41FFF0: jnz     short loc_420025
0x41FFF2: push    10h; Size
0x41FFF4: call    FormHeapAlloc
0x41FFF9: add     esp, 4
0x41FFFC: mov     [esp+1Ch+var_10], eax
0x420000: test    eax, eax
0x420002: mov     [esp+1Ch+var_4], esi
0x420006: jz      short loc_420011
0x420008: mov     ecx, eax; this
0x42000A: call    ??0ExtraRunOncePacks@@QAE@XZ; ExtraRunOncePacks::ExtraRunOncePacks(void)
0x42000F: jmp     short loc_420013
0x420011: xor     eax, eax
0x420013: push    eax; BSExtraData *
0x420014: mov     ecx, edi; ExtraDataList *
0x420016: mov     [esp+20h+var_4], 0FFFFFFFFh
0x42001E: mov     esi, eax
0x420020: call    BaseExtraList_AddExtra
0x420025: mov     eax, [esp+1Ch+arg_4]
0x420029: mov     ecx, [esp+1Ch+arg_0]
0x42002D: push    eax
0x42002E: push    ecx
0x42002F: mov     ecx, esi
0x420031: call    sub_42A440
0x420036: mov     ecx, [esp+1Ch+var_C]
0x42003A: mov     large fs:0, ecx
0x420041: pop     ecx
0x420042: pop     edi
0x420043: pop     esi
0x420044: add     esp, 10h
0x420047: retn    8
