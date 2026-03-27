0x5203E0: sub     esp, 8
0x5203E3: push    esi
0x5203E4: mov     esi, ecx
0x5203E6: call    TESForm_InitializeFormRecord
0x5203EB: push    54444F4Dh
0x5203F0: push    42444F4Dh
0x5203F5: push    4C444F4Dh
0x5203FA: lea     ecx, [esi+18h]
0x5203FD: call    TESModel_Save
0x520402: lea     ecx, [esi+30h]
0x520405: call    sub_56A450
0x52040A: push    1; Size
0x52040C: lea     eax, [esi+38h]
0x52040F: push    eax; Src
0x520410: push    4D414E41h; int
0x520415: call    TESForm_PutFormRecordChunkData
0x52041A: xor     eax, eax
0x52041C: mov     [esp+18h+Src], eax
0x520420: mov     [esp+18h+var_4], eax
0x520424: mov     eax, [esi+40h]
0x520427: add     esp, 0Ch
0x52042A: test    eax, eax
0x52042C: jz      short loc_520435
0x52042E: mov     ecx, [eax+0Ch]
0x520431: mov     [esp+0Ch+Src], ecx
0x520435: mov     edx, [esi+8]
0x520438: shr     edx, 5
0x52043B: test    dl, 1
0x52043E: jnz     short loc_520462
0x520440: mov     eax, [esi+44h]
0x520443: test    eax, eax
0x520445: jz      short loc_520462
0x520447: mov     ecx, [eax+8]
0x52044A: shr     ecx, 5
0x52044D: test    cl, 1
0x520450: jz      short loc_52045B
0x520452: mov     eax, [eax+44h]
0x520455: test    eax, eax
0x520457: jnz     short loc_520447
0x520459: jmp     short loc_520462
0x52045B: mov     edx, [eax+0Ch]
0x52045E: mov     [esp+0Ch+var_4], edx
0x520462: push    8; Size
0x520464: lea     eax, [esp+10h+Src]
0x520468: push    eax; Src
0x520469: push    41544144h; int
0x52046E: call    TESForm_PutFormRecordChunkData
0x520473: add     esp, 0Ch
0x520476: mov     ecx, esi; this
0x520478: call    TESForm_FinalizeFormRecord
0x52047D: pop     esi
0x52047E: add     esp, 8
0x520481: retn
