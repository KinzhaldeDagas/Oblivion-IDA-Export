0x784B30: push    esi
0x784B31: mov     esi, [esp+4+arg_4]
0x784B35: test    esi, esi
0x784B37: push    edi
0x784B38: mov     edi, [esp+8+arg_0]
0x784B3C: mov     eax, esi
0x784B3E: mov     ecx, edi
0x784B40: jbe     short loc_784B54
0x784B42: mov     edx, [esp+8+arg_8]
0x784B46: fld     dword ptr [edx]
0x784B48: sub     eax, 1
0x784B4B: fstp    dword ptr [ecx]
0x784B4D: add     ecx, 4
0x784B50: test    eax, eax
0x784B52: ja      short loc_784B46
0x784B54: lea     eax, [edi+esi*4]
0x784B57: pop     edi
0x784B58: pop     esi
0x784B59: retn    0Ch
