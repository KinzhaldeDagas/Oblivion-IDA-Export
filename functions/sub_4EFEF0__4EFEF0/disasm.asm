0x4EFEF0: push    ebx
0x4EFEF1: push    esi
0x4EFEF2: mov     esi, [esp+8+a3]
0x4EFEF6: test    esi, esi
0x4EFEF8: mov     ebx, ecx
0x4EFEFA: jz      loc_4EFFB8
0x4EFF00: mov     ecx, esi; this
0x4EFF02: call    TESObjectCELL_IsInterior
0x4EFF07: test    al, al
0x4EFF09: jnz     loc_4EFFB8
0x4EFF0F: push    edi
0x4EFF10: mov     ecx, esi; this
0x4EFF12: call    TESForm_GetQuestItem
0x4EFF17: test    al, al
0x4EFF19: jz      short loc_4EFF34
0x4EFF1B: cmp     dword ptr [ebx+34h], 0
0x4EFF1F: jnz     short loc_4EFF96
0x4EFF21: push    ebx; a2
0x4EFF22: mov     ecx, esi; this
0x4EFF24: mov     [ebx+34h], esi
0x4EFF27: call    TESObjectCELL__SetWorldspace
0x4EFF2C: pop     edi
0x4EFF2D: pop     esi
0x4EFF2E: mov     al, 1
0x4EFF30: pop     ebx
0x4EFF31: retn    4
0x4EFF34: push    ebp
0x4EFF35: mov     ecx, esi; this
0x4EFF37: call    TESObjectCELL_GetYCoordinate
0x4EFF3C: mov     ecx, esi; this
0x4EFF3E: movzx   ebp, ax
0x4EFF41: call    TESObjectCELL_GetXCoordinate
0x4EFF46: movsx   edi, ax
0x4EFF49: movzx   eax, bp
0x4EFF4C: lea     ecx, [esp+10h+a3]
0x4EFF50: shl     edi, 10h
0x4EFF53: push    ecx
0x4EFF54: mov     ecx, [ebx+30h]
0x4EFF57: or      edi, eax
0x4EFF59: push    edi
0x4EFF5A: call    NiTMap_GetAt
0x4EFF5F: test    al, al
0x4EFF61: pop     ebp
0x4EFF62: jz      short loc_4EFF9E
0x4EFF64: mov     edi, [esp+0Ch+a3]
0x4EFF68: mov     ebx, [edi+0Ch]
0x4EFF6B: mov     ecx, esi; this
0x4EFF6D: call    TESObjectCELL_GetYCoordinate
0x4EFF72: push    eax
0x4EFF73: mov     ecx, esi; this
0x4EFF75: call    TESObjectCELL_GetXCoordinate
0x4EFF7A: mov     edx, [edi]
0x4EFF7C: push    eax
0x4EFF7D: mov     eax, [edx+0D4h]
0x4EFF83: mov     ecx, edi
0x4EFF85: call    eax
0x4EFF87: push    eax
0x4EFF88: push    ebx; ArgList
0x4EFF89: push    offset aCell08xSAlread; "Cell (%08X) %s already exists at coord "...
0x4EFF8E: call    PrintError
0x4EFF93: add     esp, 14h
0x4EFF96: pop     edi
0x4EFF97: pop     esi
0x4EFF98: xor     al, al
0x4EFF9A: pop     ebx
0x4EFF9B: retn    4
0x4EFF9E: mov     ecx, [ebx+30h]; this
0x4EFFA1: push    esi; a3
0x4EFFA2: push    edi; a2
0x4EFFA3: call    NiTMap_SetAt
0x4EFFA8: push    ebx; a2
0x4EFFA9: mov     ecx, esi; this
0x4EFFAB: call    TESObjectCELL__SetWorldspace
0x4EFFB0: pop     edi
0x4EFFB1: pop     esi
0x4EFFB2: mov     al, 1
0x4EFFB4: pop     ebx
0x4EFFB5: retn    4
0x4EFFB8: pop     esi
0x4EFFB9: xor     al, al
0x4EFFBB: pop     ebx
0x4EFFBC: retn    4
