0x66E950: push    0FFFFFFFFh
0x66E952: push    offset SEH_803C90
0x66E957: mov     eax, large fs:0
0x66E95D: push    eax
0x66E95E: push    ecx
0x66E95F: push    esi
0x66E960: push    edi
0x66E961: mov     eax, ds:0B30AACh
0x66E966: xor     eax, esp
0x66E968: push    eax
0x66E969: lea     eax, [esp+1Ch+var_C]
0x66E96D: mov     large fs:0, eax
0x66E973: mov     edi, ecx
0x66E975: call    TESObjectREFR__GetNiNode
0x66E97A: mov     esi, eax
0x66E97C: test    esi, esi
0x66E97E: jz      short loc_66E9F8
0x66E980: fld1
0x66E982: push    offset off_A3FA90
0x66E987: fcomp   [esp+20h+arg_0]
0x66E98B: mov     ecx, esi
0x66E98D: fnstsw  ax
0x66E98F: test    ah, 41h
0x66E992: jp      short loc_66E99B
0x66E994: call    sub_6FFAC0
0x66E999: jmp     short loc_66E9F8
0x66E99B: call    NiObjectNET_GetExtraData
0x66E9A0: push    eax
0x66E9A1: push    offset dword_B35294
0x66E9A6: call    NiRTTI_Cast
0x66E9AB: add     esp, 8
0x66E9AE: test    eax, eax
0x66E9B0: jz      short loc_66E9BB
0x66E9B2: fld     [esp+1Ch+arg_0]
0x66E9B6: fstp    dword ptr [eax+0Ch]
0x66E9B9: jmp     short loc_66E9F8
0x66E9BB: push    10h; Size
0x66E9BD: call    FormHeapAlloc
0x66E9C2: add     esp, 4
0x66E9C5: mov     [esp+1Ch+var_10], eax
0x66E9C9: test    eax, eax
0x66E9CB: mov     [esp+1Ch+var_4], 0
0x66E9D3: jz      short loc_66E9E6
0x66E9D5: fld     [esp+1Ch+arg_0]
0x66E9D9: push    ecx
0x66E9DA: mov     ecx, eax
0x66E9DC: fstp    [esp+20h+var_20]; float
0x66E9DF: call    sub_5E1570
0x66E9E4: jmp     short loc_66E9E8
0x66E9E6: xor     eax, eax
0x66E9E8: push    eax
0x66E9E9: mov     ecx, esi
0x66E9EB: mov     [esp+20h+var_4], 0FFFFFFFFh
0x66E9F3: call    NiNode_AddNiExtraData
0x66E9F8: mov     esi, [edi+5D0h]
0x66E9FE: test    esi, esi
0x66EA00: jz      loc_66EAB0
0x66EA06: mov     eax, [esi]
0x66EA08: mov     edx, [eax+4]
0x66EA0B: mov     ecx, esi
0x66EA0D: call    edx
0x66EA0F: test    eax, eax
0x66EA11: jz      short loc_66EA21
0x66EA13: cmp     eax, offset dword_B3FAB0
0x66EA18: jz      short loc_66EA51
0x66EA1A: mov     eax, [eax+4]
0x66EA1D: test    eax, eax
0x66EA1F: jnz     short loc_66EA13
0x66EA21: xor     al, al
0x66EA23: neg     al
0x66EA25: sbb     eax, eax
0x66EA27: and     eax, esi
0x66EA29: mov     esi, eax
0x66EA2B: jz      loc_66EAB0
0x66EA31: fld1
0x66EA33: push    0
0x66EA35: fcomp   [esp+20h+arg_0]
0x66EA39: mov     ecx, esi
0x66EA3B: fnstsw  ax
0x66EA3D: test    ah, 41h
0x66EA40: jp      short loc_66EA55
0x66EA42: call    NiNode_GetNiPropertyByID
0x66EA47: push    eax
0x66EA48: mov     ecx, esi
0x66EA4A: call    sub_4A1220
0x66EA4F: jmp     short loc_66EA98
0x66EA51: mov     al, 1
0x66EA53: jmp     short loc_66EA23
0x66EA55: call    NiNode_GetNiPropertyByID
0x66EA5A: test    eax, eax
0x66EA5C: jnz     short loc_66EA9F
0x66EA5E: push    1Ch; Size
0x66EA60: call    FormHeapAlloc
0x66EA65: add     esp, 4
0x66EA68: mov     [esp+1Ch+var_10], eax
0x66EA6C: test    eax, eax
0x66EA6E: mov     [esp+1Ch+var_4], 1
0x66EA76: jz      short loc_66EA81
0x66EA78: mov     ecx, eax
0x66EA7A: call    sub_47F920
0x66EA7F: jmp     short loc_66EA83
0x66EA81: xor     eax, eax
0x66EA83: or      word ptr [eax+18h], 1
0x66EA88: push    eax; a2
0x66EA89: mov     ecx, esi; this
0x66EA8B: mov     [esp+20h+var_4], 0FFFFFFFFh
0x66EA93: call    sub_405680
0x66EA98: mov     ecx, esi; this
0x66EA9A: call    NiAVObject_InitializePropertyState
0x66EA9F: fld     [esp+1Ch+arg_0]
0x66EAA3: push    ecx
0x66EAA4: fstp    [esp+20h+var_20]; float
0x66EAA7: push    esi; int
0x66EAA8: call    sub_4A2A90
0x66EAAD: add     esp, 8
0x66EAB0: mov     ecx, [esp+1Ch+var_C]
0x66EAB4: mov     large fs:0, ecx
0x66EABB: pop     ecx
0x66EABC: pop     edi
0x66EABD: pop     esi
0x66EABE: add     esp, 10h
0x66EAC1: retn    4
