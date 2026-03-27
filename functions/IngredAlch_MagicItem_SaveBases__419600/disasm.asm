0x419600: push    esi
0x419601: push    54444F4Dh
0x419606: mov     esi, ecx
0x419608: push    42444F4Dh
0x41960D: push    4C444F4Dh
0x419612: lea     ecx, [esi+1Ch]
0x419615: call    TESModel_Save
0x41961A: push    4E4F4349h
0x41961F: lea     ecx, [esi+34h]
0x419622: call    TESTexture_Save
0x419627: lea     ecx, [esi+40h]
0x41962A: call    TESScriptableForm_Save
0x41962F: push    0; Size
0x419631: push    0; Src
0x419633: lea     ecx, [esi-24h]; this
0x419636: call    TESForm_SaveGenericComponents
0x41963B: pop     esi
0x41963C: retn
