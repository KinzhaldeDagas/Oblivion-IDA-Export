0x46C300: push    esi
0x46C301: mov     esi, ecx
0x46C303: mov     eax, [esi+0Ch]
0x46C306: push    edi
0x46C307: mov     edi, [esp+8+a2]
0x46C30B: cmp     edi, eax
0x46C30D: jz      short TESForm_SetFormID___Done
0x46C30F: mov     ecx, [esi+8]
0x46C312: shr     ecx, 0Eh
0x46C315: test    cl, 1
0x46C318: jnz     short TESForm_SetFormID___SetFormID
0x46C31A: test    eax, eax
0x46C31C: jz      short loc_46C329
0x46C31E: push    eax
0x46C31F: mov     ecx, offset TESForm_FormIDMap
0x46C324: call    NiTMap_RemoveAt
0x46C329: cmp     [esp+8+arg_4], 0
0x46C32E: jz      short TESForm_SetFormID___AddToFormTable
0x46C330: mov     eax, [esi+0Ch]
0x46C333: test    eax, eax
0x46C335: jz      short TESForm_SetFormID___AddToFormTable
0x46C337: mov     ecx, ds:0B33A98h
0x46C33D: push    eax
0x46C33E: call    TESDataHandler_ReleaseFormID
0x46C343: test    edi, edi
0x46C345: jz      short TESForm_SetFormID___SetFormID
0x46C347: push    esi; a3
0x46C348: push    edi; a2
0x46C349: mov     ecx, offset TESForm_FormIDMap; this
0x46C34E: call    NiTMap_SetAt
0x46C353: mov     [esi+0Ch], edi
0x46C356: pop     edi
0x46C357: pop     esi
0x46C358: retn    8
