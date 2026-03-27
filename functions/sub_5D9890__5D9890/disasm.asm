0x5D9890: sub     esp, 13Ch
0x5D9896: mov     eax, ds:0B30AACh
0x5D989B: xor     eax, esp
0x5D989D: mov     [esp+13Ch+var_4], eax
0x5D98A4: mov     eax, [esp+13Ch+arg_0]
0x5D98AB: cmp     eax, 2
0x5D98AE: push    ebp
0x5D98AF: mov     ebp, [esp+140h+arg_4]
0x5D98B6: push    esi
0x5D98B7: mov     esi, ecx
0x5D98B9: jnz     short loc_5D98CD
0x5D98BB: lea     ecx, [esi+60h]
0x5D98BE: call    BSSimpleList_Clear
0x5D98C3: call    sub_5D8980
0x5D98C8: jmp     loc_5D9AB4
0x5D98CD: cmp     eax, 6
0x5D98D0: jnz     short loc_5D98FE
0x5D98D2: mov     eax, [esi+50h]
0x5D98D5: mov     ecx, ds:0B333C4h
0x5D98DB: push    1
0x5D98DD: push    eax
0x5D98DE: add     ecx, 11Ch
0x5D98E4: push    ecx
0x5D98E5: call    sub_5BD080
0x5D98EA: mov     edx, [esi]
0x5D98EC: mov     eax, [edx+14h]
0x5D98EF: add     esp, 0Ch
0x5D98F2: push    ebp
0x5D98F3: push    6
0x5D98F5: mov     ecx, esi
0x5D98F7: call    eax
0x5D98F9: jmp     loc_5D9AB4
0x5D98FE: lea     ecx, [eax-9]
0x5D9901: cmp     ecx, 2
0x5D9904: ja      short loc_5D9946
0x5D9906: movzx   edx, byte ptr ds:0B3B734h
0x5D990D: add     eax, 0FFFFFFF7h
0x5D9910: and     edx, 7Fh
0x5D9913: cmp     edx, eax
0x5D9915: mov     ecx, offset byte_B3B734
0x5D991A: jnz     short loc_5D992D
0x5D991C: call    sub_597A60
0x5D9921: mov     ecx, esi
0x5D9923: call    SpellPurchaseMenu_Update
0x5D9928: jmp     loc_5D9AB4
0x5D992D: push    eax
0x5D992E: call    sub_597A40
0x5D9933: and     byte ptr ds:0B3B734h, 7Fh
0x5D993A: mov     ecx, esi
0x5D993C: call    SpellPurchaseMenu_Update
0x5D9941: jmp     loc_5D9AB4
0x5D9946: cmp     eax, 3E8h
0x5D994B: jl      loc_5D9AB4
0x5D9951: mov     ecx, ds:0B333C4h; this
0x5D9957: push    edi
0x5D9958: lea     edi, [esi+60h]
0x5D995B: push    0; a2
0x5D995D: mov     [esp+14Ch+var_138], 3E8h
0x5D9965: mov     [esp+14Ch+var_13C], edi
0x5D9969: call    Actor_GetActorBaseForm
0x5D996E: add     eax, 58h ; 'X'
0x5D9971: test    edi, edi
0x5D9973: mov     [esp+148h+var_134], eax
0x5D9977: jz      loc_5D9AB3
0x5D997D: push    ebx
0x5D997E: jmp     short loc_5D9984
0x5D9980: mov     edi, [esp+14Ch+var_13C]
0x5D9984: mov     edi, [edi]
0x5D9986: test    edi, edi
0x5D9988: jz      loc_5D9AB2
0x5D998E: mov     eax, [edi+18h]
0x5D9991: mov     edx, [eax+18h]
0x5D9994: lea     ebx, [edi+18h]
0x5D9997: mov     ecx, ebx
0x5D9999: call    edx
0x5D999B: test    eax, eax
0x5D999D: jnz     loc_5D9A9F
0x5D99A3: mov     eax, [esp+14Ch+var_134]
0x5D99A7: test    eax, eax
0x5D99A9: jz      short loc_5D99BF
0x5D99AB: jmp     short loc_5D99B0
0x5D99AD: align 10h
0x5D99B0: cmp     [eax], edi
0x5D99B2: jz      loc_5D9A9F
0x5D99B8: mov     eax, [eax+4]
0x5D99BB: test    eax, eax
0x5D99BD: jnz     short loc_5D99B0
0x5D99BF: mov     eax, [esp+14Ch+var_138]
0x5D99C3: cmp     eax, [esp+14Ch+arg_0]
0x5D99CA: jnz     loc_5D9A9A
0x5D99D0: push    0FB7h
0x5D99D5: mov     ecx, ebp
0x5D99D7: call    Tile_GetFloat
0x5D99DC: call    Double_To_SInt32
0x5D99E1: mov     [esi+58h], eax
0x5D99E4: mov     ecx, ds:0B333C4h
0x5D99EA: call    sub_5E4420
0x5D99EF: cmp     eax, [esi+58h]
0x5D99F2: jl      short loc_5D9A66
0x5D99F4: push    0FAAh
0x5D99F9: mov     ecx, ebp
0x5D99FB: call    Tile_GetFloat
0x5D9A00: call    Double_To_SInt32
0x5D9A05: mov     [esi+4Ch], eax
0x5D9A08: mov     [esi+54h], edi
0x5D9A0B: mov     eax, [ebx+4]
0x5D9A0E: test    eax, eax
0x5D9A10: mov     ecx, ds:0B38D20h
0x5D9A16: mov     edx, ds:0B38D10h
0x5D9A1C: jnz     short loc_5D9A23
0x5D9A1E: mov     eax, offset EmptyString
0x5D9A23: push    ecx
0x5D9A24: mov     ecx, [esi+58h]
0x5D9A27: push    ecx
0x5D9A28: push    edx
0x5D9A29: mov     edx, ds:0B38A00h
0x5D9A2F: push    eax
0x5D9A30: push    edx
0x5D9A31: lea     eax, [esp+160h+var_130]
0x5D9A35: push    offset aSSSDS?; "%s %s %s %d %s?"
0x5D9A3A: push    eax
0x5D9A3B: call    __sprintf
0x5D9A40: mov     ecx, ds:0B38D00h
0x5D9A46: mov     edx, ds:0B38CF8h
0x5D9A4C: push    0
0x5D9A4E: push    ecx
0x5D9A4F: push    edx
0x5D9A50: push    1
0x5D9A52: lea     eax, [esp+178h+var_130]
0x5D9A56: push    offset SpellPurchaseCallback
0x5D9A5B: push    eax
0x5D9A5C: call    ShowUIMessageBox
0x5D9A61: add     esp, 34h
0x5D9A64: jmp     short loc_5D9A88
0x5D9A66: mov     ecx, ds:0B38CF0h
0x5D9A6C: mov     edx, ds:0B38DB0h
0x5D9A72: xor     edi, edi
0x5D9A74: push    edi
0x5D9A75: push    ecx
0x5D9A76: push    1
0x5D9A78: push    edi
0x5D9A79: push    edx
0x5D9A7A: call    ShowUIMessageBox
0x5D9A7F: add     esp, 14h
0x5D9A82: mov     [esi+54h], edi
0x5D9A85: mov     [esi+58h], edi
0x5D9A88: mov     ecx, [esp+14Ch+arg_0]
0x5D9A8F: mov     eax, [esi]
0x5D9A91: mov     edx, [eax+14h]
0x5D9A94: push    ebp
0x5D9A95: push    ecx
0x5D9A96: mov     ecx, esi
0x5D9A98: call    edx
0x5D9A9A: add     [esp+14Ch+var_138], 1
0x5D9A9F: mov     eax, [esp+14Ch+var_13C]
0x5D9AA3: mov     eax, [eax+4]
0x5D9AA6: test    eax, eax
0x5D9AA8: mov     [esp+14Ch+var_13C], eax
0x5D9AAC: jnz     loc_5D9980
0x5D9AB2: pop     ebx
0x5D9AB3: pop     edi
0x5D9AB4: mov     ecx, [esp+144h+var_4]
0x5D9ABB: pop     esi
0x5D9ABC: pop     ebp
0x5D9ABD: xor     ecx, esp
0x5D9ABF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D9AC4: add     esp, 13Ch
0x5D9ACA: retn    8
