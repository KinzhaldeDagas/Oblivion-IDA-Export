0x6CE2C0: push    ebx; Copies NiTimeController members, clones the source interpolator at +0x3C through the stream clone map, and assigns the clone through the destination smart pointer.
0x6CE2C1: mov     ebx, [esp+4+arg_0]
0x6CE2C5: push    esi
0x6CE2C6: push    edi
0x6CE2C7: mov     edi, [esp+0Ch+arg_4]
0x6CE2CB: push    edi
0x6CE2CC: push    ebx
0x6CE2CD: mov     esi, ecx
0x6CE2CF: call    NiInterpController_CopyMembers; NiInterpController clone-member thunk delegates to NiTimeController_CopyMembers.
0x6CE2D4: mov     ecx, [esi+3Ch]
0x6CE2D7: test    ecx, ecx
0x6CE2D9: jz      short loc_6CE2EA
0x6CE2DB: push    edi
0x6CE2DC: call    sub_700710
0x6CE2E1: push    eax; a2
0x6CE2E2: lea     ecx, [ebx+3Ch]; this
0x6CE2E5: call    NiSmartPointer_Set??
0x6CE2EA: pop     edi
0x6CE2EB: pop     esi
0x6CE2EC: pop     ebx
0x6CE2ED: retn    8
