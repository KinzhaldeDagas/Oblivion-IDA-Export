0x5547F0: push    0FFFFFFFFh
0x5547F2: push    offset SEH_5547F0
0x5547F7: mov     eax, large fs:0
0x5547FD: push    eax
0x5547FE: sub     esp, 60h
0x554801: push    ebx
0x554802: push    ebp
0x554803: push    esi
0x554804: push    edi
0x554805: mov     eax, ds:0B30AACh
0x55480A: xor     eax, esp
0x55480C: push    eax
0x55480D: lea     eax, [esp+80h+var_C]
0x554811: mov     large fs:0, eax
0x554817: xor     ebx, ebx
0x554819: mov     dword ptr [esp+80h+ArgList], ebx
0x55481D: mov     [esp+80h+var_54], bx
0x554822: mov     [esp+80h+var_52], bx
0x554827: mov     [esp+80h+var_4], ebx
0x55482B: mov     [esp+80h+var_48], ebx
0x55482F: mov     [esp+80h+var_44], bx
0x554834: mov     [esp+80h+var_42], bx
0x554839: mov     [esp+80h+var_50], ebx
0x55483D: mov     [esp+80h+var_4C], bx
0x554842: mov     [esp+80h+var_4A], bx
0x554847: mov     [esp+80h+var_40], ebx
0x55484B: mov     [esp+80h+var_3C], bx
0x554850: mov     [esp+80h+var_3A], bx
0x554855: mov     [esp+80h+var_38], ebx
0x554859: mov     word ptr [esp+80h+var_34], bx
0x55485E: mov     word ptr [esp+80h+var_34+2], bx
0x554863: mov     [esp+80h+var_68], ebx
0x554867: mov     [esp+80h+var_6C], ebx
0x55486B: fld     dword ptr ds:0A3721Ch
0x554871: push    ecx
0x554872: lea     ecx, [esp+84h+var_30]
0x554876: fstp    [esp+84h+var_84]; float
0x554879: mov     byte ptr [esp+84h+var_4], 6
0x554881: call    sub_70FD80
0x554886: mov     eax, [esp+80h+arg_8]
0x55488D: cmp     [eax+0B8h], ebx
0x554893: jz      loc_554CD4
0x554899: mov     ecx, [eax+0B8h]
0x55489F: mov     eax, [ecx]
0x5548A1: mov     edx, [eax+14h]
0x5548A4: call    edx
0x5548A6: push    eax; ArgList
0x5548A7: lea     eax, [esp+84h+ArgList]
0x5548AB: push    offset aMeshesS; "Meshes\\%s"
0x5548B0: push    eax; int
0x5548B1: call    BSStringT_Static_Format
0x5548B6: mov     ebp, dword ptr [esp+8Ch+ArgList]
0x5548BA: lea     ecx, [esp+8Ch+var_50]
0x5548BE: push    ebp
0x5548BF: push    ecx
0x5548C0: call    sub_550010
0x5548C5: lea     edx, [esp+94h+var_48]
0x5548C9: push    ebp
0x5548CA: push    edx
0x5548CB: mov     [esp+9Ch+var_60], eax
0x5548CF: call    sub_54FEB0
0x5548D4: add     esp, 1Ch
0x5548D7: mov     edi, eax
0x5548D9: mov     [esp+80h+var_64], ebx
0x5548DD: cmp     edi, ebx
0x5548DF: mov     byte ptr [esp+80h+var_4], 7
0x5548E4: jnz     short loc_5548F0
0x5548E6: mov     byte ptr [esp+80h+var_4], 6
0x5548EB: jmp     loc_554ABC
0x5548F0: cmp     ds:0B39B80h, ebx
0x5548F6: jnz     short loc_5548FD
0x5548F8: call    sub_553550
0x5548FD: mov     eax, ds:0B39B80h
0x554902: cmp     [eax+0DACh], ebx
0x554908: jnz     loc_554992
0x55490E: push    20h ; ' '; Size
0x554910: call    FormHeapAlloc
0x554915: add     esp, 4
0x554918: mov     [esp+80h+var_5C], eax
0x55491C: cmp     eax, ebx
0x55491E: mov     byte ptr [esp+80h+var_4], 8
0x554923: jz      short loc_554930
0x554925: mov     ecx, eax; this
0x554927: call    ??0BSFaceGenModelMap@@QAE@XZ; BSFaceGenModelMap::BSFaceGenModelMap(void)
0x55492C: mov     esi, eax
0x55492E: jmp     short loc_554932
0x554930: xor     esi, esi
0x554932: cmp     ds:0B39B80h, ebx
0x554938: mov     byte ptr [esp+80h+var_4], 7
0x55493D: jnz     short loc_554944
0x55493F: call    sub_553550
0x554944: mov     ecx, ds:0B39B80h
0x55494A: mov     [ecx+0DACh], esi
0x554950: mov     edx, ds:0B39B80h
0x554956: mov     ecx, [edx+0DACh]
0x55495C: mov     eax, ds:0B120ECh
0x554961: push    ebx
0x554962: mov     [ecx+18h], eax
0x554965: call    sub_5506B0
0x55496A: cmp     ds:0B39B80h, ebx
0x554970: mov     esi, ds:0B120F4h
0x554976: jnz     short loc_55497D
0x554978: call    sub_553550
0x55497D: mov     ecx, ds:0B39B80h
0x554983: mov     ecx, [ecx+0DACh]
0x554989: push    ebx
0x55498A: mov     [ecx+1Ch], esi
0x55498D: call    sub_5506B0
0x554992: cmp     ds:0B39B80h, ebx
0x554998: jnz     short loc_55499F
0x55499A: call    sub_553550
0x55499F: mov     eax, ds:0B39B80h
0x5549A4: mov     ecx, [eax+0DACh]
0x5549AA: lea     edx, [esp+80h+var_64]
0x5549AE: push    edx
0x5549AF: push    edi
0x5549B0: call    sub_5515B0
0x5549B5: test    al, al
0x5549B7: jz      short loc_5549FB
0x5549B9: mov     esi, [esp+80h+var_64]
0x5549BD: cmp     [esi+8], ebx
0x5549C0: jnz     short loc_5549D2
0x5549C2: mov     ecx, [esp+80h+var_60]
0x5549C6: push    ebx; char
0x5549C7: push    ebx; int
0x5549C8: push    ecx; int
0x5549C9: push    ebp; ArgList
0x5549CA: push    edi; int
0x5549CB: mov     ecx, esi
0x5549CD: call    sub_559B50
0x5549D2: lea     edx, [esi+4]
0x5549D5: push    edx; lpAddend
0x5549D6: mov     byte ptr [esp+84h+var_4], 6
0x5549DE: call    dword ptr ds:0A2807Ch
0x5549E4: test    eax, eax
0x5549E6: jnz     loc_554AA8
0x5549EC: mov     eax, [esi]
0x5549EE: mov     edx, [eax]
0x5549F0: push    1
0x5549F2: mov     ecx, esi
0x5549F4: call    edx
0x5549F6: jmp     loc_554AA8
0x5549FB: push    1Ch; Size
0x5549FD: call    FormHeapAlloc
0x554A02: add     esp, 4
0x554A05: mov     [esp+80h+var_5C], eax
0x554A09: cmp     eax, ebx
0x554A0B: mov     byte ptr [esp+80h+var_4], 9
0x554A10: jz      short loc_554A1B
0x554A12: mov     ecx, eax; this
0x554A14: call    ??0BSFaceGenModel@@QAE@XZ; BSFaceGenModel::BSFaceGenModel(void)
0x554A19: jmp     short loc_554A1D
0x554A1B: xor     eax, eax
0x554A1D: push    eax; a2
0x554A1E: lea     ecx, [esp+84h+var_64]; this
0x554A22: mov     byte ptr [esp+84h+var_4], 7
0x554A2A: call    NiSmartPointer_Set??
0x554A2F: mov     eax, [esp+80h+var_60]
0x554A33: mov     esi, [esp+80h+var_64]
0x554A37: push    ebx; char
0x554A38: push    ebx; int
0x554A39: push    eax; int
0x554A3A: push    ebp; ArgList
0x554A3B: push    edi; int
0x554A3C: mov     ecx, esi
0x554A3E: call    sub_559B50
0x554A43: test    al, al
0x554A45: jz      short loc_554A69
0x554A47: cmp     ds:0B39B80h, ebx
0x554A4D: jnz     short loc_554A54
0x554A4F: call    sub_553550
0x554A54: mov     ecx, ds:0B39B80h
0x554A5A: mov     ecx, [ecx+0DACh]
0x554A60: push    esi
0x554A61: push    edi
0x554A62: call    sub_551450
0x554A67: jmp     short loc_554A87
0x554A69: cmp     esi, ebx
0x554A6B: jz      short loc_554A87
0x554A6D: lea     edx, [esi+4]
0x554A70: push    edx; lpAddend
0x554A71: call    dword ptr ds:0A2807Ch
0x554A77: test    eax, eax
0x554A79: jnz     short loc_554A85
0x554A7B: mov     eax, [esi]
0x554A7D: mov     edx, [eax]
0x554A7F: push    1
0x554A81: mov     ecx, esi
0x554A83: call    edx
0x554A85: xor     esi, esi
0x554A87: cmp     esi, ebx
0x554A89: mov     byte ptr [esp+80h+var_4], 6
0x554A8E: jz      short loc_554ABC
0x554A90: lea     eax, [esi+4]
0x554A93: push    eax; lpAddend
0x554A94: call    dword ptr ds:0A2807Ch
0x554A9A: test    eax, eax
0x554A9C: jnz     short loc_554AA8
0x554A9E: mov     edx, [esi]
0x554AA0: mov     eax, [edx]
0x554AA2: push    1
0x554AA4: mov     ecx, esi
0x554AA6: call    eax
0x554AA8: mov     edx, [esp+80h+arg_8]
0x554AAF: lea     ecx, [esp+80h+var_6C]
0x554AB3: push    ecx
0x554AB4: push    edx
0x554AB5: mov     ecx, esi
0x554AB7: call    sub_559870
0x554ABC: mov     ecx, [esp+80h+var_6C]
0x554AC0: cmp     ecx, ebx
0x554AC2: jz      loc_554CD8
0x554AC8: push    offset aFacegeneyeleft; "FaceGenEyeLeft"
0x554ACD: call    NiObjectNET_SetName
0x554AD2: mov     eax, [esp+80h+arg_8]
0x554AD9: mov     eax, [eax+6Ch]
0x554ADC: cmp     eax, ebx
0x554ADE: jz      short loc_554B1D
0x554AE0: mov     eax, [eax+28h]
0x554AE3: cmp     eax, ebx
0x554AE5: jnz     short loc_554AEC
0x554AE7: mov     eax, offset EmptyString
0x554AEC: push    eax; ArgList
0x554AED: lea     ecx, [esp+84h+ArgList]
0x554AF1: push    offset aTexturesS; "Textures\\%s"
0x554AF6: push    ecx; int
0x554AF7: call    BSStringT_Static_Format
0x554AFC: mov     edx, dword ptr [esp+8Ch+ArgList]
0x554B00: mov     ecx, ds:0B333A0h
0x554B06: add     esp, 0Ch
0x554B09: push    ebx; char
0x554B0A: push    ebx; char
0x554B0B: push    edx; ArgList
0x554B0C: lea     eax, [esp+8Ch+var_60]
0x554B10: push    eax; int
0x554B11: call    sub_442890
0x554B16: mov     byte ptr [esp+80h+var_4], 0Ah
0x554B1B: jmp     short loc_554B39
0x554B1D: push    ebx; char
0x554B1E: push    ebx; char
0x554B1F: push    offset aTexturesCharac; "Textures\\Characters\\Eyes\\EyeDefault."...
0x554B24: lea     ecx, [esp+8Ch+var_60]
0x554B28: push    ecx; int
0x554B29: mov     ecx, ds:0B333A0h
0x554B2F: call    sub_442890
0x554B34: mov     byte ptr [esp+80h+var_4], 0Bh
0x554B39: push    eax
0x554B3A: lea     ecx, [esp+84h+var_68]
0x554B3E: call    sub_55E2A0
0x554B43: mov     eax, [esp+80h+var_60]
0x554B47: cmp     eax, ebx
0x554B49: mov     byte ptr [esp+80h+var_4], 6
0x554B4E: jz      short loc_554B6E
0x554B50: mov     esi, eax
0x554B52: add     eax, 4
0x554B55: push    eax; lpAddend
0x554B56: call    dword ptr ds:0A2807Ch
0x554B5C: test    eax, eax
0x554B5E: jnz     short loc_554B6E
0x554B60: cmp     esi, ebx
0x554B62: jz      short loc_554B6E
0x554B64: mov     edx, [esi]
0x554B66: mov     eax, [edx]
0x554B68: push    1
0x554B6A: mov     ecx, esi
0x554B6C: call    eax
0x554B6E: mov     ebp, [esp+80h+var_68]
0x554B72: cmp     ebp, ebx
0x554B74: jz      short loc_554BEE
0x554B76: push    30h ; '0'; Size
0x554B78: call    FormHeapAlloc
0x554B7D: add     esp, 4
0x554B80: mov     [esp+80h+var_5C], eax
0x554B84: cmp     eax, ebx
0x554B86: mov     byte ptr [esp+80h+var_4], 0Ch
0x554B8B: jz      short loc_554B98
0x554B8D: mov     ecx, eax
0x554B8F: call    NiTexturingProperty__NiTexturingProperty
0x554B94: mov     esi, eax
0x554B96: jmp     short loc_554B9A
0x554B98: xor     esi, esi
0x554B9A: push    ebp
0x554B9B: mov     ecx, esi
0x554B9D: mov     byte ptr [esp+84h+var_4], 6
0x554BA5: call    NiTexturingProperty__SetUnk08
0x554BAA: push    3
0x554BAC: mov     ecx, esi
0x554BAE: call    sub_405870
0x554BB3: push    2; a2
0x554BB5: mov     ecx, esi; this
0x554BB7: call    sub_405900
0x554BBC: mov     ecx, [esp+80h+var_6C]
0x554BC0: push    6
0x554BC2: call    NiNode_GetNiPropertyByID
0x554BC7: test    eax, eax
0x554BC9: jz      short loc_554BE4
0x554BCB: push    6
0x554BCD: lea     ecx, [esp+84h+var_60]
0x554BD1: push    ecx
0x554BD2: mov     ecx, [esp+88h+var_6C]
0x554BD6: call    sub_708560
0x554BDB: lea     ecx, [esp+80h+var_60]; this
0x554BDF: call    sub_7016A0
0x554BE4: mov     ecx, [esp+80h+var_6C]; this
0x554BE8: push    esi; a2
0x554BE9: call    sub_405680
0x554BEE: mov     eax, [esp+80h+var_6C]
0x554BF2: cmp     [eax+0B8h], ebx
0x554BF8: push    ebx
0x554BF9: jz      short loc_554C61
0x554BFB: cmp     [esp+84h+arg_C], bl
0x554C02: jz      short loc_554C4B
0x554C04: mov     ecx, eax
0x554C06: call    sub_478350
0x554C0B: mov     eax, [esp+80h+var_6C]
0x554C0F: mov     edx, ds:0B3F9A8h
0x554C15: mov     [eax+54h], edx
0x554C18: mov     ecx, ds:0B3F9ACh
0x554C1E: add     eax, 54h ; 'T'
0x554C21: mov     [eax+4], ecx
0x554C24: mov     edx, ds:0B3F9B0h
0x554C2A: mov     [eax+8], edx
0x554C2D: mov     edi, [esp+80h+var_6C]
0x554C31: mov     eax, [esp+80h+arg_0]
0x554C38: add     edi, 30h ; '0'
0x554C3B: mov     ecx, 9
0x554C40: lea     esi, [esp+80h+var_30]
0x554C44: rep movsd
0x554C46: mov     ecx, [eax]
0x554C48: push    ebx
0x554C49: jmp     short loc_554C78
0x554C4B: mov     ecx, [esp+84h+arg_4]
0x554C52: mov     ecx, [ecx]
0x554C54: mov     edx, [ecx]
0x554C56: push    eax
0x554C57: mov     eax, [edx+84h]
0x554C5D: call    eax
0x554C5F: jmp     short loc_554C87
0x554C61: lea     edi, [eax+30h]
0x554C64: mov     ecx, 9
0x554C69: lea     esi, [esp+84h+var_30]
0x554C6D: rep movsd
0x554C6F: mov     ecx, [esp+84h+arg_0]
0x554C76: mov     ecx, [ecx]
0x554C78: mov     eax, [esp+84h+var_6C]
0x554C7C: mov     edx, [ecx]
0x554C7E: mov     edx, [edx+84h]
0x554C84: push    eax
0x554C85: call    edx
0x554C87: mov     ecx, [esp+80h+var_6C]
0x554C8B: cmp     ecx, ebx
0x554C8D: jz      short loc_554CB3
0x554C8F: mov     esi, ecx
0x554C91: add     ecx, 4
0x554C94: push    ecx; lpAddend
0x554C95: call    dword ptr ds:0A2807Ch
0x554C9B: test    eax, eax
0x554C9D: jnz     short loc_554CAD
0x554C9F: cmp     esi, ebx
0x554CA1: jz      short loc_554CAD
0x554CA3: mov     eax, [esi]
0x554CA5: mov     edx, [eax]
0x554CA7: push    1
0x554CA9: mov     ecx, esi
0x554CAB: call    edx
0x554CAD: xor     ecx, ecx
0x554CAF: mov     [esp+80h+var_6C], ecx
0x554CB3: cmp     ebp, ebx
0x554CB5: jz      short loc_554CD8
0x554CB7: lea     eax, [ebp+4]
0x554CBA: push    eax; lpAddend
0x554CBB: call    dword ptr ds:0A2807Ch
0x554CC1: test    eax, eax
0x554CC3: jnz     short loc_554CD0
0x554CC5: mov     edx, [ebp+0]
0x554CC8: mov     eax, [edx]
0x554CCA: push    1
0x554CCC: mov     ecx, ebp
0x554CCE: call    eax
0x554CD0: mov     [esp+80h+var_68], ebx
0x554CD4: mov     ecx, [esp+80h+var_6C]
0x554CD8: mov     edx, [esp+80h+arg_8]
0x554CDF: cmp     [edx+0BCh], ebx
0x554CE5: jz      loc_555129
0x554CEB: mov     eax, edx
0x554CED: mov     ecx, [eax+0BCh]
0x554CF3: mov     edx, [ecx]
0x554CF5: mov     eax, [edx+14h]
0x554CF8: call    eax
0x554CFA: push    eax; ArgList
0x554CFB: lea     ecx, [esp+84h+ArgList]
0x554CFF: push    offset aMeshesS; "Meshes\\%s"
0x554D04: push    ecx; int
0x554D05: call    BSStringT_Static_Format
0x554D0A: mov     esi, dword ptr [esp+8Ch+ArgList]
0x554D0E: lea     edx, [esp+8Ch+var_50]
0x554D12: push    esi
0x554D13: push    edx
0x554D14: call    sub_550010
0x554D19: mov     ebp, eax
0x554D1B: lea     eax, [esp+94h+var_48]
0x554D1F: push    esi
0x554D20: push    eax
0x554D21: call    sub_54FEB0
0x554D26: add     esp, 1Ch
0x554D29: mov     edi, eax
0x554D2B: mov     [esp+80h+var_64], ebx
0x554D2F: cmp     edi, ebx
0x554D31: mov     byte ptr [esp+80h+var_4], 0Dh
0x554D36: jnz     short loc_554D42
0x554D38: mov     byte ptr [esp+80h+var_4], 6
0x554D3D: jmp     loc_554EF0
0x554D42: cmp     ds:0B39B80h, ebx
0x554D48: jnz     short loc_554D4F
0x554D4A: call    sub_553550
0x554D4F: mov     ecx, ds:0B39B80h
0x554D55: cmp     [ecx+0DACh], ebx
0x554D5B: jnz     loc_554DE4
0x554D61: push    20h ; ' '; Size
0x554D63: call    FormHeapAlloc
0x554D68: add     esp, 4
0x554D6B: mov     [esp+80h+var_5C], eax
0x554D6F: cmp     eax, ebx
0x554D71: mov     byte ptr [esp+80h+var_4], 0Eh
0x554D76: jz      short loc_554D83
0x554D78: mov     ecx, eax; this
0x554D7A: call    ??0BSFaceGenModelMap@@QAE@XZ; BSFaceGenModelMap::BSFaceGenModelMap(void)
0x554D7F: mov     esi, eax
0x554D81: jmp     short loc_554D85
0x554D83: xor     esi, esi
0x554D85: cmp     ds:0B39B80h, ebx
0x554D8B: mov     byte ptr [esp+80h+var_4], 0Dh
0x554D90: jnz     short loc_554D97
0x554D92: call    sub_553550
0x554D97: mov     edx, ds:0B39B80h
0x554D9D: mov     [edx+0DACh], esi
0x554DA3: mov     eax, ds:0B39B80h
0x554DA8: mov     ecx, [eax+0DACh]
0x554DAE: mov     edx, ds:0B120ECh
0x554DB4: push    ebx
0x554DB5: mov     [ecx+18h], edx
0x554DB8: call    sub_5506B0
0x554DBD: cmp     ds:0B39B80h, ebx
0x554DC3: mov     esi, ds:0B120F4h
0x554DC9: jnz     short loc_554DD0
0x554DCB: call    sub_553550
0x554DD0: mov     eax, ds:0B39B80h
0x554DD5: mov     ecx, [eax+0DACh]
0x554DDB: push    ebx
0x554DDC: mov     [ecx+1Ch], esi
0x554DDF: call    sub_5506B0
0x554DE4: cmp     ds:0B39B80h, ebx
0x554DEA: jnz     short loc_554DF1
0x554DEC: call    sub_553550
0x554DF1: mov     edx, ds:0B39B80h
0x554DF7: lea     ecx, [esp+80h+var_64]
0x554DFB: push    ecx
0x554DFC: mov     ecx, [edx+0DACh]
0x554E02: push    edi
0x554E03: call    sub_5515B0
0x554E08: test    al, al
0x554E0A: jz      short loc_554E2F
0x554E0C: mov     esi, [esp+80h+var_64]
0x554E10: cmp     [esi+8], ebx
0x554E13: jnz     short loc_554E25
0x554E15: mov     eax, dword ptr [esp+80h+ArgList]
0x554E19: push    ebx; char
0x554E1A: push    ebx; int
0x554E1B: push    ebp; int
0x554E1C: push    eax; ArgList
0x554E1D: push    edi; int
0x554E1E: mov     ecx, esi
0x554E20: call    sub_559B50
0x554E25: mov     byte ptr [esp+80h+var_4], 6
0x554E2A: jmp     loc_554EC4
0x554E2F: push    1Ch; Size
0x554E31: call    FormHeapAlloc
0x554E36: add     esp, 4
0x554E39: mov     [esp+80h+var_5C], eax
0x554E3D: cmp     eax, ebx
0x554E3F: mov     byte ptr [esp+80h+var_4], 0Fh
0x554E44: jz      short loc_554E4F
0x554E46: mov     ecx, eax; this
0x554E48: call    ??0BSFaceGenModel@@QAE@XZ; BSFaceGenModel::BSFaceGenModel(void)
0x554E4D: jmp     short loc_554E51
0x554E4F: xor     eax, eax
0x554E51: push    eax; a2
0x554E52: lea     ecx, [esp+84h+var_64]; this
0x554E56: mov     byte ptr [esp+84h+var_4], 0Dh
0x554E5E: call    NiSmartPointer_Set??
0x554E63: mov     ecx, dword ptr [esp+80h+ArgList]
0x554E67: mov     esi, [esp+80h+var_64]
0x554E6B: push    ebx; char
0x554E6C: push    ebx; int
0x554E6D: push    ebp; int
0x554E6E: push    ecx; ArgList
0x554E6F: push    edi; int
0x554E70: mov     ecx, esi
0x554E72: call    sub_559B50
0x554E77: test    al, al
0x554E79: jz      short loc_554E9D
0x554E7B: cmp     ds:0B39B80h, ebx
0x554E81: jnz     short loc_554E88
0x554E83: call    sub_553550
0x554E88: mov     edx, ds:0B39B80h
0x554E8E: mov     ecx, [edx+0DACh]
0x554E94: push    esi
0x554E95: push    edi
0x554E96: call    sub_551450
0x554E9B: jmp     short loc_554EBB
0x554E9D: cmp     esi, ebx
0x554E9F: jz      short loc_554EBB
0x554EA1: lea     eax, [esi+4]
0x554EA4: push    eax; lpAddend
0x554EA5: call    dword ptr ds:0A2807Ch
0x554EAB: test    eax, eax
0x554EAD: jnz     short loc_554EB9
0x554EAF: mov     edx, [esi]
0x554EB1: mov     eax, [edx]
0x554EB3: push    1
0x554EB5: mov     ecx, esi
0x554EB7: call    eax
0x554EB9: xor     esi, esi
0x554EBB: cmp     esi, ebx
0x554EBD: mov     byte ptr [esp+80h+var_4], 6
0x554EC2: jz      short loc_554EF0
0x554EC4: lea     ecx, [esi+4]
0x554EC7: push    ecx; lpAddend
0x554EC8: call    dword ptr ds:0A2807Ch
0x554ECE: test    eax, eax
0x554ED0: jnz     short loc_554EDC
0x554ED2: mov     edx, [esi]
0x554ED4: mov     eax, [edx]
0x554ED6: push    1
0x554ED8: mov     ecx, esi
0x554EDA: call    eax
0x554EDC: mov     edx, [esp+80h+arg_8]
0x554EE3: lea     ecx, [esp+80h+var_6C]
0x554EE7: push    ecx
0x554EE8: push    edx
0x554EE9: mov     ecx, esi
0x554EEB: call    sub_559870
0x554EF0: mov     ecx, [esp+80h+var_6C]
0x554EF4: cmp     ecx, ebx
0x554EF6: jz      loc_5550FD
0x554EFC: push    offset aFacegeneyerigh; "FaceGenEyeRight"
0x554F01: call    NiObjectNET_SetName
0x554F06: mov     eax, [esp+80h+arg_8]
0x554F0D: mov     eax, [eax+6Ch]
0x554F10: cmp     eax, ebx
0x554F12: jz      short loc_554F54
0x554F14: mov     eax, [eax+28h]
0x554F17: cmp     eax, ebx
0x554F19: jnz     short loc_554F20
0x554F1B: mov     eax, offset EmptyString
0x554F20: push    eax; ArgList
0x554F21: lea     ecx, [esp+84h+ArgList]
0x554F25: push    offset aTexturesS; "Textures\\%s"
0x554F2A: push    ecx; int
0x554F2B: call    BSStringT_Static_Format
0x554F30: mov     edx, dword ptr [esp+8Ch+ArgList]
0x554F34: mov     ecx, ds:0B333A0h
0x554F3A: add     esp, 0Ch
0x554F3D: push    ebx; char
0x554F3E: push    ebx; char
0x554F3F: push    edx; ArgList
0x554F40: lea     eax, [esp+8Ch+arg_8]
0x554F47: push    eax; int
0x554F48: call    sub_442890
0x554F4D: mov     byte ptr [esp+80h+var_4], 10h
0x554F52: jmp     short loc_554F73
0x554F54: push    ebx; char
0x554F55: push    ebx; char
0x554F56: push    offset aTexturesCharac; "Textures\\Characters\\Eyes\\EyeDefault."...
0x554F5B: lea     ecx, [esp+8Ch+arg_8]
0x554F62: push    ecx; int
0x554F63: mov     ecx, ds:0B333A0h
0x554F69: call    sub_442890
0x554F6E: mov     byte ptr [esp+80h+var_4], 11h
0x554F73: push    eax
0x554F74: lea     ecx, [esp+84h+var_68]
0x554F78: call    sub_55E2A0
0x554F7D: mov     eax, [esp+80h+arg_8]
0x554F84: cmp     eax, ebx
0x554F86: mov     byte ptr [esp+80h+var_4], 6
0x554F8B: jz      short loc_554FAB
0x554F8D: mov     esi, eax
0x554F8F: add     eax, 4
0x554F92: push    eax; lpAddend
0x554F93: call    dword ptr ds:0A2807Ch
0x554F99: test    eax, eax
0x554F9B: jnz     short loc_554FAB
0x554F9D: cmp     esi, ebx
0x554F9F: jz      short loc_554FAB
0x554FA1: mov     edx, [esi]
0x554FA3: mov     eax, [edx]
0x554FA5: push    1
0x554FA7: mov     ecx, esi
0x554FA9: call    eax
0x554FAB: mov     edi, [esp+80h+var_68]
0x554FAF: cmp     edi, ebx
0x554FB1: jz      loc_555038
0x554FB7: push    30h ; '0'; Size
0x554FB9: call    FormHeapAlloc
0x554FBE: add     esp, 4
0x554FC1: mov     [esp+80h+arg_8], eax
0x554FC8: cmp     eax, ebx
0x554FCA: mov     byte ptr [esp+80h+var_4], 12h
0x554FCF: jz      short loc_554FDC
0x554FD1: mov     ecx, eax
0x554FD3: call    NiTexturingProperty__NiTexturingProperty
0x554FD8: mov     esi, eax
0x554FDA: jmp     short loc_554FDE
0x554FDC: xor     esi, esi
0x554FDE: push    edi
0x554FDF: mov     ecx, esi
0x554FE1: mov     byte ptr [esp+84h+var_4], 6
0x554FE9: call    NiTexturingProperty__SetUnk08
0x554FEE: push    3
0x554FF0: mov     ecx, esi
0x554FF2: call    sub_405870
0x554FF7: push    2; a2
0x554FF9: mov     ecx, esi; this
0x554FFB: call    sub_405900
0x555000: mov     ecx, [esp+80h+var_6C]
0x555004: push    6
0x555006: call    NiNode_GetNiPropertyByID
0x55500B: test    eax, eax
0x55500D: jz      short loc_55502E
0x55500F: push    6
0x555011: lea     ecx, [esp+84h+arg_8]
0x555018: push    ecx
0x555019: mov     ecx, [esp+88h+var_6C]
0x55501D: call    sub_708560
0x555022: lea     ecx, [esp+80h+arg_8]; this
0x555029: call    sub_7016A0
0x55502E: mov     ecx, [esp+80h+var_6C]; this
0x555032: push    esi; a2
0x555033: call    sub_405680
0x555038: mov     eax, [esp+80h+var_6C]
0x55503C: cmp     [eax+0B8h], ebx
0x555042: push    ebx
0x555043: jz      short loc_5550AB
0x555045: cmp     [esp+84h+arg_C], bl
0x55504C: jz      short loc_555095
0x55504E: mov     ecx, eax
0x555050: call    sub_478350
0x555055: mov     eax, [esp+80h+var_6C]
0x555059: mov     edx, ds:0B3F9A8h
0x55505F: mov     [eax+54h], edx
0x555062: mov     ecx, ds:0B3F9ACh
0x555068: add     eax, 54h ; 'T'
0x55506B: mov     [eax+4], ecx
0x55506E: mov     edx, ds:0B3F9B0h
0x555074: mov     [eax+8], edx
0x555077: mov     edi, [esp+80h+var_6C]
0x55507B: mov     eax, [esp+80h+arg_0]
0x555082: add     edi, 30h ; '0'
0x555085: mov     ecx, 9
0x55508A: lea     esi, [esp+80h+var_30]
0x55508E: rep movsd
0x555090: mov     ecx, [eax]
0x555092: push    ebx
0x555093: jmp     short loc_5550C2
0x555095: mov     ecx, [esp+84h+arg_4]
0x55509C: mov     ecx, [ecx]
0x55509E: mov     edx, [ecx]
0x5550A0: push    eax
0x5550A1: mov     eax, [edx+84h]
0x5550A7: call    eax
0x5550A9: jmp     short loc_5550D1
0x5550AB: lea     edi, [eax+30h]
0x5550AE: mov     ecx, 9
0x5550B3: lea     esi, [esp+84h+var_30]
0x5550B7: rep movsd
0x5550B9: mov     ecx, [esp+84h+arg_0]
0x5550C0: mov     ecx, [ecx]
0x5550C2: mov     eax, [esp+84h+var_6C]
0x5550C6: mov     edx, [ecx]
0x5550C8: mov     edx, [edx+84h]
0x5550CE: push    eax
0x5550CF: call    edx
0x5550D1: mov     ecx, [esp+80h+var_6C]
0x5550D5: cmp     ecx, ebx
0x5550D7: jz      short loc_5550FD
0x5550D9: mov     esi, ecx
0x5550DB: add     ecx, 4
0x5550DE: push    ecx; lpAddend
0x5550DF: call    dword ptr ds:0A2807Ch
0x5550E5: test    eax, eax
0x5550E7: jnz     short loc_5550F7
0x5550E9: cmp     esi, ebx
0x5550EB: jz      short loc_5550F7
0x5550ED: mov     eax, [esi]
0x5550EF: mov     edx, [eax]
0x5550F1: push    1
0x5550F3: mov     ecx, esi
0x5550F5: call    edx
0x5550F7: xor     ecx, ecx
0x5550F9: mov     [esp+80h+var_6C], ecx
0x5550FD: mov     edi, [esp+80h+var_68]
0x555101: cmp     edi, ebx
0x555103: jz      short loc_55512D
0x555105: lea     eax, [edi+4]
0x555108: push    eax; lpAddend
0x555109: call    dword ptr ds:0A2807Ch
0x55510F: test    eax, eax
0x555111: jnz     short loc_55511D
0x555113: mov     edx, [edi]
0x555115: mov     eax, [edx]
0x555117: push    1
0x555119: mov     ecx, edi
0x55511B: call    eax
0x55511D: mov     ecx, [esp+80h+var_6C]
0x555121: xor     edi, edi
0x555123: mov     [esp+80h+var_68], edi
0x555127: jmp     short loc_55512D
0x555129: mov     edi, [esp+80h+var_68]
0x55512D: cmp     ecx, ebx
0x55512F: mov     byte ptr [esp+80h+var_4], 5
0x555134: jz      short loc_555154
0x555136: mov     esi, ecx
0x555138: add     ecx, 4
0x55513B: push    ecx; lpAddend
0x55513C: call    dword ptr ds:0A2807Ch
0x555142: test    eax, eax
0x555144: jnz     short loc_555154
0x555146: cmp     esi, ebx
0x555148: jz      short loc_555154
0x55514A: mov     edx, [esi]
0x55514C: mov     eax, [edx]
0x55514E: push    1
0x555150: mov     ecx, esi
0x555152: call    eax
0x555154: cmp     edi, ebx
0x555156: mov     byte ptr [esp+80h+var_4], 4
0x55515B: jz      short loc_555175
0x55515D: lea     ecx, [edi+4]
0x555160: push    ecx; lpAddend
0x555161: call    dword ptr ds:0A2807Ch
0x555167: test    eax, eax
0x555169: jnz     short loc_555175
0x55516B: mov     edx, [edi]
0x55516D: mov     eax, [edx]
0x55516F: push    1
0x555171: mov     ecx, edi
0x555173: call    eax
0x555175: push    ebx
0x555176: call    FormHeapFree
0x55517B: push    ebx
0x55517C: call    FormHeapFree
0x555181: mov     ecx, [esp+88h+var_50]
0x555185: push    ecx
0x555186: call    FormHeapFree
0x55518B: mov     edx, [esp+8Ch+var_48]
0x55518F: push    edx
0x555190: call    FormHeapFree
0x555195: mov     eax, dword ptr [esp+90h+ArgList]
0x555199: push    eax
0x55519A: call    FormHeapFree
0x55519F: add     esp, 14h
0x5551A2: mov     ecx, [esp+80h+var_C]
0x5551A6: mov     large fs:0, ecx
0x5551AD: pop     ecx
0x5551AE: pop     edi
0x5551AF: pop     esi
0x5551B0: pop     ebp
0x5551B1: pop     ebx
0x5551B2: add     esp, 6Ch
0x5551B5: retn
