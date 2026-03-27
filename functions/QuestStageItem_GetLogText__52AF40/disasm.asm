0x52AF40: push    ebp
0x52AF41: mov     ebp, esp
0x52AF43: sub     esp, 0Ch
0x52AF46: mov     eax, ds:0B30AACh
0x52AF4B: xor     eax, ebp
0x52AF4D: mov     [ebp+var_4], eax
0x52AF50: push    ebx
0x52AF51: push    esi
0x52AF52: mov     esi, [ebp+arg_0]
0x52AF55: test    esi, esi
0x52AF57: push    edi
0x52AF58: mov     edi, ecx
0x52AF5A: mov     [ebp+var_C], edi
0x52AF5D: jz      loc_52B05E
0x52AF63: cmp     edi, ds:0B362FCh
0x52AF69: jz      loc_52B055
0x52AF6F: push    0; a3
0x52AF71: push    0; a2
0x52AF73: mov     ecx, offset stru_B36300; this
0x52AF78: mov     ds:0B362FCh, edi
0x52AF7E: call    BSStringT_Set
0x52AF83: push    0FFFFFFFFh; a2
0x52AF85: mov     ecx, esi; this
0x52AF87: call    TESForm_GetOverrideFile
0x52AF8C: test    eax, eax
0x52AF8E: jz      loc_52B05E
0x52AF94: cmp     dword ptr [edi+5Ch], 0
0x52AF98: jz      loc_52B05E
0x52AF9E: mov     ecx, eax
0x52AFA0: call    sub_4520F0
0x52AFA5: mov     ebx, eax
0x52AFA7: mov     eax, [edi+5Ch]
0x52AFAA: push    eax; Buffer
0x52AFAB: mov     ecx, ebx
0x52AFAD: call    TESFIle_JumpToRecord
0x52AFB2: test    al, al
0x52AFB4: jz      loc_52B05E
0x52AFBA: mov     ecx, ebx
0x52AFBC: call    TESFile_GetRecordType
0x52AFC1: movzx   ecx, byte ptr [esi+4]
0x52AFC5: lea     ecx, [ecx+ecx*2]
0x52AFC8: cmp     al, ds:0B05E00h[ecx*4]
0x52AFCF: jnz     loc_52B05E
0x52AFD5: mov     ecx, ebx
0x52AFD7: mov     [ebp+var_6], 0
0x52AFDB: mov     [ebp+var_5], 0
0x52AFDF: call    TESFile_GetChunkType
0x52AFE4: test    eax, eax
0x52AFE6: jz      short loc_52B055
0x52AFE8: cmp     eax, 4D414E43h
0x52AFED: jz      short loc_52B008
0x52AFEF: cmp     eax, 54445351h
0x52AFF4: jnz     short loc_52B036
0x52AFF6: mov     dl, [ebp+var_5]
0x52AFF9: cmp     dl, [edi+60h]
0x52AFFC: jnz     short loc_52B002
0x52AFFE: mov     [ebp+var_6], 1
0x52B002: add     [ebp+var_5], 1
0x52B006: jmp     short loc_52B036
0x52B008: cmp     [ebp+var_6], 0
0x52B00C: jz      short loc_52B036
0x52B00E: mov     esi, [ebx+254h]
0x52B014: mov     eax, esi
0x52B016: call    __alloca?
0x52B01B: mov     edi, esp
0x52B01D: push    esi; a4
0x52B01E: push    edi; Dst
0x52B01F: mov     ecx, ebx; a1
0x52B021: call    TESFile_GetChunkData
0x52B026: push    0; a3
0x52B028: push    edi; a2
0x52B029: mov     ecx, offset stru_B36300; this
0x52B02E: call    BSStringT_Set
0x52B033: mov     edi, [ebp+var_C]
0x52B036: mov     eax, ds:0B36300h
0x52B03B: test    eax, eax
0x52B03D: jnz     short loc_52B060
0x52B03F: mov     ecx, ebx
0x52B041: call    TESFile_GetNextChunk
0x52B046: test    al, al
0x52B048: jz      short loc_52B055
0x52B04A: mov     ecx, ebx
0x52B04C: call    TESFile_GetChunkType
0x52B051: test    eax, eax
0x52B053: jnz     short loc_52AFE8
0x52B055: mov     eax, ds:0B36300h
0x52B05A: test    eax, eax
0x52B05C: jnz     short loc_52B060
0x52B05E: xor     eax, eax
0x52B060: lea     esp, [ebp-18h]
0x52B063: pop     edi
0x52B064: pop     esi
0x52B065: pop     ebx
0x52B066: mov     ecx, [ebp+var_4]
0x52B069: xor     ecx, ebp
0x52B06B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x52B070: mov     esp, ebp
0x52B072: pop     ebp
0x52B073: retn    4
