0x5F43E0: push    esi
0x5F43E1: mov     esi, ecx
0x5F43E3: mov     eax, [esi+5Ch]
0x5F43E6: mov     edx, [eax+30h]
0x5F43E9: push    edi
0x5F43EA: lea     edi, [esi+5Ch]
0x5F43ED: mov     ecx, edi
0x5F43EF: call    edx
0x5F43F1: test    eax, eax
0x5F43F3: jz      short loc_5F442F; jumptable 005F441D cases 20-22,34-39
0x5F43F5: mov     ecx, [esi+58h]
0x5F43F8: mov     eax, [ecx]
0x5F43FA: mov     edx, [eax+2D4h]
0x5F4400: call    edx
0x5F4402: test    eax, eax
0x5F4404: jz      short Actor_ProcessMagic????___def_5F441D; jumptable 005F441D default case, cases 23-33
0x5F4406: mov     ecx, [eax+68h]
0x5F4409: call    TESAnimGroup_GetAnimationGroup
0x5F440E: add     eax, 0FFFFFFECh; switch 20 cases
0x5F4411: cmp     eax, 13h
0x5F4414: ja      short Actor_ProcessMagic????___def_5F441D; jumptable 005F441D default case, cases 23-33
0x5F4416: movzx   eax, ds:byte_5F448C[eax]
0x5F441D: jmp     ds:jpt_5F441D[eax*4]; switch jump
0x5F4424: mov     edx, [edi]; jumptable 005F441D default case, cases 23-33
0x5F4426: mov     eax, [edx+34h]
0x5F4429: push    0
0x5F442B: mov     ecx, edi
0x5F442D: call    eax
0x5F442F: mov     ecx, [esi+58h]; jumptable 005F441D cases 20-22,34-39
0x5F4432: test    ecx, ecx
0x5F4434: jz      short loc_5F444B
0x5F4436: mov     edx, [ecx]
0x5F4438: mov     eax, [edx+2B8h]
0x5F443E: call    eax
0x5F4440: test    al, al
0x5F4442: jz      short loc_5F444B
0x5F4444: mov     ecx, esi
0x5F4446: call    sub_5F4190
0x5F444B: cmp     dword ptr [esi+60h], 0
0x5F444F: jz      short loc_5F4460
0x5F4451: fld     [esp+8+arg_0]
0x5F4455: push    ecx
0x5F4456: mov     ecx, edi; this
0x5F4458: fstp    [esp+0Ch+a2]; a2
0x5F445B: call    sub_699C10
0x5F4460: fld     [esp+8+arg_0]
0x5F4464: push    ecx
0x5F4465: mov     ecx, edi; this
0x5F4467: fstp    [esp+0Ch+a2]; a2
0x5F446A: call    MagicCaster_GetActiveMagicItem_wrapper
0x5F446F: fld     [esp+8+arg_0]
0x5F4473: push    ecx
0x5F4474: lea     ecx, [esi+68h]; this
0x5F4477: fstp    [esp+0Ch+a2]
0x5F447A: call    MagicTarget_ProcessEffects
0x5F447F: pop     edi
0x5F4480: pop     esi
0x5F4481: retn    4
