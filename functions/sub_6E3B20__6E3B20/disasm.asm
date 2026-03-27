0x6E3B20: push    0FFFFFFFFh
0x6E3B22: push    offset SEH_6E3B20
0x6E3B27: mov     eax, large fs:0
0x6E3B2D: push    eax
0x6E3B2E: push    esi
0x6E3B2F: push    edi
0x6E3B30: mov     eax, ds:0B30AACh
0x6E3B35: xor     eax, esp
0x6E3B37: push    eax
0x6E3B38: lea     eax, [esp+18h+var_C]
0x6E3B3C: mov     large fs:0, eax
0x6E3B42: mov     edi, ecx
0x6E3B44: fld     [esp+18h+arg_4]
0x6E3B48: sub     esp, 8
0x6E3B4B: fstp    [esp+20h+var_1C]
0x6E3B4F: fld     [esp+20h+arg_0]
0x6E3B53: fstp    [esp+20h+var_20]
0x6E3B56: call    sub_6EBA60
0x6E3B5B: mov     ecx, [edi+1Ch]
0x6E3B5E: test    ecx, ecx
0x6E3B60: mov     esi, eax
0x6E3B62: jz      short loc_6E3BC9
0x6E3B64: fld     [esp+18h+arg_4]
0x6E3B68: sub     esp, 8
0x6E3B6B: fstp    [esp+20h+var_1C]; float
0x6E3B6F: lea     eax, [esp+20h+arg_4]
0x6E3B73: fld     [esp+20h+arg_0]
0x6E3B77: fstp    [esp+20h+var_20]; float
0x6E3B7A: push    eax; int
0x6E3B7B: call    sub_6E46A0
0x6E3B80: mov     ecx, [esp+18h+arg_4]
0x6E3B84: push    ecx
0x6E3B85: mov     ecx, esi
0x6E3B87: mov     [esp+1Ch+var_4], 0
0x6E3B8F: call    sub_6DABF0
0x6E3B94: mov     edi, [esp+18h+arg_4]
0x6E3B98: test    edi, edi
0x6E3B9A: mov     dword ptr [esi+20h], 0
0x6E3BA1: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6E3BA9: jz      short loc_6E3BC7
0x6E3BAB: lea     edx, [edi+4]
0x6E3BAE: push    edx; lpAddend
0x6E3BAF: call    dword ptr ds:0A2807Ch
0x6E3BB5: test    eax, eax
0x6E3BB7: jnz     short loc_6E3BC7
0x6E3BB9: test    edi, edi
0x6E3BBB: jz      short loc_6E3BC7
0x6E3BBD: mov     eax, [edi]
0x6E3BBF: mov     edx, [eax]
0x6E3BC1: push    1
0x6E3BC3: mov     ecx, edi
0x6E3BC5: call    edx
0x6E3BC7: mov     eax, esi
0x6E3BC9: mov     ecx, dword ptr [esp+18h+var_C]
0x6E3BCD: mov     large fs:0, ecx
0x6E3BD4: pop     ecx
0x6E3BD5: pop     edi
0x6E3BD6: pop     esi
0x6E3BD7: add     esp, 0Ch
0x6E3BDA: retn    8
