0x8C1B00: push    esi
0x8C1B01: mov     esi, [esp+4+arg_0]
0x8C1B05: push    edi
0x8C1B06: push    esi
0x8C1B07: mov     edi, ecx
0x8C1B09: call    sub_8A0C30
0x8C1B0E: mov     edi, [edi+4]
0x8C1B11: mov     eax, [esi+21Ch]
0x8C1B17: mov     edx, [eax+4]
0x8C1B1A: push    0
0x8C1B1C: push    0
0x8C1B1E: push    50h ; 'P'
0x8C1B20: lea     ecx, [edi+10h]
0x8C1B23: push    ecx
0x8C1B24: push    eax
0x8C1B25: call    edx
0x8C1B27: mov     eax, [esi+21Ch]
0x8C1B2D: mov     edx, [eax+4]
0x8C1B30: push    0
0x8C1B32: push    0
0x8C1B34: push    30h ; '0'
0x8C1B36: lea     ecx, [edi+60h]
0x8C1B39: push    ecx
0x8C1B3A: push    eax
0x8C1B3B: call    edx
0x8C1B3D: mov     eax, [esi+21Ch]
0x8C1B43: push    1
0x8C1B45: lea     ecx, [esp+34h+arg_0]
0x8C1B49: push    ecx
0x8C1B4A: push    4
0x8C1B4C: lea     edx, [edi+90h]
0x8C1B52: push    edx
0x8C1B53: push    eax
0x8C1B54: mov     eax, [eax+4]
0x8C1B57: mov     [esp+44h+arg_0], 4
0x8C1B5F: call    eax
0x8C1B61: mov     eax, [esi+21Ch]
0x8C1B67: push    1
0x8C1B69: lea     ecx, [esp+48h+arg_0]
0x8C1B6D: push    ecx
0x8C1B6E: push    4
0x8C1B70: lea     edx, [edi+94h]
0x8C1B76: push    edx
0x8C1B77: push    eax
0x8C1B78: mov     eax, [eax+4]
0x8C1B7B: mov     [esp+58h+arg_0], 4
0x8C1B83: call    eax
0x8C1B85: mov     esi, [esi+21Ch]
0x8C1B8B: mov     edx, [esi+4]
0x8C1B8E: add     esp, 50h
0x8C1B91: push    1
0x8C1B93: lea     ecx, [esp+0Ch+arg_0]
0x8C1B97: push    ecx
0x8C1B98: push    4
0x8C1B9A: add     edi, 98h ; '˜'
0x8C1BA0: push    edi
0x8C1BA1: push    esi
0x8C1BA2: mov     [esp+1Ch+arg_0], 4
0x8C1BAA: call    edx
0x8C1BAC: add     esp, 14h
0x8C1BAF: pop     edi
0x8C1BB0: pop     esi
0x8C1BB1: retn    4
