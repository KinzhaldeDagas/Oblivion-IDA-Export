0x4A0090: push    0FFFFFFFFh
0x4A0092: push    offset SEH_8C8970
0x4A0097: mov     eax, large fs:0
0x4A009D: push    eax
0x4A009E: push    ecx
0x4A009F: push    esi
0x4A00A0: push    edi
0x4A00A1: mov     eax, ds:0B30AACh
0x4A00A6: xor     eax, esp
0x4A00A8: push    eax
0x4A00A9: lea     eax, [esp+1Ch+var_C]
0x4A00AD: mov     large fs:0, eax
0x4A00B3: mov     edi, ecx
0x4A00B5: push    0E8h ; 'è'; Size
0x4A00BA: call    FormHeapAlloc
0x4A00BF: mov     esi, eax
0x4A00C1: add     esp, 4
0x4A00C4: mov     [esp+1Ch+var_10], esi
0x4A00C8: test    esi, esi
0x4A00CA: mov     [esp+1Ch+var_4], 0
0x4A00D2: jz      short loc_4A010B
0x4A00D4: push    0
0x4A00D6: mov     ecx, esi; this
0x4A00D8: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4A00DD: fld     dword ptr ds:0A2FE7Ch
0x4A00E3: fstp    dword ptr [esi+0E4h]
0x4A00E9: mov     dword ptr [esi], offset ??_7BSClearZNode@@6B@; const BSClearZNode::`vftable'
0x4A00EF: fld     dword ptr ds:0A3F888h
0x4A00F5: mov     byte ptr [esi+0DDh], 0
0x4A00FC: fstp    dword ptr [esi+0E0h]
0x4A0102: mov     byte ptr [esi+0DCh], 0
0x4A0109: jmp     short loc_4A010D
0x4A010B: xor     esi, esi
0x4A010D: mov     eax, [esp+1Ch+arg_0]
0x4A0111: push    eax
0x4A0112: push    esi
0x4A0113: mov     ecx, edi
0x4A0115: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4A011D: call    sub_70AC60
0x4A0122: mov     eax, esi
0x4A0124: mov     ecx, [esp+1Ch+var_C]
0x4A0128: mov     large fs:0, ecx
0x4A012F: pop     ecx
0x4A0130: pop     edi
0x4A0131: pop     esi
0x4A0132: add     esp, 10h
0x4A0135: retn    4
