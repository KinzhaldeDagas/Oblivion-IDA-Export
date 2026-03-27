0x69BEC0: push    0FFFFFFFFh
0x69BEC2: push    offset SEH_616530
0x69BEC7: mov     eax, large fs:0
0x69BECD: push    eax
0x69BECE: sub     esp, 10h
0x69BED1: push    ebp
0x69BED2: push    esi
0x69BED3: push    edi
0x69BED4: mov     eax, ds:0B30AACh
0x69BED9: xor     eax, esp
0x69BEDB: push    eax
0x69BEDC: lea     eax, [esp+2Ch+var_C]
0x69BEE0: mov     large fs:0, eax
0x69BEE6: mov     esi, ecx
0x69BEE8: mov     eax, [esi]
0x69BEEA: mov     edx, [eax+30h]
0x69BEED: call    edx
0x69BEEF: test    eax, eax
0x69BEF1: jz      MagicCaster_UseActiveMagicItem___Done
0x69BEF7: mov     eax, [esi]
0x69BEF9: fldz
0x69BEFB: mov     edx, [eax+30h]
0x69BEFE: fstp    [esp+2Ch+var_18]
0x69BF02: mov     ecx, esi
0x69BF04: call    edx
0x69BF06: push    0; int
0x69BF08: push    offset ??_R0?AVIngredientItem@@@8; struct TypeDescriptor *
0x69BF0D: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x69BF12: push    0; int
0x69BF14: push    eax; void *
0x69BF15: call    OblivionDynamicCast
0x69BF1A: mov     edi, [esi]
0x69BF1C: mov     edx, [edi+30h]
0x69BF1F: add     esp, 14h
0x69BF22: mov     ebp, eax
0x69BF24: push    0
0x69BF26: lea     eax, [esp+30h+var_1C]
0x69BF2A: push    eax
0x69BF2B: lea     ecx, [esp+34h+var_18]
0x69BF2F: push    ecx
0x69BF30: mov     ecx, esi
0x69BF32: mov     [esp+38h+var_1C], 0
0x69BF3A: call    edx
0x69BF3C: push    eax
0x69BF3D: mov     eax, [edi+1Ch]
0x69BF40: mov     ecx, esi
0x69BF42: call    eax
0x69BF44: test    al, al
0x69BF46: mov     edx, [esi]
0x69BF48: mov     ecx, esi
0x69BF4A: jnz     MagicCaster_UseActiveMagicItem___Cast
0x69BF50: mov     eax, [edx+20h]
0x69BF53: call    eax
0x69BF55: test    eax, eax
0x69BF57: jz      short loc_69BF6E
0x69BF59: mov     edx, [eax]
0x69BF5B: mov     ecx, eax
0x69BF5D: mov     eax, [edx+190h]
0x69BF63: call    eax
0x69BF65: test    al, al
0x69BF67: jz      short loc_69BF6E
0x69BF69: lea     edi, [esi-5Ch]
0x69BF6C: jmp     short loc_69BF70
0x69BF6E: xor     edi, edi
0x69BF70: mov     edx, [esi]
0x69BF72: mov     eax, [edx+30h]
0x69BF75: push    0
0x69BF77: mov     ecx, esi
0x69BF79: call    eax
0x69BF7B: mov     ecx, eax
0x69BF7D: call    MagicItem_GetFXEffect
0x69BF82: test    edi, edi
0x69BF84: jz      short loc_69BFBB
0x69BF86: test    eax, eax
0x69BF88: jz      short loc_69BFBB
0x69BF8A: mov     eax, [eax+64h]
0x69BF8D: push    eax
0x69BF8E: call    Magic_GetSchoolFailureSound
0x69BF93: add     esp, 4
0x69BF96: test    eax, eax
0x69BF98: jz      short loc_69BFBB
0x69BF9A: test    ebp, ebp
0x69BF9C: mov     ecx, [eax+28h]
0x69BF9F: jnz     short loc_69BFBB
0x69BFA1: mov     eax, ecx
0x69BFA3: test    eax, eax
0x69BFA5: jnz     short loc_69BFAC
0x69BFA7: mov     eax, offset EmptyString
0x69BFAC: push    102h
0x69BFB1: push    0
0x69BFB3: push    eax
0x69BFB4: mov     ecx, edi
0x69BFB6: call    sub_65A8B0
0x69BFBB: mov     ecx, [esp+2Ch+var_1C]
0x69BFBF: mov     eax, [esi]
0x69BFC1: push    ecx
0x69BFC2: lea     edx, [esp+30h+string]
0x69BFC6: push    edx
0x69BFC7: mov     edx, [eax+30h]
0x69BFCA: mov     ecx, esi
0x69BFCC: call    edx
0x69BFCE: mov     ecx, eax
0x69BFD0: call    Magic_CastFailureMsg
0x69BFD5: test    edi, edi
0x69BFD7: mov     [esp+2Ch+var_4], 0
0x69BFDF: jz      short loc_69C011
0x69BFE1: mov     ecx, edi
0x69BFE3: call    Actor_IsPlayer
0x69BFE8: test    al, al
0x69BFEA: jz      short loc_69C011
0x69BFEC: test    ebp, ebp
0x69BFEE: jz      short loc_69BFF6
0x69BFF0: test    byte ptr [ebp+7Ch], 2
0x69BFF4: jz      short loc_69C011
0x69BFF6: fld     dword ptr ds:0A30634h
0x69BFFC: mov     eax, [esp+2Ch+string]
0x69C000: push    ecx
0x69C001: fstp    [esp+30h+duration]; duration
0x69C004: push    1; unk2
0x69C006: push    0; unk1
0x69C008: push    eax; string
0x69C009: call    GameUI_QueueMessage
0x69C00E: add     esp, 10h
0x69C011: mov     edi, [esi]
0x69C013: mov     edx, [edi+30h]
0x69C016: push    0
0x69C018: mov     ecx, esi
0x69C01A: mov     dword ptr [esi+8], 7
0x69C021: call    edx
0x69C023: push    eax
0x69C024: mov     eax, [edi+18h]
0x69C027: mov     ecx, esi
0x69C029: call    eax
0x69C02B: mov     edx, [esi]
0x69C02D: mov     eax, [edx+34h]
0x69C030: push    0
0x69C032: mov     ecx, esi
0x69C034: call    eax
0x69C036: mov     edx, [esi]
0x69C038: mov     eax, [edx+3Ch]
0x69C03B: push    0
0x69C03D: mov     ecx, esi
0x69C03F: call    eax
0x69C041: mov     ecx, [esp+2Ch+string]
0x69C045: push    ecx
0x69C046: call    FormHeapFree
0x69C04B: add     esp, 4
0x69C04E: mov     ecx, dword ptr [esp+2Ch+var_C]
0x69C052: mov     large fs:0, ecx
0x69C059: pop     ecx
0x69C05A: pop     edi
0x69C05B: pop     esi
0x69C05C: pop     ebp
0x69C05D: add     esp, 1Ch
0x69C060: retn    4
