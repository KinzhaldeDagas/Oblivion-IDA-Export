0x65FAD0: push    ecx
0x65FAD1: fld1
0x65FAD3: push    esi
0x65FAD4: push    edi
0x65FAD5: fstp    [esp+0Ch+var_4]
0x65FAD9: mov     edi, [esp+0Ch+arg_0]
0x65FADD: test    edi, edi
0x65FADF: mov     esi, ecx
0x65FAE1: jz      short loc_65FB1E
0x65FAE3: call    Actor_GetBaseClass
0x65FAE8: test    eax, eax
0x65FAEA: jz      short loc_65FB1E
0x65FAEC: mov     eax, [edi+2Ch]
0x65FAEF: fld1
0x65FAF1: lea     ecx, [eax-0Ch]
0x65FAF4: fstp    [esp+0Ch+arg_0]
0x65FAF8: cmp     ecx, 14h
0x65FAFB: ja      short loc_65FB16
0x65FAFD: push    eax
0x65FAFE: push    2
0x65FB00: call    ActorValue_GetGroupOffsetFromAV
0x65FB05: movsx   edx, al
0x65FB08: add     esp, 8
0x65FB0B: fld     dword ptr [esi+edx*4+7A4h]
0x65FB12: fstp    [esp+0Ch+arg_0]
0x65FB16: fld     [esp+0Ch+arg_0]
0x65FB1A: fstp    [esp+0Ch+var_4]
0x65FB1E: fld     [esp+0Ch+var_4]
0x65FB22: pop     edi
0x65FB23: pop     esi
0x65FB24: pop     ecx
0x65FB25: retn    4
