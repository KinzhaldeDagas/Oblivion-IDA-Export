0x691BD0: fld     [esp+arg_0]
0x691BD4: push    edi
0x691BD5: push    ecx
0x691BD6: fstp    [esp+8+var_8]
0x691BD9: mov     edi, ecx
0x691BDB: call    ValueModifierEffect_UpdateEffect
0x691BE0: mov     ecx, [edi+20h]; this
0x691BE3: test    ecx, ecx
0x691BE5: jz      short loc_691C4E
0x691BE7: push    esi
0x691BE8: call    MagicTarget_GetParentActor
0x691BED: mov     esi, eax
0x691BEF: test    esi, esi
0x691BF1: jz      short loc_691C4D
0x691BF3: mov     eax, [esi]
0x691BF5: mov     edx, [eax+330h]
0x691BFB: push    ebx
0x691BFC: mov     ecx, esi
0x691BFE: call    edx
0x691C00: test    eax, eax
0x691C02: jz      short loc_691C1B
0x691C04: mov     eax, [esi]
0x691C06: mov     edx, [eax+330h]
0x691C0C: mov     ecx, esi
0x691C0E: call    edx
0x691C10: mov     ecx, eax
0x691C12: call    sub_612C60
0x691C17: mov     bl, al
0x691C19: jmp     short loc_691C1D
0x691C1B: mov     bl, 1
0x691C1D: mov     eax, [esi]
0x691C1F: mov     edx, [eax+198h]
0x691C25: push    0
0x691C27: mov     ecx, esi
0x691C29: call    edx
0x691C2B: test    al, al
0x691C2D: jnz     short loc_691C43
0x691C2F: mov     eax, [esi]
0x691C31: mov     edx, [eax+1F8h]
0x691C37: mov     ecx, esi
0x691C39: call    edx
0x691C3B: test    al, al
0x691C3D: jnz     short loc_691C43
0x691C3F: test    bl, bl
0x691C41: jnz     short loc_691C4C
0x691C43: push    0
0x691C45: mov     ecx, edi
0x691C47: call    ActiveEffect_Base_Remove
0x691C4C: pop     ebx
0x691C4D: pop     esi
0x691C4E: pop     edi
0x691C4F: retn    4
