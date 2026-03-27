0x44CF80: sub     esp, 114h
0x44CF86: mov     eax, ds:0B30AACh
0x44CF8B: xor     eax, esp
0x44CF8D: mov     [esp+114h+var_4], eax
0x44CF94: cmp     byte ptr ds:0B055ACh, 0
0x44CF9B: jnz     loc_44D31E
0x44CFA1: mov     ecx, ds:0B06140h
0x44CFA7: xor     eax, eax
0x44CFA9: test    ecx, ecx
0x44CFAB: mov     [esp+114h+var_110], 0
0x44CFB3: jbe     short loc_44CFD1
0x44CFB5: mov     edx, ds:0B06144h
0x44CFBB: jmp     short loc_44CFC0
0x44CFBD: align 10h
0x44CFC0: cmp     dword ptr [edx+eax*4], 0
0x44CFC4: jnz     loc_44D093
0x44CFCA: add     eax, 1
0x44CFCD: cmp     eax, ecx
0x44CFCF: jb      short loc_44CFC0
0x44CFD1: xor     eax, eax
0x44CFD3: test    eax, eax
0x44CFD5: mov     [esp+114h+var_114], eax
0x44CFD8: jz      loc_44D31E
0x44CFDE: push    ebx
0x44CFDF: push    ebp
0x44CFE0: push    esi
0x44CFE1: push    edi
0x44CFE2: lea     eax, [esp+124h+var_110]
0x44CFE6: push    eax
0x44CFE7: lea     ecx, [esp+128h+var_10C]
0x44CFEB: push    ecx
0x44CFEC: lea     edx, [esp+12Ch+var_114]
0x44CFF0: push    edx
0x44CFF1: mov     ecx, offset TESForm_FormIDMap
0x44CFF6: call    sub_452600
0x44CFFB: mov     esi, [esp+124h+var_110]
0x44CFFF: test    esi, esi
0x44D001: jz      loc_44D30F
0x44D007: push    0; int
0x44D009: push    offset ??_R0?AVTESIcon@@@8; struct TypeDescriptor *
0x44D00E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44D013: push    0; int
0x44D015: push    esi; void *
0x44D016: call    OblivionDynamicCast
0x44D01B: push    0; int
0x44D01D: push    offset ??_R0?AVTESTexture@@@8; struct TypeDescriptor *
0x44D022: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44D027: push    0; int
0x44D029: push    esi; void *
0x44D02A: mov     edi, eax
0x44D02C: call    OblivionDynamicCast
0x44D031: push    0; int
0x44D033: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x44D038: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44D03D: push    0; int
0x44D03F: push    esi; void *
0x44D040: mov     ebp, eax
0x44D042: call    OblivionDynamicCast
0x44D047: add     esp, 3Ch
0x44D04A: test    edi, edi
0x44D04C: mov     ebx, eax
0x44D04E: jz      loc_44D11C
0x44D054: cmp     byte ptr ds:0B055B4h, 0
0x44D05B: jz      loc_44D30F
0x44D061: mov     bl, [esi+4]
0x44D064: cmp     bl, 1Ah
0x44D067: jnz     short loc_44D076
0x44D069: mov     eax, [esi+7Ch]
0x44D06C: shr     eax, 1
0x44D06E: test    al, 1
0x44D070: jz      loc_44D30F
0x44D076: movzx   eax, word ptr [edi+8]
0x44D07A: cmp     ax, 0FFFFh
0x44D07E: jnz     short loc_44D09B
0x44D080: mov     eax, [edi+4]
0x44D083: lea     edx, [eax+1]
0x44D086: mov     cl, [eax]
0x44D088: add     eax, 1
0x44D08B: test    cl, cl
0x44D08D: jnz     short loc_44D086
0x44D08F: sub     eax, edx
0x44D091: jmp     short loc_44D09E
0x44D093: mov     eax, [edx+eax*4]
0x44D096: jmp     loc_44CFD3
0x44D09B: movzx   eax, ax
0x44D09E: test    eax, eax
0x44D0A0: jnz     short loc_44D0B6
0x44D0A2: mov     edx, [esi]
0x44D0A4: mov     eax, [edx+0D4h]
0x44D0AA: mov     ecx, esi
0x44D0AC: movzx   edi, bl
0x44D0AF: call    eax
0x44D0B1: jmp     loc_44D28D
0x44D0B6: mov     eax, [edi+4]
0x44D0B9: test    eax, eax
0x44D0BB: jnz     short loc_44D0C2
0x44D0BD: mov     eax, offset EmptyString
0x44D0C2: mov     edx, [edi]
0x44D0C4: push    eax
0x44D0C5: mov     eax, [edx+14h]
0x44D0C8: mov     ecx, edi
0x44D0CA: call    eax
0x44D0CC: push    eax
0x44D0CD: lea     ecx, [esp+12Ch+var_108]
0x44D0D1: push    offset aSS_0; "%s%s"
0x44D0D6: push    ecx
0x44D0D7: call    __sprintf
0x44D0DC: mov     ecx, ds:0B33A04h
0x44D0E2: add     esp, 10h
0x44D0E5: test    ecx, ecx
0x44D0E7: jz      short loc_44D103
0x44D0E9: mov     edx, [ecx]
0x44D0EB: mov     edx, [edx+4]
0x44D0EE: push    0FFFFFFFFh
0x44D0F0: push    0
0x44D0F2: push    0
0x44D0F4: lea     eax, [esp+130h+var_108]
0x44D0F8: push    eax
0x44D0F9: call    edx
0x44D0FB: test    eax, eax
0x44D0FD: jnz     loc_44D30F
0x44D103: mov     edi, [edi+4]
0x44D106: test    edi, edi
0x44D108: movzx   ebx, byte ptr [esi+4]
0x44D10C: jnz     loc_44D2EA
0x44D112: mov     edi, offset EmptyString
0x44D117: jmp     loc_44D2EA
0x44D11C: test    ebp, ebp
0x44D11E: jz      loc_44D24B
0x44D124: cmp     byte ptr ds:0B055BCh, 0
0x44D12B: jz      loc_44D30F
0x44D131: movzx   eax, word ptr [ebp+8]
0x44D135: cmp     ax, 0FFFFh
0x44D139: jnz     short loc_44D14E
0x44D13B: mov     eax, [ebp+4]
0x44D13E: lea     edx, [eax+1]
0x44D141: mov     cl, [eax]
0x44D143: add     eax, 1
0x44D146: test    cl, cl
0x44D148: jnz     short loc_44D141
0x44D14A: sub     eax, edx
0x44D14C: jmp     short loc_44D151
0x44D14E: movzx   eax, ax
0x44D151: test    eax, eax
0x44D153: jnz     short loc_44D1A4
0x44D155: movzx   eax, byte ptr [esi+4]
0x44D159: cmp     eax, 5
0x44D15C: jz      short loc_44D168
0x44D15E: cmp     eax, 35h ; '5'
0x44D161: jnz     short loc_44D177
0x44D163: jmp     loc_44D30F
0x44D168: mov     ecx, esi
0x44D16A: call    TESClass_IsPlayable
0x44D16F: test    al, al
0x44D171: jz      loc_44D30F
0x44D177: mov     eax, [esi]
0x44D179: mov     edx, [eax+0D4h]
0x44D17F: movzx   edi, byte ptr [esi+4]
0x44D183: mov     ecx, esi
0x44D185: call    edx
0x44D187: push    eax
0x44D188: push    edi
0x44D189: call    TESForm_GetFormTypeName
0x44D18E: add     esp, 4
0x44D191: push    eax; ArgList
0x44D192: push    offset aTextureMissing; "Texture missing for %s '%s'."
0x44D197: call    PrintError
0x44D19C: add     esp, 0Ch
0x44D19F: jmp     loc_44D30F
0x44D1A4: cmp     byte ptr [esi+4], 0Eh
0x44D1A8: mov     eax, [ebp+4]
0x44D1AB: jz      short loc_44D1CE
0x44D1AD: test    eax, eax
0x44D1AF: jnz     short loc_44D1B6
0x44D1B1: mov     eax, offset EmptyString
0x44D1B6: push    eax
0x44D1B7: mov     eax, [ebp+0]
0x44D1BA: mov     edx, [eax+14h]
0x44D1BD: mov     ecx, ebp
0x44D1BF: call    edx
0x44D1C1: push    eax
0x44D1C2: push    offset aSS_0; "%s%s"
0x44D1C7: lea     eax, [esp+130h+var_108]
0x44D1CB: push    eax
0x44D1CC: jmp     short loc_44D1ED
0x44D1CE: test    eax, eax
0x44D1D0: jnz     short loc_44D1D7
0x44D1D2: mov     eax, offset EmptyString
0x44D1D7: mov     edx, [ebp+0]
0x44D1DA: push    eax
0x44D1DB: mov     eax, [edx+14h]
0x44D1DE: mov     ecx, ebp
0x44D1E0: call    eax
0x44D1E2: push    eax
0x44D1E3: push    offset aSLandscapeS; "%s\\Landscape\\%s"
0x44D1E8: lea     ecx, [esp+130h+var_108]
0x44D1EC: push    ecx
0x44D1ED: call    __sprintf
0x44D1F2: mov     ecx, ds:0B33A04h
0x44D1F8: add     esp, 10h
0x44D1FB: test    ecx, ecx
0x44D1FD: jz      short loc_44D219
0x44D1FF: mov     edx, [ecx]
0x44D201: mov     edx, [edx+4]
0x44D204: push    0FFFFFFFFh
0x44D206: push    0
0x44D208: push    0
0x44D20A: lea     eax, [esp+130h+var_108]
0x44D20E: push    eax
0x44D20F: call    edx
0x44D211: test    eax, eax
0x44D213: jnz     loc_44D30F
0x44D219: mov     ebp, [ebp+4]
0x44D21C: test    ebp, ebp
0x44D21E: movzx   edi, byte ptr [esi+4]
0x44D222: jnz     short loc_44D229
0x44D224: mov     ebp, offset EmptyString
0x44D229: mov     eax, [esi]
0x44D22B: mov     edx, [eax+0D4h]
0x44D231: mov     ecx, esi
0x44D233: call    edx
0x44D235: push    eax
0x44D236: push    edi
0x44D237: call    TESForm_GetFormTypeName
0x44D23C: add     esp, 4
0x44D23F: push    eax
0x44D240: push    ebp
0x44D241: push    offset aTextureSMissin; "Texture '%s' missing for %s '%s'."
0x44D246: jmp     loc_44D307
0x44D24B: test    ebx, ebx
0x44D24D: jz      loc_44D30F
0x44D253: cmp     byte ptr ds:0B055B4h, 0
0x44D25A: jz      loc_44D30F
0x44D260: push    0
0x44D262: mov     ecx, ebx
0x44D264: call    TESBipedModelForm_GetBipedIconPath
0x44D269: mov     edi, eax
0x44D26B: lea     edx, [eax+1]
0x44D26E: mov     edi, edi
0x44D270: mov     cl, [eax]
0x44D272: add     eax, 1
0x44D275: test    cl, cl
0x44D277: jnz     short loc_44D270
0x44D279: sub     eax, edx
0x44D27B: jnz     short loc_44D2A7
0x44D27D: mov     eax, [esi]
0x44D27F: mov     edx, [eax+0D4h]
0x44D285: movzx   edi, byte ptr [esi+4]
0x44D289: mov     ecx, esi
0x44D28B: call    edx
0x44D28D: push    eax
0x44D28E: push    edi
0x44D28F: call    TESForm_GetFormTypeName
0x44D294: add     esp, 4
0x44D297: push    eax; ArgList
0x44D298: push    offset aIconMissingFor; "Icon missing for %s '%s'."
0x44D29D: call    PrintError
0x44D2A2: add     esp, 0Ch
0x44D2A5: jmp     short loc_44D30F
0x44D2A7: mov     eax, [ebx+68h]
0x44D2AA: mov     edx, [eax+14h]
0x44D2AD: lea     ecx, [ebx+68h]
0x44D2B0: push    edi
0x44D2B1: call    edx
0x44D2B3: push    eax
0x44D2B4: lea     eax, [esp+12Ch+var_108]
0x44D2B8: push    offset aSS_0; "%s%s"
0x44D2BD: push    eax
0x44D2BE: call    __sprintf
0x44D2C3: mov     ecx, ds:0B33A04h
0x44D2C9: add     esp, 10h
0x44D2CC: test    ecx, ecx
0x44D2CE: jz      short loc_44D2E6
0x44D2D0: mov     edx, [ecx]
0x44D2D2: mov     edx, [edx+4]
0x44D2D5: push    0FFFFFFFFh
0x44D2D7: push    0
0x44D2D9: push    0
0x44D2DB: lea     eax, [esp+130h+var_108]
0x44D2DF: push    eax
0x44D2E0: call    edx
0x44D2E2: test    eax, eax
0x44D2E4: jnz     short loc_44D30F
0x44D2E6: movzx   ebx, byte ptr [esi+4]
0x44D2EA: mov     eax, [esi]
0x44D2EC: mov     edx, [eax+0D4h]
0x44D2F2: mov     ecx, esi
0x44D2F4: call    edx
0x44D2F6: push    eax
0x44D2F7: push    ebx
0x44D2F8: call    TESForm_GetFormTypeName
0x44D2FD: add     esp, 4
0x44D300: push    eax
0x44D301: push    edi; ArgList
0x44D302: push    offset aIconSMissingFo; "Icon '%s' missing for %s '%s'."
0x44D307: call    PrintError
0x44D30C: add     esp, 10h
0x44D30F: cmp     [esp+124h+var_114], 0
0x44D314: jnz     loc_44CFE2
0x44D31A: pop     edi
0x44D31B: pop     esi
0x44D31C: pop     ebp
0x44D31D: pop     ebx
0x44D31E: mov     ecx, [esp+114h+var_4]
0x44D325: xor     ecx, esp
0x44D327: call    @__security_check_cookie@4; __security_check_cookie(x)
0x44D32C: add     esp, 114h
0x44D332: retn
