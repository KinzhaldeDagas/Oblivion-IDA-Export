0x445A10: sub     esp, 0Ch
0x445A13: push    ebx
0x445A14: push    ebp
0x445A15: push    esi
0x445A16: mov     esi, ecx
0x445A18: mov     byte ptr ds:0B43384h, 1
0x445A1F: cmp     byte ptr [esi+51h], 0
0x445A23: push    edi; _DWORD
0x445A24: jnz     short loc_445A37
0x445A26: cmp     byte ptr [esi+52h], 0
0x445A2A: jnz     short loc_445A37
0x445A2C: mov     ecx, ds:0B33398h
0x445A32: call    sub_40D160
0x445A37: mov     byte ptr ds:0B43074h, 0
0x445A3E: call    InitBSShaderAccumulator
0x445A43: mov     ecx, eax
0x445A45: call    sub_7AB6F0
0x445A4A: push    0
0x445A4C: call    sub_7B2130
0x445A51: mov     eax, ds:0B35C24h
0x445A56: mov     ebp, [esp+20h+a2]
0x445A5A: mov     byte ptr [eax+19h], 1
0x445A5E: mov     edi, [esi+34h]
0x445A61: add     esp, 4
0x445A64: test    edi, edi
0x445A66: mov     [esp+1Ch+var_C], edi
0x445A6A: jz      loc_445B65
0x445A70: mov     ecx, edi
0x445A72: call    sub_4D6450
0x445A77: mov     ecx, [esi+58h]
0x445A7A: test    ecx, ecx
0x445A7C: jz      short loc_445A83
0x445A7E: call    sub_499FF0
0x445A83: push    3
0x445A85: call    nullsub_returnTrue_0arg
0x445A8A: push    0
0x445A8C: call    GetShadowSceneNode
0x445A91: add     esp, 8
0x445A94: mov     ecx, eax
0x445A96: call    sub_7C7E50
0x445A9B: push    2
0x445A9D: call    nullsub_returnTrue_0arg
0x445AA2: mov     ecx, ds:0B333C4h
0x445AA8: add     esp, 4
0x445AAB: push    0
0x445AAD: call    PlayerCharacter_GetPlayerNode
0x445AB2: push    eax
0x445AB3: push    0
0x445AB5: call    GetShadowSceneNode
0x445ABA: add     esp, 4
0x445ABD: mov     ecx, eax
0x445ABF: call    ShadowSceneNodeAddShadowCaster
0x445AC4: push    edi; a2
0x445AC5: mov     ecx, esi; this
0x445AC7: call    TES__IsInteriorCellPreloaded
0x445ACC: test    al, al
0x445ACE: jnz     short loc_445ADE
0x445AD0: mov     ecx, ds:0B33A98h
0x445AD6: push    edi; a1
0x445AD7: call    sub_447BA0
0x445ADC: jmp     short loc_445AE7
0x445ADE: push    1
0x445AE0: mov     ecx, edi
0x445AE2: call    sub_4CB010
0x445AE7: mov     dword ptr [esi+34h], 0
0x445AEE: mov     ecx, ds:0B33B00h
0x445AF4: mov     edx, [ecx+18h]
0x445AF7: shr     edx, 0Bh
0x445AFA: test    dl, 1
0x445AFD: jnz     short loc_445B65
0x445AFF: mov     eax, [esi+48h]
0x445B02: mov     edi, 7FFFFFFFh
0x445B07: cmp     eax, edi
0x445B09: jz      short loc_445B49
0x445B0B: mov     ecx, [esi+3Ch]
0x445B0E: cmp     dword ptr [ecx], 0
0x445B11: jz      short loc_445B35
0x445B13: mov     edx, [esi+4Ch]
0x445B16: mov     ecx, esi
0x445B18: mov     [esi+20h], eax
0x445B1B: mov     [esi+24h], edx
0x445B1E: call    sub_440270
0x445B23: push    ebp
0x445B24: push    0
0x445B26: mov     ecx, esi
0x445B28: call    sub_441D50
0x445B2D: mov     [esi+48h], edi
0x445B30: mov     [esi+4Ch], edi
0x445B33: jmp     short loc_445B61
0x445B35: mov     [esi+20h], edi
0x445B38: mov     [esi+24h], edi
0x445B3B: mov     [esi+28h], edi
0x445B3E: mov     [esi+2Ch], edi
0x445B41: mov     [esi+48h], edi
0x445B44: mov     [esi+4Ch], edi
0x445B47: jmp     short loc_445B61
0x445B49: push    ebp
0x445B4A: mov     ecx, esi
0x445B4C: call    sub_440880
0x445B51: test    eax, eax
0x445B53: jnz     short loc_445B61
0x445B55: mov     [esi+20h], edi
0x445B58: mov     [esi+24h], edi
0x445B5B: mov     [esi+28h], edi
0x445B5E: mov     [esi+2Ch], edi
0x445B61: mov     edi, [esp+1Ch+var_C]
0x445B65: mov     eax, [esi+10h]
0x445B68: test    eax, eax
0x445B6A: jz      short loc_445B79
0x445B6C: mov     eax, [eax+1Ch]
0x445B6F: test    eax, eax
0x445B71: jz      short loc_445B79
0x445B73: and     word ptr [eax+18h], 0FFFEh
0x445B79: movzx   eax, byte ptr ds:0B097B8h
0x445B80: mov     ecx, ds:0B35C24h
0x445B86: push    eax
0x445B87: call    sub_88B680
0x445B8C: mov     ecx, ds:0B33B00h
0x445B92: call    sub_45A500
0x445B97: mov     bl, al
0x445B99: test    bl, bl
0x445B9B: setz    cl
0x445B9E: push    ecx
0x445B9F: push    ebp
0x445BA0: mov     ecx, esi
0x445BA2: call    sub_444FB0
0x445BA7: fild    dword ptr [esi+20h]
0x445BAA: cmp     dword ptr ds:0B42D78h, 0
0x445BB1: fld     qword ptr ds:0A2FAA0h
0x445BB7: fadd    st(1), st
0x445BB9: fld     qword ptr ds:0A37650h
0x445BBF: fmul    st(2), st
0x445BC1: fxch    st(2)
0x445BC3: fstp    [esp+1Ch+var_C]
0x445BC7: mov     eax, [esp+1Ch+var_C]
0x445BCB: fiadd   dword ptr [esi+24h]
0x445BCE: mov     ds:0B4312Ch, eax
0x445BD3: mov     ds:0B43134h, eax
0x445BD8: fmulp   st(1), st
0x445BDA: fstp    [esp+1Ch+var_8]
0x445BDE: mov     ecx, [esp+1Ch+var_8]
0x445BE2: mov     ds:0B43130h, ecx
0x445BE8: mov     ds:0B43138h, ecx
0x445BEE: jz      short loc_445BFF
0x445BF0: push    0; _DWORD
0x445BF2: push    0; _DWORD
0x445BF4: call    dword ptr ds:0B42D78h
0x445BFA: add     esp, 8
0x445BFD: jmp     short loc_445C01
0x445BFF: fldz
0x445C01: mov     ecx, esi
0x445C03: fstp    dword ptr ds:0B43078h
0x445C09: call    sub_440270
0x445C0E: mov     edx, [esi+24h]
0x445C11: mov     eax, [esi+20h]
0x445C14: push    edx; a3
0x445C15: push    eax; a2
0x445C16: mov     ecx, esi; this
0x445C18: call    TES_GetCellFromCoords
0x445C1D: mov     ecx, ds:0B33A1Ch
0x445C23: push    eax
0x445C24: call    sub_43E000
0x445C29: test    al, al
0x445C2B: jz      short loc_445C3A
0x445C2D: push    0
0x445C2F: push    0
0x445C31: push    1; int
0x445C33: mov     ecx, esi
0x445C35: call    sub_440AF0
0x445C3A: test    bl, bl
0x445C3C: jnz     loc_445CEC
0x445C42: mov     ecx, ds:0B35C24h
0x445C48: test    ecx, ecx
0x445C4A: jz      short loc_445C51
0x445C4C: call    sub_889E00
0x445C51: mov     ecx, ds:0B33A10h
0x445C57: push    4
0x445C59: call    sub_434020
0x445C5E: mov     ecx, [esi+8]
0x445C61: call    sub_482310
0x445C66: mov     ecx, ds:0B35C24h
0x445C6C: test    ecx, ecx
0x445C6E: jz      short loc_445C77
0x445C70: push    0
0x445C72: call    sub_88D1D0
0x445C77: fld     dword ptr [ebp+0]
0x445C7A: lea     ecx, [esp+1Ch+a3]
0x445C7E: fstp    [esp+1Ch+var_C]
0x445C82: push    ecx; a3
0x445C83: fld     dword ptr [ebp+4]
0x445C86: push    ebp; a2
0x445C87: fstp    [esp+24h+var_8]
0x445C8B: mov     ecx, esi; this
0x445C8D: fldz
0x445C8F: fstp    [esp+24h+a3]
0x445C93: call    GetTerrainHeight
0x445C98: fld1
0x445C9A: mov     edx, ds:0B258DCh
0x445CA0: mov     ecx, ds:0B258E0h
0x445CA6: sub     esp, 10h
0x445CA9: fstp    [esp+2Ch+var_20]; float
0x445CAD: mov     eax, esp
0x445CAF: mov     [eax], edx
0x445CB1: mov     edx, ds:0B258E4h
0x445CB7: mov     [eax+4], ecx
0x445CBA: mov     ecx, [esp+2Ch+var_C]
0x445CBE: mov     [eax+8], edx
0x445CC1: mov     edx, [esp+2Ch+var_8]
0x445CC5: sub     esp, 0Ch
0x445CC8: mov     eax, esp
0x445CCA: mov     [eax], ecx
0x445CCC: mov     ecx, [esp+38h+a3]
0x445CD0: mov     [eax+4], edx
0x445CD3: mov     byte ptr ds:0B2CBC0h, 0
0x445CDA: mov     [eax+8], ecx
0x445CDD: call    DrawGrassPass?
0x445CE2: add     esp, 1Ch
0x445CE5: mov     byte ptr ds:0B2CBC0h, 1
0x445CEC: cmp     byte ptr [esi+51h], 0
0x445CF0: jnz     short loc_445D15
0x445CF2: cmp     byte ptr [esi+52h], 0
0x445CF6: jnz     short loc_445D15
0x445CF8: test    bl, bl
0x445CFA: jnz     short loc_445D48
0x445CFC: fld     dword ptr ds:0B33A48h
0x445D02: push    ecx
0x445D03: mov     ecx, ds:0B3A6B0h
0x445D09: fstp    [esp+20h+var_20]; float
0x445D0C: push    2; int
0x445D0E: call    sub_5732D0
0x445D13: jmp     short loc_445D19
0x445D15: test    bl, bl
0x445D17: jnz     short loc_445D48
0x445D19: mov     ecx, offset ActorProcessManager_ptr
0x445D1E: call    sub_677360
0x445D23: mov     ecx, esi
0x445D25: call    sub_441610
0x445D2A: mov     ecx, offset ActorProcessManager_ptr
0x445D2F: call    sub_678750
0x445D34: mov     ecx, offset ActorProcessManager_ptr
0x445D39: call    sub_675F40
0x445D3E: mov     ecx, offset ActorProcessManager_ptr
0x445D43: call    sub_675FC0
0x445D48: test    edi, edi
0x445D4A: jz      short loc_445D6F
0x445D4C: mov     ecx, edi
0x445D4E: call    sub_4C9820
0x445D53: test    al, al
0x445D55: jnz     short loc_445D6F
0x445D57: mov     ecx, [esi+5Ch]
0x445D5A: mov     edx, [ecx+10h]
0x445D5D: push    edx
0x445D5E: call    sub_5403D0
0x445D63: mov     ecx, [esi+5Ch]
0x445D66: mov     eax, [ecx+14h]
0x445D69: push    eax
0x445D6A: call    sub_5403D0
0x445D6F: mov     ecx, esi
0x445D71: call    sub_43FB40
0x445D76: mov     ecx, [esi+5Ch]
0x445D79: cmp     dword ptr [ecx+0DCh], 0
0x445D80: jz      short loc_445D89
0x445D82: push    3
0x445D84: call    sub_543BB0
0x445D89: mov     ecx, [esi+0Ch]; this
0x445D8C: call    NiAVObject_InitializePropertyState
0x445D91: mov     ecx, [esi+0Ch]
0x445D94: call    NiNode_UpdateDynamicEffectState
0x445D99: push    0
0x445D9B: call    Player_UpdateHUDHealthBarTarget?
0x445DA0: add     esp, 4
0x445DA3: cmp     byte ptr [esi+51h], 0
0x445DA7: jnz     short loc_445DAF
0x445DA9: cmp     byte ptr [esi+52h], 0
0x445DAD: jz      short loc_445DCB
0x445DAF: call    sub_578E30
0x445DB4: call    sub_5A9010
0x445DB9: mov     ecx, ds:0B33398h
0x445DBF: mov     ecx, [ecx+24h]
0x445DC2: test    ecx, ecx
0x445DC4: jz      short loc_445DCB
0x445DC6: call    sub_6A9AA0
0x445DCB: push    0; a2
0x445DCD: mov     ecx, esi; this
0x445DCF: call    sub_43FC20
0x445DD4: pop     edi
0x445DD5: pop     esi
0x445DD6: pop     ebp
0x445DD7: mov     byte ptr ds:0B3522Ch, 1
0x445DDE: mov     byte ptr ds:0B43384h, 0
0x445DE5: pop     ebx
0x445DE6: add     esp, 0Ch
0x445DE9: retn    4
