0x445DF0: sub     esp, 12Ch
0x445DF6: mov     eax, ds:0B30AACh
0x445DFB: xor     eax, esp
0x445DFD: mov     [esp+12Ch+var_4], eax
0x445E04: push    ebx
0x445E05: push    ebp
0x445E06: push    esi
0x445E07: mov     esi, [esp+138h+arg_0]
0x445E0E: cmp     esi, 4
0x445E11: mov     ebp, ecx
0x445E13: push    edi; ArgList
0x445E14: mov     [esp+13Ch+var_114], ebp
0x445E18: jz      short loc_445E1F
0x445E1A: cmp     esi, 5
0x445E1D: jnz     short loc_445E26
0x445E1F: mov     byte ptr ds:0B33A8Ch, 1
0x445E26: cmp     esi, 0FFFFFFFFh
0x445E29: jz      loc_445F47
0x445E2F: xor     edi, edi
0x445E31: cmp     esi, edi
0x445E33: jz      loc_445F52
0x445E39: cmp     byte ptr ds:0B33A8Ch, 0
0x445E40: mov     byte ptr [ebp+51h], 1
0x445E44: mov     ds:0B33A88h, esi
0x445E4A: mov     byte ptr ds:0B06B18h, 1
0x445E51: jnz     short loc_445E96
0x445E53: push    offset FileName; "TestAllCells.xls"
0x445E58: call    dword ptr ds:0A280ACh
0x445E5E: push    offset aBaseObjectMode; "\r\n\r\n**************** Base Object Mo"...
0x445E63: call    PrintError
0x445E68: mov     ecx, ds:0B33A98h
0x445E6E: add     esp, 4
0x445E71: push    edi
0x445E72: call    sub_44E720
0x445E77: push    offset aBaseObjectIcon; "\r\n\r\n**************** Base Object Ic"...
0x445E7C: call    PrintError
0x445E81: mov     ecx, ds:0B33A98h
0x445E87: add     esp, 4
0x445E8A: call    sub_44CF80
0x445E8F: mov     byte ptr ds:0B33A8Ch, 1
0x445E96: cmp     esi, 1
0x445E99: mov     eax, ds:0B33A84h
0x445E9E: mov     ecx, ds:0B33A80h
0x445EA4: jz      short loc_445EB0
0x445EA6: cmp     esi, 4
0x445EA9: jz      short loc_445EB0
0x445EAB: cmp     esi, 5
0x445EAE: jnz     short loc_445ECF
0x445EB0: cmp     eax, edi
0x445EB2: jnz     short loc_445ECF
0x445EB4: cmp     ecx, edi
0x445EB6: jnz     short loc_445ECF
0x445EB8: mov     ecx, ds:0B33A98h
0x445EBE: lea     eax, [ecx+0Ch]
0x445EC1: mov     ds:0B33A84h, eax
0x445EC6: mov     byte ptr ds:0B33A7Ch, 1
0x445ECD: jmp     short loc_445F2A
0x445ECF: cmp     esi, 3
0x445ED2: jnz     short loc_445F0A
0x445ED4: cmp     eax, edi
0x445ED6: mov     ecx, ds:0B33A98h
0x445EDC: jz      short loc_445EE5
0x445EDE: mov     edx, [eax]
0x445EE0: cmp     edx, [ebp+74h]
0x445EE3: jz      short loc_445EC6
0x445EE5: lea     eax, [ecx+0Ch]
0x445EE8: cmp     eax, edi
0x445EEA: mov     ds:0B33A84h, eax
0x445EEF: jz      short loc_445F52
0x445EF1: mov     edx, [eax]
0x445EF3: cmp     edx, edi
0x445EF5: jz      short loc_445EFC
0x445EF7: cmp     edx, [ebp+74h]
0x445EFA: jz      short loc_445EC1
0x445EFC: mov     eax, [eax+4]
0x445EFF: cmp     eax, edi
0x445F01: jnz     short loc_445EF1
0x445F03: mov     ds:0B33A84h, eax
0x445F08: jmp     short loc_445F52
0x445F0A: cmp     esi, 2
0x445F0D: jnz     short loc_445F52
0x445F0F: cmp     eax, edi
0x445F11: jz      short loc_445F20
0x445F13: mov     ds:0B33A84h, edi
0x445F19: mov     byte ptr ds:0B33A7Ch, 0
0x445F20: cmp     ecx, edi
0x445F22: jnz     short loc_445F52
0x445F24: mov     ecx, ds:0B33A98h
0x445F2A: call    sub_447580
0x445F2F: mov     ecx, ds:0B33A98h; this
0x445F35: call    Actor__GetTemplateForm; This is also called with DataHandler
0x445F3A: mov     ds:0B33A80h, eax
0x445F3F: mov     ds:0B33A78h, edi
0x445F45: jmp     short loc_445F52
0x445F47: mov     byte ptr [ebp+51h], 0
0x445F4B: mov     byte ptr ds:0B06B18h, 0
0x445F52: cmp     byte ptr [ebp+51h], 0
0x445F56: jz      loc_4464C8
0x445F5C: call    _clock
0x445F61: cmp     byte ptr ds:0B33A7Ch, 0
0x445F68: mov     [esp+13Ch+var_118], eax
0x445F6C: jz      loc_446009
0x445F72: mov     eax, ds:0B33A84h
0x445F77: test    eax, eax
0x445F79: jz      loc_446002
0x445F7F: mov     eax, [eax]
0x445F81: push    eax
0x445F82: mov     ecx, ebp
0x445F84: call    sub_4431F0
0x445F89: mov     esi, [ebp+74h]
0x445F8C: fld     dword ptr [esi+98h]
0x445F92: call    Double_To_SInt32
0x445F97: fld     dword ptr [esi+9Ch]
0x445F9D: mov     edi, eax
0x445F9F: sar     edi, 0Ch
0x445FA2: mov     ds:0B33A74h, edi
0x445FA8: call    Double_To_SInt32
0x445FAD: fld     dword ptr [esi+0A0h]
0x445FB3: fstp    [esp+13Ch+var_12C]
0x445FB7: mov     ebx, eax
0x445FB9: fld     dword ptr [esi+0A4h]
0x445FBF: sar     ebx, 0Ch
0x445FC2: fstp    [esp+13Ch+var_128]
0x445FC6: mov     ds:0B33A70h, ebx
0x445FCC: fld     [esp+13Ch+var_128]
0x445FD0: call    Double_To_SInt32
0x445FD5: fld     [esp+13Ch+var_12C]
0x445FD9: sar     eax, 0Ch
0x445FDC: push    eax
0x445FDD: call    Double_To_SInt32
0x445FE2: mov     edx, [esi]
0x445FE4: sar     eax, 0Ch
0x445FE7: push    eax
0x445FE8: mov     eax, [edx+0D4h]
0x445FEE: push    ebx; int
0x445FEF: push    edi; int
0x445FF0: mov     ecx, esi
0x445FF2: call    eax
0x445FF4: push    eax; int
0x445FF5: push    offset aSDDDD; "\r\n\r\n**************** %s (%d,%d) - ("...
0x445FFA: call    PrintError
0x445FFF: add     esp, 18h
0x446002: mov     byte ptr ds:0B33A7Ch, 0
0x446009: cmp     dword ptr ds:0B33A84h, 0
0x446010: jz      loc_4460B0
0x446016: mov     ecx, ds:0B33A70h
0x44601C: mov     edx, ds:0B33A74h
0x446022: push    ecx; int
0x446023: mov     ecx, [ebp+74h]
0x446026: push    edx; ArgList
0x446027: call    sub_4F1630
0x44602C: mov     esi, eax
0x44602E: test    esi, esi
0x446030: jz      short loc_44603A
0x446032: push    esi
0x446033: mov     ecx, ebp
0x446035: call    sub_43FED0
0x44603A: mov     ebx, ds:0B33A70h
0x446040: mov     edi, [ebp+74h]
0x446043: fld     dword ptr [edi+0A4h]
0x446049: add     ebx, 1
0x44604C: mov     ds:0B33A70h, ebx
0x446052: call    Double_To_SInt32
0x446057: sar     eax, 0Ch
0x44605A: cmp     ebx, eax
0x44605C: jle     loc_4460E1
0x446062: fld     dword ptr [edi+9Ch]
0x446068: call    Double_To_SInt32
0x44606D: fld     dword ptr [edi+0A0h]
0x446073: mov     ebx, ds:0B33A74h
0x446079: sar     eax, 0Ch
0x44607C: add     ebx, 1
0x44607F: mov     ds:0B33A70h, eax
0x446084: mov     ds:0B33A74h, ebx
0x44608A: call    Double_To_SInt32
0x44608F: sar     eax, 0Ch
0x446092: cmp     ebx, eax
0x446094: jle     short loc_4460E1
0x446096: mov     eax, ds:0B33A84h
0x44609B: mov     eax, [eax+4]
0x44609E: test    eax, eax
0x4460A0: mov     ds:0B33A84h, eax
0x4460A5: jz      short loc_4460E1
0x4460A7: mov     byte ptr ds:0B33A7Ch, 1
0x4460AE: jmp     short loc_4460E1
0x4460B0: cmp     dword ptr ds:0B33A78h, 0
0x4460B7: jnz     short loc_4460C6
0x4460B9: push    offset aInteriors; "\r\n\r\n**************** Interiors ****"...
0x4460BE: call    PrintError
0x4460C3: add     esp, 4
0x4460C6: mov     ecx, ds:0B33A78h
0x4460CC: push    ecx
0x4460CD: mov     ecx, ds:0B33A98h
0x4460D3: call    sub_447560
0x4460D8: add     dword ptr ds:0B33A78h, 1
0x4460DF: mov     esi, eax
0x4460E1: test    esi, esi
0x4460E3: jz      loc_446462
0x4460E9: mov     edx, [esi+8]
0x4460EC: shr     edx, 5
0x4460EF: test    dl, 1
0x4460F2: jnz     loc_446462
0x4460F8: mov     ecx, esi
0x4460FA: call    sub_4CBA50
0x4460FF: test    eax, eax
0x446101: jz      loc_446462
0x446107: fld     dword ptr ds:0A31C80h
0x44610D: push    ecx
0x44610E: mov     ecx, offset TimeGlobals
0x446113: fstp    [esp+140h+var_140]; float
0x446116: call    sub_4029E0
0x44611B: mov     ecx, ds:0B3F9ACh
0x446121: mov     eax, ds:0B3F9A8h
0x446126: mov     edx, ds:0B3F9B0h
0x44612C: mov     dword ptr [esp+13Ch+var_124+4], ecx
0x446130: mov     ecx, esi; this
0x446132: mov     dword ptr [esp+13Ch+var_124], eax
0x446136: mov     [esp+13Ch+var_11C], edx
0x44613A: call    TESObjectCELL_IsInterior
0x44613F: test    al, al
0x446141: jnz     short loc_446199
0x446143: mov     ecx, esi; this
0x446145: call    TESObjectCELL_GetXCoordinate
0x44614A: shl     eax, 0Ch
0x44614D: mov     [esp+13Ch+var_12C], eax
0x446151: fild    [esp+13Ch+var_12C]
0x446155: mov     ecx, esi; this
0x446157: fadd    qword ptr ds:0A30F70h
0x44615D: fstp    [esp+13Ch+var_110]
0x446161: call    TESObjectCELL_GetYCoordinate
0x446166: shl     eax, 0Ch
0x446169: mov     [esp+13Ch+var_12C], eax
0x44616D: fild    [esp+13Ch+var_12C]
0x446171: mov     eax, [esp+13Ch+var_110]
0x446175: mov     dword ptr [esp+13Ch+var_124], eax
0x446179: fadd    qword ptr ds:0A30F70h
0x44617F: fstp    [esp+13Ch+var_10C]
0x446183: mov     ecx, [esp+13Ch+var_10C]
0x446187: fldz
0x446189: mov     dword ptr [esp+13Ch+var_124+4], ecx
0x44618D: fstp    [esp+13Ch+var_108]
0x446191: mov     edx, [esp+13Ch+var_108]
0x446195: mov     [esp+13Ch+var_11C], edx
0x446199: mov     ecx, esi; this
0x44619B: call    TESObjectCELL_IsInterior
0x4461A0: test    al, al
0x4461A2: jz      short loc_4461F4
0x4461A4: mov     ecx, esi
0x4461A6: call    sub_4D4310
0x4461AB: push    1
0x4461AD: push    1Ch
0x4461AF: mov     ecx, esi
0x4461B1: call    sub_4CBB20
0x4461B6: test    eax, eax
0x4461B8: jnz     short loc_4461C5
0x4461BA: mov     ecx, esi
0x4461BC: call    sub_4CBA50
0x4461C1: test    eax, eax
0x4461C3: jz      short loc_4461E5
0x4461C5: mov     edx, [eax]
0x4461C7: mov     ecx, eax
0x4461C9: mov     eax, [edx+174h]
0x4461CF: call    eax
0x4461D1: mov     ecx, [eax]
0x4461D3: mov     dword ptr [esp+13Ch+var_124], ecx
0x4461D7: mov     edx, [eax+4]
0x4461DA: mov     dword ptr [esp+13Ch+var_124+4], edx
0x4461DE: mov     eax, [eax+8]
0x4461E1: mov     [esp+13Ch+var_11C], eax
0x4461E5: lea     ecx, [esp+13Ch+var_124]
0x4461E9: push    ecx
0x4461EA: push    esi
0x4461EB: mov     ecx, ebp
0x4461ED: call    sub_4455E0
0x4461F2: jmp     short loc_446241
0x4461F4: cmp     dword ptr [ebp+34h], 0
0x4461F8: lea     edx, [esp+13Ch+var_124]
0x4461FC: mov     ecx, ebp
0x4461FE: jz      short loc_446235
0x446200: push    edx
0x446201: call    sub_445A10
0x446206: lea     eax, [esp+13Ch+var_12C]
0x44620A: push    eax
0x44620B: lea     ecx, [esp+140h+var_124]
0x44620F: push    ecx
0x446210: mov     ecx, esi; this
0x446212: call    sub_4CE3C0
0x446217: mov     ecx, eax
0x446219: call    sub_4C5B50
0x44621E: fldz
0x446220: fld     [esp+13Ch+var_12C]
0x446224: fcom    st(1)
0x446226: fnstsw  ax
0x446228: fstp    st(1)
0x44622A: test    ah, 1
0x44622D: jnz     short loc_44623F
0x44622F: fstp    [esp+13Ch+var_11C]
0x446233: jmp     short loc_446241
0x446235: push    0
0x446237: push    edx
0x446238: call    sub_444FB0
0x44623D: jmp     short loc_446206
0x44623F: fstp    st
0x446241: mov     ecx, ds:0B333C4h; int
0x446247: mov     edx, [ecx+20h]
0x44624A: push    0; char
0x44624C: push    esi; int
0x44624D: sub     esp, 0Ch
0x446250: mov     eax, esp
0x446252: mov     [eax], edx
0x446254: mov     edx, [ecx+24h]
0x446257: mov     [eax+4], edx
0x44625A: mov     edx, [ecx+28h]
0x44625D: mov     [eax+8], edx
0x446260: mov     edx, dword ptr [esp+150h+var_124]
0x446264: sub     esp, 0Ch
0x446267: mov     eax, esp
0x446269: mov     [eax], edx
0x44626B: mov     edx, dword ptr [esp+15Ch+var_124+4]
0x44626F: mov     [eax+4], edx
0x446272: mov     edx, [esp+15Ch+var_11C]
0x446276: mov     [eax+8], edx
0x446279: call    sub_66EAF0
0x44627E: mov     ecx, ds:0B33A10h
0x446284: push    5
0x446286: call    sub_434020
0x44628B: call    _clock
0x446290: sub     eax, [esp+13Ch+var_118]
0x446294: push    0
0x446296: mov     [esp+140h+var_118], eax
0x44629A: fild    [esp+140h+var_118]
0x44629E: mov     ecx, esi; this
0x4462A0: fdiv    qword ptr ds:0A2FC70h
0x4462A6: fstp    [esp+140h+var_128]
0x4462AA: call    TESObjectCELL_GetNiNode?
0x4462AF: push    eax
0x4462B0: call    sub_4A2BA0
0x4462B5: mov     ebp, eax
0x4462B7: mov     eax, ds:0B333A0h
0x4462BC: lea     edi, [eax+78h]
0x4462BF: add     esp, 8
0x4462C2: cmp     dword ptr [edi+4], 0
0x4462C6: mov     ebx, eax
0x4462C8: jz      short loc_4462EE
0x4462CA: lea     ebx, [ebx+0]
0x4462D0: mov     eax, [edi+4]
0x4462D3: mov     ecx, [eax+4]
0x4462D6: push    eax
0x4462D7: mov     [esp+140h+var_118], ecx
0x4462DB: call    FormHeapFree
0x4462E0: mov     edx, [esp+140h+var_118]
0x4462E4: add     esp, 4
0x4462E7: test    edx, edx
0x4462E9: mov     [edi+4], edx
0x4462EC: jnz     short loc_4462D0
0x4462EE: mov     dword ptr [edi], 0
0x4462F4: cmp     dword ptr [ebx+34h], 0
0x4462F8: jz      short loc_446301
0x4462FA: mov     ecx, ebx; this
0x4462FC: call    sub_4425D0
0x446301: mov     eax, ds:0B33398h
0x446306: mov     ecx, [eax+24h]
0x446309: test    ecx, ecx
0x44630B: jz      short loc_446312
0x44630D: call    sub_6AC210
0x446312: push    0
0x446314: push    1
0x446316: mov     ecx, ebx
0x446318: call    sub_43FFF0
0x44631D: push    1
0x44631F: mov     ecx, ebx
0x446321: call    sub_43FE30
0x446326: mov     byte ptr [ebx+0A8h], 1
0x44632D: mov     ecx, ds:0B333A0h; this
0x446333: push    0; a2
0x446335: call    sub_43FC20
0x44633A: mov     ecx, ds:0B33398h
0x446340: push    1
0x446342: call    OSGlobals_PurgeModels
0x446347: mov     ecx, ds:0B333A0h; this
0x44634D: push    0; a2
0x44634F: call    sub_43FC20
0x446354: mov     ecx, esi; this
0x446356: call    TESObjectCELL_IsInterior
0x44635B: test    al, al
0x44635D: mov     ecx, esi; this
0x44635F: jz      short loc_4463C9
0x446361: call    sub_4CB730
0x446366: fld     [esp+13Ch+var_128]
0x44636A: mov     edx, [esi]
0x44636C: push    eax
0x44636D: mov     eax, [edx+0D4h]
0x446373: sub     esp, 8
0x446376: fstp    [esp+148h+var_148]
0x446379: push    ebp
0x44637A: mov     ecx, esi
0x44637C: call    eax
0x44637E: push    eax; ArgList
0x44637F: push    offset aCellSInteriorV; "Cell \"%s\" (Interior) Verts: %d Time: "...
0x446384: call    PrintError
0x446389: add     esp, 18h
0x44638C: push    0
0x44638E: push    0
0x446390: push    0
0x446392: mov     ecx, esi
0x446394: call    sub_4CB730
0x446399: fld     [esp+148h+var_128]
0x44639D: mov     edx, [esi]
0x44639F: push    eax
0x4463A0: mov     eax, [edx+0D4h]
0x4463A6: sub     esp, 8
0x4463A9: fstp    [esp+154h+var_154]
0x4463AC: push    ebp
0x4463AD: mov     ecx, esi
0x4463AF: call    eax
0x4463B1: push    eax
0x4463B2: push    offset aSInteriorD_1fD; "%s\tInterior\t%d\t%.1f\t%d\t%d\t%d\t%d"...
0x4463B7: push    offset FileName; "TestAllCells.xls"
0x4463BC: call    nullsub_return0_0arg
0x4463C1: add     esp, 28h
0x4463C4: jmp     loc_446443
0x4463C9: fld     [esp+13Ch+var_128]
0x4463CD: add     dword ptr ds:0B33A6Ch, 1
0x4463D4: sub     esp, 8
0x4463D7: fstp    [esp+144h+var_148+4]
0x4463DA: push    ebp
0x4463DB: call    TESObjectCELL_GetYCoordinate
0x4463E0: push    eax
0x4463E1: mov     ecx, esi; this
0x4463E3: call    TESObjectCELL_GetXCoordinate
0x4463E8: mov     edx, [esi]
0x4463EA: push    eax
0x4463EB: mov     eax, [edx+0D4h]
0x4463F1: mov     ecx, esi
0x4463F3: call    eax
0x4463F5: push    eax; ArgList
0x4463F6: push    offset aCellSDDVertsDT; "Cell \"%s\" (%d, %d) Verts: %d Time: %."...
0x4463FB: call    PrintError
0x446400: fld     [esp+158h+var_128]
0x446404: add     esp, 1Ch
0x446407: push    0
0x446409: push    0
0x44640B: push    0
0x44640D: sub     esp, 8
0x446410: fstp    [esp+150h+var_154+4]
0x446413: push    ebp
0x446414: mov     ecx, esi; this
0x446416: call    TESObjectCELL_GetYCoordinate
0x44641B: push    eax
0x44641C: mov     ecx, esi; this
0x44641E: call    TESObjectCELL_GetXCoordinate
0x446423: mov     edx, [esi]
0x446425: push    eax
0x446426: mov     eax, [edx+0D4h]
0x44642C: mov     ecx, esi
0x44642E: call    eax
0x446430: push    eax
0x446431: push    offset aSDDD_1fDDD; "%s\t%d, %d\t%d\t%.1f\t%d\t%d\t%d\r\n"
0x446436: push    offset FileName; "TestAllCells.xls"
0x44643B: call    nullsub_return0_0arg
0x446440: add     esp, 2Ch
0x446443: mov     eax, ds:0B33A88h
0x446448: cmp     eax, 4
0x44644B: jz      short loc_446452
0x44644D: cmp     eax, 5
0x446450: jnz     short loc_44645E
0x446452: mov     ecx, ds:0B33B00h
0x446458: push    eax
0x446459: call    sub_466BE0
0x44645E: mov     ebp, [esp+13Ch+var_114]
0x446462: mov     ecx, ds:0B33A78h
0x446468: cmp     ecx, ds:0B33A80h
0x44646E: jb      short loc_4464C8
0x446470: mov     byte ptr [ebp+51h], 0
0x446474: mov     ecx, ds:0B35C24h
0x44647A: test    ecx, ecx
0x44647C: mov     dword ptr ds:0B33A80h, 0
0x446486: mov     byte ptr ds:0B06B18h, 0
0x44648D: jz      short loc_4464C8
0x44648F: mov     edx, [ecx]
0x446491: mov     eax, [edx+58h]
0x446494: call    eax
0x446496: mov     ecx, eax
0x446498: call    sub_8991C0
0x44649D: mov     ecx, [eax+30h]
0x4464A0: mov     edx, [eax+0Ch]
0x4464A3: push    ecx
0x4464A4: push    edx
0x4464A5: lea     eax, [esp+144h+OutputString]
0x4464A9: push    offset aRbsDPhantomsD; "RBs = %d, Phantoms = %d\r\n"
0x4464AE: push    eax
0x4464AF: call    __sprintf
0x4464B4: add     esp, 10h
0x4464B7: lea     ecx, [esp+13Ch+OutputString]
0x4464BB: push    ecx; lpOutputString
0x4464BC: call    dword ptr ds:0A28144h
0x4464C2: call    dword ptr ds:0A28140h
0x4464C8: mov     ecx, [esp+13Ch+var_4]
0x4464CF: pop     edi
0x4464D0: pop     esi
0x4464D1: pop     ebp
0x4464D2: pop     ebx
0x4464D3: xor     ecx, esp
0x4464D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4464DA: add     esp, 12Ch
0x4464E0: retn    8
