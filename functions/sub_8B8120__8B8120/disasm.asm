0x8B8120: push    ebp
0x8B8121: mov     ebp, esp
0x8B8123: and     esp, 0FFFFFFF0h
0x8B8126: push    0FFFFFFFFh
0x8B8128: push    offset SEH_8B8120
0x8B812D: mov     eax, large fs:0
0x8B8133: push    eax
0x8B8134: sub     esp, 38h
0x8B8137: mov     eax, ds:0B30AACh
0x8B813C: xor     eax, esp
0x8B813E: mov     [esp+44h+var_14], eax
0x8B8142: push    ebx
0x8B8143: push    esi
0x8B8144: push    edi
0x8B8145: mov     eax, ds:0B30AACh
0x8B814A: xor     eax, esp
0x8B814C: push    eax
0x8B814D: lea     eax, [esp+54h+var_C]
0x8B8151: mov     large fs:0, eax
0x8B8157: mov     esi, [ebp+arg_0]
0x8B815A: test    esi, esi
0x8B815C: mov     ebx, ecx
0x8B815E: jz      loc_8B8216
0x8B8164: mov     ecx, ds:0BA7D98h
0x8B816A: mov     eax, [ecx]
0x8B816C: mov     edx, [eax+10h]
0x8B816F: push    24h ; '$'
0x8B8171: push    20h ; ' '
0x8B8173: call    edx
0x8B8175: mov     word ptr [eax+4], 20h ; ' '
0x8B817B: mov     [esp+54h+var_34], eax
0x8B817F: fld     dword ptr [esi+10h]
0x8B8182: fstp    [esp+54h+var_38]
0x8B8186: push    ecx
0x8B8187: fld     dword ptr [esi+14h]
0x8B818A: lea     ecx, [esp+58h+var_30]
0x8B818E: fstp    [esp+58h+var_3C]
0x8B8192: mov     [esp+58h+var_4], 0
0x8B819A: fld     dword ptr [esi+18h]
0x8B819D: fstp    [esp+58h+var_44]
0x8B81A1: fld     dword ptr [esi+1Ch]
0x8B81A4: fstp    [esp+58h+var_40]
0x8B81A8: fld     [esp+58h+var_38]
0x8B81AC: fstp    [esp+58h+var_30]
0x8B81B0: fld     [esp+58h+var_3C]
0x8B81B4: fstp    [esp+58h+var_2C]
0x8B81B8: fld     [esp+58h+var_44]
0x8B81BC: fstp    [esp+58h+var_28]
0x8B81C0: fld     [esp+58h+var_40]
0x8B81C4: fstp    [esp+58h+var_24]
0x8B81C8: fld     dword ptr ds:0B2EFC4h
0x8B81CE: fstp    [esp+58h+var_58]
0x8B81D1: push    ecx
0x8B81D2: mov     ecx, eax
0x8B81D4: call    sub_8CDFE0
0x8B81D9: mov     edx, [ebx]
0x8B81DB: mov     edi, eax
0x8B81DD: mov     eax, [edx+4Ch]
0x8B81E0: push    edi
0x8B81E1: mov     ecx, ebx
0x8B81E3: mov     [esp+58h+var_4], 0FFFFFFFFh
0x8B81EB: call    eax
0x8B81ED: cmp     word ptr [edi+4], 0
0x8B81F2: jz      short loc_8B820C
0x8B81F4: add     word ptr [edi+6], 0FFFFh
0x8B81F9: movzx   eax, word ptr [edi+6]
0x8B81FD: test    ax, ax
0x8B8200: jnz     short loc_8B820C
0x8B8202: mov     edx, [edi]
0x8B8204: mov     eax, [edx]
0x8B8206: push    1
0x8B8208: mov     ecx, edi
0x8B820A: call    eax
0x8B820C: mov     edx, [ebx]
0x8B820E: mov     eax, [edx+7Ch]
0x8B8211: push    esi
0x8B8212: mov     ecx, ebx
0x8B8214: call    eax
0x8B8216: mov     ecx, [esp+54h+var_C]
0x8B821A: mov     large fs:0, ecx
0x8B8221: pop     ecx
0x8B8222: pop     edi
0x8B8223: pop     esi
0x8B8224: pop     ebx
0x8B8225: mov     ecx, [esp+44h+var_14]
0x8B8229: xor     ecx, esp
0x8B822B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B8230: mov     esp, ebp
0x8B8232: pop     ebp
0x8B8233: retn    4
