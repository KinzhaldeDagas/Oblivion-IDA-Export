0x4D7570: push    ecx
0x4D7571: fld     dword ptr ds:0A30634h
0x4D7577: push    esi
0x4D7578: mov     esi, ecx
0x4D757A: fstp    [esp+8+var_4]
0x4D757E: mov     eax, [esi]
0x4D7580: mov     edx, [eax+190h]
0x4D7586: call    edx
0x4D7588: test    al, al
0x4D758A: mov     eax, [esi]
0x4D758C: mov     ecx, esi
0x4D758E: jz      short TESObjectREFR_GetHealth___CastToHealthForm
0x4D7590: mov     edx, [eax+284h]
0x4D7596: push    8
0x4D7598: call    edx
0x4D759A: mov     [esp+8+var_4], eax
0x4D759E: fild    [esp+8+var_4]
0x4D75A2: pop     esi
0x4D75A3: fstp    [esp+4+var_4]
0x4D75A6: fld     [esp+4+var_4]
0x4D75A9: pop     ecx
0x4D75AA: retn
0x4D75AB: mov     edx, [eax+170h]
0x4D75B1: push    edi
0x4D75B2: push    0; int
0x4D75B4: push    offset ??_R0?AVTESHealthForm@@@8; struct TypeDescriptor *
0x4D75B9: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4D75BE: push    0; int
0x4D75C0: call    edx
0x4D75C2: push    eax; void *
0x4D75C3: call    OblivionDynamicCast
0x4D75C8: mov     edi, eax
0x4D75CA: add     esp, 14h
0x4D75CD: test    edi, edi
0x4D75CF: jz      short TESObjectREFR_GetHealth___Done
0x4D75D1: push    2Bh ; '+'; a2
0x4D75D3: lea     ecx, [esi+44h]; this
0x4D75D6: call    BaseExtraList_GetExtraData
0x4D75DB: test    eax, eax
0x4D75DD: jz      short loc_4D75ED
0x4D75DF: fld     dword ptr [eax+0Ch]
0x4D75E2: pop     edi
0x4D75E3: fstp    [esp+8+var_4]
0x4D75E7: pop     esi
0x4D75E8: fld     [esp+4+var_4]
0x4D75EB: pop     ecx
0x4D75EC: retn
0x4D75ED: mov     eax, [edi]
0x4D75EF: mov     edx, [eax+10h]
0x4D75F2: mov     ecx, edi
0x4D75F4: call    edx
0x4D75F6: test    eax, eax
0x4D75F8: mov     [esp+0Ch+var_4], eax
0x4D75FC: fild    [esp+0Ch+var_4]
0x4D7600: jge     short loc_4D7608
0x4D7602: fadd    dword ptr ds:0A2FC78h
0x4D7608: fstp    [esp+0Ch+var_4]
0x4D760C: fld     [esp+0Ch+var_4]
0x4D7610: pop     edi
0x4D7611: pop     esi
0x4D7612: pop     ecx
0x4D7613: retn
