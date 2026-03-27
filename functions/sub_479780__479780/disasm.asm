0x479780: push    0FFFFFFFFh
0x479782: push    offset SEH_479780
0x479787: mov     eax, large fs:0
0x47978D: push    eax
0x47978E: sub     esp, 0B8h
0x479794: mov     eax, ds:0B30AACh
0x479799: xor     eax, esp
0x47979B: mov     [esp+0C4h+var_10], eax
0x4797A2: push    ebx
0x4797A3: push    ebp
0x4797A4: push    esi
0x4797A5: push    edi
0x4797A6: mov     eax, ds:0B30AACh
0x4797AB: xor     eax, esp
0x4797AD: push    eax
0x4797AE: lea     eax, [esp+0D8h+var_C]
0x4797B5: mov     large fs:0, eax
0x4797BB: mov     esi, [esp+0D8h+arg_0]
0x4797C2: xor     edi, edi
0x4797C4: cmp     esi, edi
0x4797C6: mov     ebx, ecx
0x4797C8: jz      loc_479C0A
0x4797CE: cmp     byte ptr [esi+4], 21h ; '!'
0x4797D2: jnz     loc_479C0A
0x4797D8: push    edi
0x4797D9: push    1
0x4797DB: lea     ebp, [ebx+0DCh]
0x4797E1: push    ebp
0x4797E2: call    sub_478780
0x4797E7: lea     eax, [esi+30h]
0x4797EA: mov     [ebp+0], esi
0x4797ED: mov     [ebx+0E0h], eax
0x4797F3: cmp     byte ptr [esi+90h], 5
0x4797FA: mov     [esp+0D8h+var_BC], 9
0x479802: jnz     short loc_47980C
0x479804: mov     [esp+0D8h+var_BC], 0Eh
0x47980C: mov     ebp, [ebx+150h]
0x479812: mov     ecx, ds:0B333C4h
0x479818: cmp     ebp, ecx
0x47981A: mov     [esp+0D8h+var_B0], ebp
0x47981E: jnz     loc_4798C0
0x479824: push    ebx
0x479825: mov     ebp, eax
0x479827: call    sub_65D770
0x47982C: mov     ecx, ds:0B333C4h
0x479832: push    eax
0x479833: call    PlayerCharacter_GetPlayerNode
0x479838: mov     ecx, [esp+0D8h+var_BC]
0x47983C: mov     edx, [ebp+0]
0x47983F: push    eax
0x479840: mov     eax, [ebx+150h]
0x479846: push    eax
0x479847: mov     eax, [edx+14h]
0x47984A: push    ecx
0x47984B: mov     ecx, ebp
0x47984D: call    eax
0x47984F: push    eax
0x479850: call    sub_479450
0x479855: add     esp, 10h
0x479858: mov     [ebx+0E4h], eax
0x47985E: mov     ecx, ds:0B333C4h
0x479864: push    edi
0x479865: call    sub_6600D0
0x47986A: cmp     ebx, eax
0x47986C: jnz     loc_479B22
0x479872: mov     [esp+0D8h+Src], edi
0x479876: mov     word ptr [esp+0D8h+var_C0], di
0x47987B: mov     word ptr [esp+0D8h+var_C0+2], di
0x479880: mov     esi, [esi+4Ch]
0x479883: cmp     esi, edi
0x479885: mov     [esp+0D8h+var_4], edi
0x47988C: jnz     short loc_479893
0x47988E: mov     esi, offset EmptyString
0x479893: push    esi
0x479894: push    offset aIcons; "Icons"
0x479899: lea     ecx, [esp+0E0h+var_90]
0x47989D: push    offset aSS_2; "%s\\%s"
0x4798A2: push    ecx
0x4798A3: call    __sprintf
0x4798A8: lea     edx, [esp+0E8h+var_90]
0x4798AC: push    edx
0x4798AD: call    sub_57B190
0x4798B2: push    edi
0x4798B3: call    FormHeapFree
0x4798B8: add     esp, 18h
0x4798BB: jmp     loc_479B22
0x4798C0: mov     edx, [eax]
0x4798C2: mov     ecx, eax
0x4798C4: mov     eax, [edx+14h]
0x4798C7: call    eax
0x4798C9: cmp     eax, edi
0x4798CB: jz      loc_479B1A
0x4798D1: cmp     ebp, edi
0x4798D3: jz      loc_479B1A
0x4798D9: mov     ebp, [ebp+3Ch]
0x4798DC: cmp     ebp, edi
0x4798DE: mov     [esp+0D8h+a1], ebp
0x4798E2: jz      loc_479B1A
0x4798E8: mov     ecx, ds:0B33A1Ch
0x4798EE: push    1
0x4798F0: push    3
0x4798F2: push    1
0x4798F4: push    eax
0x4798F5: call    sub_439EB0
0x4798FA: mov     esi, eax
0x4798FC: lea     ecx, [esp+0D8h+var_AC]
0x479900: mov     [esp+0D8h+Src], esi
0x479904: call    sub_478B90
0x479909: fld1
0x47990B: fst     [esp+0D8h+var_94]
0x47990F: fst     [esp+0D8h+var_98]
0x479913: fstp    [esp+0D8h+var_9C]
0x479917: mov     [esp+0D8h+var_4], 1
0x479922: mov     [esp+0D8h+var_B8], edi
0x479926: push    esi
0x479927: mov     byte ptr [esp+0DCh+var_4], 2
0x47992F: call    sub_480820
0x479934: add     esp, 4
0x479937: test    al, al
0x479939: jz      short loc_47995E
0x47993B: lea     ecx, [esp+0D8h+var_AC]
0x47993F: push    ecx
0x479940: mov     ecx, ds:0B333A0h
0x479946: push    esi
0x479947: call    sub_4430C0
0x47994C: push    eax; a2
0x47994D: lea     ecx, [esp+0DCh+var_B8]; this
0x479951: call    NiSmartPointer_Set??
0x479956: mov     ebp, [esp+0D8h+var_B8]
0x47995A: mov     edi, ebp
0x47995C: jmp     short loc_47996C
0x47995E: lea     edx, [esp+0D8h+var_AC]
0x479962: push    edx
0x479963: mov     ecx, esi
0x479965: call    sub_700610
0x47996A: mov     ebp, eax
0x47996C: mov     eax, [esp+0D8h+var_B0]
0x479970: mov     ecx, [esp+0D8h+var_BC]
0x479974: push    eax
0x479975: push    ecx
0x479976: push    ebp
0x479977: push    esi
0x479978: call    sub_478220
0x47997D: add     esp, 10h
0x479980: mov     ecx, ebp
0x479982: call    sub_6FFC60
0x479987: test    ebp, ebp
0x479989: jz      loc_479AC7
0x47998F: push    ebp
0x479990: push    offset dword_B35288
0x479995: call    NiRTTI__IsObjectOfRTTIType
0x47999A: add     esp, 8
0x47999D: test    al, al
0x47999F: jz      short loc_4799AA
0x4799A1: push    7
0x4799A3: mov     ecx, ebp
0x4799A5: call    sub_4A01B0
0x4799AA: mov     edx, ds:0B3F9A8h
0x4799B0: mov     [ebp+54h], edx
0x4799B3: mov     eax, ds:0B3F9ACh
0x4799B8: mov     [ebp+58h], eax
0x4799BB: mov     ecx, ds:0B3F9B0h
0x4799C1: mov     [ebp+5Ch], ecx
0x4799C4: lea     edi, [ebp+30h]
0x4799C7: mov     ecx, 9
0x4799CC: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x4799D1: push    ebp
0x4799D2: rep movsd
0x4799D4: call    sub_471B80
0x4799D9: add     esp, 4
0x4799DC: test    al, al
0x4799DE: jz      short loc_4799F6
0x4799E0: mov     eax, [ebp+8]
0x4799E3: push    eax; ArgList
0x4799E4: push    offset aTyringToAddSki; "Tyring to add skinned object '%s' as an"...
0x4799E9: call    PrintError
0x4799EE: add     esp, 8
0x4799F1: jmp     loc_479AB5
0x4799F6: mov     edx, [esp+0D8h+Src]
0x4799FA: mov     eax, [esp+0D8h+a1]
0x4799FE: push    0
0x479A00: push    0FFFFFFFFh
0x479A02: push    0
0x479A04: push    edx
0x479A05: push    ebp
0x479A06: push    eax
0x479A07: call    sub_479140
0x479A0C: mov     edx, [ebp+0]
0x479A0F: mov     eax, [edx+8]
0x479A12: add     esp, 18h
0x479A15: mov     ecx, ebp
0x479A17: call    eax
0x479A19: test    eax, eax
0x479A1B: jz      loc_479AB5
0x479A21: mov     ecx, [ebp+1Ch]
0x479A24: mov     edi, [esp+0D8h+var_BC]
0x479A28: xor     esi, esi
0x479A2A: test    ecx, ecx
0x479A2C: mov     [esp+0D8h+Src], ecx
0x479A30: jz      short loc_479A3C
0x479A32: cmp     edi, 7
0x479A35: jz      short loc_479A3C
0x479A37: cmp     edi, 6
0x479A3A: jnz     short loc_479A68
0x479A3C: cmp     edi, 0FFFFFFFFh
0x479A3F: jz      short loc_479A68
0x479A41: mov     eax, ds:0B065C8h[edi*4]
0x479A48: cmp     eax, 0FFFFFFFFh
0x479A4B: jz      short loc_479A68
0x479A4D: mov     ecx, ds:0B06550h[eax*4]
0x479A54: mov     edx, [esp+0D8h+a1]
0x479A58: push    ecx; a2
0x479A59: push    edx; a1
0x479A5A: call    NiObjectNET_LookupObjectByName
0x479A5F: mov     ecx, [esp+0E0h+Src]
0x479A63: add     esp, 8
0x479A66: mov     esi, eax
0x479A68: test    ecx, ecx
0x479A6A: jz      short loc_479A9A
0x479A6C: cmp     edi, 7
0x479A6F: jz      short loc_479A76
0x479A71: cmp     edi, 6
0x479A74: jnz     short loc_479AB5
0x479A76: mov     ecx, [esp+0D8h+var_B0]
0x479A7A: mov     eax, [ecx]
0x479A7C: mov     edx, [eax+168h]
0x479A82: call    edx
0x479A84: test    eax, eax
0x479A86: jz      short loc_479A90
0x479A88: mov     ecx, [ebp+1Ch]
0x479A8B: cmp     ecx, [eax+20h]
0x479A8E: jz      short loc_479AB5
0x479A90: test    esi, esi
0x479A92: jz      short loc_479AB5
0x479A94: mov     eax, [esi]
0x479A96: mov     ecx, esi
0x479A98: jmp     short loc_479AAA
0x479A9A: test    esi, esi
0x479A9C: jz      short loc_479AA4
0x479A9E: mov     eax, [esi]
0x479AA0: mov     ecx, esi
0x479AA2: jmp     short loc_479AAA
0x479AA4: mov     ecx, [esp+0D8h+a1]
0x479AA8: mov     eax, [ecx]
0x479AAA: mov     edx, [eax+84h]
0x479AB0: push    1
0x479AB2: push    ebp
0x479AB3: call    edx
0x479AB5: mov     ecx, ebp
0x479AB7: call    NiNode_UpdateDynamicEffectState
0x479ABC: mov     ecx, ebp; this
0x479ABE: call    NiAVObject_InitializePropertyState
0x479AC3: mov     edi, [esp+0D8h+var_B8]
0x479AC7: test    edi, edi
0x479AC9: mov     byte ptr [esp+0D8h+var_4], 1
0x479AD1: jz      short loc_479AEB
0x479AD3: lea     eax, [edi+4]
0x479AD6: push    eax; lpAddend
0x479AD7: call    dword ptr ds:0A2807Ch
0x479ADD: test    eax, eax
0x479ADF: jnz     short loc_479AEB
0x479AE1: mov     edx, [edi]
0x479AE3: mov     eax, [edx]
0x479AE5: push    1
0x479AE7: mov     ecx, edi
0x479AE9: call    eax
0x479AEB: mov     ecx, [esp+0D8h+var_AC]
0x479AEF: test    ecx, ecx
0x479AF1: mov     [esp+0D8h+var_4], 0FFFFFFFFh
0x479AFC: jz      short loc_479B06
0x479AFE: mov     edx, [ecx]
0x479B00: mov     eax, [edx]
0x479B02: push    1
0x479B04: call    eax
0x479B06: mov     ecx, [esp+0D8h+var_A8]
0x479B0A: test    ecx, ecx
0x479B0C: jz      short loc_479B16
0x479B0E: mov     edx, [ecx]
0x479B10: mov     eax, [edx]
0x479B12: push    1
0x479B14: call    eax
0x479B16: xor     edi, edi
0x479B18: jmp     short loc_479B1C
0x479B1A: xor     ebp, ebp
0x479B1C: mov     [ebx+0E4h], ebp
0x479B22: mov     [esp+0D8h+Src], edi
0x479B26: mov     word ptr [esp+0D8h+var_C0], di
0x479B2B: mov     word ptr [esp+0D8h+var_C0+2], di
0x479B30: mov     ecx, [ebx+0DCh]
0x479B36: mov     eax, [ecx+0Ch]
0x479B39: mov     edx, [ecx]
0x479B3B: push    eax
0x479B3C: mov     eax, [edx+0D4h]
0x479B42: mov     [esp+0DCh+var_4], 3
0x479B4D: call    eax
0x479B4F: mov     ecx, ds:0B065ACh
0x479B55: push    eax
0x479B56: push    ecx; ArgList
0x479B57: lea     edx, [esp+0E4h+Src]
0x479B5B: push    offset aSS08x; "%s %s (%08X)"
0x479B60: push    edx; int
0x479B61: call    BSStringT_Static_Format
0x479B66: mov     eax, [esp+0ECh+Src]
0x479B6A: mov     ecx, [ebx+0E4h]
0x479B70: add     esp, 14h
0x479B73: push    eax; Src
0x479B74: call    NiObjectNET_SetName
0x479B79: mov     ecx, [ebx+150h]
0x479B7F: mov     edx, [ecx]
0x479B81: mov     eax, [edx+190h]
0x479B87: call    eax
0x479B89: test    al, al
0x479B8B: jz      short loc_479BFD
0x479B8D: mov     esi, [ebx+150h]
0x479B93: cmp     [esi+58h], edi
0x479B96: jz      short loc_479BFD
0x479B98: mov     ecx, ds:0B333C4h
0x479B9E: cmp     esi, ecx
0x479BA0: jnz     short loc_479BD9
0x479BA2: push    1
0x479BA4: call    sub_6600D0
0x479BA9: cmp     ebx, eax
0x479BAB: jnz     short loc_479BD9
0x479BAD: mov     ebp, [esi+58h]
0x479BB0: mov     edi, [ebp+0]
0x479BB3: mov     ecx, ds:0B333C4h; this
0x479BB9: push    esi
0x479BBA: push    1; a2
0x479BBC: add     edi, 150h
0x479BC2: call    Player_GetAnimData
0x479BC7: push    eax
0x479BC8: push    ebx
0x479BC9: mov     ecx, esi
0x479BCB: call    Actor_IsWeaponOut
0x479BD0: mov     edx, [edi]
0x479BD2: mov     ecx, ebp
0x479BD4: push    eax
0x479BD5: call    edx
0x479BD7: jmp     short loc_479BFD
0x479BD9: mov     ebp, [esi+58h]
0x479BDC: mov     edi, [ebp+0]
0x479BDF: push    esi
0x479BE0: mov     ecx, esi
0x479BE2: add     edi, 150h
0x479BE8: call    TESObjectREFR_GetAnimData
0x479BED: push    eax
0x479BEE: push    ebx
0x479BEF: mov     ecx, esi
0x479BF1: call    Actor_IsWeaponOut
0x479BF6: mov     ecx, ebp
0x479BF8: push    eax
0x479BF9: mov     eax, [edi]
0x479BFB: call    eax
0x479BFD: mov     ecx, [esp+0D8h+Src]
0x479C01: push    ecx
0x479C02: call    FormHeapFree
0x479C07: add     esp, 4
0x479C0A: mov     ecx, dword ptr [esp+0D8h+var_C]
0x479C11: mov     large fs:0, ecx
0x479C18: pop     ecx
0x479C19: pop     edi
0x479C1A: pop     esi
0x479C1B: pop     ebp
0x479C1C: pop     ebx
0x479C1D: mov     ecx, [esp+0C4h+var_10]
0x479C24: xor     ecx, esp
0x479C26: call    @__security_check_cookie@4; __security_check_cookie(x)
0x479C2B: add     esp, 0C4h
0x479C31: retn    4
