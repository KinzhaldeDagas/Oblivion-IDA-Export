0x507A30: push    esi
0x507A31: call    Sky_CreateOrGetGlobalObject
0x507A36: mov     esi, [eax+0Ch]
0x507A39: push    0FFFFFFFFh; a2
0x507A3B: mov     ecx, esi; this
0x507A3D: call    TESForm_GetOverrideFile
0x507A42: test    eax, eax
0x507A44: jz      short loc_507A86
0x507A46: push    edi
0x507A47: mov     ecx, eax
0x507A49: call    sub_4520F0
0x507A4E: mov     edi, eax
0x507A50: push    0
0x507A52: push    0
0x507A54: mov     ecx, edi
0x507A56: call    TESFile_OpenBSFileWrapper??
0x507A5B: push    esi
0x507A5C: mov     ecx, edi
0x507A5E: call    TESFile__FindForm
0x507A63: mov     eax, [esi]
0x507A65: mov     edx, [eax+18h]
0x507A68: mov     ecx, esi
0x507A6A: call    edx
0x507A6C: mov     eax, [esi]
0x507A6E: mov     edx, [eax+1Ch]
0x507A71: push    edi
0x507A72: mov     ecx, esi
0x507A74: call    edx
0x507A76: push    1
0x507A78: push    esi
0x507A79: call    Sky_CreateOrGetGlobalObject
0x507A7E: mov     ecx, eax
0x507A80: call    Sky_CreateChildGlobalObjects
0x507A85: pop     edi
0x507A86: mov     al, 1
0x507A88: pop     esi
0x507A89: retn
