0x6D8C40: push    0FFFFFFFFh
0x6D8C42: push    offset SEH_7F1810
0x6D8C47: mov     eax, large fs:0
0x6D8C4D: push    eax
0x6D8C4E: push    ecx
0x6D8C4F: push    esi
0x6D8C50: mov     eax, ds:0B30AACh
0x6D8C55: xor     eax, esp
0x6D8C57: push    eax
0x6D8C58: lea     eax, [esp+18h+var_C]
0x6D8C5C: mov     large fs:0, eax
0x6D8C62: mov     esi, ecx
0x6D8C64: mov     [esp+18h+var_10], esi
0x6D8C68: mov     dword ptr [esi], offset ??_7NiRotData@@6B@; const NiRotData::`vftable'
0x6D8C6E: mov     eax, [esi+0Ch]
0x6D8C71: test    eax, eax
0x6D8C73: mov     [esp+18h+var_4], 0
0x6D8C7B: jz      short loc_6D8C8D
0x6D8C7D: mov     ecx, [esi+10h]
0x6D8C80: mov     ecx, ds:0B3D2F8h[ecx*4]
0x6D8C87: push    eax
0x6D8C88: call    ecx ; dword_B3D2F8
0x6D8C8A: add     esp, 4
0x6D8C8D: mov     ecx, esi
0x6D8C8F: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6D8C97: call    NiRefObject_destr
0x6D8C9C: mov     ecx, [esp+18h+var_C]
0x6D8CA0: mov     large fs:0, ecx
0x6D8CA7: pop     ecx
0x6D8CA8: pop     esi
0x6D8CA9: add     esp, 10h
0x6D8CAC: retn
