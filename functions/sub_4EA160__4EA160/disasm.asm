0x4EA160: push    0FFFFFFFFh
0x4EA162: push    offset SEH_4EA160
0x4EA167: mov     eax, large fs:0
0x4EA16D: push    eax
0x4EA16E: sub     esp, 20h
0x4EA171: push    ebx
0x4EA172: push    ebp
0x4EA173: push    esi
0x4EA174: push    edi
0x4EA175: mov     eax, ds:0B30AACh
0x4EA17A: xor     eax, esp
0x4EA17C: push    eax
0x4EA17D: lea     eax, [esp+40h+var_C]
0x4EA181: mov     large fs:0, eax
0x4EA187: cmp     byte ptr ds:0B09B48h, 0
0x4EA18E: jnz     loc_4EA388
0x4EA194: mov     ecx, ds:0B333A0h
0x4EA19A: xor     ebx, ebx
0x4EA19C: cmp     [ecx+34h], ebx
0x4EA19F: jnz     loc_4EA388
0x4EA1A5: call    TES__GetCurrentWorldspace
0x4EA1AA: mov     edi, eax
0x4EA1AC: cmp     edi, ebx
0x4EA1AE: mov     esi, edi
0x4EA1B0: jz      short loc_4EA229
0x4EA1B2: mov     ecx, edi
0x4EA1B4: call    TESWorldSpace_GetParentWorldpsace
0x4EA1B9: test    eax, eax
0x4EA1BB: jz      short loc_4EA1D4
0x4EA1BD: lea     ecx, [ecx+0]
0x4EA1C0: mov     ecx, edi
0x4EA1C2: call    TESWorldSpace_GetParentWorldpsace
0x4EA1C7: mov     edi, eax
0x4EA1C9: mov     ecx, edi
0x4EA1CB: call    TESWorldSpace_GetParentWorldpsace
0x4EA1D0: test    eax, eax
0x4EA1D2: jnz     short loc_4EA1C0
0x4EA1D4: push    4
0x4EA1D6: mov     ecx, esi
0x4EA1D8: call    sub_4EF2D0
0x4EA1DD: test    al, al
0x4EA1DF: jnz     short loc_4EA1FE
0x4EA1E1: cmp     ds:0B3608Fh, bl
0x4EA1E7: jz      short loc_4EA1FE
0x4EA1E9: push    ebx
0x4EA1EA: call    sub_4EB0E0
0x4EA1EF: add     esp, 4
0x4EA1F2: call    sub_4BDD40
0x4EA1F7: call    sub_4BDCD0
0x4EA1FC: jmp     short loc_4EA229
0x4EA1FE: push    4
0x4EA200: mov     ecx, esi
0x4EA202: call    sub_4EF2D0
0x4EA207: test    al, al
0x4EA209: jz      short loc_4EA229
0x4EA20B: cmp     ds:0B3608Fh, bl
0x4EA211: jnz     short loc_4EA235
0x4EA213: cmp     ds:0B02D70h, bl
0x4EA219: jz      loc_4EA388
0x4EA21F: push    1
0x4EA221: call    sub_4EB0E0
0x4EA226: add     esp, 4
0x4EA229: cmp     ds:0B3608Fh, bl
0x4EA22F: jz      loc_4EA388
0x4EA235: cmp     byte ptr [esp+40h+arg_10], bl
0x4EA239: jnz     short loc_4EA25E
0x4EA23B: fldz
0x4EA23D: push    ecx
0x4EA23E: mov     ecx, ds:0B333A0h
0x4EA244: fstp    [esp+44h+var_44]; float
0x4EA247: lea     eax, [esp+44h+var_1C]
0x4EA24B: push    eax; int
0x4EA24C: call    sub_43F720
0x4EA251: lea     ecx, [esp+40h+var_1C]
0x4EA255: push    ecx
0x4EA256: call    sub_7B4520
0x4EA25B: add     esp, 4
0x4EA25E: mov     [esp+40h+var_20], ebx
0x4EA262: fld     [esp+40h+arg_0]
0x4EA266: fstp    [esp+40h+var_1C]
0x4EA26A: mov     [esp+40h+var_4], ebx
0x4EA26E: fld     [esp+40h+arg_4]
0x4EA272: fstp    [esp+40h+var_18]
0x4EA276: fld     qword ptr ds:0A3D0C0h
0x4EA27C: call    __CIsqrt
0x4EA281: fstp    [esp+40h+var_24]
0x4EA285: fld     [esp+40h+var_24]
0x4EA289: fstp    [esp+40h+var_24]
0x4EA28D: call    sub_483850
0x4EA292: test    eax, eax
0x4EA294: mov     [esp+40h+var_28], eax
0x4EA298: fild    [esp+40h+var_28]
0x4EA29C: jge     short loc_4EA2A4
0x4EA29E: fadd    dword ptr ds:0A2FC78h
0x4EA2A4: fmul    qword ptr ds:0A37650h
0x4EA2AA: fmul    [esp+40h+var_24]
0x4EA2AE: fstp    [esp+40h+var_24]
0x4EA2B2: fld     dword ptr ds:0B09AF8h
0x4EA2B8: fld     [esp+40h+var_24]
0x4EA2BC: fcom    st(1)
0x4EA2BE: fnstsw  ax
0x4EA2C0: test    ah, 5
0x4EA2C3: jp      short loc_4EA2C9
0x4EA2C5: fstp    st
0x4EA2C7: jmp     short loc_4EA2CB
0x4EA2C9: fstp    st(1)
0x4EA2CB: mov     esi, [esp+40h+arg_C]
0x4EA2CF: fstp    [esp+40h+var_28]
0x4EA2D3: mov     ecx, esi
0x4EA2D5: call    sub_6A9030
0x4EA2DA: cmp     eax, ebx
0x4EA2DC: mov     [esp+40h+var_24], eax
0x4EA2E0: jz      short loc_4EA357
0x4EA2E2: mov     ebp, [esp+40h+var_18]
0x4EA2E6: mov     ebx, [esp+40h+var_1C]
0x4EA2EA: lea     ebx, [ebx+0]
0x4EA2F0: lea     edx, [esp+40h+var_2C]
0x4EA2F4: push    edx
0x4EA2F5: lea     eax, [esp+44h+var_1C]
0x4EA2F9: push    eax
0x4EA2FA: lea     ecx, [esp+48h+var_24]
0x4EA2FE: push    ecx
0x4EA2FF: mov     ecx, esi
0x4EA301: mov     [esp+4Ch+var_2C], 0
0x4EA309: call    sub_452600
0x4EA30E: cmp     byte ptr ds:0B3608Fh, 0
0x4EA315: mov     edx, [esp+40h+var_2C]
0x4EA319: mov     ecx, [edx]
0x4EA31B: mov     eax, ds:0B333A0h
0x4EA320: jz      short loc_4EA347
0x4EA322: cmp     dword ptr [eax+34h], 0
0x4EA326: jnz     short loc_4EA347
0x4EA328: cmp     edi, [esi+10h]
0x4EA32B: jnz     short loc_4EA347
0x4EA32D: mov     edx, [esp+40h+arg_10]
0x4EA331: fld     [esp+40h+var_28]
0x4EA335: mov     eax, [eax+10h]
0x4EA338: push    edx; int
0x4EA339: push    ebp; float
0x4EA33A: push    ebx; float
0x4EA33B: push    ecx
0x4EA33C: fstp    [esp+50h+var_50]; float
0x4EA33F: push    eax; int
0x4EA340: call    sub_4ED430
0x4EA345: jmp     short loc_4EA350
0x4EA347: mov     eax, [eax+10h]
0x4EA34A: push    eax
0x4EA34B: call    sub_4ECAE0
0x4EA350: cmp     [esp+40h+var_24], 0
0x4EA355: jnz     short loc_4EA2F0
0x4EA357: mov     eax, ds:0B333A0h
0x4EA35C: mov     ecx, [eax+10h]; this
0x4EA35F: call    NiAVObject_InitializePropertyState
0x4EA364: mov     ecx, ds:0B333A0h
0x4EA36A: mov     ecx, [ecx+10h]
0x4EA36D: call    NiNode_UpdateDynamicEffectState
0x4EA372: fldz
0x4EA374: mov     edx, ds:0B333A0h
0x4EA37A: mov     ecx, [edx+10h]; this
0x4EA37D: push    1; a3
0x4EA37F: push    ecx
0x4EA380: fstp    [esp+48h+a2]; a2
0x4EA383: call    NiAVObject_UpdateNiAVObject
0x4EA388: mov     ecx, [esp+40h+var_C]
0x4EA38C: mov     large fs:0, ecx
0x4EA393: pop     ecx
0x4EA394: pop     edi
0x4EA395: pop     esi
0x4EA396: pop     ebp
0x4EA397: pop     ebx
0x4EA398: add     esp, 2Ch
0x4EA39B: retn
