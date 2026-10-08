0x8C3A10: push    ebp
0x8C3A11: mov     ebp, esp
0x8C3A13: and     esp, 0FFFFFFF0h
0x8C3A16: push    0FFFFFFFFh
0x8C3A18: push    offset SEH_8C3A10
0x8C3A1D: mov     eax, large fs:0
0x8C3A23: push    eax
0x8C3A24: sub     esp, 48h
0x8C3A27: mov     eax, ds:0B30AACh
0x8C3A2C: xor     eax, esp
0x8C3A2E: mov     [esp+54h+var_14], eax
0x8C3A32: push    ebx
0x8C3A33: push    esi
0x8C3A34: push    edi
0x8C3A35: mov     eax, ds:0B30AACh
0x8C3A3A: xor     eax, esp
0x8C3A3C: push    eax
0x8C3A3D: lea     eax, [esp+64h+var_C]
0x8C3A41: mov     large fs:0, eax
0x8C3A47: mov     edi, [ebp+arg_0]
0x8C3A4A: test    edi, edi
0x8C3A4C: mov     ebx, ecx
0x8C3A4E: jz      loc_8C3B05
0x8C3A54: cmp     dword ptr [edi+8], 0
0x8C3A58: jnz     short loc_8C3A8F
0x8C3A5A: lea     ecx, [esp+64h+var_50]
0x8C3A5E: call    sub_914340
0x8C3A63: mov     ecx, [edi+4]
0x8C3A66: lea     eax, [esp+64h+var_50]
0x8C3A6A: push    eax
0x8C3A6B: push    ecx
0x8C3A6C: mov     [esp+6Ch+var_4], 0
0x8C3A74: call    sub_914160
0x8C3A79: add     esp, 8
0x8C3A7C: mov     [edi+8], eax
0x8C3A7F: mov     [esp+64h+var_4], 0FFFFFFFFh
0x8C3A87: mov     [esp+64h+var_50], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8C3A8F: mov     ecx, ds:0BA7D98h
0x8C3A95: mov     edx, [ecx]
0x8C3A97: mov     eax, [edx+10h]
0x8C3A9A: push    24h ; '$'
0x8C3A9C: push    18h
0x8C3A9E: call    eax
0x8C3AA0: mov     word ptr [eax+4], 18h
0x8C3AA6: mov     [esp+64h+var_54], eax
0x8C3AAA: fld     dword ptr [edi+0Ch]
0x8C3AAD: mov     edx, [edi+4]
0x8C3AB0: push    ecx
0x8C3AB1: mov     ecx, [edi+8]
0x8C3AB4: fstp    [esp+68h+var_68]; float
0x8C3AB7: push    ecx; int
0x8C3AB8: push    edx; int
0x8C3AB9: mov     ecx, eax
0x8C3ABB: mov     [esp+70h+var_4], 1
0x8C3AC3: call    sub_8C3810
0x8C3AC8: mov     esi, eax
0x8C3ACA: mov     eax, [ebx]
0x8C3ACC: mov     edx, [eax+4Ch]
0x8C3ACF: push    esi
0x8C3AD0: mov     ecx, ebx
0x8C3AD2: mov     [esp+68h+var_4], 0FFFFFFFFh
0x8C3ADA: call    edx
0x8C3ADC: cmp     word ptr [esi+4], 0
0x8C3AE1: jz      short loc_8C3AFB
0x8C3AE3: add     word ptr [esi+6], 0FFFFh
0x8C3AE8: movzx   eax, word ptr [esi+6]
0x8C3AEC: test    ax, ax
0x8C3AEF: jnz     short loc_8C3AFB
0x8C3AF1: mov     eax, [esi]
0x8C3AF3: mov     edx, [eax]
0x8C3AF5: push    1
0x8C3AF7: mov     ecx, esi
0x8C3AF9: call    edx
0x8C3AFB: mov     eax, [ebx]
0x8C3AFD: mov     edx, [eax+7Ch]
0x8C3B00: push    edi
0x8C3B01: mov     ecx, ebx
0x8C3B03: call    edx
0x8C3B05: mov     ecx, [esp+64h+var_C]
0x8C3B09: mov     large fs:0, ecx
0x8C3B10: pop     ecx
0x8C3B11: pop     edi
0x8C3B12: pop     esi
0x8C3B13: pop     ebx
0x8C3B14: mov     ecx, [esp+54h+var_14]
0x8C3B18: xor     ecx, esp
0x8C3B1A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C3B1F: mov     esp, ebp
0x8C3B21: pop     ebp
0x8C3B22: retn    4
0x9D7590: lea     ecx, [ebp+var_50]
0x9D7593: jmp     sub_4BFC40
0x9D7598: mov     eax, [ebp+var_54]
0x9D759B: push    eax
0x9D759C: call    sub_8C9290
0x9D75A1: pop     ecx
0x9D75A2: retn
0x9D75A3: mov     edx, [esp-4+arg_4]
0x9D75A7: lea     eax, [edx-54h]
0x9D75AA: mov     ecx, [edx-58h]
0x9D75AD: xor     ecx, eax
0x9D75AF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D75B4: add     eax, 0Ch
0x9D75B7: mov     ecx, [edx-8]
0x9D75BA: xor     ecx, eax
0x9D75BC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D75C1: mov     eax, offset stru_AFF194
0x9D75C6: jmp     ___CxxFrameHandler3
