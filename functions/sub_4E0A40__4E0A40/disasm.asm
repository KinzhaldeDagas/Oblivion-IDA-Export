0x4E0A40: sub     esp, 1Ch
0x4E0A43: push    ebx
0x4E0A44: push    edi
0x4E0A45: mov     edi, ecx
0x4E0A47: mov     ebx, [edi+3Ch]
0x4E0A4A: test    ebx, ebx
0x4E0A4C: jz      short loc_4E0A9D
0x4E0A4E: push    esi
0x4E0A4F: mov     esi, [esp+28h+a1]
0x4E0A53: push    1; a2
0x4E0A55: push    esi; a1
0x4E0A56: call    TESForm_SaveDataToCurrentSaveGame
0x4E0A5B: mov     ax, [esi+4]
0x4E0A5F: add     ax, [esi+2]
0x4E0A63: push    2; a2
0x4E0A65: movzx   ecx, ax
0x4E0A68: lea     edx, [esp+2Ch+a1]
0x4E0A6C: mov     [esp+2Ch+a1], ecx
0x4E0A70: push    edx; a1
0x4E0A71: mov     ecx, edi
0x4E0A73: call    TESForm_SaveDataToCurrentSaveGame
0x4E0A78: push    offset sub_4DACF0
0x4E0A7D: lea     eax, [esp+2Ch+var_1C]
0x4E0A81: push    eax
0x4E0A82: push    ebx
0x4E0A83: mov     [esp+34h+var_14], 0Fh
0x4E0A8B: mov     [esp+34h+var_18], 1
0x4E0A90: mov     [esp+34h+var_10], esi
0x4E0A94: call    sub_88A7D0
0x4E0A99: add     esp, 0Ch
0x4E0A9C: pop     esi
0x4E0A9D: pop     edi
0x4E0A9E: pop     ebx
0x4E0A9F: add     esp, 1Ch
0x4E0AA2: retn    4
