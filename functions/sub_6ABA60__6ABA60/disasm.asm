0x6ABA60: cmp     byte ptr ds:0B16178h, 0
0x6ABA67: jz      short loc_6ABAB3
0x6ABA69: movzx   eax, word ptr [esp+arg_4]
0x6ABA6E: cmp     ax, 2710h
0x6ABA72: push    esi
0x6ABA73: mov     esi, 2710h
0x6ABA78: ja      short loc_6ABA7D
0x6ABA7A: movzx   esi, ax
0x6ABA7D: mov     edx, [esp+4+arg_0]
0x6ABA81: mov     ecx, [ecx+300h]
0x6ABA87: lea     eax, [esp+4+arg_4]
0x6ABA8B: push    eax
0x6ABA8C: push    edx
0x6ABA8D: mov     [esp+0Ch+arg_4], 0
0x6ABA95: call    NiTMap_GetAt
0x6ABA9A: mov     ecx, [esp+4+arg_4]
0x6ABA9E: test    ecx, ecx
0x6ABAA0: jz      short loc_6ABAB2
0x6ABAA2: fld     dword ptr [ecx+3Ch]
0x6ABAA5: push    ecx
0x6ABAA6: fstp    [esp+8+var_8]; float
0x6ABAA9: mov     [ecx+44h], si
0x6ABAAD: call    sub_6B6F20
0x6ABAB2: pop     esi
0x6ABAB3: xor     eax, eax
0x6ABAB5: retn    8
