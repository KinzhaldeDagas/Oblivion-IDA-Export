0x784B60: push    0FFFFFFFFh
0x784B62: push    offset SEH_784B60
0x784B67: mov     eax, large fs:0
0x784B6D: push    eax
0x784B6E: push    ecx
0x784B6F: push    ebx
0x784B70: push    esi
0x784B71: mov     eax, ds:0B30AACh
0x784B76: xor     eax, esp
0x784B78: push    eax
0x784B79: lea     eax, [esp+1Ch+var_C]
0x784B7D: mov     large fs:0, eax
0x784B83: mov     esi, ecx
0x784B85: mov     [esp+1Ch+var_10], esi
0x784B89: lea     ecx, [esi+4Ch]
0x784B8C: mov     [esp+1Ch+var_4], 3
0x784B94: call    sub_784A20
0x784B99: lea     ecx, [esi+3Ch]
0x784B9C: mov     byte ptr [esp+1Ch+var_4], 2
0x784BA1: call    sub_784A20
0x784BA6: mov     eax, [esi+30h]
0x784BA9: xor     ebx, ebx
0x784BAB: cmp     eax, ebx
0x784BAD: jz      short loc_784BB8
0x784BAF: push    eax
0x784BB0: call    FormHeapFree
0x784BB5: add     esp, 4
0x784BB8: lea     ecx, [esi+1Ch]
0x784BBB: mov     [esi+30h], ebx
0x784BBE: mov     [esi+34h], ebx
0x784BC1: mov     [esi+38h], ebx
0x784BC4: mov     byte ptr [esp+1Ch+var_4], bl
0x784BC8: call    sub_784A20
0x784BCD: lea     ecx, [esi+0Ch]
0x784BD0: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x784BD8: call    sub_784A20
0x784BDD: mov     ecx, [esp+1Ch+var_C]
0x784BE1: mov     large fs:0, ecx
0x784BE8: pop     ecx
0x784BE9: pop     esi
0x784BEA: pop     ebx
0x784BEB: add     esp, 10h
0x784BEE: retn
