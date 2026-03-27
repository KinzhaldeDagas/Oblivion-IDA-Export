0x59B6E0: mov     eax, [esp+arg_0]
0x59B6E4: sub     esp, 8
0x59B6E7: push    esi; a3
0x59B6E8: push    edi; a3
0x59B6E9: mov     edi, ecx
0x59B6EB: lea     ecx, [eax-1]
0x59B6EE: cmp     ecx, 0Ch
0x59B6F1: ja      loc_59B784
0x59B6F7: lea     ecx, [eax-1]
0x59B6FA: cmp     ecx, 5
0x59B6FD: jnz     loc_59B784
0x59B703: push    1; arg1
0x59B705: push    0; canCreate
0x59B707: call    InterfaceManager_GetSingleton
0x59B70C: add     esp, 8
0x59B70F: mov     esi, eax
0x59B711: call    sub_57D7A0
0x59B716: fmul    qword ptr ds:0A2FAA0h
0x59B71C: fadd    dword ptr [esi+20h]
0x59B71F: call    Double_To_SInt32
0x59B724: mov     ecx, [edi+38h]
0x59B727: mov     [esp+10h+arg_0], eax
0x59B72B: fild    [esp+10h+arg_0]
0x59B72F: fstp    [esp+10h+arg_0]
0x59B733: call    sub_588C50
0x59B738: fsubr   [esp+10h+arg_0]
0x59B73C: mov     esi, [esp+10h+arg_4]
0x59B740: push    0FB6h
0x59B745: mov     ecx, esi
0x59B747: fstp    qword ptr [esp+14h+a3]
0x59B74B: call    Tile_GetFloat
0x59B750: fdivr   qword ptr [esp+10h+a3]
0x59B754: push    ecx
0x59B755: mov     ecx, esi; this
0x59B757: fstp    [esp+14h+arg_4]
0x59B75B: fld     dword ptr ds:0A6B1F0h
0x59B761: fstp    [esp+14h+a2]; a3
0x59B764: push    0FB7h; a2
0x59B769: call    Tile_SetFloat
0x59B76E: fld     [esp+10h+arg_4]
0x59B772: call    Double_To_SInt32
0x59B777: mov     [esp+10h+arg_4], eax
0x59B77B: fild    [esp+10h+arg_4]
0x59B77F: jmp     loc_59B825
0x59B784: lea     edx, [eax-1]
0x59B787: cmp     edx, 0Ch
0x59B78A: ja      loc_59B847
0x59B790: add     eax, 0FFFFFFFFh
0x59B793: cmp     eax, 2
0x59B796: jnz     loc_59B847
0x59B79C: push    1; arg1
0x59B79E: push    0; canCreate
0x59B7A0: call    InterfaceManager_GetSingleton
0x59B7A5: add     esp, 8
0x59B7A8: mov     esi, eax
0x59B7AA: call    sub_57D7F0
0x59B7AF: fstp    qword ptr [esp+10h+a3]
0x59B7B3: call    sub_57D7F0
0x59B7B8: fmul    qword ptr ds:0A2FAA0h
0x59B7BE: fadd    dword ptr [esi+28h]
0x59B7C1: fsubr   qword ptr [esp+10h+a3]
0x59B7C5: call    Double_To_SInt32
0x59B7CA: mov     ecx, [edi+2Ch]
0x59B7CD: mov     [esp+10h+arg_0], eax
0x59B7D1: fild    [esp+10h+arg_0]
0x59B7D5: fstp    [esp+10h+arg_0]
0x59B7D9: call    sub_588CF0
0x59B7DE: fsubr   [esp+10h+arg_0]
0x59B7E2: mov     esi, [esp+10h+arg_4]
0x59B7E6: push    0FB6h
0x59B7EB: mov     ecx, esi
0x59B7ED: fstp    qword ptr [esp+14h+a3]; a3
0x59B7F1: call    Tile_GetFloat
0x59B7F6: fdivr   qword ptr [esp+10h+a3]
0x59B7FA: push    ecx
0x59B7FB: mov     ecx, esi; this
0x59B7FD: fstp    [esp+14h+arg_4]
0x59B801: fld     dword ptr ds:0A6B1F0h
0x59B807: fstp    [esp+14h+a2]; a3
0x59B80A: push    0FB7h; a2
0x59B80F: call    Tile_SetFloat
0x59B814: fld     [esp+10h+arg_4]
0x59B818: call    Double_To_SInt32
0x59B81D: mov     [esp+10h+arg_4], eax
0x59B821: fild    [esp+10h+arg_4]
0x59B825: push    ecx
0x59B826: fstp    [esp+14h+a2]; a3
0x59B829: push    0FB7h; a2
0x59B82E: mov     ecx, esi; this
0x59B830: call    Tile_SetFloat
0x59B835: fldz
0x59B837: push    ecx
0x59B838: fstp    [esp+14h+a2]; a3
0x59B83B: push    0FB7h; a2
0x59B840: mov     ecx, esi; this
0x59B842: call    Tile_SetFloat
0x59B847: pop     edi
0x59B848: pop     esi
0x59B849: add     esp, 8
0x59B84C: retn    8
