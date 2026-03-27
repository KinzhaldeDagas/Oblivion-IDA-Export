0x691B10: push    esi
0x691B11: push    edi
0x691B12: mov     edi, ecx
0x691B14: mov     ecx, [esp+8+arg_0]; this
0x691B18: test    ecx, ecx
0x691B1A: jz      short loc_691B88
0x691B1C: call    MagicTarget_GetParentActor
0x691B21: mov     esi, eax
0x691B23: test    esi, esi
0x691B25: jz      short loc_691B88
0x691B27: mov     eax, [esi]
0x691B29: mov     edx, [eax+198h]
0x691B2F: push    0
0x691B31: mov     ecx, esi
0x691B33: call    edx
0x691B35: test    al, al
0x691B37: jnz     short loc_691B88
0x691B39: mov     eax, [esi]
0x691B3B: mov     edx, [eax+1F8h]
0x691B41: mov     ecx, esi
0x691B43: call    edx
0x691B45: test    al, al
0x691B47: jnz     short loc_691B88
0x691B49: mov     eax, [esi]
0x691B4B: mov     edx, [eax+334h]
0x691B51: push    1
0x691B53: mov     ecx, esi
0x691B55: call    edx
0x691B57: test    al, al
0x691B59: jz      short loc_691B88
0x691B5B: fld     dword ptr [edi+18h]
0x691B5E: push    ecx
0x691B5F: fstp    [esp+0Ch+arg_0]
0x691B63: mov     ecx, esi
0x691B65: fld     [esp+0Ch+arg_0]
0x691B69: fstp    [esp+0Ch+var_C]; float
0x691B6C: call    Actor_GetLevel
0x691B71: movzx   eax, ax
0x691B74: push    eax; int
0x691B75: call    Calc_MagnitudeAffectsLevel
0x691B7A: add     esp, 8
0x691B7D: test    al, al
0x691B7F: jz      short loc_691B88
0x691B81: pop     edi
0x691B82: mov     al, 1
0x691B84: pop     esi
0x691B85: retn    4
0x691B88: pop     edi
0x691B89: xor     al, al
0x691B8B: pop     esi
0x691B8C: retn    4
