0x4B44A0: push    ecx
0x4B44A1: push    esi
0x4B44A2: mov     esi, ecx
0x4B44A4: call    TESForm_InitializeFormRecord
0x4B44A9: push    54444F4Dh
0x4B44AE: push    42444F4Dh
0x4B44B3: push    4C444F4Dh
0x4B44B8: lea     ecx, [esi+18h]
0x4B44BB: call    TESModel_Save
0x4B44C0: mov     eax, [esi+30h]
0x4B44C3: test    eax, eax
0x4B44C5: jz      short loc_4B44DC
0x4B44C7: mov     eax, [eax+0Ch]
0x4B44CA: push    4; Size
0x4B44CC: lea     ecx, [esp+0Ch+Src]
0x4B44D0: push    ecx; Src
0x4B44D1: mov     ecx, esi; this
0x4B44D3: mov     [esp+10h+Src], eax
0x4B44D7: call    TESForm_SaveGenericComponents
0x4B44DC: mov     ecx, esi
0x4B44DE: pop     esi
0x4B44DF: add     esp, 4
0x4B44E2: jmp     TESForm_FinalizeFormRecord
