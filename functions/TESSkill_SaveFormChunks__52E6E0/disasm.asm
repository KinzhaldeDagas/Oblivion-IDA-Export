0x52E6E0: push    esi
0x52E6E1: push    edi
0x52E6E2: mov     esi, ecx
0x52E6E4: call    TESForm_InitializeFormRecord
0x52E6E9: push    4; Size
0x52E6EB: lea     edi, [esi+2Ch]
0x52E6EE: push    edi; Src
0x52E6EF: push    58444E49h; int
0x52E6F4: call    TESForm_PutFormRecordChunkData
0x52E6F9: add     esp, 0Ch
0x52E6FC: lea     ecx, [esi+18h]
0x52E6FF: call    TESDescription_Save
0x52E704: push    4E4F4349h
0x52E709: lea     ecx, [esi+20h]
0x52E70C: call    TESTexture_Save
0x52E711: push    14h; Size
0x52E713: push    edi; Src
0x52E714: mov     ecx, esi; this
0x52E716: call    TESForm_SaveGenericComponents
0x52E71B: lea     eax, [esi+40h]
0x52E71E: push    4D414E41h
0x52E723: push    eax
0x52E724: call    TESDescription_SaveComponent
0x52E729: lea     ecx, [esi+48h]
0x52E72C: push    4D414E4Ah
0x52E731: push    ecx
0x52E732: call    TESDescription_SaveComponent
0x52E737: lea     edx, [esi+50h]
0x52E73A: push    4D414E45h
0x52E73F: push    edx
0x52E740: call    TESDescription_SaveComponent
0x52E745: lea     eax, [esi+58h]
0x52E748: push    4D414E4Dh
0x52E74D: push    eax
0x52E74E: call    TESDescription_SaveComponent
0x52E753: add     esp, 20h
0x52E756: pop     edi
0x52E757: mov     ecx, esi
0x52E759: pop     esi
0x52E75A: jmp     TESForm_FinalizeFormRecord
