0x553BB0: push    0FFFFFFFFh
0x553BB2: push    offset SEH_553BB0
0x553BB7: mov     eax, large fs:0
0x553BBD: push    eax
0x553BBE: sub     esp, 0D0h
0x553BC4: push    ebx
0x553BC5: push    ebp
0x553BC6: push    esi
0x553BC7: push    edi
0x553BC8: mov     eax, ds:0B30AACh
0x553BCD: xor     eax, esp
0x553BCF: push    eax
0x553BD0: lea     eax, [esp+0F0h+var_C]
0x553BD7: mov     large fs:0, eax
0x553BDD: mov     ecx, [esp+0F0h+arg_0]
0x553BE4: xor     ebx, ebx
0x553BE6: xor     edx, edx
0x553BE8: cmp     [ecx+0B6h], bx
0x553BEF: mov     [esp+0F0h+var_C8], ebx
0x553BF3: mov     [esp+0F0h+var_A8], edx
0x553BF7: jbe     loc_55423E
0x553BFD: lea     ecx, [ecx+0]
0x553C00: movzx   eax, word ptr [ecx+0B6h]
0x553C07: cmp     eax, edx
0x553C09: jbe     loc_554109
0x553C0F: mov     eax, [ecx+0B0h]
0x553C15: mov     eax, [eax+edx*4]
0x553C18: cmp     eax, ebx
0x553C1A: mov     [esp+0F0h+var_A4], eax
0x553C1E: jz      loc_554109
0x553C24: mov     esi, [eax+8]
0x553C27: mov     edi, offset aFacegenface; "FaceGenFace"
0x553C2C: mov     ecx, 0Ch
0x553C31: xor     ebp, ebp
0x553C33: repe cmpsb
0x553C35: jnz     loc_554102
0x553C3B: mov     edx, [eax]
0x553C3D: mov     ecx, eax
0x553C3F: mov     eax, [edx+10h]
0x553C42: call    eax
0x553C44: push    eax
0x553C45: call    sub_550790
0x553C4A: add     esp, 4
0x553C4D: cmp     eax, ebx
0x553C4F: jz      short loc_553C5E
0x553C51: mov     edx, [eax]
0x553C53: mov     ecx, eax
0x553C55: mov     eax, [edx+54h]
0x553C58: call    eax
0x553C5A: mov     esi, eax
0x553C5C: jmp     short loc_553C60
0x553C5E: xor     esi, esi
0x553C60: mov     [esp+0F0h+var_DC], ebx
0x553C64: mov     [esp+0F0h+var_4], ebx
0x553C6B: mov     [esp+0F0h+var_D0], ebx
0x553C6F: mov     word ptr [esp+0F0h+var_CC], bx
0x553C74: mov     word ptr [esp+0F0h+var_CC+2], bx
0x553C79: mov     [esp+0F0h+var_D8], ebx
0x553C7D: mov     word ptr [esp+0F0h+var_D4], bx
0x553C82: mov     word ptr [esp+0F0h+var_D4+2], bx
0x553C87: mov     [esp+0F0h+var_B8], ebx
0x553C8B: mov     word ptr [esp+0F0h+var_B4], bx
0x553C90: mov     word ptr [esp+0F0h+var_B4+2], bx
0x553C95: mov     [esp+0F0h+var_B0], ebx
0x553C99: mov     [esp+0F0h+var_AC], bx
0x553C9E: mov     [esp+0F0h+var_AA], bx
0x553CA3: mov     [esp+0F0h+var_C0], ebx
0x553CA7: mov     word ptr [esp+0F0h+var_BC], bx
0x553CAC: mov     word ptr [esp+0F0h+var_BC+2], bx
0x553CB1: mov     [esp+0F0h+var_98], ebx
0x553CB5: mov     [esp+0F0h+var_94], bx
0x553CBA: mov     [esp+0F0h+var_92], bx
0x553CBF: push    offset sub_43ACE0; a5
0x553CC4: push    offset sub_43EB30; a4
0x553CC9: push    4; size
0x553CCB: push    18h; a2
0x553CCD: lea     ecx, [esp+100h+a1]
0x553CD4: push    ecx; a1
0x553CD5: mov     byte ptr [esp+104h+var_4], 6
0x553CDD: call    ArrayConstructor
0x553CE2: cmp     ds:0B39B80h, ebx
0x553CE8: mov     byte ptr [esp+0F0h+var_4], 7
0x553CF0: jnz     short loc_553CF7
0x553CF2: call    sub_553550
0x553CF7: mov     eax, ds:0B39B80h
0x553CFC: lea     edx, [esp+0F0h+a1]
0x553D03: add     eax, 8
0x553D06: push    edx
0x553D07: push    eax
0x553D08: call    sub_5528F0
0x553D0D: mov     eax, [esi+8]
0x553D10: add     esp, 8
0x553D13: cmp     eax, ebx
0x553D15: jnz     short loc_553D37
0x553D17: push    ebx
0x553D18: call    FormHeapFree
0x553D1D: add     esp, 4
0x553D20: or      [esp+0F0h+var_C8], 1
0x553D25: mov     [esp+0F0h+var_A0], ebx
0x553D29: mov     word ptr [esp+0F0h+var_9C+2], bx
0x553D2E: mov     word ptr [esp+0F0h+var_9C], bx
0x553D33: lea     eax, [esp+0F0h+var_A0]
0x553D37: test    byte ptr [esp+0F0h+var_C8], 1
0x553D3C: mov     esi, [eax]
0x553D3E: jz      short loc_553D60
0x553D40: mov     eax, [esp+0F0h+var_A0]
0x553D44: and     [esp+0F0h+var_C8], 0FFFFFFFEh
0x553D49: push    eax
0x553D4A: call    FormHeapFree
0x553D4F: add     esp, 4
0x553D52: mov     [esp+0F0h+var_A0], ebx
0x553D56: mov     word ptr [esp+0F0h+var_9C+2], bx
0x553D5B: mov     word ptr [esp+0F0h+var_9C], bx
0x553D60: lea     ecx, [esp+0F0h+var_D0]
0x553D64: push    esi
0x553D65: push    ecx
0x553D66: call    sub_54FF60
0x553D6B: mov     eax, [esp+0F8h+arg_4]
0x553D72: add     esp, 8
0x553D75: sub     eax, ebx
0x553D77: jz      short loc_553D93
0x553D79: sub     eax, 1
0x553D7C: jnz     loc_5541C0
0x553D82: mov     edx, [esp+0F0h+var_D0]
0x553D86: push    edx
0x553D87: lea     eax, [esp+0F4h+var_D8]
0x553D8B: push    eax
0x553D8C: call    sub_550170
0x553D91: jmp     short loc_553DA2
0x553D93: mov     ecx, [esp+0F0h+var_D0]
0x553D97: push    ecx
0x553D98: lea     edx, [esp+0F4h+var_D8]
0x553D9C: push    edx
0x553D9D: call    sub_551B40
0x553DA2: add     esp, 8
0x553DA5: cmp     [esp+0F0h+var_D8], ebx
0x553DA9: jz      loc_5541C0
0x553DAF: mov     ecx, ds:0B33A04h
0x553DB5: cmp     ecx, ebx
0x553DB7: jz      loc_5541C0
0x553DBD: mov     eax, [ecx]
0x553DBF: mov     edx, [esp+0F0h+var_D8]
0x553DC3: mov     eax, [eax+4]
0x553DC6: push    0FFFFFFFFh
0x553DC8: push    ebx
0x553DC9: push    ebx
0x553DCA: push    edx
0x553DCB: call    eax
0x553DCD: test    eax, eax
0x553DCF: jz      loc_5541C0
0x553DD5: mov     esi, [esp+0F0h+var_D8]
0x553DD9: push    ebx
0x553DDA: push    1
0x553DDC: lea     ecx, [esp+0F8h+var_C0]
0x553DE0: push    esi
0x553DE1: push    ecx
0x553DE2: call    sub_5500C0
0x553DE7: add     esp, 8
0x553DEA: push    eax
0x553DEB: lea     edx, [esp+0FCh+var_B0]
0x553DEF: push    esi
0x553DF0: push    edx
0x553DF1: call    sub_550010
0x553DF6: add     esp, 8
0x553DF9: push    eax
0x553DFA: push    esi
0x553DFB: lea     eax, [esp+104h+var_B8]
0x553DFF: push    esi
0x553E00: push    eax
0x553E01: call    sub_54FEB0
0x553E06: add     esp, 8
0x553E09: push    eax
0x553E0A: call    sub_553620
0x553E0F: mov     edi, eax
0x553E11: add     esp, 18h
0x553E14: cmp     edi, ebx
0x553E16: mov     [esp+0F0h+var_90], edi
0x553E1A: jz      short loc_553E26
0x553E1C: lea     ecx, [edi+4]
0x553E1F: push    ecx; lpAddend
0x553E20: call    dword ptr ds:0A28078h
0x553E26: lea     edx, [esp+0F0h+var_DC]
0x553E2A: push    edx
0x553E2B: lea     eax, [esp+0F4h+a1]
0x553E32: push    eax
0x553E33: mov     ecx, edi
0x553E35: mov     byte ptr [esp+0F8h+var_4], 8
0x553E3D: call    sub_559870
0x553E42: test    al, al
0x553E44: jz      loc_554124
0x553E4A: mov     ecx, [esp+0F0h+var_DC]
0x553E4E: cmp     ecx, ebx
0x553E50: jz      loc_554124
0x553E56: push    offset aFacegenface; "FaceGenFace"
0x553E5B: call    NiObjectNET_SetName
0x553E60: mov     ebp, [esp+0F0h+var_DC]
0x553E64: mov     edx, [esp+0F0h+var_A4]
0x553E68: mov     ecx, [edx+54h]
0x553E6B: mov     [ebp+54h], ecx
0x553E6E: mov     ecx, [edx+58h]
0x553E71: lea     eax, [ebp+54h]
0x553E74: mov     [eax+4], ecx
0x553E77: mov     ecx, [edx+5Ch]
0x553E7A: mov     [eax+8], ecx
0x553E7D: lea     esi, [edx+30h]
0x553E80: lea     edi, [ebp+30h]
0x553E83: mov     ecx, 9
0x553E88: rep movsd
0x553E8A: fld     dword ptr [edx+60h]
0x553E8D: fstp    [esp+0F0h+var_C4]
0x553E91: fld     [esp+0F0h+var_C4]
0x553E95: fabs
0x553E97: fstp    [esp+0F0h+var_C4]
0x553E9B: fld     [esp+0F0h+var_C4]
0x553E9F: fstp    dword ptr [ebp+60h]
0x553EA2: cmp     ds:0B42EA5h, bl
0x553EA8: push    1
0x553EAA: push    1
0x553EAC: jz      short loc_553EB2
0x553EAE: push    1Ah
0x553EB0: jmp     short loc_553EB4
0x553EB2: push    0Eh
0x553EB4: push    ebp
0x553EB5: call    sub_7B8940
0x553EBA: add     esp, 10h
0x553EBD: push    4
0x553EBF: mov     ecx, ebp
0x553EC1: call    NiNode_GetNiPropertyByID
0x553EC6: mov     ecx, [esp+0F0h+var_A4]
0x553ECA: push    4
0x553ECC: mov     esi, eax
0x553ECE: call    NiNode_GetNiPropertyByID
0x553ED3: lea     ecx, [esp+0F0h+var_7C]
0x553ED7: mov     edi, eax
0x553ED9: call    sub_478B90
0x553EDE: lea     edx, [esp+0F0h+var_7C]
0x553EE2: push    edx
0x553EE3: mov     ecx, edi
0x553EE5: mov     byte ptr [esp+0F4h+var_4], 9
0x553EED: call    sub_700610
0x553EF2: mov     edi, eax
0x553EF4: mov     eax, [esi+0D4h]
0x553EFA: push    eax
0x553EFB: mov     ecx, edi
0x553EFD: call    sub_550430
0x553F02: push    esi
0x553F03: mov     ecx, ebp
0x553F05: call    sub_4A1220
0x553F0A: push    edi; a2
0x553F0B: mov     ecx, ebp; this
0x553F0D: call    sub_405680
0x553F12: mov     eax, [esp+0F0h+var_A4]
0x553F16: mov     eax, [eax+0BCh]
0x553F1C: push    eax; a2
0x553F1D: mov     ecx, ebp; this
0x553F1F: call    sub_4EC910
0x553F24: mov     ecx, [ebp+0B4h]
0x553F2A: mov     edx, [ecx]
0x553F2C: mov     eax, [edx+50h]
0x553F2F: call    eax
0x553F31: mov     ecx, [ebp+0B4h]
0x553F37: push    1
0x553F39: movzx   esi, ax
0x553F3C: call    sub_728AB0
0x553F41: test    al, al
0x553F43: jz      short loc_553F82
0x553F45: mov     ecx, [ebp+0B4h]
0x553F4B: lea     edx, [esp+0F0h+var_8C]
0x553F4F: push    edx
0x553F50: mov     [esp+0F4h+var_8C], ebx
0x553F54: mov     [esp+0F4h+var_88], ebx
0x553F58: mov     [esp+0F4h+var_84], bl
0x553F5C: call    sub_728B60
0x553F61: cmp     [esp+0F0h+var_8C], ebx
0x553F65: jz      short loc_553F82
0x553F67: mov     eax, [ebp+0B4h]
0x553F6D: movzx   ecx, si
0x553F70: push    ecx
0x553F71: lea     edx, [esp+0F4h+var_8C]
0x553F75: push    edx
0x553F76: add     eax, 0Ch
0x553F79: push    eax
0x553F7A: call    sub_550A30
0x553F7F: add     esp, 0Ch
0x553F82: push    2
0x553F84: mov     ecx, ebp
0x553F86: call    NiNode_GetNiPropertyByID
0x553F8B: mov     ecx, eax
0x553F8D: cmp     ecx, ebx
0x553F8F: jz      short loc_553FB2
0x553F91: fld     dword ptr [ecx+4Ch]
0x553F94: fstp    [esp+0F0h+var_C4]
0x553F98: fld1
0x553F9A: fcomp   [esp+0F0h+var_C4]
0x553F9E: fnstsw  ax
0x553FA0: test    ah, 41h
0x553FA3: jnz     short loc_553FB2
0x553FA5: fld     dword ptr ds:0A46B10h
0x553FAB: add     dword ptr [ecx+54h], 1
0x553FAF: fstp    dword ptr [ecx+4Ch]
0x553FB2: mov     esi, [esp+0F0h+arg_0]
0x553FB9: mov     ecx, [esp+0F0h+var_A8]
0x553FBD: mov     eax, [esi]
0x553FBF: mov     eax, [eax+90h]
0x553FC5: push    ebp
0x553FC6: push    ecx
0x553FC7: lea     edx, [esp+0F8h+var_80]
0x553FCB: push    edx
0x553FCC: mov     ecx, esi
0x553FCE: call    eax
0x553FD0: lea     ecx, [esp+0F0h+var_80]; this
0x553FD4: call    sub_7016A0
0x553FD9: mov     ecx, ebp; this
0x553FDB: call    NiAVObject_InitializePropertyState
0x553FE0: mov     ecx, ebp
0x553FE2: call    NiNode_UpdateDynamicEffectState
0x553FE7: mov     eax, [esi+1Ch]
0x553FEA: mov     edx, [esi]
0x553FEC: push    ebx
0x553FED: push    eax
0x553FEE: mov     eax, [edx+0C4h]
0x553FF4: mov     ecx, esi
0x553FF6: call    eax
0x553FF8: mov     eax, [esp+0F0h+arg_4]
0x553FFF: sub     eax, ebx
0x554001: jz      short loc_554010
0x554003: sub     eax, 1
0x554006: jnz     short loc_554017
0x554008: mov     [esi+110h], bl
0x55400E: jmp     short loc_554017
0x554010: mov     byte ptr [esi+110h], 1
0x554017: lea     ecx, [esp+0F0h+var_7C]
0x55401B: mov     byte ptr [esp+0F0h+var_4], 8
0x554023: call    sub_4781A0
0x554028: lea     ecx, [esp+0F0h+var_90]; this
0x55402C: mov     byte ptr [esp+0F0h+var_4], 7
0x554034: call    sub_7016A0
0x554039: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x55403E: push    4; int
0x554040: push    18h; unsigned int
0x554042: lea     ecx, [esp+0FCh+a1]
0x554049: push    ecx; void *
0x55404A: mov     byte ptr [esp+100h+var_4], 6
0x554052: call    $LN21
0x554057: push    ebx
0x554058: call    FormHeapFree
0x55405D: mov     edx, [esp+0F4h+var_C0]
0x554061: push    edx
0x554062: mov     [esp+0F8h+var_98], ebx
0x554066: mov     [esp+0F8h+var_92], bx
0x55406B: mov     [esp+0F8h+var_94], bx
0x554070: call    FormHeapFree
0x554075: mov     eax, [esp+0F8h+var_B0]
0x554079: push    eax
0x55407A: mov     [esp+0FCh+var_C0], ebx
0x55407E: mov     word ptr [esp+0FCh+var_BC+2], bx
0x554083: mov     word ptr [esp+0FCh+var_BC], bx
0x554088: call    FormHeapFree
0x55408D: mov     ecx, [esp+0FCh+var_B8]
0x554091: push    ecx
0x554092: mov     [esp+100h+var_B0], ebx
0x554096: mov     [esp+100h+var_AA], bx
0x55409B: mov     [esp+100h+var_AC], bx
0x5540A0: call    FormHeapFree
0x5540A5: mov     edx, [esp+100h+var_D8]
0x5540A9: push    edx
0x5540AA: mov     [esp+104h+var_B8], ebx
0x5540AE: mov     word ptr [esp+104h+var_B4+2], bx
0x5540B3: mov     word ptr [esp+104h+var_B4], bx
0x5540B8: call    FormHeapFree
0x5540BD: mov     eax, [esp+104h+var_D0]
0x5540C1: push    eax
0x5540C2: mov     [esp+108h+var_D8], ebx
0x5540C6: mov     word ptr [esp+108h+var_D4+2], bx
0x5540CB: mov     word ptr [esp+108h+var_D4], bx
0x5540D0: call    FormHeapFree
0x5540D5: add     esp, 18h
0x5540D8: lea     ecx, [esp+0F0h+var_DC]; this
0x5540DC: mov     [esp+0F0h+var_D0], ebx
0x5540E0: mov     word ptr [esp+0F0h+var_CC+2], bx
0x5540E5: mov     word ptr [esp+0F0h+var_CC], bx
0x5540EA: mov     [esp+0F0h+var_4], 0FFFFFFFFh
0x5540F5: call    sub_7016A0
0x5540FA: mov     edx, [esp+0F0h+var_A8]
0x5540FE: mov     ecx, esi
0x554100: jmp     short loc_554109
0x554102: mov     ecx, [esp+0F0h+arg_0]
0x554109: movzx   eax, word ptr [ecx+0B6h]
0x554110: add     edx, 1
0x554113: cmp     edx, eax
0x554115: mov     [esp+0F0h+var_A8], edx
0x554119: jb      loc_553C00
0x55411F: jmp     loc_55423E
0x554124: cmp     edi, ebx
0x554126: mov     ebp, ds:0A2807Ch
0x55412C: mov     byte ptr [esp+0F0h+var_4], 7
0x554134: jz      short loc_55414A
0x554136: lea     ecx, [edi+4]
0x554139: push    ecx; lpAddend
0x55413A: call    ebp ; InterlockedDecrement
0x55413C: test    eax, eax
0x55413E: jnz     short loc_55414A
0x554140: mov     edx, [edi]
0x554142: mov     eax, [edx]
0x554144: push    1
0x554146: mov     ecx, edi
0x554148: call    eax
0x55414A: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x55414F: push    4; int
0x554151: push    18h; unsigned int
0x554153: lea     ecx, [esp+0FCh+a1]
0x55415A: push    ecx; void *
0x55415B: mov     byte ptr [esp+100h+var_4], 6
0x554163: call    $LN21
0x554168: push    ebx
0x554169: call    FormHeapFree
0x55416E: mov     edx, [esp+0F4h+var_C0]
0x554172: push    edx
0x554173: call    FormHeapFree
0x554178: mov     eax, [esp+0F8h+var_B0]
0x55417C: push    eax
0x55417D: call    FormHeapFree
0x554182: mov     ecx, [esp+0FCh+var_B8]
0x554186: push    ecx
0x554187: call    FormHeapFree
0x55418C: push    esi
0x55418D: call    FormHeapFree
0x554192: mov     edx, [esp+104h+var_D0]
0x554196: push    edx
0x554197: call    FormHeapFree
0x55419C: mov     eax, [esp+108h+var_DC]
0x5541A0: add     esp, 18h
0x5541A3: cmp     eax, ebx
0x5541A5: mov     [esp+0F0h+var_4], 0FFFFFFFFh
0x5541B0: jz      loc_55423E
0x5541B6: mov     esi, eax
0x5541B8: add     eax, 4
0x5541BB: push    eax; lpAddend
0x5541BC: call    ebp ; InterlockedDecrement
0x5541BE: jmp     short loc_55422C
0x5541C0: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x5541C5: push    4; int
0x5541C7: push    18h; unsigned int
0x5541C9: lea     eax, [esp+0FCh+a1]
0x5541D0: push    eax; void *
0x5541D1: mov     byte ptr [esp+100h+var_4], 6
0x5541D9: call    $LN21
0x5541DE: push    ebx
0x5541DF: call    FormHeapFree
0x5541E4: push    ebx
0x5541E5: call    FormHeapFree
0x5541EA: push    ebx
0x5541EB: call    FormHeapFree
0x5541F0: push    ebx
0x5541F1: call    FormHeapFree
0x5541F6: mov     ecx, [esp+100h+var_D8]
0x5541FA: push    ecx
0x5541FB: call    FormHeapFree
0x554200: mov     edx, [esp+104h+var_D0]
0x554204: push    edx
0x554205: call    FormHeapFree
0x55420A: mov     eax, [esp+108h+var_DC]
0x55420E: add     esp, 18h
0x554211: cmp     eax, ebx
0x554213: mov     [esp+0F0h+var_4], 0FFFFFFFFh
0x55421E: jz      short loc_55423E
0x554220: mov     esi, eax
0x554222: add     eax, 4
0x554225: push    eax; lpAddend
0x554226: call    dword ptr ds:0A2807Ch
0x55422C: test    eax, eax
0x55422E: jnz     short loc_55423E
0x554230: cmp     esi, ebx
0x554232: jz      short loc_55423E
0x554234: mov     eax, [esi]
0x554236: mov     edx, [eax]
0x554238: push    1
0x55423A: mov     ecx, esi
0x55423C: call    edx
0x55423E: mov     ecx, [esp+0F0h+var_C]
0x554245: mov     large fs:0, ecx
0x55424C: pop     ecx
0x55424D: pop     edi
0x55424E: pop     esi
0x55424F: pop     ebp
0x554250: pop     ebx
0x554251: add     esp, 0DCh
0x554257: retn
