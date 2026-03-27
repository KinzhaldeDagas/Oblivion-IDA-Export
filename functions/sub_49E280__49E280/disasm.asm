0x49E280: push    0FFFFFFFFh
0x49E282: push    offset SEH_49E280
0x49E287: mov     eax, large fs:0
0x49E28D: push    eax
0x49E28E: sub     esp, 1Ch
0x49E291: push    ebx
0x49E292: push    ebp
0x49E293: push    esi
0x49E294: push    edi
0x49E295: mov     eax, ds:0B30AACh
0x49E29A: xor     eax, esp
0x49E29C: push    eax
0x49E29D: lea     eax, [esp+3Ch+var_C]
0x49E2A1: mov     large fs:0, eax
0x49E2A7: mov     ebp, ecx
0x49E2A9: mov     eax, ds:0B35234h
0x49E2AE: xor     edi, edi
0x49E2B0: cmp     eax, edi
0x49E2B2: mov     byte ptr ds:0B35229h, 1
0x49E2B9: jnz     loc_49E4D0
0x49E2BF: mov     eax, ds:0B333A0h
0x49E2C4: cmp     [eax+34h], edi
0x49E2C7: jnz     loc_49E4D6
0x49E2CD: push    0DCh ; 'Ü'; Size
0x49E2D2: call    FormHeapAlloc
0x49E2D7: add     esp, 4
0x49E2DA: mov     [esp+3Ch+var_1C], eax
0x49E2DE: cmp     eax, edi
0x49E2E0: mov     [esp+3Ch+var_4], edi
0x49E2E4: jz      short loc_49E2F0
0x49E2E6: push    edi
0x49E2E7: mov     ecx, eax; this
0x49E2E9: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x49E2EE: jmp     short loc_49E2F2
0x49E2F0: xor     eax, eax
0x49E2F2: push    eax; a2
0x49E2F3: mov     ecx, offset LodWaterRoot; this
0x49E2F8: mov     [esp+40h+var_4], 0FFFFFFFFh
0x49E300: call    NiSmartPointer_Set??
0x49E305: mov     ecx, ds:0B35234h
0x49E30B: push    offset aLodwaterroot; "LODWaterRoot"
0x49E310: call    NiObjectNET_SetName
0x49E315: mov     ecx, ds:0B333A8h
0x49E31B: mov     edx, [ecx]
0x49E31D: mov     eax, ds:0B35234h
0x49E322: mov     edx, [edx+84h]
0x49E328: push    edi
0x49E329: push    eax
0x49E32A: call    edx
0x49E32C: fldz
0x49E32E: fst     [esp+3Ch+var_24]
0x49E332: fst     [esp+3Ch+var_28]
0x49E336: fst     [esp+3Ch+var_20]
0x49E33A: fst     [esp+3Ch+var_1C]
0x49E33E: fst     [esp+3Ch+var_10]
0x49E342: fld     dword ptr ds:0A3F4F0h
0x49E348: mov     ebx, [esp+3Ch+var_10]
0x49E34C: fld     dword ptr ds:0A3F4ECh
0x49E352: fld     dword ptr ds:0A3F4E8h
0x49E358: fld     dword ptr ds:0A3F4E4h
0x49E35E: fld     dword ptr ds:0A3F4E0h
0x49E364: jmp     short loc_49E39E
0x49E366: jmp     short loc_49E370
0x49E368: align 10h
0x49E370: fld     dword ptr ds:0A3F4E8h
0x49E376: fld     dword ptr ds:0A3F4ECh
0x49E37C: fld     dword ptr ds:0A3F4F0h
0x49E382: fldz
0x49E384: fld     dword ptr ds:0A3F4E0h
0x49E38A: fld     dword ptr ds:0A3F4E4h
0x49E390: fxch    st(2)
0x49E392: fxch    st(5)
0x49E394: fxch    st(3)
0x49E396: fxch    st(4)
0x49E398: fxch    st(3)
0x49E39A: fxch    st(2)
0x49E39C: fxch    st(1)
0x49E39E: cmp     edi, 3; switch 4 cases
0x49E3A1: ja      short def_49E3A3
0x49E3A3: jmp     ds:jpt_49E3A3[edi*4]; switch jump
0x49E3AA: fstp    st(1); jumptable 0049E3A3 case 0
0x49E3AC: fstp    st
0x49E3AE: fxch    st(2)
0x49E3B0: fstp    [esp+3Ch+var_24]
0x49E3B4: fstp    [esp+3Ch+var_28]
0x49E3B8: fstp    [esp+3Ch+var_20]
0x49E3BC: fstp    [esp+3Ch+var_1C]
0x49E3C0: jmp     short loc_49E408
0x49E3C2: fstp    st(2); jumptable 0049E3A3 case 1
0x49E3C4: fstp    st(1)
0x49E3C6: fxch    st(2)
0x49E3C8: fstp    [esp+3Ch+var_24]
0x49E3CC: fstp    [esp+3Ch+var_28]
0x49E3D0: fstp    [esp+3Ch+var_20]
0x49E3D4: fstp    [esp+3Ch+var_1C]
0x49E3D8: jmp     short loc_49E408
0x49E3DA: fstp    st(3); jumptable 0049E3A3 case 2
0x49E3DC: fstp    st
0x49E3DE: fxch    st(1)
0x49E3E0: fstp    [esp+3Ch+var_24]
0x49E3E4: fxch    st(1)
0x49E3E6: fstp    [esp+3Ch+var_28]
0x49E3EA: fxch    st(1)
0x49E3EC: fstp    [esp+3Ch+var_20]
0x49E3F0: fstp    [esp+3Ch+var_1C]
0x49E3F4: jmp     short loc_49E408
0x49E3F6: fstp    st(3); jumptable 0049E3A3 case 3
0x49E3F8: fstp    st(1)
0x49E3FA: jmp     short loc_49E3DE
