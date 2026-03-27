0x527220: push    0FFFFFFFFh
0x527222: push    offset TESNPC_constr_SEH
0x527227: mov     eax, large fs:0
0x52722D: push    eax
0x52722E: push    ecx
0x52722F: push    ebx
0x527230: push    ebp
0x527231: push    esi
0x527232: push    edi
0x527233: mov     eax, ds:0B30AACh
0x527238: xor     eax, esp
0x52723A: push    eax
0x52723B: lea     eax, [esp+24h+var_C]
0x52723F: mov     large fs:0, eax
0x527245: mov     esi, ecx
0x527247: mov     [esp+24h+var_10], esi
0x52724B: call    TESActorBase_constr
0x527250: lea     ebx, [esi+0E4h]
0x527256: xor     ebp, ebp
0x527258: mov     ecx, ebx; this
0x52725A: mov     [esp+24h+var_4], ebp
0x52725E: call    ??0DNameNode@@IAE@XZ_0; DNameNode::DNameNode(void)
0x527263: push    offset sub_43ACE0; a5
0x527268: push    offset sub_43EB30; a4
0x52726D: push    4; size
0x52726F: push    18h; a2
0x527271: lea     eax, [esi+108h]
0x527277: lea     edi, [esi+68h]
0x52727A: push    eax; a1
0x52727B: mov     dword ptr [esi], offset ??_7TESNPC@@6BTESNPC@@@; const TESNPC::`vftable'{for `TESNPC'}
0x527281: mov     dword ptr [esi+24h], offset ??_7TESNPC@@6BTESActorBaseData@@@; const TESNPC::`vftable'{for `TESActorBaseData'}
0x527288: mov     dword ptr [esi+44h], offset ??_7TESNPC@@6BTESContainer@@@; const TESNPC::`vftable'{for `TESContainer'}
0x52728F: mov     dword ptr [esi+54h], offset ??_7TESNPC@@6BTESSpellList@@@; const TESNPC::`vftable'{for `TESSpellList'}
0x527296: mov     dword ptr [edi], offset ??_7TESNPC@@6BTESAIForm@@@; const TESNPC::`vftable'{for `TESAIForm'}
0x52729C: mov     dword ptr [esi+80h], offset ??_7TESNPC@@6BTESHealthForm@@@; const TESNPC::`vftable'{for `TESHealthForm'}
0x5272A6: mov     dword ptr [esi+88h], offset ??_7TESNPC@@6BTESAttributes@@@; const TESNPC::`vftable'{for `TESAttributes'}
0x5272B0: mov     dword ptr [esi+94h], offset ??_7TESNPC@@6BTESAnimation@@@; const TESNPC::`vftable'{for `TESAnimation'}
0x5272BA: mov     dword ptr [esi+0A0h], offset ??_7TESNPC@@6BTESFullName@@@; const TESNPC::`vftable'{for `TESFullName'}
0x5272C4: mov     dword ptr [esi+0ACh], offset ??_7TESNPC@@6BTESModel@@@; const TESNPC::`vftable'{for `TESModel'}
0x5272CE: mov     dword ptr [esi+0C4h], offset ??_7TESNPC@@6BTESScriptableForm@@@; const TESNPC::`vftable'{for `TESScriptableForm'}
0x5272D8: mov     dword ptr [ebx], offset ??_7TESNPC@@6BTESRaceForm@@@; const TESNPC::`vftable'{for `TESRaceForm'}
0x5272DE: call    ArrayConstructor
0x5272E3: push    offset sub_43ACE0; a5
0x5272E8: push    offset sub_43EB30; a4
0x5272ED: push    4; size
0x5272EF: push    18h; a2
0x5272F1: lea     ecx, [esi+168h]
0x5272F7: mov     ebx, 1
0x5272FC: push    ecx; a1
0x5272FD: mov     byte ptr [esp+38h+var_4], bl
0x527301: call    ArrayConstructor
0x527306: mov     [esi+1D4h], ebp
0x52730C: mov     [esi+1D8h], ebp
0x527312: mov     [esi+1DCh], ebp
0x527318: mov     dword ptr [esi+1F0h], offset ??_7?$NiTArray@PAUFaceGenUndo@@@@6B@; const NiTArray<FaceGenUndo *>::`vftable'
0x527322: mov     [esi+1F8h], bp
0x527329: mov     [esi+1FEh], bx
0x527330: mov     [esi+1FAh], bp
0x527337: mov     [esi+1FCh], bp
0x52733E: mov     [esi+1F4h], ebp
0x527344: mov     ecx, esi
0x527346: mov     byte ptr [esp+24h+var_4], 6
0x52734B: mov     byte ptr [esi+4], 23h ; '#'
0x52734F: call    sub_5255A0
0x527354: push    32h ; '2'
0x527356: mov     ecx, edi
0x527358: call    TESAIForm_SetResponsibility
0x52735D: push    5
0x52735F: mov     ecx, edi
0x527361: call    TESAIForm_SetAggression
0x527366: push    32h ; '2'
0x527368: mov     ecx, edi
0x52736A: call    TESAIForm_SetConfidence
0x52736F: push    32h ; '2'
0x527371: mov     ecx, edi
0x527373: call    TESAIForm_SetEnergy
0x527378: mov     [esi+1ECh], ebp
0x52737E: mov     eax, esi
0x527380: mov     ecx, dword ptr [esp+24h+var_C]
0x527384: mov     large fs:0, ecx
0x52738B: pop     ecx
0x52738C: pop     edi
0x52738D: pop     esi
0x52738E: pop     ebp
0x52738F: pop     ebx
0x527390: add     esp, 10h
0x527393: retn
