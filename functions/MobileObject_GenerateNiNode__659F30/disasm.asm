0x659F30: push    esi; MobileObject GenerateNiNode override. Calls TESObjectREFR_GenerateNiNode, forwards matching model extra data to the process when present, conditionally registers the result as a shadow caster, and returns NiNode*. Native ABI has no stack/x87 inputs.
0x659F31: push    edi; int
0x659F32: mov     esi, ecx
0x659F34: call    TESObjectREFR_GenerateNiNode; TESObjectREFR vtable GenerateNiNode base implementation. Native ABI has no stack/x87 inputs and returns the generated NiNode*. Prior ST0/ST1/ST2 parameters were decompiler artifacts.
0x659F39: mov     edi, eax
0x659F3B: test    edi, edi
0x659F3D: jz      short loc_659F63
0x659F3F: cmp     dword ptr [esi+58h], 0
0x659F43: jz      short loc_659F63
0x659F45: push    offset off_A7D2CC
0x659F4A: mov     ecx, edi
0x659F4C: call    NiObjectNET_GetExtraData; NiObjectNET::GetExtraData(name), native RET 4 behavior. Player shadow BBX lookups remain native after Pass247 rollback.
0x659F51: test    eax, eax
0x659F53: jz      short loc_659F63
0x659F55: mov     ecx, [esi+58h]
0x659F58: mov     edx, [ecx]
0x659F5A: push    eax
0x659F5B: mov     eax, [edx+470h]
0x659F61: call    eax
0x659F63: mov     edx, [esi]
0x659F65: mov     eax, [edx+190h]
0x659F6B: mov     ecx, esi
0x659F6D: call    eax
0x659F6F: test    al, al
0x659F71: jz      short loc_659F85
0x659F73: push    edi
0x659F74: push    0
0x659F76: call    GetShadowSceneNode
0x659F7B: add     esp, 4
0x659F7E: mov     ecx, eax
0x659F80: call    ShadowSceneNodeAddShadowCaster; Direct retail AddShadowCaster caller in MobileObject_GenerateNiNode.
0x659F85: mov     eax, edi
0x659F87: pop     edi
0x659F88: pop     esi
0x659F89: retn
