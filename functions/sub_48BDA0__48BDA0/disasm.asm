0x48BDA0: push    ebp
0x48BDA1: mov     ebp, esp
0x48BDA3: and     esp, 0FFFFFFF8h
0x48BDA6: sub     esp, 54h
0x48BDA9: fld     dword ptr ds:0A3B888h
0x48BDAF: push    ebx
0x48BDB0: push    esi
0x48BDB1: fstp    dword ptr [esp+5Ch+var_4C+4]
0x48BDB5: mov     esi, ecx
0x48BDB7: mov     ecx, [esi+4]; this
0x48BDBA: test    ecx, ecx
0x48BDBC: push    edi
0x48BDBD: mov     [esp+60h+var_3C], esi
0x48BDC1: mov     dword ptr [esp+60h+var_44], 0
0x48BDC9: jz      short loc_48BDD2
0x48BDCB: call    TESObjectREFR_GetContainer
0x48BDD0: jmp     short loc_48BDD4
0x48BDD2: xor     eax, eax
0x48BDD4: push    0; int
0x48BDD6: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x48BDDB: push    offset ??_R0?AVTESContainer@@@8; struct _s_RTTICompleteObjectLocator *
0x48BDE0: push    0; int
0x48BDE2: push    eax; void *
0x48BDE3: call    OblivionDynamicCast
0x48BDE8: add     esp, 14h
0x48BDEB: cmp     byte ptr [ebp+arg_C], 0
0x48BDEF: mov     edi, eax
0x48BDF1: jz      short loc_48BE3E
0x48BDF3: push    0
0x48BDF5: push    9
0x48BDF7: mov     ecx, esi
0x48BDF9: call    ContainerExtraData_GetEquippedInstance
0x48BDFE: mov     esi, eax
0x48BE00: test    esi, esi
0x48BE02: jz      short loc_48BE3E
0x48BE04: mov     eax, [esi]
0x48BE06: mov     ecx, [eax]
0x48BE08: call    sub_41DF40
0x48BE0D: test    al, al
0x48BE0F: jz      short loc_48BE1C
0x48BE11: mov     eax, esi
0x48BE13: pop     edi
0x48BE14: pop     esi
0x48BE15: pop     ebx
0x48BE16: mov     esp, ebp
0x48BE18: pop     ebp
0x48BE19: retn    10h
0x48BE1C: mov     ecx, [esi]
0x48BE1E: test    ecx, ecx
0x48BE20: jz      short loc_48BE27
0x48BE22: call    BSSimpleList_Clear
0x48BE27: mov     ecx, [esi]
0x48BE29: push    ecx
0x48BE2A: call    FormHeapFree
0x48BE2F: push    esi
0x48BE30: mov     dword ptr [esi], 0
0x48BE36: call    FormHeapFree
0x48BE3B: add     esp, 8
0x48BE3E: mov     ebx, [ebp+arg_0]
0x48BE41: mov     edx, [ebx]
0x48BE43: mov     eax, [edx+120h]
0x48BE49: mov     ecx, ebx
0x48BE4B: mov     [esp+60h+var_4D], 0
0x48BE50: call    eax
0x48BE52: test    eax, eax
0x48BE54: jnz     short loc_48BE5F
0x48BE56: call    sub_4A98C0
0x48BE5B: test    eax, eax
0x48BE5D: jz      short loc_48BE71
0x48BE5F: mov     edx, [eax]
0x48BE61: mov     ecx, eax
0x48BE63: mov     eax, [edx+16Ch]
0x48BE69: push    40h ; '@'
0x48BE6B: call    eax
0x48BE6D: mov     byte ptr [esp+5Ch+var_4C+3], al
0x48BE71: mov     ecx, [esp+5Ch+var_38]
0x48BE75: mov     ecx, [ecx+4]; this
0x48BE78: test    ecx, ecx
0x48BE7A: jz      short loc_48BE83
0x48BE7C: call    TESObjectREFR_GetContainer
0x48BE81: jmp     short loc_48BE85
0x48BE83: xor     eax, eax
0x48BE85: mov     edx, [ebx]
0x48BE87: lea     esi, [eax+8]
0x48BE8A: mov     eax, [edx+12Ch]
0x48BE90: push    7
0x48BE92: mov     ecx, ebx
0x48BE94: mov     [esp+60h+var_1C], esi
0x48BE98: call    eax
0x48BE9A: fstp    [esp+60h+var_18]
0x48BE9E: mov     edx, [ebx]
0x48BEA0: mov     eax, [edx+128h]
0x48BEA6: push    0
0x48BEA8: mov     ecx, ebx
0x48BEAA: call    eax
0x48BEAC: test    edi, edi
0x48BEAE: mov     [esp+60h+var_4], eax
0x48BEB2: fild    [esp+60h+var_4]
0x48BEB6: fstp    [esp+60h+var_1C]
0x48BEBA: jz      short loc_48BEC5
0x48BEBC: mov     ecx, edi; this
0x48BEBE: call    Actor_GetFatigueFraction
0x48BEC3: jmp     short loc_48BEC7
0x48BEC5: fld1
0x48BEC7: test    esi, esi
0x48BEC9: fstp    [esp+60h+var_28]
0x48BECD: fld1
0x48BECF: fstp    [esp+60h+var_38]
0x48BED3: jz      loc_48C41E
0x48BED9: lea     esp, [esp+0]
0x48BEE0: mov     eax, [esi]
0x48BEE2: test    eax, eax
0x48BEE4: mov     ebx, [esp+60h+var_3C]
0x48BEE8: jz      loc_48C40B
0x48BEEE: mov     ecx, [eax+4]
0x48BEF1: push    0; int
0x48BEF3: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x48BEF8: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48BEFD: push    0; int
0x48BEFF: push    ecx; void *
0x48BF00: call    OblivionDynamicCast
0x48BF05: mov     esi, eax
0x48BF07: add     esp, 14h
0x48BF0A: test    esi, esi
0x48BF0C: mov     dword ptr [esp+60h+var_4C], esi
0x48BF10: jz      loc_48C40B
0x48BF16: cmp     byte ptr [esi+90h], 4
0x48BF1D: jnz     short loc_48BF41
0x48BF1F: lea     eax, [esi+60h]
0x48BF22: test    eax, eax
0x48BF24: jz      short loc_48BF2B
0x48BF26: mov     eax, [eax+4]
0x48BF29: jmp     short loc_48BF2D
0x48BF2B: xor     eax, eax
0x48BF2D: test    eax, eax
0x48BF2F: jz      short loc_48BF41
0x48BF31: lea     ecx, [eax+24h]
0x48BF34: call    EffectItemList_HasHostile
0x48BF39: test    al, al
0x48BF3B: jz      loc_48C40B
0x48BF41: mov     eax, [ebx]
0x48BF43: test    eax, eax
0x48BF45: mov     dl, 1
0x48BF47: jz      short loc_48BF6A
0x48BF49: lea     esp, [esp+0]
0x48BF50: test    dl, dl
0x48BF52: jz      short loc_48BFD3
0x48BF54: mov     ecx, [eax]
0x48BF56: test    ecx, ecx
0x48BF58: jz      short loc_48BF63
0x48BF5A: cmp     [ecx+8], esi
0x48BF5D: jnz     short loc_48BF63
0x48BF5F: xor     dl, dl
0x48BF61: jmp     short loc_48BF66
0x48BF63: mov     eax, [eax+4]
0x48BF66: test    eax, eax
0x48BF68: jnz     short loc_48BF50
0x48BF6A: xor     edi, edi
0x48BF6C: mov     edx, [ebp+arg_C]
0x48BF6F: mov     eax, [ebp+arg_0]
0x48BF72: push    edx
0x48BF73: push    eax
0x48BF74: mov     ecx, ebx
0x48BF76: mov     [esp+68h+var_10], 0
0x48BF7E: call    sub_48B9C0
0x48BF83: test    eax, eax
0x48BF85: mov     [esp+60h+var_4], eax
0x48BF89: jz      short loc_48BFA9
0x48BF8B: mov     eax, [eax+8]
0x48BF8E: push    0; int
0x48BF90: push    offset ??_R0?AVTESAmmo@@@8; struct TypeDescriptor *
0x48BF95: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48BF9A: push    0; int
0x48BF9C: push    eax; void *
0x48BF9D: call    OblivionDynamicCast
0x48BFA2: add     esp, 14h
0x48BFA5: mov     [esp+60h+var_10], eax
0x48BFA9: xor     ebx, ebx
0x48BFAB: test    edi, edi
0x48BFAD: jz      loc_48C055
0x48BFB3: mov     eax, [edi]
0x48BFB5: test    eax, eax
0x48BFB7: jz      short loc_48BFDB
0x48BFB9: mov     esi, [eax]
0x48BFBB: test    esi, esi
0x48BFBD: jz      short loc_48BFDB
0x48BFBF: mov     ecx, esi
0x48BFC1: call    ExtraDataList_GetOwner
0x48BFC6: test    eax, eax
0x48BFC8: jz      short loc_48BFDB
0x48BFCA: mov     ecx, esi
0x48BFCC: call    ExtraDataList_GetOwner
0x48BFD1: jmp     short loc_48BFDD
0x48BFD3: test    eax, eax
0x48BFD5: jz      short loc_48BF6A
0x48BFD7: mov     edi, [eax]
0x48BFD9: jmp     short loc_48BF6C
0x48BFDB: xor     eax, eax
0x48BFDD: cmp     eax, [ebp+arg_0]
0x48BFE0: jz      short loc_48C007
0x48BFE2: cmp     dword ptr [edi+4], 0
0x48BFE6: jle     short loc_48C007
0x48BFE8: mov     esi, [edi]
0x48BFEA: test    esi, esi
0x48BFEC: jz      short loc_48C007
0x48BFEE: mov     ecx, [esi]
0x48BFF0: test    ecx, ecx
0x48BFF2: jz      short loc_48C007
0x48BFF4: call    ExtraDataList_GetOwner
0x48BFF9: test    eax, eax
0x48BFFB: jz      short loc_48C000
0x48BFFD: add     ebx, 1
0x48C000: mov     esi, [esi+4]
0x48C003: test    esi, esi
0x48C005: jnz     short loc_48BFEE
0x48C007: mov     eax, [edi]
0x48C009: test    eax, eax
0x48C00B: jz      short loc_48C03C
0x48C00D: mov     esi, [eax]
0x48C00F: test    esi, esi
0x48C011: jz      short loc_48C03C
0x48C013: mov     ecx, esi
0x48C015: call    ExtraDataList_GetOwner
0x48C01A: test    eax, eax
0x48C01C: jz      short loc_48C03C
0x48C01E: mov     ecx, esi
0x48C020: call    ExtraDataList_GetOwner
0x48C025: test    eax, eax
0x48C027: jz      short loc_48C03C
0x48C029: mov     ecx, dword ptr [esp+60h+var_24+4]
0x48C02D: mov     edx, [ecx]
0x48C02F: mov     eax, [edi+4]
0x48C032: add     eax, [edx]
0x48C034: cmp     ebx, eax
0x48C036: jge     loc_48C3D9
0x48C03C: mov     ecx, dword ptr [esp+60h+var_24+4]
0x48C040: mov     edx, [ecx]
0x48C042: mov     eax, [edx]
0x48C044: mov     ecx, [edi+4]
0x48C047: add     ecx, eax
0x48C049: test    ecx, ecx
0x48C04B: jg      short loc_48C055
0x48C04D: test    eax, eax
0x48C04F: jge     loc_48C3D9
0x48C055: mov     eax, [ebp+arg_8]
0x48C058: cmp     eax, 0FFFFFFFFh
0x48C05B: jz      short loc_48C070
0x48C05D: mov     edx, dword ptr [esp+60h+var_4C]
0x48C061: movsx   ecx, byte ptr [edx+90h]
0x48C068: cmp     eax, ecx
0x48C06A: jnz     loc_48C3D9
0x48C070: mov     edx, dword ptr [esp+60h+var_4C]
0x48C074: cmp     byte ptr [edx+90h], 5
0x48C07B: jnz     short loc_48C088
0x48C07D: cmp     [esp+60h+var_4], 0
0x48C082: jz      loc_48C40B
0x48C088: mov     esi, dword ptr [esp+60h+var_4C]
0x48C08C: mov     eax, [esi+88h]
0x48C092: mov     edx, [eax+10h]
0x48C095: lea     ecx, [esi+88h]
0x48C09B: call    edx
0x48C09D: mov     ecx, [esp+5Ch+var_C]
0x48C0A1: test    ecx, ecx
0x48C0A3: movzx   eax, ax
0x48C0A6: mov     [esp+5Ch+var_3C], eax
0x48C0AA: jz      short loc_48C0C7
0x48C0AC: cmp     byte ptr [esi+90h], 5
0x48C0B3: jnz     short loc_48C0C7
0x48C0B5: mov     edx, [ecx+74h]
0x48C0B8: mov     eax, [edx+10h]
0x48C0BB: add     ecx, 74h ; 't'
0x48C0BE: call    eax
0x48C0C0: movzx   ecx, ax
0x48C0C3: add     [esp+5Ch+var_3C], ecx
0x48C0C7: cmp     byte ptr [esp+5Ch+var_4C+3], 0
0x48C0CC: jz      short loc_48C0EF
0x48C0CE: mov     al, [esi+90h]
0x48C0D4: cmp     al, 5
0x48C0D6: jz      short loc_48C0DC
0x48C0D8: cmp     al, 4
0x48C0DA: jnz     short loc_48C0EF
0x48C0DC: fild    [esp+5Ch+var_3C]
0x48C0E0: fadd    dword ptr ds:0A3D8F4h
0x48C0E6: call    Double_To_SInt32
0x48C0EB: mov     [esp+5Ch+var_3C], eax
0x48C0EF: lea     eax, [esi+60h]
0x48C0F2: test    eax, eax
0x48C0F4: jz      short loc_48C0FB
0x48C0F6: mov     eax, [eax+4]
0x48C0F9: jmp     short loc_48C0FD
0x48C0FB: xor     eax, eax
0x48C0FD: mov     ebx, [ebp+arg_0]
0x48C100: mov     esi, [ebx]
0x48C102: mov     ecx, dword ptr [esp+5Ch+var_4C+4]
0x48C106: mov     [esp+5Ch+var_2C], eax
0x48C10A: add     esi, 12Ch
0x48C110: call    TESObjectWEAP_GetWeaponSkillAV
0x48C115: mov     edx, [esi]
0x48C117: push    eax
0x48C118: mov     ecx, ebx
0x48C11A: call    edx
0x48C11C: fstp    dword ptr [esp+60h+var_24]
0x48C120: xor     ebx, ebx
0x48C122: test    edi, edi
0x48C124: jz      loc_48C31B
0x48C12A: mov     eax, [edi]
0x48C12C: cmp     eax, ebx
0x48C12E: jz      loc_48C31B
0x48C134: cmp     [eax], ebx
0x48C136: jz      loc_48C31B
0x48C13C: mov     esi, [esp+60h+var_30]
0x48C140: cmp     esi, ebx
0x48C142: jz      short loc_48C169
0x48C144: mov     ecx, edi
0x48C146: call    sub_4849C0
0x48C14B: fstp    qword ptr [esp+60h+var_10]
0x48C14F: mov     eax, [esi+24h]
0x48C152: mov     edx, [eax]
0x48C154: lea     ecx, [esi+24h]
0x48C157: push    ebx
0x48C158: call    edx
0x48C15A: fcomp   qword ptr [esp+60h+var_10]
0x48C15E: fnstsw  ax
0x48C160: test    ah, 41h
0x48C163: jnz     short loc_48C169
0x48C165: mov     [esp+60h+var_30], ebx
0x48C169: mov     esi, [edi]
0x48C16B: cmp     esi, ebx
0x48C16D: mov     [esp+60h+var_14], esi
0x48C171: jz      loc_48C3D9
0x48C177: mov     edi, dword ptr [esp+60h+var_44]
0x48C17B: jmp     short loc_48C180
0x48C17D: align 10h
0x48C180: mov     eax, [esi]
0x48C182: cmp     eax, ebx
0x48C184: mov     dword ptr [esp+60h+var_44], eax
0x48C188: jz      loc_48C303
0x48C18E: push    2Bh ; '+'; a2
0x48C190: mov     ecx, eax; this
0x48C192: call    BaseExtraList_GetExtraData
0x48C197: test    eax, eax
0x48C199: jz      short loc_48C1A6
0x48C19B: mov     ecx, dword ptr [esp+60h+var_44]
0x48C19F: call    ExtraDataList_GetHealthData
0x48C1A4: jmp     short loc_48C1C5
0x48C1A6: mov     eax, dword ptr [esp+60h+var_4C]
0x48C1AA: push    eax
0x48C1AB: call    TESHealthForm_GetHealthForForm
0x48C1B0: add     esp, 4
0x48C1B3: test    eax, eax
0x48C1B5: mov     [esp+60h+var_10], eax
0x48C1B9: fild    [esp+60h+var_10]
0x48C1BD: jge     short loc_48C1C5
0x48C1BF: fadd    dword ptr ds:0A2FC78h
0x48C1C5: fstp    [esp+60h+var_10]
0x48C1C9: fldz
0x48C1CB: fld     [esp+60h+var_10]
0x48C1CF: fcom    st(1)
0x48C1D1: fnstsw  ax
0x48C1D3: fstp    st(1)
0x48C1D5: test    ah, 41h
0x48C1D8: jnz     loc_48C2F9
0x48C1DE: mov     ecx, dword ptr [esp+60h+var_4C]
0x48C1E2: fstp    qword ptr [esp+60h+var_38]
0x48C1E6: push    ecx
0x48C1E7: call    TESHealthForm_GetHealthForForm
0x48C1EC: add     esp, 4
0x48C1EF: test    eax, eax
0x48C1F1: mov     [esp+60h+var_10], eax
0x48C1F5: fild    [esp+60h+var_10]
0x48C1F9: jge     short loc_48C201
0x48C1FB: fadd    dword ptr ds:0A2FC78h
0x48C201: cmp     [esp+60h+var_30], ebx
0x48C205: fdivr   qword ptr [esp+60h+var_38]
0x48C209: fstp    [esp+60h+var_38]
0x48C20D: jz      short loc_48C218
0x48C20F: mov     esi, [esp+60h+var_30]
0x48C213: add     esi, 18h
0x48C216: jmp     short loc_48C21A
0x48C218: xor     esi, esi
0x48C21A: fild    dword ptr [esp+60h+var_44+4]
0x48C21E: sub     esp, 8
0x48C221: fstp    [esp+68h+var_64]; float
0x48C225: fld     [esp+68h+var_28]
0x48C229: fstp    [esp+68h+var_68]; float
0x48C22C: fld     [esp+68h+var_1C]
0x48C230: call    Double_To_SInt32
0x48C235: fld     [esp+68h+var_18]
0x48C239: push    eax; int
0x48C23A: call    Double_To_SInt32
0x48C23F: fld     dword ptr [esp+6Ch+var_24]
0x48C243: push    eax; int
0x48C244: call    Double_To_SInt32
0x48C249: fld     [esp+70h+var_38]
0x48C24D: mov     edx, dword ptr [esp+70h+var_4C]
0x48C251: push    eax; int
0x48C252: push    ecx
0x48C253: fstp    [esp+78h+var_78]; float
0x48C256: push    esi; int
0x48C257: push    edx; int
0x48C258: call    sub_547140
0x48C25D: fstp    [esp+80h+var_10]
0x48C261: fld     [esp+80h+var_10]
0x48C265: add     esp, 20h
0x48C268: fld     dword ptr [esp+60h+var_4C+4]
0x48C26C: fcomp   st(1)
0x48C26E: fnstsw  ax
0x48C270: test    ah, 5
0x48C273: jp      loc_48C2FD
0x48C279: cmp     edi, ebx
0x48C27B: fstp    dword ptr [esp+60h+var_4C+4]
0x48C27F: jz      short loc_48C29F
0x48C281: mov     ecx, [edi]
0x48C283: cmp     ecx, ebx
0x48C285: jz      short loc_48C28C
0x48C287: call    BSSimpleList_Clear
0x48C28C: mov     eax, [edi]
0x48C28E: push    eax
0x48C28F: call    FormHeapFree
0x48C294: push    edi
0x48C295: mov     [edi], ebx
0x48C297: call    FormHeapFree
0x48C29C: add     esp, 8
0x48C29F: push    0Ch; Size
0x48C2A1: call    FormHeapAlloc
0x48C2A6: add     esp, 4
0x48C2A9: cmp     eax, ebx
0x48C2AB: jz      short loc_48C2B9
0x48C2AD: mov     [eax+8], ebx
0x48C2B0: mov     [eax], ebx
0x48C2B2: mov     [eax+4], ebx
0x48C2B5: mov     esi, eax
0x48C2B7: jmp     short loc_48C2BB
0x48C2B9: xor     esi, esi
0x48C2BB: mov     ecx, dword ptr [esp+60h+var_4C]
0x48C2BF: push    8; Size
0x48C2C1: mov     edi, esi
0x48C2C3: mov     [esi+8], ecx
0x48C2C6: call    FormHeapAlloc
0x48C2CB: add     esp, 4
0x48C2CE: cmp     eax, ebx
0x48C2D0: jz      short loc_48C2E7
0x48C2D2: mov     edx, dword ptr [esp+60h+var_44]
0x48C2D6: mov     [eax], ebx
0x48C2D8: mov     [eax+4], ebx
0x48C2DB: push    edx
0x48C2DC: mov     ecx, eax
0x48C2DE: mov     [esi], eax
0x48C2E0: call    BSSimpleList_PushFront
0x48C2E5: jmp     short loc_48C2FF
0x48C2E7: mov     edx, dword ptr [esp+60h+var_44]
0x48C2EB: xor     eax, eax
0x48C2ED: push    edx
0x48C2EE: mov     ecx, eax
0x48C2F0: mov     [esi], eax
0x48C2F2: call    BSSimpleList_PushFront
0x48C2F7: jmp     short loc_48C2FF
0x48C2F9: fstp    st
0x48C2FB: jmp     short loc_48C303
0x48C2FD: fstp    st
0x48C2FF: mov     esi, [esp+60h+var_14]
0x48C303: mov     esi, [esi+4]
0x48C306: cmp     esi, ebx
0x48C308: mov     [esp+60h+var_14], esi
0x48C30C: jnz     loc_48C180
0x48C312: mov     dword ptr [esp+60h+var_44], edi
0x48C316: jmp     loc_48C3DF
0x48C31B: mov     esi, [esp+60h+var_30]
0x48C31F: cmp     esi, ebx
0x48C321: jz      short loc_48C328
0x48C323: add     esi, 18h
0x48C326: jmp     short loc_48C32A
0x48C328: xor     esi, esi
0x48C32A: fild    dword ptr [esp+60h+var_44+4]
0x48C32E: sub     esp, 8
0x48C331: fstp    [esp+68h+var_64]; float
0x48C335: fld     [esp+68h+var_28]
0x48C339: fstp    [esp+68h+var_68]; float
0x48C33C: fld     [esp+68h+var_1C]
0x48C340: call    Double_To_SInt32
0x48C345: fld     [esp+68h+var_18]
0x48C349: push    eax; int
0x48C34A: call    Double_To_SInt32
0x48C34F: fld     dword ptr [esp+6Ch+var_24]
0x48C353: push    eax; int
0x48C354: call    Double_To_SInt32
0x48C359: fld     [esp+70h+var_38]
0x48C35D: mov     edi, dword ptr [esp+70h+var_4C]
0x48C361: push    eax; int
0x48C362: push    ecx
0x48C363: fstp    [esp+78h+var_78]; float
0x48C366: push    esi; int
0x48C367: push    edi; int
0x48C368: call    sub_547140
0x48C36D: fstp    [esp+80h+var_10]
0x48C371: fld     [esp+80h+var_10]
0x48C375: add     esp, 20h
0x48C378: fld     dword ptr [esp+60h+var_4C+4]
0x48C37C: fcomp   st(1)
0x48C37E: fnstsw  ax
0x48C380: test    ah, 5
0x48C383: jp      short loc_48C3DD
0x48C385: mov     esi, dword ptr [esp+60h+var_44]
0x48C389: fstp    dword ptr [esp+60h+var_4C+4]
0x48C38D: cmp     esi, ebx
0x48C38F: jz      short loc_48C3AF
0x48C391: mov     ecx, [esi]
0x48C393: cmp     ecx, ebx
0x48C395: jz      short loc_48C39C
0x48C397: call    BSSimpleList_Clear
0x48C39C: mov     eax, [esi]
0x48C39E: push    eax
0x48C39F: call    FormHeapFree
0x48C3A4: push    esi
0x48C3A5: mov     [esi], ebx
0x48C3A7: call    FormHeapFree
0x48C3AC: add     esp, 8
0x48C3AF: push    0Ch; Size
0x48C3B1: call    FormHeapAlloc
0x48C3B6: add     esp, 4
0x48C3B9: cmp     eax, ebx
0x48C3BB: jz      short loc_48C3CE
0x48C3BD: mov     [eax+8], ebx
0x48C3C0: mov     [eax], ebx
0x48C3C2: mov     [eax+4], ebx
0x48C3C5: mov     dword ptr [esp+60h+var_44], eax
0x48C3C9: mov     [eax+8], edi
0x48C3CC: jmp     short loc_48C3DF
0x48C3CE: xor     eax, eax
0x48C3D0: mov     dword ptr [esp+60h+var_44], eax
0x48C3D4: mov     [eax+8], edi
0x48C3D7: jmp     short loc_48C3DF
0x48C3D9: xor     ebx, ebx
0x48C3DB: jmp     short loc_48C3DF
0x48C3DD: fstp    st
0x48C3DF: cmp     [esp+60h+var_4], ebx
0x48C3E3: jz      short loc_48C40B
0x48C3E5: mov     esi, [esp+60h+var_4]
0x48C3E9: mov     ecx, [esi]
0x48C3EB: test    ecx, ecx
0x48C3ED: jz      short loc_48C3F4
0x48C3EF: call    BSSimpleList_Clear
0x48C3F4: mov     ecx, [esi]
0x48C3F6: push    ecx
0x48C3F7: call    FormHeapFree
0x48C3FC: push    esi
0x48C3FD: mov     dword ptr [esi], 0
0x48C403: call    FormHeapFree
0x48C408: add     esp, 8
0x48C40B: mov     edx, dword ptr [esp+60h+var_24+4]
0x48C40F: mov     esi, [edx+4]
0x48C412: test    esi, esi
0x48C414: mov     dword ptr [esp+60h+var_24+4], esi
0x48C418: jnz     loc_48BEE0
0x48C41E: mov     eax, [esp+60h+var_3C]
0x48C422: mov     eax, [eax]
0x48C424: test    eax, eax
0x48C426: mov     dword ptr [esp+60h+var_24+4], eax
0x48C42A: jz      loc_48C843
0x48C430: jmp     short loc_48C436
0x48C432: mov     eax, dword ptr [esp+60h+var_24+4]
0x48C436: cmp     dword ptr [eax+4], 0
0x48C43A: jnz     short loc_48C445
0x48C43C: cmp     dword ptr [eax], 0
0x48C43F: jz      loc_48C843
0x48C445: mov     esi, dword ptr [esp+60h+var_24+4]
0x48C449: mov     eax, [esi]
0x48C44B: mov     ecx, [eax+8]
0x48C44E: push    0; int
0x48C450: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x48C455: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48C45A: push    0; int
0x48C45C: push    ecx; void *
0x48C45D: call    OblivionDynamicCast
0x48C462: mov     edi, [esi]
0x48C464: mov     ebx, eax
0x48C466: add     esp, 14h
0x48C469: test    ebx, ebx
0x48C46B: jz      loc_48C830
0x48C471: mov     eax, [ebp+arg_8]
0x48C474: cmp     eax, 0FFFFFFFFh
0x48C477: jz      short loc_48C488
0x48C479: movsx   edx, byte ptr [ebx+90h]
0x48C480: cmp     eax, edx
0x48C482: jnz     loc_48C830
0x48C488: mov     eax, [edi]
0x48C48A: test    eax, eax
0x48C48C: jz      short loc_48C4D5
0x48C48E: mov     esi, [eax]
0x48C490: test    esi, esi
0x48C492: jz      short loc_48C4D5
0x48C494: mov     ecx, esi
0x48C496: call    ExtraDataList_GetOwner
0x48C49B: test    eax, eax
0x48C49D: jz      short loc_48C4D5
0x48C49F: mov     ecx, esi
0x48C4A1: call    ExtraDataList_GetOwner
0x48C4A6: test    eax, eax
0x48C4A8: jz      short loc_48C4D5
0x48C4AA: mov     eax, [edi]
0x48C4AC: test    eax, eax
0x48C4AE: jz      short loc_48C4CA
0x48C4B0: mov     esi, [eax]
0x48C4B2: test    esi, esi
0x48C4B4: jz      short loc_48C4CA
0x48C4B6: mov     ecx, esi
0x48C4B8: call    ExtraDataList_GetOwner
0x48C4BD: test    eax, eax
0x48C4BF: jz      short loc_48C4CA
0x48C4C1: mov     ecx, esi
0x48C4C3: call    ExtraDataList_GetOwner
0x48C4C8: jmp     short loc_48C4CC
0x48C4CA: xor     eax, eax
0x48C4CC: cmp     eax, [ebp+arg_0]
0x48C4CF: jnz     loc_48C830
0x48C4D5: cmp     dword ptr [edi+4], 0
0x48C4D9: jz      loc_48C830
0x48C4DF: mov     eax, [esp+60h+var_3C]
0x48C4E3: mov     ecx, [eax+4]; this
0x48C4E6: test    ecx, ecx
0x48C4E8: jz      short loc_48C4F1
0x48C4EA: call    TESObjectREFR_GetContainer
0x48C4EF: jmp     short loc_48C4F3
0x48C4F1: xor     eax, eax
0x48C4F3: push    ebx; a2
0x48C4F4: mov     ecx, eax; this
0x48C4F6: call    TESContainer_HasForm
0x48C4FB: test    al, al
0x48C4FD: jnz     loc_48C830
0x48C503: mov     esi, [edi]
0x48C505: test    esi, esi
0x48C507: jz      short loc_48C532
0x48C509: lea     esp, [esp+0]
0x48C510: mov     ecx, [esi]
0x48C512: test    ecx, ecx
0x48C514: jz      short loc_48C532
0x48C516: call    sub_41DEF0
0x48C51B: test    al, al
0x48C51D: jnz     short loc_48C528
0x48C51F: mov     esi, [esi+4]
0x48C522: test    esi, esi
0x48C524: jnz     short loc_48C510
0x48C526: jmp     short loc_48C532
0x48C528: cmp     dword ptr [edi+4], 0
0x48C52C: jl      loc_48C830
0x48C532: cmp     byte ptr [ebx+90h], 5
0x48C539: jnz     short loc_48C578
0x48C53B: mov     ecx, [ebp+arg_C]
0x48C53E: mov     edx, [ebp+arg_0]
0x48C541: push    ecx
0x48C542: mov     ecx, [esp+64h+var_3C]
0x48C546: push    edx
0x48C547: call    sub_48B9C0
0x48C54C: mov     esi, eax
0x48C54E: test    esi, esi
0x48C550: jz      loc_48C830
0x48C556: mov     ecx, [esi]
0x48C558: test    ecx, ecx
0x48C55A: jz      short loc_48C561
0x48C55C: call    BSSimpleList_Clear
0x48C561: mov     eax, [esi]
0x48C563: push    eax
0x48C564: call    FormHeapFree
0x48C569: push    esi
0x48C56A: mov     dword ptr [esi], 0
0x48C570: call    FormHeapFree
0x48C575: add     esp, 8
0x48C578: mov     ecx, [ebp+arg_0]
0x48C57B: mov     esi, [ecx]
0x48C57D: mov     ecx, ebx
0x48C57F: add     esi, 12Ch
0x48C585: call    TESObjectWEAP_GetWeaponSkillAV
0x48C58A: mov     ecx, [ebp+arg_0]
0x48C58D: mov     edx, [esi]
0x48C58F: push    eax
0x48C590: call    edx
0x48C592: fstp    dword ptr [esp+60h+var_24]
0x48C596: mov     eax, [ebx+88h]
0x48C59C: mov     edx, [eax+10h]
0x48C59F: lea     ecx, [ebx+88h]
0x48C5A5: call    edx
0x48C5A7: cmp     [esp+60h+var_4D], 0
0x48C5AC: movzx   eax, ax
0x48C5AF: mov     dword ptr [esp+60h+var_44+4], eax
0x48C5B3: jz      short loc_48C5D4
0x48C5B5: mov     cl, [ebx+90h]
0x48C5BB: cmp     cl, 5
0x48C5BE: jz      short loc_48C5C5
0x48C5C0: cmp     cl, 4
0x48C5C3: jnz     short loc_48C5D4
0x48C5C5: fild    dword ptr [esp+60h+var_44+4]
0x48C5C9: fadd    dword ptr ds:0A3D8F4h
0x48C5CF: call    Double_To_SInt32
0x48C5D4: mov     ecx, [edi]
0x48C5D6: test    ecx, ecx
0x48C5D8: jz      loc_48C782
0x48C5DE: cmp     dword ptr [ecx], 0
0x48C5E1: jz      loc_48C782
0x48C5E7: mov     [esp+60h+var_4], ecx
0x48C5EB: mov     eax, [esp+60h+var_4]
0x48C5EF: mov     esi, [eax]
0x48C5F1: test    esi, esi
0x48C5F3: mov     [esp+60h+var_14], esi
0x48C5F7: jz      loc_48C830
0x48C5FD: push    2Bh ; '+'; a2
0x48C5FF: mov     ecx, esi; this
0x48C601: call    BaseExtraList_GetExtraData
0x48C606: test    eax, eax
0x48C608: jz      short loc_48C613
0x48C60A: mov     ecx, esi
0x48C60C: call    ExtraDataList_GetHealthData
0x48C611: jmp     short loc_48C62E
0x48C613: push    ebx
0x48C614: call    TESHealthForm_GetHealthForForm
0x48C619: add     esp, 4
0x48C61C: test    eax, eax
0x48C61E: mov     [esp+60h+var_10], eax
0x48C622: fild    [esp+60h+var_10]
0x48C626: jge     short loc_48C62E
0x48C628: fadd    dword ptr ds:0A2FC78h
0x48C62E: fstp    [esp+60h+var_10]
0x48C632: fldz
0x48C634: fld     [esp+60h+var_10]
0x48C638: fcom    st(1)
0x48C63A: fnstsw  ax
0x48C63C: fstp    st(1)
0x48C63E: test    ah, 41h
0x48C641: jnz     loc_48C768
0x48C647: lea     eax, [ebx+60h]
0x48C64A: test    eax, eax
0x48C64C: jz      short loc_48C653
0x48C64E: mov     esi, [eax+4]
0x48C651: jmp     short loc_48C655
0x48C653: xor     esi, esi
0x48C655: push    ebx
0x48C656: fstp    qword ptr [esp+64h+var_30]
0x48C65A: call    TESHealthForm_GetHealthForForm
0x48C65F: add     esp, 4
0x48C662: test    eax, eax
0x48C664: mov     [esp+60h+var_10], eax
0x48C668: fild    [esp+60h+var_10]
0x48C66C: jge     short loc_48C674
0x48C66E: fadd    dword ptr ds:0A2FC78h
0x48C674: test    esi, esi
0x48C676: fdivr   qword ptr [esp+60h+var_30]
0x48C67A: fstp    [esp+60h+var_38]
0x48C67E: jz      short loc_48C685
0x48C680: add     esi, 18h
0x48C683: jmp     short loc_48C687
0x48C685: xor     esi, esi
0x48C687: fld     dword ptr ds:0A30634h
0x48C68D: sub     esp, 8
0x48C690: fstp    [esp+68h+var_64]; float
0x48C694: fld     [esp+68h+var_28]
0x48C698: fstp    [esp+68h+var_68]; float
0x48C69B: fld     [esp+68h+var_1C]
0x48C69F: call    Double_To_SInt32
0x48C6A4: fld     [esp+68h+var_18]
0x48C6A8: push    eax; int
0x48C6A9: call    Double_To_SInt32
0x48C6AE: fld     dword ptr [esp+6Ch+var_24]
0x48C6B2: push    eax; int
0x48C6B3: call    Double_To_SInt32
0x48C6B8: fld     [esp+70h+var_38]
0x48C6BC: push    eax; int
0x48C6BD: push    ecx
0x48C6BE: fstp    [esp+78h+var_78]; float
0x48C6C1: push    esi; int
0x48C6C2: push    ebx; int
0x48C6C3: call    sub_547140
0x48C6C8: fstp    [esp+80h+var_10]
0x48C6CC: fld     [esp+80h+var_10]
0x48C6D0: add     esp, 20h
0x48C6D3: fld     dword ptr [esp+60h+var_4C+4]
0x48C6D7: fcomp   st(1)
0x48C6D9: fnstsw  ax
0x48C6DB: test    ah, 5
0x48C6DE: jp      loc_48C768
0x48C6E4: mov     esi, dword ptr [esp+60h+var_44]
0x48C6E8: fstp    dword ptr [esp+60h+var_4C+4]
0x48C6EC: xor     edi, edi
0x48C6EE: cmp     esi, edi
0x48C6F0: jz      short loc_48C710
0x48C6F2: mov     ecx, [esi]
0x48C6F4: cmp     ecx, edi
0x48C6F6: jz      short loc_48C6FD
0x48C6F8: call    BSSimpleList_Clear
0x48C6FD: mov     ecx, [esi]
0x48C6FF: push    ecx
0x48C700: call    FormHeapFree
0x48C705: push    esi
0x48C706: mov     [esi], edi
0x48C708: call    FormHeapFree
0x48C70D: add     esp, 8
0x48C710: push    0Ch; Size
0x48C712: call    FormHeapAlloc
0x48C717: add     esp, 4
0x48C71A: cmp     eax, edi
0x48C71C: jz      short loc_48C72A
0x48C71E: mov     [eax+8], edi
0x48C721: mov     [eax], edi
0x48C723: mov     [eax+4], edi
0x48C726: mov     esi, eax
0x48C728: jmp     short loc_48C72C
0x48C72A: xor     esi, esi
0x48C72C: push    8; Size
0x48C72E: mov     dword ptr [esp+64h+var_44], esi
0x48C732: mov     [esi+8], ebx
0x48C735: call    FormHeapAlloc
0x48C73A: add     esp, 4
0x48C73D: cmp     eax, edi
0x48C73F: jz      short loc_48C756
0x48C741: mov     edx, [esp+60h+var_14]
0x48C745: mov     [eax], edi
0x48C747: mov     [eax+4], edi
0x48C74A: push    edx
0x48C74B: mov     ecx, eax
0x48C74D: mov     [esi], eax
0x48C74F: call    BSSimpleList_PushFront
0x48C754: jmp     short loc_48C76A
0x48C756: mov     edx, [esp+60h+var_14]
0x48C75A: xor     eax, eax
0x48C75C: push    edx
0x48C75D: mov     ecx, eax
0x48C75F: mov     [esi], eax
0x48C761: call    BSSimpleList_PushFront
0x48C766: jmp     short loc_48C76A
0x48C768: fstp    st
0x48C76A: mov     eax, [esp+60h+var_4]
0x48C76E: mov     eax, [eax+4]
0x48C771: test    eax, eax
0x48C773: mov     [esp+60h+var_4], eax
0x48C777: jnz     loc_48C5EB
0x48C77D: jmp     loc_48C830
0x48C782: fld1
0x48C784: push    0; float
0x48C786: sub     esp, 8
0x48C789: fstp    [esp+6Ch+var_68]; float
0x48C78D: fld     [esp+6Ch+var_38]
0x48C791: fstp    [esp+6Ch+var_6C]; float
0x48C794: fld     [esp+6Ch+var_28]
0x48C798: push    eax; int
0x48C799: push    ecx
0x48C79A: fstp    [esp+74h+var_74]; float
0x48C79D: fld     [esp+74h+var_1C]
0x48C7A1: call    Double_To_SInt32
0x48C7A6: fld     [esp+74h+var_18]
0x48C7AA: push    eax; int
0x48C7AB: call    Double_To_SInt32
0x48C7B0: fld     dword ptr [esp+78h+var_24]
0x48C7B4: push    eax; int
0x48C7B5: call    Double_To_SInt32
0x48C7BA: push    eax; int
0x48C7BB: call    Calc_WeaponDamage
0x48C7C0: fstp    [esp+80h+var_10]
0x48C7C4: fld     [esp+80h+var_10]
0x48C7C8: add     esp, 20h
0x48C7CB: fld     dword ptr [esp+60h+var_4C+4]
0x48C7CF: fcomp   st(1)
0x48C7D1: fnstsw  ax
0x48C7D3: test    ah, 5
0x48C7D6: jp      short loc_48C82E
0x48C7D8: mov     esi, dword ptr [esp+60h+var_44]
0x48C7DC: fstp    dword ptr [esp+60h+var_4C+4]
0x48C7E0: xor     edi, edi
0x48C7E2: cmp     esi, edi
0x48C7E4: jz      short loc_48C804
0x48C7E6: mov     ecx, [esi]
0x48C7E8: cmp     ecx, edi
0x48C7EA: jz      short loc_48C7F1
0x48C7EC: call    BSSimpleList_Clear
0x48C7F1: mov     ecx, [esi]
0x48C7F3: push    ecx
0x48C7F4: call    FormHeapFree
0x48C7F9: push    esi
0x48C7FA: mov     [esi], edi
0x48C7FC: call    FormHeapFree
0x48C801: add     esp, 8
0x48C804: push    0Ch; Size
0x48C806: call    FormHeapAlloc
0x48C80B: add     esp, 4
0x48C80E: cmp     eax, edi
0x48C810: jz      short loc_48C823
0x48C812: mov     [eax+8], edi
0x48C815: mov     [eax], edi
0x48C817: mov     [eax+4], edi
0x48C81A: mov     dword ptr [esp+60h+var_44], eax
0x48C81E: mov     [eax+8], ebx
0x48C821: jmp     short loc_48C830
0x48C823: xor     eax, eax
0x48C825: mov     dword ptr [esp+60h+var_44], eax
0x48C829: mov     [eax+8], ebx
0x48C82C: jmp     short loc_48C830
0x48C82E: fstp    st
0x48C830: mov     edx, dword ptr [esp+60h+var_24+4]
0x48C834: mov     eax, [edx+4]
0x48C837: test    eax, eax
0x48C839: mov     dword ptr [esp+60h+var_24+4], eax
0x48C83D: jnz     loc_48C432
0x48C843: fld     dword ptr [esp+60h+var_4C+4]
0x48C847: push    0; float
0x48C849: push    0; int
0x48C84B: push    ecx
0x48C84C: fstp    [esp+6Ch+var_6C]; float
0x48C84F: call    sub_546C60
0x48C854: mov     eax, [ebp+arg_4]
0x48C857: add     esp, 0Ch
0x48C85A: fstp    dword ptr [eax]
0x48C85C: mov     eax, dword ptr [esp+60h+var_44]
0x48C860: pop     edi
0x48C861: pop     esi
0x48C862: pop     ebx
0x48C863: mov     esp, ebp
0x48C865: pop     ebp
0x48C866: retn    10h
