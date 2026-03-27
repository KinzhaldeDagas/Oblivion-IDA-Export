0x6E5B40: push    0FFFFFFFFh
0x6E5B42: push    offset SEH_8C8970
0x6E5B47: mov     eax, large fs:0
0x6E5B4D: push    eax
0x6E5B4E: push    ecx
0x6E5B4F: push    esi
0x6E5B50: push    edi
0x6E5B51: mov     eax, ds:0B30AACh
0x6E5B56: xor     eax, esp
0x6E5B58: push    eax
0x6E5B59: lea     eax, [esp+1Ch+var_C]
0x6E5B5D: mov     large fs:0, eax
0x6E5B63: mov     edi, ecx
0x6E5B65: push    60h ; '`'; Size
0x6E5B67: call    FormHeapAlloc
0x6E5B6C: add     esp, 4
0x6E5B6F: mov     [esp+1Ch+var_10], eax
0x6E5B73: xor     esi, esi
0x6E5B75: cmp     eax, esi
0x6E5B77: mov     [esp+1Ch+var_4], esi
0x6E5B7B: jz      short loc_6E5B97
0x6E5B7D: push    esi; int
0x6E5B7E: push    0FFFFh; int
0x6E5B83: push    0FFFFh; int
0x6E5B88: push    0FFFFh; int
0x6E5B8D: push    esi; int
0x6E5B8E: mov     ecx, eax; this
0x6E5B90: call    sub_6E5920
0x6E5B95: mov     esi, eax
0x6E5B97: mov     eax, [esp+1Ch+arg_0]
0x6E5B9B: push    eax
0x6E5B9C: push    esi
0x6E5B9D: mov     ecx, edi
0x6E5B9F: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6E5BA7: call    sub_6E4B20
0x6E5BAC: fld     dword ptr [edi+48h]
0x6E5BAF: fstp    dword ptr [esi+48h]
0x6E5BB2: mov     eax, esi
0x6E5BB4: fld     dword ptr [edi+4Ch]
0x6E5BB7: fstp    dword ptr [esi+4Ch]
0x6E5BBA: fld     dword ptr [edi+50h]
0x6E5BBD: fstp    dword ptr [esi+50h]
0x6E5BC0: fld     dword ptr [edi+54h]
0x6E5BC3: fstp    dword ptr [esi+54h]
0x6E5BC6: fld     dword ptr [edi+58h]
0x6E5BC9: fstp    dword ptr [esi+58h]
0x6E5BCC: fld     dword ptr [edi+5Ch]
0x6E5BCF: fstp    dword ptr [esi+5Ch]
0x6E5BD2: mov     ecx, [esp+1Ch+var_C]
0x6E5BD6: mov     large fs:0, ecx
0x6E5BDD: pop     ecx
0x6E5BDE: pop     edi
0x6E5BDF: pop     esi
0x6E5BE0: add     esp, 10h
0x6E5BE3: retn    4
