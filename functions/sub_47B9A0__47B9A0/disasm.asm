0x47B9A0: push    0FFFFFFFFh
0x47B9A2: push    offset SEH_47B9A0
0x47B9A7: mov     eax, large fs:0
0x47B9AD: push    eax
0x47B9AE: sub     esp, 6Ch
0x47B9B1: push    ebx
0x47B9B2: push    ebp
0x47B9B3: push    esi
0x47B9B4: push    edi
0x47B9B5: mov     eax, ds:0B30AACh
0x47B9BA: xor     eax, esp
0x47B9BC: push    eax
0x47B9BD: lea     eax, [esp+8Ch+var_C]
0x47B9C4: mov     large fs:0, eax
0x47B9CA: mov     ebp, ecx
0x47B9CC: mov     esi, [esp+8Ch+arg_0]
0x47B9D3: test    esi, esi
0x47B9D5: jz      loc_47BC20
0x47B9DB: cmp     byte ptr [esi+4], 16h
0x47B9DF: jnz     loc_47BC20
0x47B9E5: push    0
0x47B9E7: lea     eax, [ebp+0CCh]
0x47B9ED: push    1
0x47B9EF: push    eax
0x47B9F0: call    sub_478780
0x47B9F5: mov     ecx, [ebp+150h]
0x47B9FB: mov     eax, [ecx]
0x47B9FD: mov     edx, [eax+170h]
0x47BA03: push    0FFFFFFFFh; int
0x47BA05: call    edx
0x47BA07: mov     ecx, eax
0x47BA09: call    TESActorBase_IsFemale
0x47BA0E: push    eax; int
0x47BA0F: push    ebp; int
0x47BA10: lea     ecx, [esi+5Ch]; int
0x47BA13: call    sub_4691D0
0x47BA18: cmp     dword ptr [ebp+0D0h], 0
0x47BA1F: jz      loc_47BC20
0x47BA25: xor     edi, edi
0x47BA27: lea     esi, [ebp+4Ch]
0x47BA2A: mov     bl, 2
0x47BA2C: lea     esp, [esp+0]
0x47BA30: mov     eax, [esi]
0x47BA32: push    0; int
0x47BA34: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x47BA39: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x47BA3E: push    0; int
0x47BA40: push    eax; void *
0x47BA41: call    OblivionDynamicCast
0x47BA46: add     esp, 14h
0x47BA49: test    eax, eax
0x47BA4B: jz      short loc_47BA56
0x47BA4D: test    [eax+6], bl
0x47BA50: jnz     loc_47BC20
0x47BA56: add     edi, 1
0x47BA59: add     esi, 10h
0x47BA5C: cmp     edi, 10h
0x47BA5F: jl      short loc_47BA30
0x47BA61: mov     ecx, ds:0B333C4h
0x47BA67: cmp     [ebp+150h], ecx
0x47BA6D: jnz     short loc_47BA7D
0x47BA6F: push    ebp
0x47BA70: call    sub_65D770
0x47BA75: test    al, al
0x47BA77: jnz     loc_47BC20
0x47BA7D: mov     ecx, [ebp+0D0h]
0x47BA83: mov     edx, [ecx]
0x47BA85: mov     eax, [edx+14h]
0x47BA88: push    1
0x47BA8A: push    3
0x47BA8C: push    1
0x47BA8E: call    eax
0x47BA90: mov     ecx, ds:0B33A1Ch
0x47BA96: push    eax
0x47BA97: call    sub_439EB0
0x47BA9C: lea     ecx, [esp+8Ch+var_70]
0x47BAA0: mov     esi, eax
0x47BAA2: call    sub_478B90
0x47BAA7: fld1
0x47BAA9: fst     [esp+8Ch+var_58]
0x47BAAD: fst     [esp+8Ch+var_5C]
0x47BAB1: fstp    [esp+8Ch+var_60]
0x47BAB5: lea     ecx, [esp+8Ch+var_70]
0x47BAB9: push    ecx
0x47BABA: mov     ecx, esi
0x47BABC: mov     [esp+90h+var_4], 0
0x47BAC7: call    sub_700610
0x47BACC: mov     ebx, eax
0x47BACE: xor     eax, eax
0x47BAD0: test    ebx, ebx
0x47BAD2: jz      loc_47BC06
0x47BAD8: push    ebx
0x47BAD9: push    offset dword_B35288
0x47BADE: call    NiRTTI__IsObjectOfRTTIType
0x47BAE3: add     esp, 8
0x47BAE6: test    al, al
0x47BAE8: jz      short loc_47BAF3
0x47BAEA: push    7
0x47BAEC: mov     ecx, ebx
0x47BAEE: call    sub_4A01B0
0x47BAF3: push    offset off_A3CEB0
0x47BAF8: mov     ecx, ebx
0x47BAFA: call    sub_6FFAC0
0x47BAFF: mov     edx, ds:0B3F9A8h
0x47BB05: mov     [ebx+54h], edx
0x47BB08: mov     eax, ds:0B3F9ACh
0x47BB0D: mov     [ebx+58h], eax
0x47BB10: mov     ecx, ds:0B3F9B0h
0x47BB16: mov     [ebx+5Ch], ecx
0x47BB19: lea     edi, [ebx+30h]
0x47BB1C: mov     ecx, 9
0x47BB21: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x47BB26: rep movsd
0x47BB28: xor     edi, edi
0x47BB2A: push    edi
0x47BB2B: push    edi
0x47BB2C: push    8
0x47BB2E: push    ebx
0x47BB2F: mov     ecx, ebp
0x47BB31: call    sub_47B5B0
0x47BB36: mov     esi, eax
0x47BB38: cmp     esi, edi
0x47BB3A: mov     [esp+8Ch+arg_0], esi
0x47BB41: jnz     short loc_47BB64
0x47BB43: mov     edx, [ebp+150h]
0x47BB49: mov     eax, [edx+3Ch]
0x47BB4C: push    edi
0x47BB4D: push    8
0x47BB4F: push    ebp
0x47BB50: push    edi
0x47BB51: push    ebx
0x47BB52: push    eax
0x47BB53: mov     [esp+0A4h+arg_0], ebx
0x47BB5A: call    sub_479140
0x47BB5F: add     esp, 18h
0x47BB62: mov     esi, ebx
0x47BB64: mov     [esp+8Ch+Src], edi
0x47BB68: mov     [esp+8Ch+var_74], di
0x47BB6D: mov     [esp+8Ch+var_72], di
0x47BB72: mov     ecx, [ebp+0CCh]
0x47BB78: mov     eax, [ecx+0Ch]
0x47BB7B: push    eax
0x47BB7C: mov     eax, [ecx]
0x47BB7E: mov     edx, [eax+0D4h]
0x47BB84: mov     byte ptr [esp+90h+var_4], 1
0x47BB8C: call    edx
0x47BB8E: push    eax
0x47BB8F: mov     eax, ds:0B065A8h
0x47BB94: push    eax; ArgList
0x47BB95: lea     ecx, [esp+98h+Src]
0x47BB99: push    offset aSS08x; "%s %s (%08X)"
0x47BB9E: push    ecx; int
0x47BB9F: call    BSStringT_Static_Format
0x47BBA4: mov     edx, [esp+0A0h+Src]
0x47BBA8: add     esp, 14h
0x47BBAB: push    edx; Src
0x47BBAC: mov     ecx, esi
0x47BBAE: call    NiObjectNET_SetName
0x47BBB3: cmp     byte ptr [ebp+0D8h], 0
0x47BBBA: jz      short loc_47BBEE
0x47BBBC: lea     ebx, [esi+30h]
0x47BBBF: push    1
0x47BBC1: mov     ecx, 9
0x47BBC6: mov     esi, ebx
0x47BBC8: lea     edi, [esp+90h+var_54]
0x47BBCC: rep movsd
0x47BBCE: lea     eax, [esp+90h+var_54]
0x47BBD2: push    eax
0x47BBD3: lea     ecx, [esp+94h+var_30]
0x47BBD7: push    ecx
0x47BBD8: mov     ecx, [ebp+150h]
0x47BBDE: call    sub_4D7C50
0x47BBE3: mov     ecx, 9
0x47BBE8: mov     esi, eax
0x47BBEA: mov     edi, ebx
0x47BBEC: rep movsd
0x47BBEE: lea     ecx, [esp+8Ch+Src]; void *
0x47BBF2: mov     byte ptr [esp+8Ch+var_4], 0
0x47BBFA: call    BSStringT_Clear
0x47BBFF: mov     eax, [esp+8Ch+arg_0]
0x47BC06: lea     ecx, [esp+8Ch+var_70]
0x47BC0A: mov     [ebp+0D4h], eax
0x47BC10: mov     [esp+8Ch+var_4], 0FFFFFFFFh
0x47BC1B: call    sub_4781A0
0x47BC20: mov     ecx, [esp+8Ch+var_C]
0x47BC27: mov     large fs:0, ecx
0x47BC2E: pop     ecx
0x47BC2F: pop     edi
0x47BC30: pop     esi
0x47BC31: pop     ebp
0x47BC32: pop     ebx
0x47BC33: add     esp, 78h
0x47BC36: retn    4
