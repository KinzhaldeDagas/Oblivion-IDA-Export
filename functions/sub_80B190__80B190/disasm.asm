0x80B190: push    0FFFFFFFFh
0x80B192: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x80B197: mov     eax, large fs:0
0x80B19D: push    eax
0x80B19E: push    ecx
0x80B19F: push    ebp
0x80B1A0: push    esi
0x80B1A1: push    edi
0x80B1A2: mov     eax, ds:0B30AACh
0x80B1A7: xor     eax, esp
0x80B1A9: push    eax
0x80B1AA: lea     eax, [esp+20h+var_C]
0x80B1AE: mov     large fs:0, eax
0x80B1B4: mov     edi, [esp+20h+arg_0]
0x80B1B8: push    4
0x80B1BA: mov     ecx, edi
0x80B1BC: call    NiNode_GetNiPropertyByID
0x80B1C1: mov     ebp, ds:0A2807Ch
0x80B1C7: mov     esi, eax
0x80B1C9: test    esi, esi
0x80B1CB: jz      short loc_80B21D
0x80B1CD: mov     eax, [esi]
0x80B1CF: mov     edx, [eax+54h]
0x80B1D2: mov     ecx, esi
0x80B1D4: call    edx
0x80B1D6: cmp     eax, 5
0x80B1D9: jl      short loc_80B1ED
0x80B1DB: mov     eax, [esi]
0x80B1DD: mov     edx, [eax+54h]
0x80B1E0: mov     ecx, esi
0x80B1E2: call    edx
0x80B1E4: cmp     eax, 0Ah
0x80B1E7: jle     loc_80B2C2
0x80B1ED: push    4
0x80B1EF: lea     eax, [esp+24h+arg_0]
0x80B1F3: push    eax
0x80B1F4: mov     ecx, edi
0x80B1F6: call    sub_708560
0x80B1FB: mov     eax, [esp+20h+arg_0]
0x80B1FF: test    eax, eax
0x80B201: jz      short loc_80B21D
0x80B203: mov     esi, eax
0x80B205: add     eax, 4
0x80B208: push    eax; lpAddend
0x80B209: call    ebp ; InterlockedDecrement
0x80B20B: test    eax, eax
0x80B20D: jnz     short loc_80B21D
0x80B20F: test    esi, esi
0x80B211: jz      short loc_80B21D
0x80B213: mov     edx, [esi]
0x80B215: mov     eax, [edx]
0x80B217: push    1
0x80B219: mov     ecx, esi
0x80B21B: call    eax
0x80B21D: push    0F0h ; 'ð'; Size
0x80B222: call    FormHeapAlloc
0x80B227: add     esp, 4
0x80B22A: mov     [esp+20h+var_10], eax
0x80B22E: test    eax, eax
0x80B230: mov     [esp+20h+var_4], 0
0x80B238: jz      short loc_80B245
0x80B23A: mov     ecx, eax; this
0x80B23C: call    ??0BSShaderPPLightingProperty@@QAE@XZ; BSShaderPPLightingProperty::BSShaderPPLightingProperty(void)
0x80B241: mov     esi, eax
0x80B243: jmp     short loc_80B247
0x80B245: xor     esi, esi
0x80B247: push    esi; a2
0x80B248: mov     ecx, edi; this
0x80B24A: mov     [esp+24h+var_4], 0FFFFFFFFh
0x80B252: call    sub_405680
0x80B257: mov     edx, [esi]
0x80B259: mov     eax, [edx+58h]
0x80B25C: push    edi
0x80B25D: mov     ecx, esi
0x80B25F: call    eax
0x80B261: test    al, al
0x80B263: jnz     short loc_80B2B0
0x80B265: push    esi
0x80B266: mov     ecx, edi
0x80B268: call    sub_4A1220
0x80B26D: mov     esi, [edi+0BCh]
0x80B273: test    esi, esi
0x80B275: jz      short loc_80B299
0x80B277: lea     ecx, [esi+4]
0x80B27A: push    ecx; lpAddend
0x80B27B: call    ebp ; InterlockedDecrement
0x80B27D: test    eax, eax
0x80B27F: jnz     short loc_80B28F
0x80B281: test    esi, esi
0x80B283: jz      short loc_80B28F
0x80B285: mov     edx, [esi]
0x80B287: mov     eax, [edx]
0x80B289: push    1
0x80B28B: mov     ecx, esi
0x80B28D: call    eax
0x80B28F: mov     dword ptr [edi+0BCh], 0
0x80B299: xor     al, al
0x80B29B: mov     ecx, dword ptr [esp+20h+var_C]
0x80B29F: mov     large fs:0, ecx
0x80B2A6: pop     ecx
0x80B2A7: pop     edi
0x80B2A8: pop     esi
0x80B2A9: pop     ebp
0x80B2AA: add     esp, 10h
0x80B2AD: retn    4
0x80B2B0: mov     edx, [esi]
0x80B2B2: mov     eax, [edx+8Ch]
0x80B2B8: push    0
0x80B2BA: mov     ecx, esi
0x80B2BC: call    eax
0x80B2BE: test    eax, eax
0x80B2C0: jz      short loc_80B299
0x80B2C2: mov     al, 1
0x80B2C4: mov     ecx, dword ptr [esp+20h+var_C]
0x80B2C8: mov     large fs:0, ecx
0x80B2CF: pop     ecx
0x80B2D0: pop     edi
0x80B2D1: pop     esi
0x80B2D2: pop     ebp
0x80B2D3: add     esp, 10h
0x80B2D6: retn    4
