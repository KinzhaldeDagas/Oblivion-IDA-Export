0x43F560: push    0FFFFFFFFh
0x43F562: push    offset SEH_5F9EB0
0x43F567: mov     eax, large fs:0
0x43F56D: push    eax
0x43F56E: push    ecx
0x43F56F: push    ebx
0x43F570: push    ebp
0x43F571: push    esi
0x43F572: push    edi
0x43F573: mov     eax, ds:0B30AACh
0x43F578: xor     eax, esp
0x43F57A: push    eax
0x43F57B: lea     eax, [esp+24h+var_C]
0x43F57F: mov     large fs:0, eax
0x43F585: mov     ebp, ecx
0x43F587: push    4Ch ; 'L'; Size
0x43F589: call    FormHeapAlloc
0x43F58E: add     esp, 4
0x43F591: mov     [esp+24h+var_10], eax
0x43F595: xor     ebx, ebx
0x43F597: cmp     eax, ebx
0x43F599: mov     [esp+24h+var_4], ebx
0x43F59D: jz      short loc_43F5A8
0x43F59F: mov     ecx, eax
0x43F5A1: call    sub_49CD10
0x43F5A6: jmp     short loc_43F5AA
0x43F5A8: xor     eax, eax
0x43F5AA: or      esi, 0FFFFFFFFh
0x43F5AD: cmp     [ebp+58h], ebx
0x43F5B0: mov     [esp+24h+var_4], esi
0x43F5B4: mov     [ebp+54h], eax
0x43F5B7: jnz     short loc_43F618
0x43F5B9: push    38h ; '8'; Size
0x43F5BB: call    FormHeapAlloc
0x43F5C0: add     esp, 4
0x43F5C3: mov     [esp+24h+var_10], eax
0x43F5C7: cmp     eax, ebx
0x43F5C9: mov     [esp+24h+var_4], 1
0x43F5D1: jz      short loc_43F5DC
0x43F5D3: mov     ecx, eax
0x43F5D5: call    sub_49D140
0x43F5DA: jmp     short loc_43F5DE
0x43F5DC: xor     eax, eax
0x43F5DE: mov     [ebp+58h], eax
0x43F5E1: mov     ecx, ds:0B06A2Ch
0x43F5E7: shl     ecx, 0Bh
0x43F5EA: test    ecx, ecx
0x43F5EC: mov     [esp+24h+var_10], ecx
0x43F5F0: fild    [esp+24h+var_10]
0x43F5F4: mov     [esp+24h+var_4], esi
0x43F5F8: push    offset aInteriorWaterN; "Interior Water Node"
0x43F5FD: jge     short loc_43F605
0x43F5FF: fadd    dword ptr ds:0A2FC78h
0x43F605: push    ecx
0x43F606: mov     ecx, eax
0x43F608: fstp    [esp+2Ch+var_2C]; float
0x43F60B: call    sub_49E610
0x43F610: mov     ecx, [ebp+58h]
0x43F613: call    sub_499FF0
0x43F618: mov     eax, ds:0B06A2Ch
0x43F61D: lea     ecx, [ecx+0]
0x43F620: cmp     ebx, eax
0x43F622: jnb     short loc_43F699
0x43F624: xor     edi, edi
0x43F626: cmp     edi, eax
0x43F628: jnb     short loc_43F694
0x43F62A: mov     ecx, [ebp+8]
0x43F62D: push    edi
0x43F62E: push    ebx
0x43F62F: call    GetGridEntry
0x43F634: mov     esi, eax
0x43F636: cmp     dword ptr [esi+4], 0
0x43F63A: jnz     short loc_43F68A
0x43F63C: push    38h ; '8'; Size
0x43F63E: call    FormHeapAlloc
0x43F643: add     esp, 4
0x43F646: mov     [esp+24h+var_10], eax
0x43F64A: test    eax, eax
0x43F64C: mov     [esp+24h+var_4], 2
0x43F654: jz      short loc_43F65F
0x43F656: mov     ecx, eax
0x43F658: call    sub_49D140
0x43F65D: jmp     short loc_43F661
0x43F65F: xor     eax, eax
0x43F661: fld     dword ptr ds:0A2FF44h
0x43F667: push    offset aWaterNode; "Water Node"
0x43F66C: push    ecx
0x43F66D: mov     ecx, eax
0x43F66F: fstp    [esp+2Ch+var_2C]; float
0x43F672: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x43F67A: mov     [esi+4], eax
0x43F67D: call    sub_49E610
0x43F682: mov     ecx, [esi+4]
0x43F685: call    sub_499FF0
0x43F68A: mov     eax, ds:0B06A2Ch
0x43F68F: add     edi, 1
0x43F692: jmp     short loc_43F626
0x43F694: add     ebx, 1
0x43F697: jmp     short loc_43F620
0x43F699: cmp     byte ptr ds:0B07050h, 0
0x43F6A0: jz      short loc_43F6C8
0x43F6A2: cmp     byte ptr ds:0B42F3Eh, 0
0x43F6A9: jz      short loc_43F6C8
0x43F6AB: cmp     dword ptr ds:0B42F48h, 2
0x43F6B2: jl      short loc_43F6C8
0x43F6B4: push    1
0x43F6B6: push    0
0x43F6B8: push    11h
0x43F6BA: call    sub_49A140
0x43F6BF: push    eax
0x43F6C0: call    sub_7B8940
0x43F6C5: add     esp, 10h
0x43F6C8: mov     ecx, [esp+24h+var_C]
0x43F6CC: mov     large fs:0, ecx
0x43F6D3: pop     ecx
0x43F6D4: pop     edi
0x43F6D5: pop     esi
0x43F6D6: pop     ebp
0x43F6D7: pop     ebx
0x43F6D8: add     esp, 10h
0x43F6DB: retn
