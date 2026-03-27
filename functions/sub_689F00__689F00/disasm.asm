0x689F00: push    0FFFFFFFFh
0x689F02: push    offset SEH_689F00
0x689F07: mov     eax, large fs:0
0x689F0D: push    eax
0x689F0E: sub     esp, 48h
0x689F11: push    ebx
0x689F12: push    ebp
0x689F13: push    esi
0x689F14: push    edi
0x689F15: mov     eax, ds:0B30AACh
0x689F1A: xor     eax, esp
0x689F1C: push    eax
0x689F1D: lea     eax, [esp+68h+var_C]
0x689F21: mov     large fs:0, eax
0x689F27: mov     edi, [esp+68h+arg_0]
0x689F2B: xor     eax, eax
0x689F2D: test    edi, edi
0x689F2F: jz      loc_68A0F1
0x689F35: cmp     [ecx+8], eax
0x689F38: lea     ebx, [ecx+4]
0x689F3B: jnz     short loc_689F45
0x689F3D: cmp     [ebx], eax
0x689F3F: jz      loc_68A0F1
0x689F45: push    0DCh ; 'Ü'; Size
0x689F4A: call    FormHeapAlloc
0x689F4F: add     esp, 4
0x689F52: mov     [esp+68h+arg_0], eax
0x689F56: test    eax, eax
0x689F58: mov     [esp+68h+var_4], 0
0x689F60: jz      short loc_689F6F
0x689F62: push    0
0x689F64: mov     ecx, eax; this
0x689F66: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x689F6B: mov     esi, eax
0x689F6D: jmp     short loc_689F71
0x689F6F: xor     esi, esi
0x689F71: mov     eax, [edi]
0x689F73: mov     edx, [eax+174h]
0x689F79: mov     ecx, edi
0x689F7B: mov     [esp+68h+var_4], 0FFFFFFFFh
0x689F83: call    edx
0x689F85: fld1
0x689F87: mov     ecx, [eax]
0x689F89: fst     [esp+68h+var_3C]
0x689F8D: fldz
0x689F8F: mov     [esp+68h+var_48], ecx
0x689F93: mov     edx, [eax+4]
0x689F96: fstp    [esp+68h+var_38]
0x689F9A: lea     ecx, [esp+68h+var_3C]
0x689F9E: push    ecx; int
0x689F9F: mov     [esp+6Ch+var_44], edx
0x689FA3: mov     eax, [eax+8]
0x689FA6: fst     [esp+6Ch+var_34]
0x689FAA: fstp    [esp+6Ch+var_30]
0x689FAE: push    ecx
0x689FAF: fld     dword ptr ds:0A468FCh
0x689FB5: mov     [esp+70h+var_40], eax
0x689FB9: fstp    [esp+70h+var_70]; float
0x689FBC: call    sub_47FD30
0x689FC1: mov     edx, [esp+70h+var_48]
0x689FC5: mov     [eax+54h], edx
0x689FC8: mov     ecx, [esp+70h+var_44]
0x689FCC: mov     [eax+58h], ecx
0x689FCF: mov     edx, [esp+70h+var_40]
0x689FD3: add     esp, 8
0x689FD6: mov     [eax+5Ch], edx
0x689FD9: mov     edx, [esi]
0x689FDB: push    1
0x689FDD: push    eax
0x689FDE: mov     eax, [edx+84h]
0x689FE4: mov     ecx, esi
0x689FE6: call    eax
0x689FE8: test    ebx, ebx
0x689FEA: jz      loc_68A0EF
0x689FF0: cmp     dword ptr [ebx+4], 0
0x689FF4: jnz     short loc_689FFF
0x689FF6: cmp     dword ptr [ebx], 0
0x689FF9: jz      loc_68A0EF
0x689FFF: mov     ebp, [ebx]
0x68A001: mov     ecx, ebp
0x68A003: call    sub_68B110
0x68A008: fld1
0x68A00A: mov     ecx, [eax]
0x68A00C: fst     [esp+68h+var_3C]
0x68A010: fldz
0x68A012: mov     [esp+68h+var_54], ecx
0x68A016: mov     edx, [eax+4]
0x68A019: fstp    [esp+68h+var_38]
0x68A01D: lea     ecx, [esp+68h+var_3C]
0x68A021: push    ecx; int
0x68A022: mov     [esp+6Ch+var_50], edx
0x68A026: mov     eax, [eax+8]
0x68A029: fst     [esp+6Ch+var_34]
0x68A02D: fstp    [esp+6Ch+var_30]
0x68A031: push    ecx
0x68A032: fld     dword ptr ds:0A468FCh
0x68A038: mov     [esp+70h+var_4C], eax
0x68A03C: fstp    [esp+70h+var_70]; float
0x68A03F: call    sub_47FD30
0x68A044: mov     edx, [esp+70h+var_54]
0x68A048: fld1
0x68A04A: mov     edi, eax
0x68A04C: fst     [esp+70h+var_2C]
0x68A050: fldz
0x68A052: mov     [edi+54h], edx
0x68A055: mov     eax, [esp+70h+var_50]
0x68A059: fst     [esp+70h+var_28]
0x68A05D: fstp    [esp+70h+var_18]
0x68A061: mov     [edi+58h], eax
0x68A064: mov     ecx, [esp+70h+var_4C]
0x68A068: lea     edx, [esp+70h+var_2C]
0x68A06C: push    edx
0x68A06D: lea     eax, [esp+74h+var_54]
0x68A071: fst     [esp+74h+var_24]
0x68A075: mov     [edi+5Ch], ecx
0x68A078: fst     [esp+74h+var_20]
0x68A07C: push    eax
0x68A07D: fst     [esp+78h+var_1C]
0x68A081: lea     ecx, [esp+78h+var_1C]
0x68A085: fst     [esp+78h+var_14]
0x68A089: push    ecx
0x68A08A: fstp    [esp+7Ch+var_10]
0x68A08E: lea     edx, [esp+7Ch+var_48]
0x68A092: push    edx
0x68A093: call    sub_47F070
0x68A098: add     esp, 18h
0x68A09B: mov     [esp+68h+arg_0], eax
0x68A09F: mov     eax, [esi]
0x68A0A1: mov     edx, [eax+84h]
0x68A0A7: push    1
0x68A0A9: push    edi
0x68A0AA: mov     ecx, esi
0x68A0AC: call    edx
0x68A0AE: mov     ecx, [esp+68h+arg_0]
0x68A0B2: mov     eax, [esi]
0x68A0B4: mov     edx, [eax+84h]
0x68A0BA: push    1
0x68A0BC: push    ecx
0x68A0BD: mov     ecx, esi
0x68A0BF: call    edx
0x68A0C1: mov     ecx, ebp
0x68A0C3: call    ?status@DName@@QBE?AW4DNameStatus@@XZ; DName::status(void)
0x68A0C8: test    eax, eax
0x68A0CA: jz      short loc_68A0EF
0x68A0CC: mov     eax, [esp+68h+var_54]
0x68A0D0: mov     ecx, [esp+68h+var_50]
0x68A0D4: mov     edx, [esp+68h+var_4C]
0x68A0D8: mov     [esp+68h+var_48], eax
0x68A0DC: mov     [esp+68h+var_44], ecx
0x68A0E0: mov     [esp+68h+var_40], edx
0x68A0E4: mov     ebx, [ebx+4]
0x68A0E7: test    ebx, ebx
0x68A0E9: jnz     loc_689FF0
0x68A0EF: mov     eax, esi
0x68A0F1: mov     ecx, [esp+68h+var_C]
0x68A0F5: mov     large fs:0, ecx
0x68A0FC: pop     ecx
0x68A0FD: pop     edi
0x68A0FE: pop     esi
0x68A0FF: pop     ebp
0x68A100: pop     ebx
0x68A101: add     esp, 54h
0x68A104: retn    4
