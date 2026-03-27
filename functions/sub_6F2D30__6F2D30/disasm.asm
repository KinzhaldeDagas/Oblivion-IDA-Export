0x6F2D30: push    0FFFFFFFFh
0x6F2D32: push    offset SEH_6F2DB0
0x6F2D37: mov     eax, large fs:0
0x6F2D3D: push    eax
0x6F2D3E: push    ecx
0x6F2D3F: push    esi
0x6F2D40: push    edi
0x6F2D41: mov     eax, ds:0B30AACh
0x6F2D46: xor     eax, esp
0x6F2D48: push    eax
0x6F2D49: lea     eax, [esp+1Ch+var_C]
0x6F2D4D: mov     large fs:0, eax
0x6F2D53: mov     esi, ecx
0x6F2D55: mov     [esp+1Ch+var_10], esi
0x6F2D59: mov     edi, [esp+1Ch+arg_0]
0x6F2D5D: push    0FFFFFFFFh
0x6F2D5F: push    0
0x6F2D61: mov     dword ptr [esi+18h], 0Fh
0x6F2D68: mov     dword ptr [esi+14h], 0
0x6F2D6F: push    edi
0x6F2D70: mov     byte ptr [esi+4], 0
0x6F2D74: call    sub_414420
0x6F2D79: add     edi, 1Ch
0x6F2D7C: push    edi
0x6F2D7D: lea     ecx, [esi+1Ch]
0x6F2D80: mov     [esp+20h+var_4], 0
0x6F2D88: call    sub_6F22C0
0x6F2D8D: mov     eax, esi
0x6F2D8F: mov     ecx, [esp+1Ch+var_C]
0x6F2D93: mov     large fs:0, ecx
0x6F2D9A: pop     ecx
0x6F2D9B: pop     edi
0x6F2D9C: pop     esi
0x6F2D9D: add     esp, 10h
0x6F2DA0: retn    4
