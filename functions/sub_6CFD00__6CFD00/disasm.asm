0x6CFD00: push    0FFFFFFFFh
0x6CFD02: push    offset SEH_6CFD00
0x6CFD07: mov     eax, large fs:0
0x6CFD0D: push    eax
0x6CFD0E: sub     esp, 30h
0x6CFD11: push    esi
0x6CFD12: push    edi
0x6CFD13: mov     eax, ds:0B30AACh
0x6CFD18: xor     eax, esp
0x6CFD1A: push    eax
0x6CFD1B: lea     eax, [esp+48h+var_C]
0x6CFD1F: mov     large fs:0, eax
0x6CFD25: movzx   eax, word ptr [esp+48h+arg_0]
0x6CFD2A: mov     ecx, [ecx+40h]
0x6CFD2D: mov     esi, [ecx+eax*4]
0x6CFD30: lea     edx, [esi+30h]
0x6CFD33: push    edx
0x6CFD34: lea     ecx, [esp+4Ch+var_3C]
0x6CFD38: call    sub_7150F0
0x6CFD3D: mov     eax, [esi+54h]
0x6CFD40: mov     ecx, [esi+58h]
0x6CFD43: fld     dword ptr [esi+60h]
0x6CFD46: mov     edx, [esi+5Ch]
0x6CFD49: fstp    [esp+48h+arg_0]
0x6CFD4D: fld     [esp+48h+arg_0]
0x6CFD51: mov     [esp+48h+var_2C], eax
0x6CFD55: mov     eax, [esp+48h+var_3C]
0x6CFD59: fstp    [esp+48h+var_10]
0x6CFD5D: mov     [esp+48h+var_28], ecx
0x6CFD61: mov     ecx, [esp+48h+var_38]
0x6CFD65: mov     [esp+48h+var_24], edx
0x6CFD69: mov     edx, [esp+48h+var_34]
0x6CFD6D: mov     [esp+48h+var_20], eax
0x6CFD71: mov     eax, [esp+48h+var_30]
0x6CFD75: push    38h ; '8'; Size
0x6CFD77: mov     [esp+4Ch+var_1C], ecx
0x6CFD7B: mov     [esp+4Ch+var_18], edx
0x6CFD7F: mov     [esp+4Ch+var_14], eax
0x6CFD83: call    FormHeapAlloc
0x6CFD88: add     esp, 4
0x6CFD8B: mov     [esp+48h+arg_0], eax
0x6CFD8F: test    eax, eax
0x6CFD91: mov     [esp+48h+var_4], 0
0x6CFD99: jz      short loc_6CFDC6
0x6CFD9B: sub     esp, 20h
0x6CFD9E: mov     edi, esp
0x6CFDA0: mov     ecx, 8
0x6CFDA5: lea     esi, [esp+68h+var_2C]
0x6CFDA9: rep movsd
0x6CFDAB: mov     ecx, eax
0x6CFDAD: call    sub_6D5C30
0x6CFDB2: mov     ecx, [esp+48h+var_C]
0x6CFDB6: mov     large fs:0, ecx
0x6CFDBD: pop     ecx
0x6CFDBE: pop     edi
0x6CFDBF: pop     esi
0x6CFDC0: add     esp, 3Ch
0x6CFDC3: retn    4
0x6CFDC6: xor     eax, eax
0x6CFDC8: mov     ecx, [esp+48h+var_C]
0x6CFDCC: mov     large fs:0, ecx
0x6CFDD3: pop     ecx
0x6CFDD4: pop     edi
0x6CFDD5: pop     esi
0x6CFDD6: add     esp, 3Ch
0x6CFDD9: retn    4
