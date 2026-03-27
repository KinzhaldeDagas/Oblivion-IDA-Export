0x668C30: push    ebx
0x668C31: mov     ebx, [esp+4+arg_0]
0x668C35: push    esi
0x668C36: push    edi
0x668C37: push    ebx
0x668C38: push    2
0x668C3A: mov     edi, ecx
0x668C3C: call    ActorValue_GetGroupOffsetFromAV
0x668C41: mov     ecx, ds:0B33A98h
0x668C47: add     esp, 8
0x668C4A: push    eax
0x668C4B: call    TESDataHandler_GetTESSkillByCode
0x668C50: mov     esi, eax
0x668C52: mov     eax, [esp+0Ch+arg_4]
0x668C56: fld     dword ptr [esi+eax*4+38h]
0x668C5A: push    ebx
0x668C5B: mov     ecx, edi
0x668C5D: fstp    [esp+10h+arg_0]
0x668C61: call    Actor_GetBaseCalcAVi
0x668C66: cmp     eax, 64h ; 'd'
0x668C69: jge     short loc_668CB4
0x668C6B: fldz
0x668C6D: fld     st
0x668C6F: fld     [esp+0Ch+arg_8]
0x668C73: fucom   st(1)
0x668C75: fnstsw  ax
0x668C77: fstp    st(1)
0x668C79: test    ah, 44h
0x668C7C: jnp     short loc_668C88
0x668C7E: fmul    [esp+0Ch+arg_0]
0x668C82: fstp    [esp+0Ch+arg_0]
0x668C86: jmp     short loc_668C8A
0x668C88: fstp    st
0x668C8A: test    esi, esi
0x668C8C: jz      short loc_668CB2
0x668C8E: fld     [esp+0Ch+arg_0]
0x668C92: fcom    st(1)
0x668C94: fnstsw  ax
0x668C96: fstp    st(1)
0x668C98: test    ah, 41h
0x668C9B: jnz     short loc_668CB2
0x668C9D: push    0; char
0x668C9F: push    esi; int
0x668CA0: push    ecx
0x668CA1: fstp    [esp+18h+var_18]; float
0x668CA4: push    ebx; int
0x668CA5: mov     ecx, edi
0x668CA7: call    Player_IncreaseSkillExperience?
0x668CAC: pop     edi
0x668CAD: pop     esi
0x668CAE: pop     ebx
0x668CAF: retn    0Ch
0x668CB2: fstp    st
0x668CB4: pop     edi
0x668CB5: pop     esi
0x668CB6: pop     ebx
0x668CB7: retn    0Ch
