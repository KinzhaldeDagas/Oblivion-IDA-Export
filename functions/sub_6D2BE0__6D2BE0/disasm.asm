0x6D2BE0: push    0FFFFFFFFh
0x6D2BE2: push    offset SEH_6E3B20
0x6D2BE7: mov     eax, large fs:0
0x6D2BED: push    eax
0x6D2BEE: push    esi
0x6D2BEF: push    edi
0x6D2BF0: mov     eax, ds:0B30AACh
0x6D2BF5: xor     eax, esp
0x6D2BF7: push    eax
0x6D2BF8: lea     eax, [esp+18h+var_C]
0x6D2BFC: mov     large fs:0, eax
0x6D2C02: mov     edi, ecx
0x6D2C04: fld     [esp+18h+a2]
0x6D2C08: sub     esp, 8
0x6D2C0B: fstp    [esp+20h+var_1C]
0x6D2C0F: fld     [esp+20h+arg_0]
0x6D2C13: fstp    [esp+20h+var_20]
0x6D2C16: call    sub_6EBA60
0x6D2C1B: mov     ecx, [edi+10h]
0x6D2C1E: test    ecx, ecx
0x6D2C20: mov     esi, eax
0x6D2C22: jz      short loc_6D2C89
0x6D2C24: fld     [esp+18h+a2]
0x6D2C28: sub     esp, 8
0x6D2C2B: fstp    [esp+20h+var_1C]; float
0x6D2C2F: lea     eax, [esp+20h+a2]
0x6D2C33: fld     [esp+20h+arg_0]
0x6D2C37: fstp    [esp+20h+var_20]; float
0x6D2C3A: push    eax; int
0x6D2C3B: call    sub_6E35A0
0x6D2C40: mov     ecx, [esp+18h+a2]
0x6D2C44: push    ecx; a2
0x6D2C45: mov     ecx, esi; this
0x6D2C47: mov     [esp+1Ch+var_4], 0
0x6D2C4F: call    sub_70BD60
0x6D2C54: mov     edi, [esp+18h+a2]
0x6D2C58: test    edi, edi
0x6D2C5A: mov     dword ptr [esi+14h], 0
0x6D2C61: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6D2C69: jz      short loc_6D2C87
0x6D2C6B: lea     edx, [edi+4]
0x6D2C6E: push    edx; lpAddend
0x6D2C6F: call    dword ptr ds:0A2807Ch
0x6D2C75: test    eax, eax
0x6D2C77: jnz     short loc_6D2C87
0x6D2C79: test    edi, edi
0x6D2C7B: jz      short loc_6D2C87
0x6D2C7D: mov     eax, [edi]
0x6D2C7F: mov     edx, [eax]
0x6D2C81: push    1
0x6D2C83: mov     ecx, edi
0x6D2C85: call    edx
0x6D2C87: mov     eax, esi
0x6D2C89: mov     ecx, dword ptr [esp+18h+var_C]
0x6D2C8D: mov     large fs:0, ecx
0x6D2C94: pop     ecx
0x6D2C95: pop     edi
0x6D2C96: pop     esi
0x6D2C97: add     esp, 0Ch
0x6D2C9A: retn    8
