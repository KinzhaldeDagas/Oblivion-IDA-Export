0x499E40: mov     ecx, ds:0B333A0h
0x499E46: sub     esp, 10h
0x499E49: call    TES_GetCurrentCell
0x499E4E: test    eax, eax
0x499E50: jz      loc_499EE9
0x499E56: cmp     dword ptr ds:0B35234h, 0
0x499E5D: jz      loc_499EE9
0x499E63: mov     ecx, ds:0B333A0h
0x499E69: push    esi
0x499E6A: call    TES_GetCurrentCell
0x499E6F: mov     esi, eax
0x499E71: mov     ecx, esi; this
0x499E73: call    TESObjectCELL_GetXCoordinate
0x499E78: shl     eax, 0Ch
0x499E7B: add     eax, 800h
0x499E80: mov     [esp+14h+var_10], eax
0x499E84: fild    [esp+14h+var_10]
0x499E88: mov     ecx, esi; this
0x499E8A: fstp    [esp+14h+var_C]
0x499E8E: call    TESObjectCELL_GetYCoordinate
0x499E93: mov     ecx, [esp+14h+var_C]
0x499E97: shl     eax, 0Ch
0x499E9A: add     eax, 800h
0x499E9F: mov     [esp+14h+var_10], eax
0x499EA3: fild    [esp+14h+var_10]
0x499EA7: mov     eax, ds:0B35234h
0x499EAC: add     eax, 54h ; 'T'
0x499EAF: mov     [eax], ecx
0x499EB1: fstp    [esp+14h+var_8]
0x499EB5: mov     edx, [esp+14h+var_8]
0x499EB9: fldz
0x499EBB: mov     [eax+4], edx
0x499EBE: fst     [esp+14h+var_4]
0x499EC2: push    1; a3
0x499EC4: mov     ecx, [esp+18h+var_4]
0x499EC8: push    ecx
0x499EC9: mov     [eax+8], ecx
0x499ECC: fstp    [esp+1Ch+a2]; a2
0x499ECF: mov     ecx, ds:0B35234h; this
0x499ED5: call    NiAVObject_UpdateNiAVObject
0x499EDA: mov     ecx, ds:0B35234h
0x499EE0: pop     esi
0x499EE1: add     esp, 10h
0x499EE4: jmp     NiNode_UpdateDynamicEffectState
0x499EE9: add     esp, 10h
0x499EEC: retn
