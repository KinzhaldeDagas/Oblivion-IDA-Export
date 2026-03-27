0x6DED20: push    0FFFFFFFFh
0x6DED22: push    offset SEH_6E3250
0x6DED27: mov     eax, large fs:0
0x6DED2D: push    eax
0x6DED2E: push    esi
0x6DED2F: push    edi
0x6DED30: mov     eax, ds:0B30AACh
0x6DED35: xor     eax, esp
0x6DED37: push    eax
0x6DED38: lea     eax, [esp+18h+var_C]
0x6DED3C: mov     large fs:0, eax
0x6DED42: mov     edi, ecx
0x6DED44: mov     esi, [esp+18h+arg_0]
0x6DED48: push    esi
0x6DED49: call    sub_75E480
0x6DED4E: cmp     dword ptr [esi+0D8h], 0A010068h
0x6DED58: jnb     short loc_6DEDA5
0x6DED5A: mov     ecx, esi
0x6DED5C: call    sub_7124A0
0x6DED61: push    20h ; ' '; Size
0x6DED63: mov     esi, eax
0x6DED65: call    FormHeapAlloc
0x6DED6A: add     esp, 4
0x6DED6D: mov     [esp+18h+arg_0], eax
0x6DED71: test    eax, eax
0x6DED73: mov     [esp+18h+var_4], 0
0x6DED7B: jz      short loc_6DED87
0x6DED7D: push    esi
0x6DED7E: mov     ecx, eax
0x6DED80: call    sub_6DA160
0x6DED85: jmp     short loc_6DED89
0x6DED87: xor     eax, eax
0x6DED89: lea     esi, [edi+3Ch]
0x6DED8C: push    eax; a2
0x6DED8D: mov     ecx, esi; this
0x6DED8F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6DED97: call    NiSmartPointer_Set??
0x6DED9C: mov     ecx, [esi]
0x6DED9E: mov     eax, [ecx]
0x6DEDA0: mov     edx, [eax+7Ch]
0x6DEDA3: call    edx
0x6DEDA5: mov     ecx, [esp+18h+var_C]
0x6DEDA9: mov     large fs:0, ecx
0x6DEDB0: pop     ecx
0x6DEDB1: pop     edi
0x6DEDB2: pop     esi
0x6DEDB3: add     esp, 0Ch
0x6DEDB6: retn    4
