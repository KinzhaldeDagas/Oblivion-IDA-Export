0x8BE060: push    ebp
0x8BE061: mov     ebp, esp
0x8BE063: and     esp, 0FFFFFFF0h
0x8BE066: sub     esp, 34h
0x8BE069: push    ebx
0x8BE06A: push    esi
0x8BE06B: mov     esi, [ebp+arg_0]
0x8BE06E: push    edi
0x8BE06F: push    esi
0x8BE070: mov     ebx, ecx
0x8BE072: call    sub_8A0180
0x8BE077: mov     eax, ds:0BA8068h
0x8BE07C: push    eax; ArgList
0x8BE07D: call    TESOutput_PrintString
0x8BE082: movzx   edi, word ptr [esi+0Ah]
0x8BE086: movzx   ecx, word ptr [esi+8]
0x8BE08A: add     esp, 4
0x8BE08D: cmp     edi, ecx
0x8BE08F: mov     [esp+40h+var_34], eax
0x8BE093: jb      short loc_8BE0A3
0x8BE095: movzx   edx, word ptr [esi+0Eh]
0x8BE099: add     edx, edi
0x8BE09B: push    edx
0x8BE09C: mov     ecx, esi
0x8BE09E: call    NiTArray_SetSize
0x8BE0A3: lea     eax, [esp+40h+var_34]
0x8BE0A7: push    eax
0x8BE0A8: push    edi
0x8BE0A9: mov     ecx, esi
0x8BE0AB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8BE0B0: fld     dword ptr ds:0B2F080h
0x8BE0B6: fstp    [esp+40h+var_20]
0x8BE0BA: xor     eax, eax
0x8BE0BC: fld     dword ptr ds:0B2F084h
0x8BE0C2: lea     ecx, [esp+40h+var_30]
0x8BE0C6: fstp    [esp+40h+var_1C]
0x8BE0CA: push    ecx
0x8BE0CB: fld     dword ptr ds:0B2F088h
0x8BE0D1: mov     ecx, ebx
0x8BE0D3: fstp    [esp+44h+var_18]
0x8BE0D7: mov     [esp+44h+var_30], eax
0x8BE0DB: fld     dword ptr ds:0B2F08Ch
0x8BE0E1: mov     [esp+44h+var_2C], eax
0x8BE0E5: fstp    [esp+44h+var_14]
0x8BE0E9: mov     [esp+44h+var_28], eax
0x8BE0ED: fld     dword ptr ds:0A2FAACh
0x8BE0F3: fstp    [esp+44h+var_10]
0x8BE0F7: fld     dword ptr ds:0A34BA0h
0x8BE0FD: fstp    [esp+44h+var_C]
0x8BE101: call    sub_8BDC60
0x8BE106: pop     edi
0x8BE107: pop     esi
0x8BE108: pop     ebx
0x8BE109: mov     esp, ebp
0x8BE10B: pop     ebp
0x8BE10C: retn    4
