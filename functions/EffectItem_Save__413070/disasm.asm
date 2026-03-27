0x413070: push    ebp
0x413071: mov     ebp, esp
0x413073: push    ecx
0x413074: mov     eax, ___security_cookie
0x413079: xor     eax, ebp
0x41307B: mov     [ebp+var_4], eax
0x41307E: push    esi
0x41307F: mov     esi, ecx
0x413081: push    18h; Size
0x413083: push    esi; Src
0x413084: push    54494645h; int
0x413089: call    TESForm_PutFormRecordChunkData
0x41308E: mov     eax, [esi+1Ch]
0x413091: add     esp, 0Ch
0x413094: cmp     dword ptr [eax+98h], 46464553h
0x41309E: jnz     short EffectItem_Save___Done
0x4130A0: cmp     dword ptr [esi+18h], 0
0x4130A4: jz      short EffectItem_Save___Done
0x4130A6: mov     eax, 10h
0x4130AB: call    __alloca_probe
0x4130B0: mov     ecx, [esi+18h]
0x4130B3: mov     edx, [ecx+4]
0x4130B6: mov     eax, esp
0x4130B8: mov     [eax+4], edx
0x4130BB: mov     ecx, [esi+18h]
0x4130BE: mov     edx, [ecx]
0x4130C0: mov     [eax], edx
0x4130C2: mov     ecx, [esi+18h]
0x4130C5: mov     edx, [ecx+10h]
0x4130C8: mov     [eax+8], edx
0x4130CB: mov     ecx, [esi+18h]
0x4130CE: mov     dl, [ecx+14h]
0x4130D1: push    10h; Size
0x4130D3: push    eax; Src
0x4130D4: push    54494353h; int
0x4130D9: mov     [eax+0Ch], dl
0x4130DC: call    TESForm_PutFormRecordChunkData
0x4130E1: mov     eax, [esi+18h]
0x4130E4: mov     ecx, [eax+8]
0x4130E7: add     esp, 0Ch
0x4130EA: test    ecx, ecx
0x4130EC: jz      short EffectItem_Save___Done
0x4130EE: mov     eax, ecx
0x4130F0: lea     esi, [eax+1]
0x4130F3: mov     dl, [eax]
0x4130F5: add     eax, 1
0x4130F8: test    dl, dl
0x4130FA: jnz     short loc_4130F3
0x4130FC: sub     eax, esi
0x4130FE: add     eax, 1
0x413101: push    eax
0x413102: push    ecx
0x413103: push    4C4C5546h
0x413108: call    j_TESForm_PutCurrentChunkData
0x41310D: add     esp, 0Ch
0x413110: lea     esp, [ebp-8]
0x413113: pop     esi
0x413114: mov     ecx, [ebp+var_4]
0x413117: xor     ecx, ebp
0x413119: call    @__security_check_cookie@4; __security_check_cookie(x)
0x41311E: mov     esp, ebp
0x413120: pop     ebp
0x413121: retn
