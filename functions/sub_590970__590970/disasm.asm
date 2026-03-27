0x590970: push    0FFFFFFFFh
0x590972: push    offset SEH_590970
0x590977: mov     eax, large fs:0
0x59097D: push    eax
0x59097E: sub     esp, 30h
0x590981: push    ebx
0x590982: push    ebp
0x590983: push    esi
0x590984: push    edi
0x590985: mov     eax, ds:0B30AACh
0x59098A: xor     eax, esp
0x59098C: push    eax
0x59098D: lea     eax, [esp+50h+var_C]
0x590991: mov     large fs:0, eax
0x590997: mov     esi, ecx
0x590999: push    0FE6h
0x59099E: call    sub_588C10
0x5909A3: push    offset aData_1; "\\Data"
0x5909A8: push    eax; Str
0x5909A9: call    _strstr
0x5909AE: add     esp, 8
0x5909B1: test    eax, eax
0x5909B3: push    0FE6h
0x5909B8: mov     ecx, esi
0x5909BA: jz      short loc_5909D5
0x5909BC: call    sub_588C10
0x5909C1: push    eax; ArgList
0x5909C2: lea     ebp, [esi+50h]
0x5909C5: push    offset aS; "%s"
0x5909CA: push    ebp; int
0x5909CB: call    BSStringT_Static_Format
0x5909D0: add     esp, 0Ch
0x5909D3: jmp     short loc_5909F1
0x5909D5: call    sub_588C10
0x5909DA: push    eax
0x5909DB: push    offset aMeshes_0; "Meshes"
0x5909E0: lea     ebp, [esi+50h]
0x5909E3: push    offset aSMenusS; "%s\\Menus\\%s"
0x5909E8: push    ebp; int
0x5909E9: call    BSStringT_Static_Format
0x5909EE: add     esp, 10h
0x5909F1: mov     eax, [ebp+0]
0x5909F4: mov     ecx, ds:0B33A1Ch
0x5909FA: push    0
0x5909FC: push    0
0x5909FE: push    1
0x590A00: push    eax
0x590A01: call    sub_439EB0
0x590A06: mov     edi, eax
0x590A08: test    edi, edi
0x590A0A: jnz     short loc_590A1F
0x590A0C: mov     eax, [ebp+0]
0x590A0F: push    eax; ArgList
0x590A10: push    offset aMissingNifForA; "Missing NIF for animated menu object: %"...
0x590A15: call    PrintError
0x590A1A: jmp     loc_590BFE
0x590A1F: mov     eax, [edi+1Ch]
0x590A22: test    eax, eax
0x590A24: jz      short loc_590A9B
0x590A26: lea     ecx, [esp+50h+var_28]
0x590A2A: call    sub_478B90
0x590A2F: fld1
0x590A31: fst     [esp+50h+var_10]
0x590A35: fst     [esp+50h+var_14]
0x590A39: fstp    [esp+50h+var_18]
0x590A3D: push    edi
0x590A3E: mov     [esp+54h+var_4], 0
0x590A46: call    sub_480820
0x590A4B: add     esp, 4
0x590A4E: test    al, al
0x590A50: jz      short loc_590A65
0x590A52: lea     ecx, [esp+50h+var_28]
0x590A56: push    ecx
0x590A57: mov     ecx, ds:0B333A0h
0x590A5D: push    edi
0x590A5E: call    sub_4430C0
0x590A63: jmp     short loc_590A71
0x590A65: lea     edx, [esp+50h+var_28]
0x590A69: push    edx
0x590A6A: mov     ecx, edi
0x590A6C: call    sub_700610
0x590A71: mov     ecx, [esp+50h+var_28]
0x590A75: test    ecx, ecx
0x590A77: mov     edi, eax
0x590A79: mov     [esp+50h+var_4], 0FFFFFFFFh
0x590A81: jz      short loc_590A8B
0x590A83: mov     eax, [ecx]
0x590A85: mov     edx, [eax]
0x590A87: push    1
0x590A89: call    edx
0x590A8B: mov     ecx, [esp+50h+var_24]
0x590A8F: test    ecx, ecx
0x590A91: jz      short loc_590A9B
0x590A93: mov     eax, [ecx]
0x590A95: mov     edx, [eax]
0x590A97: push    1
0x590A99: call    edx
0x590A9B: push    offset stru_B3CAC0
0x590AA0: mov     ecx, edi
0x590AA2: call    sub_700010
0x590AA7: test    eax, eax
0x590AA9: jz      short loc_590AAE
0x590AAB: mov     [esi+40h], eax
0x590AAE: mov     ebx, ds:0A2807Ch
0x590AB4: mov     ecx, [esi+24h]
0x590AB7: cmp     word ptr [ecx+0B6h], 0
0x590ABF: jbe     short loc_590B00
0x590AC1: mov     eax, [ecx+0B0h]
0x590AC7: cmp     dword ptr [eax], 0
0x590ACA: jz      short loc_590B00
0x590ACC: mov     edx, [ecx]
0x590ACE: mov     edx, [edx+8Ch]
0x590AD4: push    0
0x590AD6: lea     eax, [esp+54h+var_3C]
0x590ADA: push    eax
0x590ADB: call    edx
0x590ADD: mov     ebp, [esp+50h+var_3C]
0x590AE1: test    ebp, ebp
0x590AE3: jz      short loc_590AB4
0x590AE5: lea     eax, [ebp+4]
0x590AE8: push    eax; lpAddend
0x590AE9: call    ebx ; InterlockedDecrement
0x590AEB: test    eax, eax
0x590AED: jnz     short loc_590AB4
0x590AEF: test    ebp, ebp
0x590AF1: jz      short loc_590AB4
0x590AF3: mov     edx, [ebp+0]
0x590AF6: mov     eax, [edx]
0x590AF8: push    1
0x590AFA: mov     ecx, ebp
0x590AFC: call    eax
0x590AFE: jmp     short loc_590AB4
0x590B00: push    edi
0x590B01: mov     ecx, esi
0x590B03: call    sub_590810
0x590B08: push    5Ch ; '\'; Size
0x590B0A: call    FormHeapAlloc
0x590B0F: add     esp, 4
0x590B12: mov     [esp+50h+var_38], eax
0x590B16: test    eax, eax
0x590B18: mov     ebx, 1
0x590B1D: mov     [esp+50h+var_4], ebx
0x590B21: jz      short loc_590B2C
0x590B23: mov     ecx, eax; this
0x590B25: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x590B2A: jmp     short loc_590B2E
0x590B2C: xor     eax, eax
0x590B2E: fldz
0x590B30: add     dword ptr [eax+54h], 2
0x590B34: fstp    dword ptr [eax+50h]
0x590B37: push    eax; a2
0x590B38: fld1
0x590B3A: mov     [esp+54h+var_4], 0FFFFFFFFh
0x590B42: fst     [esp+54h+var_34]
0x590B46: fst     [esp+54h+var_30]
0x590B4A: mov     ecx, [esp+54h+var_34]
0x590B4E: fstp    [esp+54h+var_2C]
0x590B52: mov     edx, [esp+54h+var_30]
0x590B56: mov     [eax+40h], ecx
0x590B59: mov     ecx, [esp+54h+var_2C]
0x590B5D: mov     [eax+44h], edx
0x590B60: mov     [eax+48h], ecx
0x590B63: mov     ecx, edi; this
0x590B65: call    sub_405680
0x590B6A: push    ebx; arg1
0x590B6B: push    0; canCreate
0x590B6D: call    InterfaceManager_GetSingleton
0x590B72: mov     edx, [eax+78h]
0x590B75: add     esp, 8
0x590B78: push    edx; a2
0x590B79: mov     ecx, edi; this
0x590B7B: call    sub_405680
0x590B80: mov     ecx, [esi+24h]
0x590B83: mov     eax, [ecx]
0x590B85: mov     edx, [eax+84h]
0x590B8B: push    ebx; a3
0x590B8C: push    edi
0x590B8D: call    edx
0x590B8F: fld     dword ptr ds:0A379B4h
0x590B95: push    ecx
0x590B96: fstp    [esp+54h+a3]; a3
0x590B99: push    0FA6h; a2
0x590B9E: mov     ecx, esi; this
0x590BA0: call    Tile_SetFloat
0x590BA5: push    0FA1h
0x590BAA: mov     ecx, esi
0x590BAC: call    Tile_GetFloat
0x590BB1: fcomp   dword ptr ds:0A2F948h
0x590BB7: fnstsw  ax
0x590BB9: test    ah, 44h
0x590BBC: jp      short loc_590BC2
0x590BBE: mov     cl, bl
0x590BC0: jmp     short loc_590BC4
0x590BC2: xor     cl, cl
0x590BC4: test    cl, cl
0x590BC6: mov     eax, [esi+24h]
0x590BC9: jz      short loc_590BD1
0x590BCB: or      [eax+18h], bx
0x590BCF: jmp     short loc_590BD7
0x590BD1: and     word ptr [eax+18h], 0FFFEh
0x590BD7: mov     ecx, [esi+24h]
0x590BDA: call    NiNode_UpdateDynamicEffectState
0x590BDF: mov     ecx, [esi+24h]; this
0x590BE2: call    NiAVObject_InitializePropertyState
0x590BE7: mov     eax, [esi+2Ch]
0x590BEA: xor     eax, 40h
0x590BED: or      eax, 9
0x590BF0: push    ebx; arg1
0x590BF1: push    0; canCreate
0x590BF3: mov     [esi+2Ch], eax
0x590BF6: call    InterfaceManager_GetSingleton
0x590BFB: mov     [eax+7Ch], bl
0x590BFE: add     esp, 8
0x590C01: mov     ecx, [esp+50h+var_C]
0x590C05: mov     large fs:0, ecx
0x590C0C: pop     ecx
0x590C0D: pop     edi
0x590C0E: pop     esi
0x590C0F: pop     ebp
0x590C10: pop     ebx
0x590C11: add     esp, 3Ch
0x590C14: retn
