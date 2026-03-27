0x4809A0: push    ecx
0x4809A1: push    ebx
0x4809A2: push    esi
0x4809A3: mov     esi, [esp+0Ch+arg_0]
0x4809A7: xor     ebx, ebx
0x4809A9: cmp     esi, ebx
0x4809AB: mov     [esp+0Ch+var_1], bl
0x4809AF: jnz     short loc_4809B7
0x4809B1: pop     esi
0x4809B2: xor     al, al
0x4809B4: pop     ebx
0x4809B5: pop     ecx
0x4809B6: retn
0x4809B7: cmp     ds:0B34404h, ebx
0x4809BD: jnz     short loc_480A00
0x4809BF: push    offset dword_A7D0EC
0x4809C4: mov     ecx, esi
0x4809C6: call    NiObjectNET_GetExtraData
0x4809CB: cmp     eax, ebx
0x4809CD: jz      short loc_4809F8
0x4809CF: mov     eax, [eax+0Ch]
0x4809D2: shr     eax, 5
0x4809D5: test    al, 1
0x4809D7: jz      short loc_4809F8
0x4809D9: push    offset stru_B3CAC0
0x4809DE: mov     ecx, esi
0x4809E0: mov     ds:0B34404h, esi
0x4809E6: call    sub_700010
0x4809EB: cmp     eax, ebx
0x4809ED: jz      short loc_4809F8
0x4809EF: mov     ecx, [eax+7Ch]
0x4809F2: mov     ds:0B34400h, ecx
0x4809F8: cmp     ds:0B34404h, ebx
0x4809FE: jz      short loc_4809B1
0x480A00: mov     eax, [esi+8]
0x480A03: cmp     eax, ebx
0x480A05: jz      loc_480A90
0x480A0B: push    offset aEditormarker; "EditorMarker"
0x480A10: push    eax; Str1
0x480A11: call    __strcmp
0x480A16: add     esp, 8
0x480A19: test    eax, eax
0x480A1B: jnz     short loc_480A90
0x480A1D: cmp     ds:0B34390h, bl
0x480A23: jz      short loc_480A30
0x480A25: or      word ptr [esi+18h], 1
0x480A2A: pop     esi
0x480A2B: mov     al, 1
0x480A2D: pop     ebx
0x480A2E: pop     ecx
0x480A2F: retn
0x480A30: mov     ecx, ds:0B34400h
0x480A36: cmp     ecx, ebx
0x480A38: jz      short loc_480A5A
0x480A3A: mov     edx, [ecx]
0x480A3C: mov     eax, [edx+50h]
0x480A3F: push    ebx
0x480A40: push    offset aEditormarker; "EditorMarker"
0x480A45: call    eax
0x480A47: mov     ecx, ds:0B34400h
0x480A4D: mov     edx, [ecx]
0x480A4F: mov     eax, [edx+50h]
0x480A52: push    ebx
0x480A53: push    offset aEditormarker0; "EditorMarker:0"
0x480A58: call    eax
0x480A5A: mov     ecx, [esi+1Ch]
0x480A5D: mov     edx, [ecx]
0x480A5F: mov     edx, [edx+88h]
0x480A65: push    esi
0x480A66: lea     eax, [esp+10h+arg_0]
0x480A6A: push    eax
0x480A6B: call    edx
0x480A6D: lea     ecx, [esp+0Ch+arg_0]; this
0x480A71: call    sub_7016A0
0x480A76: cmp     ds:0B34404h, esi
0x480A7C: jnz     short loc_480A8A
0x480A7E: mov     ds:0B34404h, ebx
0x480A84: mov     ds:0B34400h, ebx
0x480A8A: pop     esi
0x480A8B: mov     al, 1
0x480A8D: pop     ebx
0x480A8E: pop     ecx
0x480A8F: retn
0x480A90: push    edi
0x480A91: xor     edi, edi
0x480A93: cmp     [esi+0B6h], bx
0x480A9A: jbe     short loc_480AE2
0x480A9C: lea     esp, [esp+0]
0x480AA0: movzx   eax, word ptr [esi+0B6h]
0x480AA7: cmp     eax, edi
0x480AA9: jbe     short loc_480AD4
0x480AAB: mov     ecx, [esi+0B0h]
0x480AB1: mov     ecx, [ecx+edi*4]
0x480AB4: cmp     ecx, ebx
0x480AB6: jz      short loc_480AD4
0x480AB8: mov     edx, [ecx]
0x480ABA: mov     eax, [edx+8]
0x480ABD: call    eax
0x480ABF: cmp     eax, ebx
0x480AC1: jz      short loc_480AD4
0x480AC3: push    eax
0x480AC4: call    sub_4809A0
0x480AC9: add     esp, 4
0x480ACC: cmp     al, bl
0x480ACE: mov     [esp+10h+var_1], al
0x480AD2: jnz     short loc_480AE2
0x480AD4: movzx   ecx, word ptr [esi+0B6h]
0x480ADB: add     edi, 1
0x480ADE: cmp     edi, ecx
0x480AE0: jb      short loc_480AA0
0x480AE2: cmp     ds:0B34404h, esi
0x480AE8: jnz     short loc_480AF6
0x480AEA: mov     ds:0B34404h, ebx
0x480AF0: mov     ds:0B34400h, ebx
0x480AF6: mov     al, [esp+10h+var_1]
0x480AFA: pop     edi
0x480AFB: pop     esi
0x480AFC: pop     ebx
0x480AFD: pop     ecx
0x480AFE: retn
