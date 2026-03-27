0x507A90: push    esi
0x507A91: call    Sky_CreateOrGetGlobalObject
0x507A96: mov     esi, [eax+10h]
0x507A99: push    0FFFFFFFFh; a2
0x507A9B: mov     ecx, esi; this
0x507A9D: call    TESForm_GetOverrideFile
0x507AA2: test    eax, eax
0x507AA4: jz      short loc_507AD7
0x507AA6: push    edi
0x507AA7: mov     ecx, eax
0x507AA9: call    sub_4520F0
0x507AAE: mov     edi, eax
0x507AB0: push    0
0x507AB2: push    0
0x507AB4: mov     ecx, edi
0x507AB6: call    TESFile_OpenBSFileWrapper??
0x507ABB: push    esi
0x507ABC: mov     ecx, edi
0x507ABE: call    TESFile__FindForm
0x507AC3: mov     eax, [esi]
0x507AC5: mov     edx, [eax+18h]
0x507AC8: mov     ecx, esi
0x507ACA: call    edx
0x507ACC: mov     eax, [esi]
0x507ACE: mov     edx, [eax+1Ch]
0x507AD1: push    edi
0x507AD2: mov     ecx, esi
0x507AD4: call    edx
0x507AD6: pop     edi
0x507AD7: mov     al, 1
0x507AD9: pop     esi
0x507ADA: retn
