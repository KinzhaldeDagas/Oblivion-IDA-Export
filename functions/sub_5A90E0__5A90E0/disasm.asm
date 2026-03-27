0x5A90E0: push    ebp; a3
0x5A90E1: push    esi; a3
0x5A90E2: mov     esi, ecx
0x5A90E4: cmp     dword ptr [esi+30h], 0
0x5A90E8: lea     ebp, [esi+2Ch]
0x5A90EB: jnz     short loc_5A90F7
0x5A90ED: cmp     dword ptr [ebp+0], 0
0x5A90F1: jz      loc_5A9279
0x5A90F7: push    ebx; a3
0x5A90F8: mov     ebx, ebp
0x5A90FA: test    ebx, ebx
0x5A90FC: jz      loc_5A9278
0x5A9102: push    edi; a3
0x5A9103: mov     ecx, [esi+34h]
0x5A9106: mov     edi, [ebx]
0x5A9108: push    0FDEh
0x5A910D: call    sub_588C10
0x5A9112: test    eax, eax
0x5A9114: jz      short loc_5A9128
0x5A9116: mov     ecx, [edi]
0x5A9118: test    ecx, ecx
0x5A911A: jz      short loc_5A9128
0x5A911C: push    eax; Str2
0x5A911D: push    ecx; Str1
0x5A911E: call    __strcmp
0x5A9123: add     esp, 8
0x5A9126: jmp     short loc_5A9135
0x5A9128: xor     ecx, ecx
0x5A912A: test    eax, eax
0x5A912C: setz    cl
0x5A912F: lea     ecx, [ecx+ecx-1]
0x5A9133: mov     eax, ecx
0x5A9135: test    eax, eax
0x5A9137: jz      short loc_5A9145
0x5A9139: mov     ebx, [ebx+4]
0x5A913C: test    ebx, ebx
0x5A913E: jnz     short loc_5A9103
0x5A9140: pop     edi
0x5A9141: pop     ebx
0x5A9142: pop     esi
0x5A9143: pop     ebp
0x5A9144: retn
0x5A9145: mov     ecx, [esi+34h]
0x5A9148: push    offset word_A36430
0x5A914D: push    0FDEh
0x5A9152: call    Tile_SetString
0x5A9157: fld1
0x5A9159: push    ecx
0x5A915A: fstp    [esp+14h+a2]; a3
0x5A915D: mov     ecx, [esi+34h]; this
0x5A9160: push    0FB0h; a2
0x5A9165: call    Tile_SetFloat
0x5A916A: fld1
0x5A916C: push    ecx
0x5A916D: fstp    [esp+14h+a2]; a3
0x5A9170: mov     ecx, [esi+34h]; this
0x5A9173: push    0FA1h; a2
0x5A9178: call    Tile_SetFloat
0x5A917D: push    edi
0x5A917E: mov     ecx, ebp
0x5A9180: call    BSSimpleList_Remove
0x5A9185: test    edi, edi
0x5A9187: jz      short loc_5A9199
0x5A9189: mov     ecx, edi
0x5A918B: call    sub_5A9060
0x5A9190: push    edi
0x5A9191: call    FormHeapFree
0x5A9196: add     esp, 4
0x5A9199: cmp     dword ptr [ebp+4], 0
0x5A919D: jnz     short loc_5A91A9
0x5A919F: cmp     dword ptr [ebp+0], 0
0x5A91A3: jz      loc_5A9277
0x5A91A9: mov     edx, [ebp+0]
0x5A91AC: mov     byte ptr [edx+0Ch], 1
0x5A91B0: mov     eax, [ebp+0]
0x5A91B3: mov     ecx, [eax]
0x5A91B5: push    ecx
0x5A91B6: mov     ecx, [esi+34h]
0x5A91B9: push    0FDEh
0x5A91BE: call    Tile_SetString
0x5A91C3: fld     dword ptr ds:0A379B4h
0x5A91C9: push    ecx
0x5A91CA: mov     ecx, [esi+34h]; this
0x5A91CD: fstp    [esp+14h+a2]; a3
0x5A91D0: push    0FA1h; a2
0x5A91D5: call    Tile_SetFloat
0x5A91DA: mov     edx, [ebp+0]
0x5A91DD: mov     eax, [edx+10h]
0x5A91E0: mov     ecx, [esi+34h]
0x5A91E3: push    eax
0x5A91E4: push    0FAFh
0x5A91E9: call    Tile_SetString
0x5A91EE: mov     ecx, [ebp+0]
0x5A91F1: movzx   eax, word ptr [ecx+1Ch]
0x5A91F5: cmp     ax, 0FFFFh
0x5A91F9: jnz     short loc_5A920E
0x5A91FB: mov     eax, [ecx+18h]
0x5A91FE: lea     edi, [eax+1]
0x5A9201: mov     dl, [eax]
0x5A9203: add     eax, 1
0x5A9206: test    dl, dl
0x5A9208: jnz     short loc_5A9201
0x5A920A: sub     eax, edi
0x5A920C: jmp     short loc_5A9211
0x5A920E: movzx   eax, ax
0x5A9211: test    eax, eax
0x5A9213: jz      short loc_5A9243
0x5A9215: mov     ecx, [ecx+18h]
0x5A9218: push    0
0x5A921A: push    121h
0x5A921F: push    0
0x5A9221: push    ecx
0x5A9222: mov     ecx, ds:0B333C4h
0x5A9228: call    sub_65A970
0x5A922D: mov     edi, eax
0x5A922F: test    edi, edi
0x5A9231: jz      short loc_5A9243
0x5A9233: mov     ecx, edi; this
0x5A9235: call    sub_6B73E0
0x5A923A: push    edi
0x5A923B: call    FormHeapFree
0x5A9240: add     esp, 4
0x5A9243: mov     ecx, [ebp+0]
0x5A9246: cmp     dword ptr [ecx+10h], 0
0x5A924A: push    ecx
0x5A924B: mov     ecx, [esi+34h]; this
0x5A924E: jnz     short loc_5A9264
0x5A9250: fld1
0x5A9252: fstp    [esp+14h+a2]; a3
0x5A9255: push    0FB0h; a2
0x5A925A: call    Tile_SetFloat
0x5A925F: pop     edi
0x5A9260: pop     ebx
0x5A9261: pop     esi
0x5A9262: pop     ebp
0x5A9263: retn
0x5A9264: fld     dword ptr ds:0A379B4h
0x5A926A: fstp    [esp+14h+a2]; a3
0x5A926D: push    0FB0h; a2
0x5A9272: call    Tile_SetFloat
0x5A9277: pop     edi
0x5A9278: pop     ebx
0x5A9279: pop     esi
0x5A927A: pop     ebp
0x5A927B: retn
