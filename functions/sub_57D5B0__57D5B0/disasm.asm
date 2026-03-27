0x57D5B0: push    esi
0x57D5B1: push    edi
0x57D5B2: mov     esi, ecx
0x57D5B4: mov     ecx, ds:0B333C4h; int
0x57D5BA: push    1; char
0x57D5BC: call    sub_668D00
0x57D5C1: mov     ecx, [esi+60h]
0x57D5C4: mov     edi, eax
0x57D5C6: mov     eax, [ecx]
0x57D5C8: mov     edx, [eax+84h]
0x57D5CE: push    1
0x57D5D0: push    edi
0x57D5D1: call    edx
0x57D5D3: fldz
0x57D5D5: sub     esp, 8
0x57D5D8: fst     [esp+10h+var_C]; float
0x57D5DC: fstp    [esp+10h+a2]; float
0x57D5DF: call    sub_5A5900
0x57D5E4: mov     ecx, 0FFFEh
0x57D5E9: and     [edi+18h], cx
0x57D5ED: mov     eax, [esi+60h]
0x57D5F0: and     [eax+18h], cx
0x57D5F4: mov     ecx, [esi+60h]
0x57D5F7: add     esp, 8
0x57D5FA: call    NiNode_UpdateDynamicEffectState
0x57D5FF: mov     ecx, [esi+60h]; this
0x57D602: call    NiAVObject_InitializePropertyState
0x57D607: push    1
0x57D609: call    GetShadowSceneNode
0x57D60E: push    eax
0x57D60F: push    edi
0x57D610: call    sub_7C7050
0x57D615: mov     ecx, ds:0B333C4h; int
0x57D61B: add     esp, 0Ch
0x57D61E: call    sub_664C40
0x57D623: fldz
0x57D625: push    0; a3
0x57D627: push    ecx
0x57D628: mov     ecx, [esi+60h]; this
0x57D62B: fstp    [esp+10h+a2]; a2
0x57D62E: call    NiAVObject_UpdateNiAVObject
0x57D633: pop     edi
0x57D634: pop     esi
0x57D635: retn
