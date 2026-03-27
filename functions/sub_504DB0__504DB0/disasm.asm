0x504DB0: mov     eax, [esp+arg_8]
0x504DB4: test    eax, eax
0x504DB6: jnz     short loc_504DBB
0x504DB8: xor     al, al
0x504DBA: retn
0x504DBB: push    esi
0x504DBC: push    0; int
0x504DBE: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x504DC3: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x504DC8: push    0; int
0x504DCA: push    eax; void *
0x504DCB: call    OblivionDynamicCast
0x504DD0: mov     esi, eax
0x504DD2: add     esp, 14h
0x504DD5: test    esi, esi
0x504DD7: jz      short loc_504E03
0x504DD9: push    edi
0x504DDA: mov     edi, [esi]
0x504DDC: mov     eax, [edi+250h]
0x504DE2: mov     ecx, esi
0x504DE4: call    eax
0x504DE6: fmul    qword ptr ds:0A3D360h
0x504DEC: mov     edx, [edi+254h]
0x504DF2: push    ecx
0x504DF3: fstp    [esp+0Ch+arg_8]
0x504DF7: mov     ecx, esi
0x504DF9: fld     [esp+0Ch+arg_8]
0x504DFD: fstp    [esp+0Ch+var_C]
0x504E00: call    edx
0x504E02: pop     edi
0x504E03: mov     al, 1
0x504E05: pop     esi
0x504E06: retn
