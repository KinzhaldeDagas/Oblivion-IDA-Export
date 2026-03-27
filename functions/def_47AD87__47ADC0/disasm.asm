0x47ADC0: mov     eax, [edi+1Ch]; jumptable 0047AD87 default case
0x47ADC3: mov     eax, [eax+8]
0x47ADC6: push    eax
0x47ADC7: push    ebx; ArgList
0x47ADC8: push    offset aBadSkinNameSOn; "Bad skin name '%s' on '%s'."
0x47ADCD: call    PrintError
0x47ADD2: add     esp, 0Ch
0x47ADD5: mov     esi, [esp+arg_20]
0x47ADD9: test    esi, esi
0x47ADDB: jz      short loc_47AE46
0x47ADDD: lea     ecx, [esp+arg_3C]
0x47ADE1: push    ecx
0x47ADE2: mov     ecx, esi
0x47ADE4: call    sub_5221C0
0x47ADE9: mov     ebp, [esp+arg_10]
0x47ADED: mov     ecx, [esi+0E8h]
0x47ADF3: push    ebp
0x47ADF4: push    esi
0x47ADF5: lea     edx, [esp+8+arg_1C]
0x47ADF9: push    edx
0x47ADFA: lea     eax, [esp+0Ch+arg_14]
0x47ADFE: push    eax
0x47ADFF: call    sub_52D2C0
0x47AE04: test    al, al
0x47AE06: jnz     short loc_47AE46
0x47AE08: mov     eax, [esi+0E8h]
0x47AE0E: mov     eax, [eax+1Ch]
0x47AE11: test    eax, eax
0x47AE13: mov     ebx, eax
0x47AE15: jnz     short loc_47AE1C
0x47AE17: mov     ebx, offset EmptyString
0x47AE1C: mov     edi, ds:0B06588h[ebp*4]
0x47AE23: mov     ecx, esi
0x47AE25: call    TESActorBase_IsFemale
0x47AE2A: mov     eax, ds:0B10BC4h[eax*4]
0x47AE31: push    ebx
0x47AE32: push    edi
0x47AE33: push    eax; ArgList
0x47AE34: push    offset aMissingSRaceTe; "Missing '%s' race texture for '%s' in r"...
0x47AE39: call    PrintError
0x47AE3E: add     esp, 10h
0x47AE41: jmp     loc_47AFD2
0x47AE46: mov     ecx, [esp+arg_18]
0x47AE4A: test    ecx, ecx
0x47AE4C: jz      short loc_47AE7D
0x47AE4E: call    sub_700900
0x47AE53: mov     ecx, [esp+arg_14]
0x47AE57: mov     esi, eax
0x47AE59: push    ecx
0x47AE5A: mov     ecx, esi
0x47AE5C: call    NiTexturingProperty__SetUnk08
0x47AE61: push    6
0x47AE63: lea     edx, [esp+4+arg_18]
0x47AE67: push    edx
0x47AE68: mov     ecx, edi
0x47AE6A: call    sub_708560
0x47AE6F: lea     ecx, [esp+arg_18]; this
0x47AE73: call    sub_7016A0
0x47AE78: jmp     loc_47AFCA
0x47AE7D: push    4
0x47AE7F: mov     ecx, edi
0x47AE81: call    NiNode_GetNiPropertyByID
0x47AE86: mov     ebp, eax
0x47AE88: test    ebp, ebp
0x47AE8A: jz      short loc_47AEB1
0x47AE8C: mov     eax, [ebp+0]
0x47AE8F: mov     edx, [eax+54h]
0x47AE92: mov     ecx, ebp
0x47AE94: call    edx
0x47AE96: cmp     eax, 5
0x47AE99: jl      short loc_47AEB1
0x47AE9B: mov     eax, [ebp+0]
0x47AE9E: mov     edx, [eax+54h]
0x47AEA1: mov     ecx, ebp
0x47AEA3: call    edx
0x47AEA5: cmp     eax, 0Ah
0x47AEA8: jg      short loc_47AEB1
0x47AEAA: mov     esi, 1
0x47AEAF: jmp     short loc_47AEB3
0x47AEB1: xor     esi, esi
0x47AEB3: neg     esi
0x47AEB5: sbb     esi, esi
0x47AEB7: and     esi, ebp
0x47AEB9: jz      loc_47AF8F
0x47AEBF: mov     ecx, [esp+arg_14]
0x47AEC3: mov     eax, [esi]
0x47AEC5: mov     edx, [eax+80h]
0x47AECB: push    ecx
0x47AECC: push    0
0x47AECE: mov     ecx, esi
0x47AED0: call    edx
0x47AED2: mov     eax, [esp+8+arg_C]
0x47AED6: push    eax
0x47AED7: push    offset dword_B3F95C
0x47AEDC: call    NiRTTI_Cast
0x47AEE1: add     esp, 8
0x47AEE4: xor     ecx, ecx
0x47AEE6: test    eax, eax
0x47AEE8: jz      short loc_47AEED
0x47AEEA: mov     ecx, [eax+38h]
0x47AEED: push    offset a_n; "_n"
0x47AEF2: push    ecx
0x47AEF3: lea     ecx, [esp+10h+Src]
0x47AEFA: push    ecx
0x47AEFB: call    sub_7B4160
0x47AF00: add     esp, 0Ch
0x47AF03: cmp     [esp+8+Src], 0
0x47AF0B: jz      short loc_47AF56
0x47AF0D: push    1; char
0x47AF0F: push    1; char
0x47AF11: lea     edx, [esp+10h+Src]
0x47AF18: push    edx; Src
0x47AF19: lea     eax, [esp+14h+arg_8]
0x47AF1D: push    eax; int
0x47AF1E: call    sub_7B8200
0x47AF23: add     esp, 10h
0x47AF26: mov     eax, [esp+8+arg_8]
0x47AF2A: test    eax, eax
0x47AF2C: mov     byte ptr [esp+8+arg_1A4], 3
0x47AF34: jz      short loc_47AF45
0x47AF36: mov     edx, [esi]
0x47AF38: push    eax
0x47AF39: mov     eax, [edx+84h]
0x47AF3F: push    0
0x47AF41: mov     ecx, esi
0x47AF43: call    eax
0x47AF45: lea     ecx, [esp+10h+arg_0]; this
0x47AF49: mov     byte ptr [esp+10h+arg_19C], 2
0x47AF51: call    sub_7016A0
0x47AF56: mov     eax, [esp+10h+arg_C]
0x47AF5A: mov     edx, [esi]
0x47AF5C: mov     edx, [edx+80h]
0x47AF62: push    eax
0x47AF63: push    1
0x47AF65: mov     ecx, esi
0x47AF67: call    edx
0x47AF69: mov     edi, [esi]
0x47AF6B: add     edi, 84h ; '„'
0x47AF71: call    sub_4783A0
0x47AF76: push    eax
0x47AF77: mov     eax, [edi]
0x47AF79: push    1
0x47AF7B: mov     ecx, esi
0x47AF7D: call    eax
0x47AF7F: or      dword ptr [esi+1Ch], 400h
0x47AF86: mov     dword ptr [esi+24h], 0
0x47AF8D: jmp     short loc_47AFD2
0x47AF8F: push    30h ; '0'; Size
0x47AF91: call    FormHeapAlloc
0x47AF96: add     esp, 4
0x47AF99: mov     [esp+arg_18], eax
0x47AF9D: test    eax, eax
0x47AF9F: mov     [esp+arg_1AC], 4
0x47AFA7: jz      short loc_47AFB4
0x47AFA9: mov     ecx, eax
0x47AFAB: call    NiTexturingProperty__NiTexturingProperty
0x47AFB0: mov     esi, eax
0x47AFB2: jmp     short loc_47AFB6
0x47AFB4: xor     esi, esi
0x47AFB6: mov     ecx, [esp+arg_14]
0x47AFBA: push    ecx
0x47AFBB: mov     ecx, esi
0x47AFBD: mov     [esp+4+arg_1AC], 2
0x47AFC5: call    NiTexturingProperty__SetUnk08
0x47AFCA: push    esi; a2
0x47AFCB: mov     ecx, edi; this
0x47AFCD: call    sub_405680
0x47AFD2: mov     eax, [esp+arg_1C]
0x47AFD6: test    eax, eax
0x47AFD8: mov     edi, ds:0A2807Ch
0x47AFDE: mov     [esp+arg_1AC], 1
0x47AFE6: jz      short loc_47B002
0x47AFE8: mov     esi, eax
0x47AFEA: add     eax, 4
0x47AFED: push    eax; lpAddend
0x47AFEE: call    edi ; InterlockedDecrement
0x47AFF0: test    eax, eax
0x47AFF2: jnz     short loc_47B002
0x47AFF4: test    esi, esi
0x47AFF6: jz      short loc_47B002
0x47AFF8: mov     edx, [esi]
0x47AFFA: mov     eax, [edx]
0x47AFFC: push    1
0x47AFFE: mov     ecx, esi
0x47B000: call    eax
0x47B002: mov     esi, [esp+4+arg_10]
0x47B006: test    esi, esi
0x47B008: mov     [esp+4+arg_1A8], 0
0x47B010: jz      short loc_47B02A
0x47B012: lea     ecx, [esi+4]
0x47B015: push    ecx; lpAddend
0x47B016: call    edi ; InterlockedDecrement
0x47B018: test    eax, eax
0x47B01A: jnz     short loc_47B02A
0x47B01C: test    esi, esi
0x47B01E: jz      short loc_47B02A
0x47B020: mov     edx, [esi]
0x47B022: mov     eax, [edx]
0x47B024: push    1
0x47B026: mov     ecx, esi
0x47B028: call    eax
0x47B02A: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x47B02F: push    4; int
0x47B031: push    18h; unsigned int
0x47B033: lea     ecx, [esp+14h+arg_34]
0x47B037: push    ecx; void *
0x47B038: mov     [esp+18h+arg_1A4], 0FFFFFFFFh
0x47B043: call    $LN21
0x47B048: mov     ecx, [esp+8+arg_19C]
0x47B04F: mov     large fs:0, ecx
0x47B056: pop     ecx
0x47B057: pop     edi
0x47B058: pop     esi
0x47B059: pop     ebp
0x47B05A: pop     ebx
0x47B05B: mov     ecx, [esp-0Ch+arg_198]
0x47B062: xor     ecx, esp
0x47B064: call    @__security_check_cookie@4; __security_check_cookie(x)
0x47B069: add     esp, 1A0h
0x47B06F: retn    4
