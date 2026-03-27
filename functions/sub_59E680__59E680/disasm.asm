0x59E680: push    ebp
0x59E681: mov     ebp, esp
0x59E683: and     esp, 0FFFFFFF8h
0x59E686: push    0FFFFFFFFh
0x59E688: push    offset SEH_59E680
0x59E68D: mov     eax, large fs:0
0x59E693: push    eax
0x59E694: sub     esp, 24h
0x59E697: push    ebx; a3
0x59E698: push    ebp; a3
0x59E699: push    esi; a3
0x59E69A: push    edi; a3
0x59E69B: mov     eax, ds:0B30AACh
0x59E6A0: xor     eax, esp
0x59E6A2: push    eax; a3
0x59E6A3: lea     eax, [esp+44h+var_C]
0x59E6A7: mov     large fs:0, eax
0x59E6AD: mov     edi, ecx
0x59E6AF: call    sub_6B8660
0x59E6B4: mov     ebp, eax
0x59E6B6: mov     eax, [edi+28h]
0x59E6B9: mov     eax, [eax+34h]
0x59E6BC: xor     ebx, ebx
0x59E6BE: cmp     eax, ebx
0x59E6C0: mov     [esp+44h+var_28], eax; a3
0x59E6C4: jz      short loc_59E6EA
0x59E6C6: lea     ecx, [esp+44h+var_28]
0x59E6CA: push    ecx
0x59E6CB: mov     ecx, [edi+28h]
0x59E6CE: add     ecx, 30h ; '0'
0x59E6D1: call    sub_7AA860
0x59E6D6: cmp     eax, ebx
0x59E6D8: jz      short loc_59E6E4
0x59E6DA: mov     edx, [eax]
0x59E6DC: mov     ecx, eax
0x59E6DE: mov     eax, [edx]
0x59E6E0: push    1
0x59E6E2: call    eax
0x59E6E4: cmp     [esp+44h+var_28], ebx
0x59E6E8: jnz     short loc_59E6C6
0x59E6EA: push    1
0x59E6EC: mov     ecx, ebp
0x59E6EE: mov     [esp+48h+a3], ebx; a3
0x59E6F2: call    sub_6B85C0
0x59E6F7: cmp     al, bl
0x59E6F9: mov     ecx, [edi+44h]; this
0x59E6FC: mov     byte ptr [esp+44h+var_30+3], al
0x59E700: push    ecx
0x59E701: jnz     short loc_59E707
0x59E703: fld1
0x59E705: jmp     short loc_59E70D
0x59E707: fld     dword ptr ds:0A379B4h
0x59E70D: fstp    [esp+48h+a2]; a3
0x59E710: push    0FA1h; a2
0x59E715: call    Tile_SetFloat
0x59E71A: cmp     [edi+88h], bl
0x59E720: jz      short loc_59E740
0x59E722: mov     [edi+64h], bl
0x59E725: call    sub_59DD40
0x59E72A: mov     al, 1
0x59E72C: mov     ecx, dword ptr [esp+44h+var_C]
0x59E730: mov     large fs:0, ecx
0x59E737: pop     ecx
0x59E738: pop     edi
0x59E739: pop     esi
0x59E73A: pop     ebp
0x59E73B: pop     ebx
0x59E73C: mov     esp, ebp
0x59E73E: pop     ebp
0x59E73F: retn
0x59E740: cmp     byte ptr [esp+44h+var_30+3], bl
0x59E744: mov     esi, [edi+28h]
0x59E747: mov     [esp+44h+var_28], ebx; a3
0x59E74B: jz      loc_59E9A4
0x59E751: mov     [esp+44h+var_20.m_data], ebx
0x59E755: mov     [esp+44h+var_20.m_dataLen], bx
0x59E75A: mov     [esp+44h+var_20.m_bufLen], bx
0x59E75F: nop
0x59E760: push    ebx; a3
0x59E761: push    offset aTopic_template; "topic_template"
0x59E766: lea     ecx, [esp+4Ch+var_18]; this
0x59E76A: mov     [esp+4Ch+var_18.m_data], ebx
0x59E76E: mov     [esp+4Ch+var_18.m_dataLen], bx
0x59E773: mov     [esp+4Ch+var_18.m_bufLen], bx
0x59E778: call    BSStringT_Set
0x59E77D: mov     ecx, [esp+44h+var_18.m_data]
0x59E781: mov     edx, [edi+28h]
0x59E784: push    esi
0x59E785: push    ecx
0x59E786: push    edx
0x59E787: mov     ecx, edi
0x59E789: mov     [esp+50h+var_4], ebx
0x59E78D: call    Menu_CreateTileFromTemplate
0x59E792: mov     ecx, ebp
0x59E794: mov     esi, eax
0x59E796: call    sub_6B8650
0x59E79B: mov     eax, [eax]
0x59E79D: push    ebx; a3
0x59E79E: push    eax; a2
0x59E79F: lea     ecx, [esp+4Ch+var_20]; this
0x59E7A3: call    BSStringT_Set
0x59E7A8: mov     eax, [esp+44h+var_20.m_data]
0x59E7AC: push    ebx; a3
0x59E7AD: lea     ecx, [esi+8]; this
0x59E7B0: push    eax; a2
0x59E7B1: mov     byte ptr [esp+4Ch+var_4], 1
0x59E7B6: call    BSStringT_Set
0x59E7BB: mov     ecx, [esp+44h+var_20.m_data]
0x59E7BF: push    ecx
0x59E7C0: mov     byte ptr [esp+48h+var_4], bl
0x59E7C4: call    FormHeapFree
0x59E7C9: add     esp, 4
0x59E7CC: mov     ecx, ebp
0x59E7CE: mov     [esp+44h+var_20.m_data], ebx
0x59E7D2: mov     [esp+44h+var_20.m_bufLen], bx
0x59E7D7: mov     [esp+44h+var_20.m_dataLen], bx
0x59E7DC: call    sub_6B8650
0x59E7E1: mov     eax, [eax]
0x59E7E3: push    eax
0x59E7E4: push    0FDEh
0x59E7E9: mov     ecx, esi
0x59E7EB: call    Tile_SetString
0x59E7F0: mov     edx, [esp+44h+a3]
0x59E7F4: add     edx, 65h ; 'e'
0x59E7F7: mov     [esp+44h+var_24], edx; a3
0x59E7FB: fild    [esp+44h+var_24]
0x59E7FF: push    ecx
0x59E800: mov     ecx, esi; this
0x59E802: fstp    [esp+48h+a2]; a3
0x59E805: push    0FA8h; a2
0x59E80A: call    Tile_SetFloat
0x59E80F: fild    [esp+44h+a3]
0x59E813: push    ecx
0x59E814: mov     ecx, esi; this
0x59E816: fstp    [esp+48h+a2]; a3
0x59E819: push    0FAAh; a2
0x59E81E: call    Tile_SetFloat
0x59E823: add     [esp+44h+a3], 1
0x59E828: cmp     [esp+44h+var_28], ebx
0x59E82C: jnz     short loc_59E870
0x59E82E: push    1; arg1
0x59E830: push    ebx; canCreate
0x59E831: call    InterfaceManager_GetSingleton
0x59E836: push    1; arg1
0x59E838: push    ebx; canCreate
0x59E839: call    InterfaceManager_GetSingleton
0x59E83E: add     dword ptr [eax+8Ch], 1
0x59E845: add     eax, 8Ch ; 'Œ'
0x59E84A: mov     eax, [eax]
0x59E84C: test    eax, eax
0x59E84E: mov     [esp+54h+var_24], eax
0x59E852: fild    [esp+54h+var_24]
0x59E856: jge     short loc_59E85E
0x59E858: fadd    dword ptr ds:0A2FC78h
0x59E85E: add     esp, 0Ch
0x59E861: fstp    [esp+48h+a2]; a3
0x59E864: push    0FF0h; a2
0x59E869: mov     ecx, esi; this
0x59E86B: call    Tile_SetFloat
0x59E870: mov     ecx, ebp
0x59E872: call    sub_6B8650
0x59E877: cmp     [eax+21h], bl
0x59E87A: jnz     loc_59E961
0x59E880: fldz
0x59E882: push    ecx
0x59E883: fstp    [esp+48h+a2]; a3
0x59E886: mov     ecx, esi; this
0x59E888: push    0FB0h; a2
0x59E88D: call    Tile_SetFloat
0x59E892: mov     ecx, [edi+28h]
0x59E895: push    0FB5h
0x59E89A: call    Tile_GetFloat
0x59E89F: push    ecx
0x59E8A0: fstp    [esp+48h+a2]; a3
0x59E8A3: push    0FCCh; a2
0x59E8A8: mov     ecx, esi; this
0x59E8AA: call    Tile_SetFloat
0x59E8AF: mov     ecx, [edi+28h]
0x59E8B2: push    0FB6h
0x59E8B7: call    Tile_GetFloat
0x59E8BC: push    ecx
0x59E8BD: fstp    [esp+48h+a2]; a3
0x59E8C0: push    0FCDh; a2
0x59E8C5: mov     ecx, esi; this
0x59E8C7: call    Tile_SetFloat
0x59E8CC: mov     ecx, [edi+28h]
0x59E8CF: push    0FB7h
0x59E8D4: call    Tile_GetFloat
0x59E8D9: push    ecx
0x59E8DA: fstp    [esp+48h+a2]; a3
0x59E8DD: push    0FCEh; a2
0x59E8E2: mov     ecx, esi; this
0x59E8E4: call    Tile_SetFloat
0x59E8E9: mov     ecx, ebp
0x59E8EB: call    sub_6B8650
0x59E8F0: mov     eax, [eax]
0x59E8F2: cmp     eax, ebx
0x59E8F4: jz      short loc_59E90C
0x59E8F6: mov     ecx, [edi+8Ch]
0x59E8FC: cmp     ecx, ebx
0x59E8FE: jz      short loc_59E90C
0x59E900: push    eax; Str2
0x59E901: push    ecx; Str1
0x59E902: call    __strcmp
0x59E907: add     esp, 8
0x59E90A: jmp     short loc_59E919
0x59E90C: xor     ecx, ecx
0x59E90E: cmp     eax, ebx
0x59E910: setz    cl
0x59E913: lea     ecx, [ecx+ecx-1]
0x59E917: mov     eax, ecx
0x59E919: cmp     eax, ebx
0x59E91B: jnz     short loc_59E961
0x59E91D: push    1; arg1
0x59E91F: push    ebx; canCreate
0x59E920: call    InterfaceManager_GetSingleton
0x59E925: push    1; arg1
0x59E927: push    ebx; canCreate
0x59E928: call    InterfaceManager_GetSingleton
0x59E92D: add     dword ptr [eax+8Ch], 1
0x59E934: fild    dword ptr [eax+8Ch]
0x59E93A: mov     edx, [eax+8Ch]
0x59E940: add     eax, 8Ch ; 'Œ'
0x59E945: test    edx, edx
0x59E947: jge     short loc_59E94F
0x59E949: fadd    dword ptr ds:0A2FC78h
0x59E94F: add     esp, 0Ch
0x59E952: fstp    [esp+48h+a2]; a3
0x59E955: push    0FF0h; a2
0x59E95A: mov     ecx, esi; this
0x59E95C: call    Tile_SetFloat
0x59E961: mov     ecx, ebp
0x59E963: call    sub_6B85F0
0x59E968: add     [esp+44h+var_28], 1
0x59E96D: mov     byte ptr [esp+44h+var_30+3], al
0x59E971: mov     eax, [esp+44h+var_18.m_data]
0x59E975: push    eax
0x59E976: mov     [esp+48h+var_4], 0FFFFFFFFh
0x59E97E: call    FormHeapFree
0x59E983: add     esp, 4
0x59E986: cmp     byte ptr [esp+44h+var_30+3], bl
0x59E98A: mov     [esp+44h+var_18.m_data], ebx
0x59E98E: mov     [esp+44h+var_18.m_bufLen], bx
0x59E993: mov     [esp+44h+var_18.m_dataLen], bx
0x59E998: jnz     loc_59E760
0x59E99E: cmp     [esp+44h+var_28], ebx
0x59E9A2: jnz     short loc_59E9BB
0x59E9A4: fld     dword ptr ds:0A379B4h
0x59E9AA: push    ecx
0x59E9AB: mov     ecx, [edi+30h]; this
0x59E9AE: fstp    [esp+48h+a2]; a3
0x59E9B1: push    0FA1h; a2
0x59E9B6: call    Tile_SetFloat
0x59E9BB: push    ebx
0x59E9BC: mov     ecx, ebp
0x59E9BE: call    sub_6B85C0
0x59E9C3: mov     ecx, [edi+28h]
0x59E9C6: push    ebx; float
0x59E9C7: call    sub_58FBA0
0x59E9CC: push    1; arg1
0x59E9CE: push    ebx; canCreate
0x59E9CF: call    InterfaceManager_GetSingleton
0x59E9D4: add     esp, 8
0x59E9D7: cmp     [eax+0B9h], bl
0x59E9DD: jnz     short loc_59E9F1
0x59E9DF: push    1; arg1
0x59E9E1: push    ebx; canCreate
0x59E9E2: call    InterfaceManager_GetSingleton
0x59E9E7: add     esp, 8
0x59E9EA: mov     ecx, eax
0x59E9EC: call    sub_57FD60
0x59E9F1: xor     al, al
0x59E9F3: mov     ecx, dword ptr [esp+44h+var_C]
0x59E9F7: mov     large fs:0, ecx
0x59E9FE: pop     ecx
0x59E9FF: pop     edi
0x59EA00: pop     esi
0x59EA01: pop     ebp
0x59EA02: pop     ebx
0x59EA03: mov     esp, ebp
0x59EA05: pop     ebp
0x59EA06: retn
