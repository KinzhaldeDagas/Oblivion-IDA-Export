0x447050: push    ebx
0x447051: push    esi
0x447052: mov     esi, [esp+8+arg_0]
0x447056: mov     eax, [esi]
0x447058: mov     bl, [esi+8]
0x44705B: mov     edx, [eax+1Ch]
0x44705E: push    edi
0x44705F: mov     edi, [esp+0Ch+arg_4]
0x447063: push    edi
0x447064: mov     ecx, esi
0x447066: and     bl, 1
0x447069: call    edx
0x44706B: test    bl, bl
0x44706D: mov     [esp+10h], al
0x447071: jnz     short loc_44707D
0x447073: mov     ecx, edi
0x447075: call    TESFile_GetIsMaster
0x44707A: push    eax
0x44707B: jmp     short loc_44707F
0x44707D: push    1; a2
0x44707F: mov     ecx, esi; this
0x447081: call    TESForm_SetIsFromMaster
0x447086: mov     ecx, edi
0x447088: call    TESFile_IsActive
0x44708D: test    al, al
0x44708F: jz      short TESDataHandler_LoadForm___Done
0x447091: mov     eax, [esi]
0x447093: mov     edx, [eax+90h]
0x447099: push    1
0x44709B: mov     ecx, esi
0x44709D: call    edx
