0x4A1650: push    0FFFFFFFFh
0x4A1652: push    offset SEH_8C8970
0x4A1657: mov     eax, large fs:0
0x4A165D: push    eax
0x4A165E: push    ecx
0x4A165F: push    esi
0x4A1660: push    edi
0x4A1661: mov     eax, ds:0B30AACh
0x4A1666: xor     eax, esp
0x4A1668: push    eax
0x4A1669: lea     eax, [esp+1Ch+var_C]
0x4A166D: mov     large fs:0, eax
0x4A1673: mov     edi, ecx
0x4A1675: push    0ECh ; 'ì'; Size
0x4A167A: call    FormHeapAlloc
0x4A167F: mov     esi, eax
0x4A1681: add     esp, 4
0x4A1684: mov     [esp+1Ch+var_10], esi
0x4A1688: test    esi, esi
0x4A168A: mov     [esp+1Ch+var_4], 0
0x4A1692: jz      short loc_4A16A5
0x4A1694: push    0
0x4A1696: mov     ecx, esi; this
0x4A1698: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4A169D: mov     dword ptr [esi], offset ??_7BSScissorNode@@6B@; const BSScissorNode::`vftable'
0x4A16A3: jmp     short loc_4A16A7
0x4A16A5: xor     esi, esi
0x4A16A7: mov     eax, [edi+0DCh]
0x4A16AD: mov     [esi+0DCh], eax
0x4A16B3: mov     ecx, [edi+0E0h]
0x4A16B9: mov     [esi+0E0h], ecx
0x4A16BF: mov     edx, [edi+0E4h]
0x4A16C5: mov     ecx, [esp+1Ch+arg_0]
0x4A16C9: mov     [esi+0E4h], edx
0x4A16CF: mov     eax, [edi+0E8h]
0x4A16D5: push    ecx
0x4A16D6: push    esi
0x4A16D7: mov     ecx, edi
0x4A16D9: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4A16E1: mov     [esi+0E8h], eax
0x4A16E7: call    sub_70AC60
0x4A16EC: mov     eax, esi
0x4A16EE: mov     ecx, [esp+1Ch+var_C]
0x4A16F2: mov     large fs:0, ecx
0x4A16F9: pop     ecx
0x4A16FA: pop     edi
0x4A16FB: pop     esi
0x4A16FC: add     esp, 10h
0x4A16FF: retn    4
