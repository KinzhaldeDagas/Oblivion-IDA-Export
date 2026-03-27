0x5C28F0: sub     esp, 8
0x5C28F3: push    esi
0x5C28F4: push    40Ch
0x5C28F9: call    Menu_GetOpenMenuTile
0x5C28FE: mov     esi, eax
0x5C2900: add     esp, 4
0x5C2903: test    esi, esi
0x5C2905: jz      loc_5C2B3D
0x5C290B: push    ebp
0x5C290C: push    edi; a3
0x5C290D: mov     ecx, esi
0x5C290F: call    Tile_GetParentMenu
0x5C2914: mov     edi, eax
0x5C2916: test    edi, edi
0x5C2918: mov     [esp+14h+var_4], edi
0x5C291C: jz      short loc_5C2960
0x5C291E: fld     dword ptr ds:0A379B4h
0x5C2924: push    ecx
0x5C2925: fstp    [esp+18h+a2]; a3
0x5C2928: push    1772h; a2
0x5C292D: mov     ecx, esi; this
0x5C292F: call    Tile_SetFloat
0x5C2934: mov     ecx, edi; int
0x5C2936: call    sub_584740
0x5C293B: mov     eax, [edi+864h]
0x5C2941: test    eax, eax
0x5C2943: jz      short loc_5C2959
0x5C2945: mov     ecx, ds:0B333C4h
0x5C294B: push    0
0x5C294D: push    1
0x5C294F: push    0
0x5C2951: push    1
0x5C2953: push    eax
0x5C2954: call    Actor_EquipItem
0x5C2959: mov     byte ptr ds:0B3B5D8h, 1
0x5C2960: mov     ecx, ds:0B333C4h
0x5C2966: mov     eax, [ecx]
0x5C2968: mov     edx, [eax+170h]
0x5C296E: call    edx
0x5C2970: mov     ecx, ds:0B333C4h
0x5C2976: mov     ebp, eax
0x5C2978: call    Actor_GetBaseClass
0x5C297D: mov     ecx, ds:0B37D00h
0x5C2983: cmp     ecx, [eax+0Ch]
0x5C2986: jz      loc_5C2ABC
0x5C298C: mov     ecx, ds:0B333C4h
0x5C2992: mov     edx, [ecx]
0x5C2994: mov     eax, [edx+268h]
0x5C299A: call    eax
0x5C299C: mov     edi, eax
0x5C299E: test    edi, edi
0x5C29A0: jz      short loc_5C29CE
0x5C29A2: lea     esi, [edi+3Ch]
0x5C29A5: test    esi, esi
0x5C29A7: jz      short loc_5C29CE
0x5C29A9: lea     esp, [esp+0]
0x5C29B0: mov     eax, [esi]
0x5C29B2: test    eax, eax
0x5C29B4: jz      short loc_5C29CE
0x5C29B6: mov     ecx, ds:0B333C4h
0x5C29BC: mov     edx, [ecx]
0x5C29BE: push    eax
0x5C29BF: mov     eax, [edx+2E0h]
0x5C29C5: call    eax
0x5C29C7: mov     esi, [esi+4]
0x5C29CA: test    esi, esi
0x5C29CC: jnz     short loc_5C29B0
0x5C29CE: fldz
0x5C29D0: push    ecx
0x5C29D1: mov     ecx, ds:0B333C4h
0x5C29D7: fstp    [esp+18h+a2]
0x5C29DA: add     ecx, 68h ; 'h'; this
0x5C29DD: call    MagicTarget_ProcessEffects
0x5C29E2: push    1
0x5C29E4: mov     ecx, ebp
0x5C29E6: call    sub_5222D0
0x5C29EB: mov     ecx, ds:0B333C4h
0x5C29F1: mov     dword ptr [ecx+184h], 0
0x5C29FB: mov     edx, ds:0B333C4h
0x5C2A01: mov     byte ptr [edx+1DCh], 0
0x5C2A08: mov     ecx, ds:0B333C4h
0x5C2A0E: call    sub_65FBB0
0x5C2A13: mov     ecx, ds:0B333C4h
0x5C2A19: call    sub_65D610
0x5C2A1E: test    edi, edi
0x5C2A20: jz      short loc_5C2A4E
0x5C2A22: lea     esi, [edi+3Ch]
0x5C2A25: test    esi, esi
0x5C2A27: jz      short loc_5C2A4E
0x5C2A29: lea     esp, [esp+0]
0x5C2A30: mov     eax, [esi]
0x5C2A32: test    eax, eax
0x5C2A34: jz      short loc_5C2A4E
0x5C2A36: mov     ecx, ds:0B333C4h
0x5C2A3C: mov     edx, [ecx]
0x5C2A3E: push    eax
0x5C2A3F: mov     eax, [edx+2DCh]
0x5C2A45: call    eax
0x5C2A47: mov     esi, [esi+4]
0x5C2A4A: test    esi, esi
0x5C2A4C: jnz     short loc_5C2A30
0x5C2A4E: mov     ecx, ds:0B333C4h
0x5C2A54: call    sub_66C200
0x5C2A59: call    sub_57A7D0
0x5C2A5E: fld     dword ptr ds:0A379B4h
0x5C2A64: push    ecx
0x5C2A65: mov     ecx, ds:0B333C4h
0x5C2A6B: fstp    [esp+18h+a2]
0x5C2A6E: call    sub_5F2530
0x5C2A73: mov     ecx, ds:0B333C4h
0x5C2A79: push    9
0x5C2A7B: call    Actor_GetBaseCalcAVi
0x5C2A80: mov     [esp+14h+var_8], eax
0x5C2A84: fild    [esp+14h+var_8]
0x5C2A88: push    1; float
0x5C2A8A: push    ecx
0x5C2A8B: mov     ecx, ds:0B333C4h
0x5C2A91: fstp    [esp+1Ch+var_8]
0x5C2A95: fld     [esp+1Ch+var_8]
0x5C2A99: fstp    [esp+1Ch+var_1C]; float
0x5C2A9C: call    sub_5F25F0
0x5C2AA1: mov     ecx, ds:0B333C4h
0x5C2AA7: call    sub_6645C0
0x5C2AAC: call    sub_5B3760
0x5C2AB1: call    sub_5DCB70
0x5C2AB6: mov     edi, [esp+14h+var_4]
0x5C2ABA: jmp     short loc_5C2AC5
0x5C2ABC: push    1
0x5C2ABE: mov     ecx, ebp
0x5C2AC0: call    sub_5222D0
0x5C2AC5: call    sub_57A7D0
0x5C2ACA: mov     ecx, ebp
0x5C2ACC: call    sub_522760
0x5C2AD1: mov     ecx, ds:0B333C4h
0x5C2AD7: call    sub_6626E0
0x5C2ADC: fld     dword ptr ds:0A379B4h
0x5C2AE2: push    ecx
0x5C2AE3: mov     ecx, ds:0B333C4h
0x5C2AE9: fstp    [esp+18h+a2]
0x5C2AEC: call    sub_5F2530
0x5C2AF1: fld     dword ptr ds:0A57EF8h
0x5C2AF7: push    1; float
0x5C2AF9: push    ecx
0x5C2AFA: mov     ecx, ds:0B333C4h
0x5C2B00: fstp    [esp+1Ch+var_1C]; float
0x5C2B03: call    sub_5F25F0
0x5C2B08: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x5C2B0D: mov     ecx, ds:0B333C4h
0x5C2B13: push    0
0x5C2B15: call    PlayerCharacter_SetCurrentMagicItem
0x5C2B1A: mov     ecx, ds:0B333C4h
0x5C2B20: call    sub_6670C0
0x5C2B25: cmp     byte ptr [edi+894h], 0
0x5C2B2C: setz    cl
0x5C2B2F: push    ecx; a1
0x5C2B30: mov     ecx, ds:0B333C4h; this
0x5C2B36: call    TogglePOV
0x5C2B3B: pop     edi
0x5C2B3C: pop     ebp
0x5C2B3D: pop     esi
0x5C2B3E: add     esp, 8
0x5C2B41: retn
