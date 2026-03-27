0x668B30: sub     esp, 8
0x668B33: push    ebp
0x668B34: mov     ebp, [esp+0Ch+a2]
0x668B38: push    esi
0x668B39: push    ebp
0x668B3A: mov     esi, ecx
0x668B3C: call    Actor_GetBaseCalcAVi
0x668B41: cmp     eax, 64h ; 'd'
0x668B44: jge     loc_668C1F
0x668B4A: push    edi
0x668B4B: mov     edi, [esp+14h+arg_8]
0x668B4F: test    edi, edi
0x668B51: jnz     short loc_668B74
0x668B53: push    ebp
0x668B54: push    2
0x668B56: call    ActorValue_GetGroupOffsetFromAV
0x668B5B: mov     ecx, ds:0B33A98h
0x668B61: add     esp, 8
0x668B64: push    eax
0x668B65: call    TESDataHandler_GetTESSkillByCode
0x668B6A: mov     edi, eax
0x668B6C: test    edi, edi
0x668B6E: jz      loc_668C15
0x668B74: fldz
0x668B76: lea     eax, [ebp-0Ch]
0x668B79: cmp     eax, 14h
0x668B7C: fstp    [esp+14h+a2]
0x668B80: ja      short loc_668B9B
0x668B82: push    ebp
0x668B83: push    2
0x668B85: call    ActorValue_GetGroupOffsetFromAV
0x668B8A: movsx   ecx, al
0x668B8D: add     esp, 8
0x668B90: fld     dword ptr [esi+ecx*4+130h]
0x668B97: fstp    [esp+14h+a2]
0x668B9B: fld     [esp+14h+a2]
0x668B9F: push    ebx
0x668BA0: fadd    [esp+18h+arg_4]
0x668BA4: push    ecx
0x668BA5: mov     ecx, esi
0x668BA7: fstp    [esp+1Ch+a2]
0x668BAB: fld     [esp+1Ch+a2]
0x668BAF: fstp    [esp+1Ch+var_1C]; float
0x668BB2: push    ebp; int
0x668BB3: call    sub_65FA40
0x668BB8: fld     [esp+18h+a2]
0x668BBC: push    edi
0x668BBD: fstp    [esp+1Ch+var_8]
0x668BC1: mov     ecx, esi
0x668BC3: call    sub_65FAD0
0x668BC8: fcomp   [esp+18h+var_8]
0x668BCC: mov     bl, [esp+18h+arg_C]
0x668BD0: fnstsw  ax
0x668BD2: test    ah, 5
0x668BD5: jp      short loc_668BE7
0x668BD7: test    bl, bl
0x668BD9: setz    dl
0x668BDC: mov     ecx, esi
0x668BDE: push    edx
0x668BDF: push    0
0x668BE1: push    edi
0x668BE2: call    Player_SkillLevelIncrease
0x668BE7: cmp     byte ptr [esi+6E5h], 0
0x668BEE: jz      short loc_668C14
0x668BF0: test    bl, bl
0x668BF2: jnz     short loc_668C14
0x668BF4: push    ebp
0x668BF5: push    2
0x668BF7: call    ActorValue_GetGroupOffsetFromAV
0x668BFC: mov     ecx, [esi+5B0h]
0x668C02: movsx   eax, al
0x668C05: fld     dword ptr [ecx+eax*4]
0x668C08: lea     eax, [ecx+eax*4]
0x668C0B: fadd    [esp+20h+arg_4]
0x668C0F: add     esp, 8
0x668C12: fstp    dword ptr [eax]
0x668C14: pop     ebx
0x668C15: push    ebp; a2
0x668C16: call    sub_57A6F0
0x668C1B: add     esp, 4
0x668C1E: pop     edi
0x668C1F: pop     esi
0x668C20: pop     ebp
0x668C21: add     esp, 8
0x668C24: retn    10h
