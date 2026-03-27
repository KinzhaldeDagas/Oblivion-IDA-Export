0x680090: cmp     dword ptr ds:0B3BE00h, 0
0x680097: jz      short locret_680103
0x680099: push    esi
0x68009A: mov     esi, [esp+4+arg_0]
0x68009E: test    esi, esi
0x6800A0: jz      short loc_680102
0x6800A2: mov     eax, [esi]
0x6800A4: mov     edx, [eax+170h]
0x6800AA: mov     ecx, esi
0x6800AC: call    edx
0x6800AE: cmp     byte ptr [eax+4], 18h
0x6800B2: jnz     short loc_680102
0x6800B4: cmp     eax, ds:0B35EBCh
0x6800BA: jz      short loc_680102
0x6800BC: mov     ecx, esi; this
0x6800BE: call    GetTeleportExtraData
0x6800C3: test    eax, eax
0x6800C5: jz      short loc_680102
0x6800C7: mov     ecx, eax
0x6800C9: call    sub_42B410
0x6800CE: test    eax, eax
0x6800D0: jz      short loc_680102
0x6800D2: push    esi
0x6800D3: call    sub_67F5D0
0x6800D8: add     esp, 4
0x6800DB: test    al, al
0x6800DD: jnz     short loc_680102
0x6800DF: push    esi
0x6800E0: call    sub_680A00
0x6800E5: mov     esi, eax
0x6800E7: add     esp, 4
0x6800EA: test    esi, esi
0x6800EC: jz      short loc_680102
0x6800EE: push    esi
0x6800EF: call    sub_67FD70
0x6800F4: add     esp, 4
0x6800F7: push    esi
0x6800F8: mov     ecx, offset dword_B3BE18
0x6800FD: call    BSSimpleList_PushFront
0x680102: pop     esi
0x680103: retn
