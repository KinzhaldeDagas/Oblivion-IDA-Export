0x4EA750: push    0FFFFFFFFh
0x4EA752: push    offset SEH_8C8970
0x4EA757: mov     eax, large fs:0
0x4EA75D: push    eax
0x4EA75E: sub     esp, 8
0x4EA761: push    esi
0x4EA762: mov     eax, ds:0B30AACh
0x4EA767: xor     eax, esp
0x4EA769: push    eax
0x4EA76A: lea     eax, [esp+1Ch+var_C]
0x4EA76E: mov     large fs:0, eax
0x4EA774: fld     dword ptr ds:0B09B18h
0x4EA77A: fcomp   qword ptr ds:0A47A30h
0x4EA780: fnstsw  ax
0x4EA782: test    ah, 5
0x4EA785: jp      short loc_4EA78F
0x4EA787: fldz
0x4EA789: fstp    dword ptr ds:0B09B18h
0x4EA78F: mov     eax, ds:0B06A2Ch
0x4EA794: fld     dword ptr ds:0B09B18h
0x4EA79A: shl     eax, 0Ch
0x4EA79D: fstp    [esp+1Ch+var_14]
0x4EA7A1: test    eax, eax
0x4EA7A3: mov     [esp+1Ch+var_10], eax
0x4EA7A7: fild    [esp+1Ch+var_10]
0x4EA7AB: jge     short loc_4EA7B3
0x4EA7AD: fadd    dword ptr ds:0A2FC78h
0x4EA7B3: fstp    [esp+1Ch+var_10]
0x4EA7B7: fld     [esp+1Ch+var_14]
0x4EA7BB: fld     [esp+1Ch+var_10]
0x4EA7BF: fcom    st(1)
0x4EA7C1: fnstsw  ax
0x4EA7C3: fstp    st(1)
0x4EA7C5: test    ah, 5
0x4EA7C8: jp      short loc_4EA7D0
0x4EA7CA: fstp    [esp+1Ch+var_14]
0x4EA7CE: jmp     short loc_4EA7D2
0x4EA7D0: fstp    st
0x4EA7D2: fld     [esp+1Ch+var_14]
0x4EA7D6: push    0
0x4EA7D8: fstp    dword ptr ds:0B36090h
0x4EA7DE: call    GetShadowSceneNode
0x4EA7E3: push    0DCh ; 'Ü'; Size
0x4EA7E8: mov     esi, eax
0x4EA7EA: call    FormHeapAlloc
0x4EA7EF: add     esp, 8
0x4EA7F2: mov     [esp+1Ch+var_10], eax
0x4EA7F6: test    eax, eax
0x4EA7F8: mov     [esp+1Ch+var_4], 0
0x4EA800: jz      short loc_4EA80D
0x4EA802: push    0
0x4EA804: mov     ecx, eax; this
0x4EA806: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4EA80B: jmp     short loc_4EA80F
0x4EA80D: xor     eax, eax
0x4EA80F: push    offset aGrass; "Grass"
0x4EA814: mov     ecx, eax
0x4EA816: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4EA81E: mov     ds:0B36094h, eax
0x4EA823: call    NiObjectNET_SetName
0x4EA828: mov     edx, [esi]
0x4EA82A: mov     eax, ds:0B36094h
0x4EA82F: mov     edx, [edx+84h]
0x4EA835: push    0
0x4EA837: push    eax
0x4EA838: mov     ecx, esi
0x4EA83A: call    edx
0x4EA83C: mov     eax, ds:0B333A0h
0x4EA841: test    eax, eax
0x4EA843: jz      short loc_4EA87A
0x4EA845: mov     eax, [eax+5Ch]
0x4EA848: test    eax, eax
0x4EA84A: jz      short loc_4EA87A
0x4EA84C: mov     eax, [eax+20h]
0x4EA84F: test    eax, eax
0x4EA851: jz      short loc_4EA87A
0x4EA853: mov     ecx, eax
0x4EA855: call    TESEnchantableForm_GetCastingType
0x4EA85A: test    eax, eax
0x4EA85C: jz      short loc_4EA87A
0x4EA85E: mov     eax, ds:0B333A0h
0x4EA863: mov     ecx, [eax+5Ch]
0x4EA866: mov     ecx, [ecx+20h]
0x4EA869: call    TESEnchantableForm_GetCastingType
0x4EA86E: mov     ecx, ds:0B36094h; this
0x4EA874: push    eax; a2
0x4EA875: call    sub_405680
0x4EA87A: mov     ecx, ds:0B36094h; this
0x4EA880: call    NiAVObject_InitializePropertyState
0x4EA885: mov     byte ptr ds:0B3608Dh, 1
0x4EA88C: mov     ecx, dword ptr [esp+1Ch+var_C]
0x4EA890: mov     large fs:0, ecx
0x4EA897: pop     ecx
0x4EA898: pop     esi
0x4EA899: add     esp, 14h
0x4EA89C: retn
