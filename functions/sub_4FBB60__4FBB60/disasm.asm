0x4FBB60: sub     esp, 8
0x4FBB63: push    edi
0x4FBB64: mov     edi, ecx
0x4FBB66: mov     eax, [edi+8]
0x4FBB69: shr     eax, 3
0x4FBB6C: test    al, 1
0x4FBB6E: jnz     loc_4FBD9B
0x4FBB74: mov     ecx, [esp+0Ch+a1]; this
0x4FBB78: push    ebx
0x4FBB79: xor     ebx, ebx
0x4FBB7B: cmp     ecx, ebx
0x4FBB7D: jz      loc_4FBD9A
0x4FBB83: push    esi
0x4FBB84: push    0FFFFFFFFh; a2
0x4FBB86: lea     esi, [edi+40h]
0x4FBB89: mov     [esp+18h+var_8], ebx
0x4FBB8D: call    TESForm_GetOverrideFile
0x4FBB92: cmp     esi, ebx
0x4FBB94: mov     [esp+14h+a2], eax
0x4FBB98: jz      loc_4FBC71
0x4FBB9E: push    ebp
0x4FBB9F: nop
0x4FBBA0: cmp     dword ptr [esi+4], 0
0x4FBBA4: jnz     short loc_4FBBAF
0x4FBBA6: cmp     dword ptr [esi], 0
0x4FBBA9: jz      loc_4FBC70
0x4FBBAF: mov     ebp, [esi]
0x4FBBB1: mov     eax, [ebp+8]
0x4FBBB4: test    eax, eax
0x4FBBB6: mov     [esp+18h+a1], eax
0x4FBBBA: mov     ecx, [ebp+0Ch]
0x4FBBBD: jz      short loc_4FBBE2
0x4FBBBF: mov     ecx, [esp+18h+a2]
0x4FBBC3: push    ecx; a2
0x4FBBC4: lea     edx, [esp+1Ch+a1]
0x4FBBC8: push    edx; a1
0x4FBBC9: call    TESForm_ResolveFormID
0x4FBBCE: mov     eax, [esp+20h+a1]
0x4FBBD2: push    eax; a1
0x4FBBD3: call    TESForm_LookupByFormID
0x4FBBD8: add     esp, 0Ch
0x4FBBDB: mov     [ebp+8], eax
0x4FBBDE: test    eax, eax
0x4FBBE0: jmp     short loc_4FBBE4
0x4FBBE2: test    ecx, ecx
0x4FBBE4: jz      short loc_4FBBEF
0x4FBBE6: mov     [esp+18h+var_8], esi
0x4FBBEA: mov     esi, [esi+4]
0x4FBBED: jmp     short loc_4FBC65
0x4FBBEF: mov     ebp, [esp+18h+var_8]
0x4FBBF3: test    ebp, ebp
0x4FBBF5: jz      short loc_4FBC06
0x4FBBF7: mov     ecx, [esi]
0x4FBBF9: push    ecx
0x4FBBFA: mov     ecx, ebp
0x4FBBFC: call    BSSimpleList_Remove
0x4FBC01: mov     esi, [ebp+4]
0x4FBC04: jmp     short loc_4FBC28
0x4FBC06: mov     eax, [esi+4]
0x4FBC09: test    eax, eax
0x4FBC0B: jz      short loc_4FBC22
0x4FBC0D: mov     edx, [eax+4]
0x4FBC10: mov     [esi+4], edx
0x4FBC13: mov     ecx, [eax]
0x4FBC15: push    eax
0x4FBC16: mov     [esi], ecx
0x4FBC18: call    FormHeapFree
0x4FBC1D: add     esp, 4
0x4FBC20: jmp     short loc_4FBC28
0x4FBC22: mov     dword ptr [esi], 0
0x4FBC28: cmp     [esp+18h+a1], 0
0x4FBC2D: mov     edx, [edi]
0x4FBC2F: mov     ebp, [edi+0Ch]
0x4FBC32: mov     eax, [edx+0D4h]
0x4FBC38: mov     ecx, edi
0x4FBC3A: jz      short loc_4FBC4C
0x4FBC3C: call    eax
0x4FBC3E: mov     ecx, [esp+18h+a1]
0x4FBC42: push    eax
0x4FBC43: push    ebp
0x4FBC44: push    ecx
0x4FBC45: push    offset aCouldNotFind_4; "Could not find referenced object (%08X)"...
0x4FBC4A: jmp     short loc_4FBC56
0x4FBC4C: call    eax
0x4FBC4E: push    eax
0x4FBC4F: push    ebp
0x4FBC50: push    ebx; ArgList
0x4FBC51: push    offset aReferencedObje; "Referenced object %d on Script (%08X) '"...
0x4FBC56: call    PrintError
0x4FBC5B: add     esp, 10h
0x4FBC5E: mov     dword ptr [edi+20h], 0
0x4FBC65: add     ebx, 1
0x4FBC68: test    esi, esi
0x4FBC6A: jnz     loc_4FBBA0
0x4FBC70: pop     ebp
0x4FBC71: mov     eax, [edi+1Ch]
0x4FBC74: cmp     ebx, eax
0x4FBC76: jz      short loc_4FBCA5
0x4FBC78: cmp     dword ptr [edi+20h], 0
0x4FBC7C: jz      short loc_4FBCA5
0x4FBC7E: mov     edx, [edi]
0x4FBC80: mov     esi, [edi+0Ch]
0x4FBC83: push    ebx
0x4FBC84: push    eax
0x4FBC85: mov     eax, [edx+0D4h]
0x4FBC8B: mov     ecx, edi
0x4FBC8D: call    eax
0x4FBC8F: push    eax
0x4FBC90: push    esi; ArgList
0x4FBC91: push    offset aReferencedOb_0; "Referenced object list on Script (%08X)"...
0x4FBC96: call    PrintError
0x4FBC9B: add     esp, 14h
0x4FBC9E: mov     dword ptr [edi+20h], 0
0x4FBCA5: cmp     byte ptr [edi+28h], 0
0x4FBCA9: pop     esi
0x4FBCAA: jz      loc_4FBD91
0x4FBCB0: fldz
0x4FBCB2: fld     dword ptr ds:0B09E28h
0x4FBCB8: fcom    st(1)
0x4FBCBA: fnstsw  ax
0x4FBCBC: fstp    st(1)
0x4FBCBE: test    ah, 41h
0x4FBCC1: jnz     loc_4FBD8F
0x4FBCC7: mov     ecx, ds:0B361F4h
0x4FBCCD: fstp    [esp+10h+a1]
0x4FBCD1: test    ecx, ecx
0x4FBCD3: jnz     short loc_4FBCFF
0x4FBCD5: fld     qword ptr ds:0A2FAA0h
0x4FBCDB: mov     eax, offset unk_B361D4
0x4FBCE0: fld     [esp+10h+a1]
0x4FBCE4: fmul    st, st(1)
0x4FBCE6: add     eax, 4
0x4FBCE9: cmp     eax, offset dword_B361F4
0x4FBCEE: fstp    [esp+10h+a1]
0x4FBCF2: fld     [esp+10h+a1]
0x4FBCF6: fst     dword ptr [eax-4]
0x4FBCF9: jl      short loc_4FBCE4
0x4FBCFB: fstp    st
0x4FBCFD: fstp    st
0x4FBCFF: and     ecx, 0FFh
0x4FBD05: mov     ebx, ecx
0x4FBD07: lea     ecx, [esp+10h+a1]
0x4FBD0B: push    ecx
0x4FBD0C: push    offset aFquestdelaytim; "fQuestDelayTime"
0x4FBD11: mov     ecx, edi
0x4FBD13: call    sub_4FAA90
0x4FBD18: test    al, al
0x4FBD1A: jz      short loc_4FBD39
0x4FBD1C: fldz
0x4FBD1E: add     dword ptr ds:0B361F4h, 1
0x4FBD25: push    1; a2
0x4FBD27: fstp    dword ptr [edi+38h]
0x4FBD2A: mov     ecx, edi; this
0x4FBD2C: call    TESForm_SetIsLinked
0x4FBD31: pop     ebx
0x4FBD32: pop     edi
0x4FBD33: add     esp, 8
0x4FBD36: retn    4
0x4FBD39: test    ebx, ebx
0x4FBD3B: jnz     short loc_4FBD5E
0x4FBD3D: fld     dword ptr ds:0B09E28h
0x4FBD43: add     dword ptr ds:0B361F4h, 1
0x4FBD4A: push    1; a2
0x4FBD4C: fstp    dword ptr [edi+38h]
0x4FBD4F: mov     ecx, edi; this
0x4FBD51: call    TESForm_SetIsLinked
0x4FBD56: pop     ebx
0x4FBD57: pop     edi
0x4FBD58: add     esp, 8
0x4FBD5B: retn    4
0x4FBD5E: mov     eax, offset unk_B361D4
0x4FBD63: test    bl, 1
0x4FBD66: jz      short loc_4FBD70
0x4FBD68: fld     dword ptr [eax]
0x4FBD6A: fadd    dword ptr [edi+38h]
0x4FBD6D: fstp    dword ptr [edi+38h]
0x4FBD70: add     eax, 4
0x4FBD73: sar     ebx, 1
0x4FBD75: jnz     short loc_4FBD63
0x4FBD77: add     dword ptr ds:0B361F4h, 1
0x4FBD7E: push    1; a2
0x4FBD80: mov     ecx, edi; this
0x4FBD82: call    TESForm_SetIsLinked
0x4FBD87: pop     ebx
0x4FBD88: pop     edi
0x4FBD89: add     esp, 8
0x4FBD8C: retn    4
0x4FBD8F: fstp    st
0x4FBD91: push    1; a2
0x4FBD93: mov     ecx, edi; this
0x4FBD95: call    TESForm_SetIsLinked
0x4FBD9A: pop     ebx
0x4FBD9B: pop     edi
0x4FBD9C: add     esp, 8
0x4FBD9F: retn    4
