0x66C200: sub     esp, 0Ch
0x66C203: push    ebx
0x66C204: push    ebp
0x66C205: push    esi
0x66C206: mov     esi, ecx
0x66C208: push    edi
0x66C209: mov     dword ptr [esi+660h], 0
0x66C213: call    sub_65FBB0
0x66C218: xor     edi, edi
0x66C21A: lea     ebx, [ebx+0]
0x66C220: push    edi
0x66C221: push    2
0x66C223: call    ActorValue_GetAVFromGroupOffset
0x66C228: add     esp, 8
0x66C22B: push    eax; float
0x66C22C: mov     ecx, esi
0x66C22E: call    sub_663C50
0x66C233: add     edi, 1
0x66C236: cmp     edi, 15h
0x66C239: jl      short loc_66C220
0x66C23B: mov     ecx, esi
0x66C23D: call    sub_668030
0x66C242: xor     eax, eax
0x66C244: mov     [esi+5B8h], ax
0x66C24B: mov     [esi+5BAh], al
0x66C251: mov     edi, 0Ch
0x66C256: push    edi
0x66C257: push    2
0x66C259: call    ActorValue_GetGroupOffsetFromAV
0x66C25E: mov     ecx, [esi+5B0h]
0x66C264: movsx   eax, al
0x66C267: add     esp, 8
0x66C26A: fld     dword ptr [ecx+eax*4]
0x66C26D: fstp    [esp+1Ch+var_C]
0x66C271: fldz
0x66C273: fld     [esp+1Ch+var_C]
0x66C277: fcom    st(1)
0x66C279: fnstsw  ax
0x66C27B: test    ah, 41h
0x66C27E: jnz     loc_66C3C5
0x66C284: fld1
0x66C286: fcom    st(1)
0x66C288: fnstsw  ax
0x66C28A: test    ah, 5
0x66C28D: jp      short loc_66C29F
0x66C28F: fstp    st(2)
0x66C291: fxch    st(1)
0x66C293: fstp    [esp+1Ch+var_4]
0x66C297: fsub    qword ptr ds:0A2F928h
0x66C29D: jmp     short loc_66C2A5
0x66C29F: fstp    st
0x66C2A1: fstp    [esp+1Ch+var_4]
0x66C2A5: push    edi
0x66C2A6: fstp    [esp+20h+var_C]
0x66C2AA: mov     ecx, esi
0x66C2AC: call    Actor_GetBaseCalcAVi
0x66C2B1: cmp     eax, 64h ; 'd'
0x66C2B4: jge     loc_66C3B2
0x66C2BA: push    edi
0x66C2BB: push    2
0x66C2BD: call    ActorValue_GetGroupOffsetFromAV
0x66C2C2: mov     ecx, ds:0B33A98h
0x66C2C8: add     esp, 8
0x66C2CB: push    eax
0x66C2CC: call    TESDataHandler_GetTESSkillByCode
0x66C2D1: mov     ebp, eax
0x66C2D3: test    ebp, ebp
0x66C2D5: jz      loc_66C3A9
0x66C2DB: fldz
0x66C2DD: lea     ebx, [edi-0Ch]
0x66C2E0: cmp     ebx, 14h
0x66C2E3: fst     [esp+1Ch+var_8]
0x66C2E7: ja      short loc_66C306
0x66C2E9: push    edi
0x66C2EA: fstp    st
0x66C2EC: push    2
0x66C2EE: call    ActorValue_GetGroupOffsetFromAV
0x66C2F3: movsx   edx, al
0x66C2F6: add     esp, 8
0x66C2F9: fld     dword ptr [esi+edx*4+130h]
0x66C300: fstp    [esp+1Ch+var_8]
0x66C304: fldz
0x66C306: fld     [esp+1Ch+var_8]
0x66C30A: fadd    [esp+1Ch+var_4]
0x66C30E: fstp    [esp+1Ch+var_8]
0x66C312: fld     [esp+1Ch+var_8]
0x66C316: fst     [esp+1Ch+var_4]
0x66C31A: fcomp   st(1)
0x66C31C: fnstsw  ax
0x66C31E: test    ah, 5
0x66C321: jp      short loc_66C329
0x66C323: fstp    [esp+1Ch+var_4]
0x66C327: jmp     short loc_66C32B
0x66C329: fstp    st
0x66C32B: cmp     ebx, 14h
0x66C32E: ja      short loc_66C349
0x66C330: push    edi
0x66C331: push    2
0x66C333: call    ActorValue_GetGroupOffsetFromAV
0x66C338: fld     [esp+24h+var_4]
0x66C33C: movsx   eax, al
0x66C33F: add     esp, 8
0x66C342: fstp    dword ptr [esi+eax*4+130h]
0x66C349: fld1
0x66C34B: mov     ecx, esi
0x66C34D: fstp    [esp+1Ch+var_4]
0x66C351: call    Actor_GetBaseClass
0x66C356: test    eax, eax
0x66C358: jz      short loc_66C38C
0x66C35A: mov     eax, [ebp+2Ch]
0x66C35D: fld1
0x66C35F: lea     ecx, [eax-0Ch]
0x66C362: fstp    [esp+1Ch+var_4]
0x66C366: cmp     ecx, 14h
0x66C369: ja      short loc_66C384
0x66C36B: push    eax
0x66C36C: push    2
0x66C36E: call    ActorValue_GetGroupOffsetFromAV
0x66C373: movsx   edx, al
0x66C376: add     esp, 8
0x66C379: fld     dword ptr [esi+edx*4+7A4h]
0x66C380: fstp    [esp+1Ch+var_4]
0x66C384: fld     [esp+1Ch+var_4]
0x66C388: fstp    [esp+1Ch+var_4]
0x66C38C: fld     [esp+1Ch+var_8]
0x66C390: fld     [esp+1Ch+var_4]
0x66C394: fcompp
0x66C396: fnstsw  ax
0x66C398: test    ah, 5
0x66C39B: jp      short loc_66C3A9
0x66C39D: push    0
0x66C39F: push    0
0x66C3A1: push    ebp
0x66C3A2: mov     ecx, esi
0x66C3A4: call    Player_SkillLevelIncrease
0x66C3A9: push    edi; a2
0x66C3AA: call    sub_57A6F0
0x66C3AF: add     esp, 4
0x66C3B2: fldz
0x66C3B4: fld     [esp+1Ch+var_C]
0x66C3B8: fcom    st(1)
0x66C3BA: fnstsw  ax
0x66C3BC: test    ah, 41h
0x66C3BF: jz      loc_66C284
0x66C3C5: add     edi, 1
0x66C3C8: fstp    st
0x66C3CA: cmp     edi, 21h ; '!'
0x66C3CD: fstp    st
0x66C3CF: jl      loc_66C256
0x66C3D5: pop     edi
0x66C3D6: pop     esi
0x66C3D7: pop     ebp
0x66C3D8: pop     ebx
0x66C3D9: add     esp, 0Ch
0x66C3DC: retn
