0x659C30: push    ecx
0x659C31: push    esi
0x659C32: mov     esi, ecx
0x659C34: cmp     dword ptr [esi+58h], 0
0x659C38: push    edi
0x659C39: mov     [esp+0Ch+var_1], 0FFh
0x659C3E: jz      short loc_659C4E
0x659C40: mov     ecx, [esi+58h]
0x659C43: mov     eax, [ecx]
0x659C45: mov     edx, [eax+8]
0x659C48: call    edx
0x659C4A: mov     [esp+0Ch+var_1], al
0x659C4E: push    1; a2
0x659C50: lea     eax, [esp+10h+var_1]
0x659C54: push    eax; a1
0x659C55: mov     ecx, esi
0x659C57: call    TESForm_SaveDataToCurrentSaveGame
0x659C5C: mov     edi, [esp+0Ch+Src]
0x659C60: push    edi; Src
0x659C61: mov     ecx, esi
0x659C63: call    TESObjectREFR_SaveModifiedForm
0x659C68: cmp     dword ptr [esi+58h], 0
0x659C6C: jz      short loc_659C7D
0x659C6E: mov     ecx, [esi+58h]
0x659C71: mov     edx, [ecx]
0x659C73: mov     eax, [edx+3F4h]
0x659C79: push    esi
0x659C7A: push    edi
0x659C7B: call    eax
0x659C7D: pop     edi
0x659C7E: pop     esi
0x659C7F: pop     ecx
0x659C80: retn    4
