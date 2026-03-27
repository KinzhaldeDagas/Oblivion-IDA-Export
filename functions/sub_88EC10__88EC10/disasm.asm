0x88EC10: push    0FFFFFFFFh
0x88EC12: push    offset SEH_8C8970
0x88EC17: mov     eax, large fs:0
0x88EC1D: push    eax
0x88EC1E: push    ecx
0x88EC1F: push    esi
0x88EC20: push    edi
0x88EC21: mov     eax, ds:0B30AACh
0x88EC26: xor     eax, esp
0x88EC28: push    eax
0x88EC29: lea     eax, [esp+1Ch+var_C]
0x88EC2D: mov     large fs:0, eax
0x88EC33: mov     edi, ecx
0x88EC35: push    28h ; '('; Size
0x88EC37: call    FormHeapAlloc
0x88EC3C: mov     esi, eax
0x88EC3E: add     esp, 4
0x88EC41: mov     [esp+1Ch+var_10], esi
0x88EC45: test    esi, esi
0x88EC47: mov     [esp+1Ch+var_4], 0
0x88EC4F: jz      short loc_88EC8C
0x88EC51: mov     ecx, esi
0x88EC53: call    sub_897600
0x88EC58: fldz
0x88EC5A: mov     dword ptr [esi], offset ??_7bhkBlendCollisionObject@@6B@; const bhkBlendCollisionObject::`vftable'
0x88EC60: add     dword ptr ds:0BA7A1Ch, 1
0x88EC67: fstp    dword ptr [esi+14h]
0x88EC6A: fld1
0x88EC6C: and     word ptr [esi+0Ch], 0FEFFh
0x88EC72: fstp    dword ptr [esi+18h]
0x88EC75: mov     dword ptr [esi+1Ch], 8
0x88EC7C: mov     dword ptr [esi+20h], 0
0x88EC83: mov     dword ptr [esi+24h], 0
0x88EC8A: jmp     short loc_88EC8E
0x88EC8C: xor     esi, esi
0x88EC8E: mov     eax, [esp+1Ch+arg_0]
0x88EC92: push    eax
0x88EC93: push    esi
0x88EC94: mov     ecx, edi
0x88EC96: mov     [esp+24h+var_4], 0FFFFFFFFh
0x88EC9E: call    sub_89E930
0x88ECA3: fld     dword ptr [edi+18h]
0x88ECA6: fstp    dword ptr [esi+18h]
0x88ECA9: mov     eax, esi
0x88ECAB: fld     dword ptr [edi+14h]
0x88ECAE: fstp    dword ptr [esi+14h]
0x88ECB1: mov     ecx, [edi+20h]
0x88ECB4: mov     [esi+20h], ecx
0x88ECB7: mov     ecx, [esp+1Ch+var_C]
0x88ECBB: mov     large fs:0, ecx
0x88ECC2: pop     ecx
0x88ECC3: pop     edi
0x88ECC4: pop     esi
0x88ECC5: add     esp, 10h
0x88ECC8: retn    4
