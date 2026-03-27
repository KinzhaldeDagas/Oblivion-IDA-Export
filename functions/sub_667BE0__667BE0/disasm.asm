0x667BE0: push    0FFFFFFFFh
0x667BE2: push    offset SEH_667BE0
0x667BE7: mov     eax, large fs:0
0x667BED: push    eax
0x667BEE: sub     esp, 64h
0x667BF1: push    ebx
0x667BF2: push    ebp
0x667BF3: push    esi
0x667BF4: push    edi
0x667BF5: mov     eax, ds:0B30AACh
0x667BFA: xor     eax, esp
0x667BFC: push    eax
0x667BFD: lea     eax, [esp+84h+var_C]
0x667C01: mov     large fs:0, eax
0x667C07: mov     ebp, ecx
0x667C09: mov     eax, [ebp+0]
0x667C0C: mov     edx, [eax+170h]
0x667C12: call    edx
0x667C14: mov     ecx, ds:0B33B00h
0x667C1A: mov     edx, [ecx+18h]
0x667C1D: shr     edx, 1
0x667C1F: test    dl, 1
0x667C22: jnz     short loc_667C3B
0x667C24: push    0; char
0x667C26: push    0; int
0x667C28: push    1; int
0x667C2A: push    1; int
0x667C2C: push    ebp; int
0x667C2D: mov     ecx, eax; int
0x667C2F: call    sub_5227A0
0x667C34: mov     ecx, ebp
0x667C36: call    sub_6670C0
0x667C3B: mov     eax, ds:0B36BB8h
0x667C40: mov     ecx, ds:0B33A1Ch
0x667C46: push    1
0x667C48: push    3
0x667C4A: push    1
0x667C4C: push    eax
0x667C4D: call    sub_439EB0
0x667C52: mov     esi, eax
0x667C54: push    0DCh ; 'Ü'; Size
0x667C59: mov     [esp+88h+var_6C], esi
0x667C5D: call    FormHeapAlloc
0x667C62: add     esp, 4
0x667C65: mov     [esp+84h+var_68], eax
0x667C69: xor     ebx, ebx
0x667C6B: cmp     eax, ebx
0x667C6D: mov     [esp+84h+var_4], ebx
0x667C74: jz      short loc_667C80
0x667C76: push    ebx
0x667C77: mov     ecx, eax; this
0x667C79: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x667C7E: mov     ebx, eax
0x667C80: or      word ptr [ebx+18h], 40h
0x667C85: mov     edi, [ebp+5D0h]
0x667C8B: cmp     edi, ebx
0x667C8D: mov     [esp+84h+var_4], 0FFFFFFFFh
0x667C98: jz      short loc_667CCA
0x667C9A: test    edi, edi
0x667C9C: jz      short loc_667CBA
0x667C9E: lea     ecx, [edi+4]
0x667CA1: push    ecx; lpAddend
0x667CA2: call    dword ptr ds:0A2807Ch
0x667CA8: test    eax, eax
0x667CAA: jnz     short loc_667CBA
0x667CAC: test    edi, edi
0x667CAE: jz      short loc_667CBA
0x667CB0: mov     edx, [edi]
0x667CB2: mov     eax, [edx]
0x667CB4: push    1
0x667CB6: mov     ecx, edi
0x667CB8: call    eax
0x667CBA: lea     ecx, [ebx+4]
0x667CBD: push    ecx; lpAddend
0x667CBE: mov     [ebp+5D0h], ebx
0x667CC4: call    dword ptr ds:0A28078h
0x667CCA: mov     ecx, [ebp+5D0h]
0x667CD0: push    offset aPlayer1stperso; "Player1stPerson"
0x667CD5: call    NiObjectNET_SetName
0x667CDA: mov     edx, [ebx]
0x667CDC: mov     eax, [edx+84h]
0x667CE2: push    1
0x667CE4: push    esi
0x667CE5: mov     ecx, ebx
0x667CE7: call    eax
0x667CE9: mov     ecx, [ebp+5D0h]
0x667CEF: mov     edx, [ecx]
0x667CF1: mov     eax, [edx+58h]
0x667CF4: push    offset aCamera01; "Camera01"
0x667CF9: call    eax
0x667CFB: mov     ds:0B3BB0Ch, eax
0x667D00: mov     ecx, [ebp+5D0h]
0x667D06: mov     edx, [ecx]
0x667D08: mov     eax, [edx+58h]
0x667D0B: push    offset off_A738A4
0x667D10: call    eax
0x667D12: cmp     dword ptr ds:0B3BB0Ch, 0
0x667D19: mov     ds:0B3BB14h, eax
0x667D1E: jnz     short loc_667D34
0x667D20: mov     ecx, ds:0B36BB8h
0x667D26: push    ecx; ArgList
0x667D27: push    offset aMissingCamera0; "Missing 'Camera01' on '%s'."
0x667D2C: call    sub_404EC0
0x667D31: add     esp, 8
0x667D34: cmp     dword ptr ds:0B3BB14h, 0
0x667D3B: jnz     short loc_667D51
0x667D3D: mov     edx, ds:0B36BB8h
0x667D43: push    edx; ArgList
0x667D44: push    offset aMissingBipOnS_; "Missing 'Bip' on '%s'."
0x667D49: call    sub_404EC0
0x667D4E: add     esp, 8
0x667D51: fldz
0x667D53: push    1; a3
0x667D55: push    ecx
0x667D56: fstp    [esp+8Ch+a2]; a2
0x667D59: mov     ecx, ebx; this
0x667D5B: call    NiAVObject_UpdateNiAVObject
0x667D60: mov     eax, ds:0B3BB0Ch
0x667D65: fld     dword ptr [eax+90h]
0x667D6B: lea     edi, [esp+84h+var_54]
0x667D6F: fstp    [esp+84h+var_68]
0x667D73: push    0
0x667D75: fld     [esp+88h+var_68]
0x667D79: fst     dword ptr [ebp+5D4h]
0x667D7F: fchs
0x667D81: fstp    [esp+88h+var_68]
0x667D85: fldz
0x667D87: fst     [esp+88h+var_60]
0x667D8B: mov     ecx, [esp+88h+var_60]
0x667D8F: fstp    [esp+88h+var_5C]
0x667D93: fld     [esp+88h+var_68]
0x667D97: mov     edx, [esp+88h+var_5C]
0x667D9B: mov     [esi+54h], ecx
0x667D9E: fstp    [esp+88h+var_58]
0x667DA2: mov     eax, [esp+88h+var_58]
0x667DA6: mov     [esi+58h], edx
0x667DA9: mov     [esi+5Ch], eax
0x667DAC: mov     ecx, 9
0x667DB1: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x667DB6: rep movsd
0x667DB8: lea     ecx, [esp+88h+var_54]
0x667DBC: push    ecx
0x667DBD: lea     edx, [esp+8Ch+var_30]
0x667DC1: push    edx
0x667DC2: mov     ecx, ebp
0x667DC4: call    sub_4D7C50
0x667DC9: mov     edi, [esp+84h+var_6C]
0x667DCD: mov     esi, eax
0x667DCF: add     edi, 30h ; '0'
0x667DD2: mov     ecx, 9
0x667DD7: rep movsd
0x667DD9: mov     ecx, ds:0B06568h
0x667DDF: mov     eax, [ebx]
0x667DE1: mov     edx, [eax+58h]
0x667DE4: push    ecx
0x667DE5: mov     ecx, ebx
0x667DE7: call    edx
0x667DE9: test    eax, eax
0x667DEB: jz      short loc_667DF2
0x667DED: or      word ptr [eax+18h], 1
0x667DF2: push    154h; Size
0x667DF7: call    FormHeapAlloc
0x667DFC: add     esp, 4
0x667DFF: mov     [esp+84h+var_68], eax
0x667E03: test    eax, eax
0x667E05: mov     [esp+84h+var_4], 1
0x667E10: jz      short loc_667E1D
0x667E12: push    ebx
0x667E13: push    ebp
0x667E14: mov     ecx, eax
0x667E16: call    sub_478730
0x667E1B: jmp     short loc_667E1F
0x667E1D: xor     eax, eax
0x667E1F: or      esi, 0FFFFFFFFh
0x667E22: push    0DCh ; 'Ü'; Size
0x667E27: mov     [esp+88h+var_4], esi
0x667E2E: mov     [ebp+5C8h], eax
0x667E34: call    FormHeapAlloc
0x667E39: add     esp, 4
0x667E3C: mov     [esp+84h+var_68], eax
0x667E40: test    eax, eax
0x667E42: mov     [esp+84h+var_4], 2
0x667E4D: jz      short loc_667E58
0x667E4F: mov     ecx, eax
0x667E51: call    NewActorAnimData
0x667E56: jmp     short loc_667E5A
0x667E58: xor     eax, eax
0x667E5A: mov     [ebp+5CCh], eax
0x667E60: mov     al, [ebp+588h]
0x667E66: mov     ecx, ebp
0x667E68: mov     [esp+84h+var_4], esi
0x667E6F: mov     byte ptr [esp+84h+var_70+3], al
0x667E73: mov     byte ptr [ebp+588h], 1
0x667E7A: call    MobileObject_GenerateNiNode
0x667E7F: mov     cl, byte ptr [esp+84h+var_70+3]
0x667E83: mov     [ebp+588h], cl
0x667E89: mov     edx, ds:0B36BB8h
0x667E8F: mov     ecx, ds:0B33A1Ch
0x667E95: push    0; int
0x667E97: push    edx; char *
0x667E98: mov     esi, eax
0x667E9A: call    sub_435830
0x667E9F: mov     ecx, [ebp+5CCh]; this
0x667EA5: push    ebp; int
0x667EA6: push    ebx; int
0x667EA7: push    eax; int
0x667EA8: call    Menu_PickIdles??
0x667EAD: mov     ebx, [ebp+58h]
0x667EB0: mov     edi, [ebx]
0x667EB2: mov     eax, [edi+0ECh]
0x667EB8: push    0
0x667EBA: push    1
0x667EBC: mov     ecx, ebx
0x667EBE: call    eax
0x667EC0: mov     edx, [edi+104h]
0x667EC6: push    eax
0x667EC7: mov     ecx, ebx
0x667EC9: call    edx
0x667ECB: mov     edi, [ebp+58h]
0x667ECE: mov     ecx, ebp
0x667ED0: call    TESObjectREFR_GetAnimData
0x667ED5: mov     edx, [edi]
0x667ED7: push    eax
0x667ED8: mov     eax, [edx+114h]
0x667EDE: mov     ecx, edi
0x667EE0: call    eax
0x667EE2: mov     ecx, [ebp+58h]
0x667EE5: mov     edx, [ecx]
0x667EE7: mov     eax, [ebp+5CCh]
0x667EED: mov     edx, [edx+114h]
0x667EF3: push    eax
0x667EF4: call    edx
0x667EF6: push    offset aPlayer; "Player"
0x667EFB: mov     ecx, esi
0x667EFD: call    NiObjectNET_SetName
0x667F02: mov     eax, [esi]
0x667F04: mov     edx, [eax+58h]
0x667F07: or      word ptr [esi+18h], 1
0x667F0C: push    offset aCamera01; "Camera01"
0x667F11: mov     ecx, esi
0x667F13: call    edx
0x667F15: test    eax, eax
0x667F17: mov     ds:0B3BB10h, eax
0x667F1C: jnz     short loc_667F3F
0x667F1E: mov     eax, [ebp+0]
0x667F21: mov     edx, [eax+170h]
0x667F27: mov     ecx, ebp
0x667F29: call    edx
0x667F2B: push    eax
0x667F2C: call    GetFormModelPAth
0x667F31: push    eax; ArgList
0x667F32: push    offset aMissingCamera0; "Missing 'Camera01' on '%s'."
0x667F37: call    sub_404EC0
0x667F3C: add     esp, 0Ch
0x667F3F: push    1
0x667F41: call    sub_578CF0
0x667F46: add     esp, 4
0x667F49: mov     ecx, ebp
0x667F4B: call    sub_5E4DD0
0x667F50: mov     eax, [ebp+0]
0x667F53: mov     edx, [eax+284h]
0x667F59: push    45h ; 'E'
0x667F5B: mov     ecx, ebp
0x667F5D: call    edx
0x667F5F: test    eax, eax
0x667F61: jz      short loc_667F98
0x667F63: mov     ecx, [ebp+58h]
0x667F66: mov     eax, [ecx]
0x667F68: mov     edx, [eax+31Ch]
0x667F6E: push    1
0x667F70: call    edx
0x667F72: mov     ecx, [ebp+58h]
0x667F75: mov     eax, [ecx]
0x667F77: mov     edx, [eax+5Ch]
0x667F7A: call    edx
0x667F7C: mov     byte ptr ds:0B33D80h, 1
0x667F83: mov     ecx, [ebp+58h]
0x667F86: mov     eax, [ecx]
0x667F88: mov     edx, [eax+318h]
0x667F8E: push    ebp
0x667F8F: call    edx
0x667F91: mov     byte ptr ds:0B33D80h, 0
0x667F98: mov     ecx, [ebp+58h]
0x667F9B: mov     eax, [ecx]
0x667F9D: mov     edx, [eax+31Ch]
0x667FA3: push    0
0x667FA5: call    edx
0x667FA7: mov     eax, [esp+84h+var_6C]
0x667FAB: push    eax
0x667FAC: mov     ecx, ebp
0x667FAE: call    sub_5EA1A0
0x667FB3: mov     edx, [ebp+0]
0x667FB6: mov     eax, [edx+148h]
0x667FBC: mov     ecx, ebp
0x667FBE: call    eax
0x667FC0: mov     ecx, ebp; this
0x667FC2: call    MobileObject_GetCharProxy
0x667FC7: mov     ebx, eax
0x667FC9: test    ebx, ebx
0x667FCB: jz      short loc_668016
0x667FCD: mov     ecx, [ebx+8]
0x667FD0: test    ecx, ecx
0x667FD2: jz      short loc_667FDB
0x667FD4: call    sub_8AC0C0
0x667FD9: jmp     short loc_667FDD
0x667FDB: xor     eax, eax
0x667FDD: mov     eax, [eax+8]
0x667FE0: test    eax, eax
0x667FE2: jz      short loc_667FEC
0x667FE4: mov     edi, [eax+2B0h]
0x667FEA: jmp     short loc_667FEE
0x667FEC: xor     edi, edi
0x667FEE: test    edi, edi
0x667FF0: jz      short loc_668016
0x667FF2: lea     ecx, [esp+84h+var_64]
0x667FF6: push    ecx
0x667FF7: mov     ecx, ebx
0x667FF9: call    sub_57E270
0x667FFE: movzx   eax, word ptr [eax+2]
0x668002: mov     edx, [edi]
0x668004: mov     edx, [edx+90h]
0x66800A: push    0
0x66800C: push    eax
0x66800D: push    0
0x66800F: push    1
0x668011: push    esi
0x668012: mov     ecx, edi
0x668014: call    edx
0x668016: mov     eax, esi
0x668018: mov     ecx, dword ptr [esp+84h+var_C]
0x66801C: mov     large fs:0, ecx
0x668023: pop     ecx
0x668024: pop     edi
0x668025: pop     esi
0x668026: pop     ebp
0x668027: pop     ebx
0x668028: add     esp, 70h
0x66802B: retn
