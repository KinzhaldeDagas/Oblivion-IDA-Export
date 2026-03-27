0x475D80: push    0FFFFFFFFh
0x475D82: push    offset Menu_PickIdles??_SEH
0x475D87: mov     eax, large fs:0
0x475D8D: push    eax
0x475D8E: sub     esp, 20h
0x475D91: push    ebx
0x475D92: push    ebp
0x475D93: push    esi
0x475D94: push    edi
0x475D95: mov     eax, ds:0B30AACh
0x475D9A: xor     eax, esp
0x475D9C: push    eax
0x475D9D: lea     eax, [esp+40h+var_C]
0x475DA1: mov     large fs:0, eax
0x475DA7: mov     ebx, ecx
0x475DA9: mov     [esp+40h+var_24], ebx
0x475DAD: cmp     [esp+40h+arg_0], 0
0x475DB2: jz      loc_476066
0x475DB8: mov     esi, [esp+40h+arg_4]
0x475DBC: test    esi, esi
0x475DBE: jz      loc_476066
0x475DC4: mov     ebp, [esp+40h+arg_8]
0x475DC8: test    ebp, ebp
0x475DCA: jz      loc_476066
0x475DD0: mov     ecx, [ebx+9Ch]
0x475DD6: lea     eax, [esp+40h+var_2C]
0x475DDA: push    eax
0x475DDB: push    0
0x475DDD: call    sub_470960
0x475DE2: test    al, al
0x475DE4: jnz     loc_476066
0x475DEA: mov     edx, [ebp+0]
0x475DED: mov     eax, [edx+170h]
0x475DF3: mov     ecx, ebp
0x475DF5: call    eax
0x475DF7: cmp     byte ptr [eax+4], 23h ; '#'
0x475DFB: mov     [ebx+4], esi
0x475DFE: setz    byte ptr [esp+40h+arg_8]
0x475E03: mov     [esp+40h+var_20], offset aBip01; "Bip01"
0x475E0B: mov     [esp+40h+var_1C], offset aBip01LForearmt; "Bip01 L ForearmTwist"
0x475E13: mov     [esp+40h+var_18], offset aTorch; "Torch"
0x475E1B: mov     [esp+40h+var_14], offset aWeapon; "Weapon"
0x475E23: mov     [esp+40h+var_10], offset aBip01Head; "Bip01 Head"
0x475E2B: xor     esi, esi
0x475E2D: lea     edi, [ebx+24h]
0x475E30: mov     ecx, [esp+esi*4+40h+var_20]
0x475E34: mov     edx, [esp+40h+arg_4]
0x475E38: push    ecx
0x475E39: push    edx
0x475E3A: mov     ecx, ebp
0x475E3C: call    sub_4D96F0
0x475E41: mov     [edi], eax
0x475E43: add     esi, 1
0x475E46: add     edi, 4
0x475E49: cmp     esi, 5
0x475E4C: jl      short loc_475E30
0x475E4E: mov     eax, [ebx+4]
0x475E51: and     word ptr [eax+18h], 0FFFDh
0x475E57: push    80h ; '€'; Size
0x475E5C: call    FormHeapAlloc
0x475E61: add     esp, 4
0x475E64: mov     [esp+40h+var_28], eax
0x475E68: test    eax, eax
0x475E6A: mov     [esp+40h+var_4], 0
0x475E72: jz      short loc_475E83
0x475E74: mov     ecx, [ebx+4]
0x475E77: push    1
0x475E79: push    ecx
0x475E7A: mov     ecx, eax
0x475E7C: call    sub_6C5610
0x475E81: jmp     short loc_475E85
0x475E83: xor     eax, eax
0x475E85: push    eax; a2
0x475E86: lea     ecx, [ebx+98h]; this
0x475E8C: mov     [esp+44h+var_4], 0FFFFFFFFh
0x475E94: call    NiSmartPointer_Set??
0x475E99: mov     ebp, [esp+40h+arg_0]
0x475E9D: mov     ecx, ebp
0x475E9F: call    BSSimpleList_IsEmpty
0x475EA4: test    al, al
0x475EA6: jnz     loc_475FD8
0x475EAC: lea     esp, [esp+0]
0x475EB0: mov     edi, [ebp+0]
0x475EB3: mov     ecx, ds:0B33A1Ch
0x475EB9: push    edi
0x475EBA: mov     [esp+44h+var_28], edi
0x475EBE: call    sub_439FF0
0x475EC3: mov     esi, eax
0x475EC5: mov     ecx, [esi+8]
0x475EC8: test    ecx, ecx
0x475ECA: jz      loc_475F9C
0x475ED0: call    TESAnimGroup_IsPowerAttack
0x475ED5: test    al, al
0x475ED7: jz      short loc_475EEF
0x475ED9: cmp     byte ptr [esp+40h+arg_8], 0
0x475EDE: jz      short loc_475EEF
0x475EE0: add     esi, 0Ch
0x475EE3: push    esi; lpAddend
0x475EE4: call    dword ptr ds:0A2807Ch
0x475EEA: jmp     loc_475F9C
0x475EEF: mov     ecx, ds:0B333C4h
0x475EF5: test    ecx, ecx
0x475EF7: mov     byte ptr [esp+40h+arg_0], 1
0x475EFC: jz      loc_475F86
0x475F02: push    0
0x475F04: call    PlayerCharacter_GetPlayerNode
0x475F09: test    eax, eax
0x475F0B: jz      short loc_475F86
0x475F0D: cmp     dword ptr ds:0B06548h, 0
0x475F14: jz      short loc_475F86
0x475F16: mov     ecx, ds:0B333C4h
0x475F1C: push    0
0x475F1E: call    PlayerCharacter_GetPlayerNode
0x475F23: mov     edi, [esp+40h+arg_4]
0x475F27: cmp     edi, eax
0x475F29: jz      short loc_475F73
0x475F2B: mov     ecx, ds:0B333C4h
0x475F31: push    1
0x475F33: call    PlayerCharacter_GetPlayerNode
0x475F38: cmp     edi, eax
0x475F3A: jz      short loc_475F73
0x475F3C: mov     edx, ds:0B333C4h
0x475F42: cmp     edi, [edx+5D8h]
0x475F48: jz      short loc_475F73
0x475F4A: mov     ecx, ds:0B33B00h
0x475F50: call    sub_45A500
0x475F55: test    al, al
0x475F57: jnz     short loc_475F86
0x475F59: call    InterfaceManager_IsMenuMode
0x475F5E: test    al, al
0x475F60: jnz     short loc_475F86
0x475F62: mov     ecx, ds:0B333A0h
0x475F68: call    sub_404F20
0x475F6D: test    al, al
0x475F6F: jz      short loc_475F8B
0x475F71: jmp     short loc_475F86
0x475F73: push    0
0x475F75: push    40Ch
0x475F7A: call    sub_5790E0
0x475F7F: add     esp, 8
0x475F82: test    al, al
0x475F84: jnz     short loc_475F8B
0x475F86: mov     byte ptr [esp+40h+arg_0], 0
0x475F8B: mov     eax, [esp+40h+arg_0]
0x475F8F: push    eax
0x475F90: push    esi
0x475F91: mov     ecx, ebx; this
0x475F93: call    ??0AnimSequenceSingle@@QAE@XZ; AnimSequenceSingle::AnimSequenceSingle(void)
0x475F98: mov     edi, [esp+40h+var_28]
0x475F9C: push    edi
0x475F9D: call    FormHeapFree
0x475FA2: mov     eax, [ebp+4]
0x475FA5: add     esp, 4
0x475FA8: test    eax, eax
0x475FAA: jz      short loc_475FC2
0x475FAC: mov     ecx, [eax+4]
0x475FAF: mov     [ebp+4], ecx
0x475FB2: mov     edx, [eax]
0x475FB4: push    eax
0x475FB5: mov     [ebp+0], edx
0x475FB8: call    FormHeapFree
0x475FBD: add     esp, 4
0x475FC0: jmp     short loc_475FC9
0x475FC2: mov     dword ptr [ebp+0], 0
0x475FC9: mov     ecx, ebp
0x475FCB: call    BSSimpleList_IsEmpty
0x475FD0: test    al, al
0x475FD2: jz      loc_475EB0
0x475FD8: mov     eax, [ebx+8]
0x475FDB: test    eax, eax
0x475FDD: jz      short loc_475FEE
0x475FDF: lea     edi, [eax+30h]
0x475FE2: mov     ecx, 9
0x475FE7: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x475FEC: rep movsd
0x475FEE: push    ebp
0x475FEF: call    FormHeapFree
0x475FF4: mov     ecx, [ebx+9Ch]
0x475FFA: add     esp, 4
0x475FFD: lea     eax, [esp+40h+var_2C]
0x476001: push    eax
0x476002: push    0
0x476004: call    sub_470960
0x476009: mov     bl, al
0x47600B: test    bl, bl
0x47600D: jz      short loc_476062
0x47600F: mov     ecx, [esp+40h+var_2C]
0x476013: mov     edx, [ecx]
0x476015: mov     eax, [edx+10h]
0x476018: push    0FFFFFFFFh
0x47601A: call    eax
0x47601C: mov     esi, eax
0x47601E: test    esi, esi
0x476020: jz      short loc_476062
0x476022: fldz
0x476024: push    0; int
0x476026: push    0; int
0x476028: sub     esp, 8
0x47602B: fstp    [esp+50h+var_4C]; float
0x47602F: mov     ecx, esi
0x476031: fld1
0x476033: fstp    [esp+50h+var_50]; float
0x476036: push    1; char
0x476038: push    64h ; 'd'; int
0x47603A: call    sub_6C9BA0
0x47603F: fldz
0x476041: push    1; a3
0x476043: push    ecx
0x476044: mov     ecx, [esp+48h+var_24]
0x476048: fstp    [esp+48h+a2]; a2
0x47604B: mov     ecx, [ecx+4]; this
0x47604E: call    NiAVObject_UpdateNiAVObject
0x476053: fldz
0x476055: push    0; char
0x476057: push    ecx
0x476058: mov     ecx, esi
0x47605A: fstp    [esp+48h+a2]; float
0x47605D: call    sub_6C9CB0
0x476062: mov     al, bl
0x476064: jmp     short loc_476068
0x476066: xor     al, al
0x476068: mov     ecx, [esp+40h+var_C]
0x47606C: mov     large fs:0, ecx
0x476073: pop     ecx
0x476074: pop     edi
0x476075: pop     esi
0x476076: pop     ebp
0x476077: pop     ebx
0x476078: add     esp, 2Ch
0x47607B: retn    0Ch
