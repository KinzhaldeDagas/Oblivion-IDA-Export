0x662AA0: sub     esp, 0Ch
0x662AA3: mov     eax, [esp+0Ch+arg_0]
0x662AA7: push    ebx
0x662AA8: push    ebp
0x662AA9: push    esi
0x662AAA: push    edi
0x662AAB: push    0; int
0x662AAD: push    offset ??_R0?AVEnchantmentItem@@@8; struct TypeDescriptor *
0x662AB2: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x662AB7: mov     esi, ecx
0x662AB9: push    0; int
0x662ABB: push    eax; void *
0x662ABC: mov     [esp+30h+var_C], esi
0x662AC0: call    OblivionDynamicCast
0x662AC5: add     esp, 14h
0x662AC8: test    eax, eax
0x662ACA: mov     [esp+1Ch+arg_0], eax
0x662ACE: jz      short loc_662B4B
0x662AD0: cmp     dword ptr [eax+34h], 3
0x662AD4: jnz     short loc_662B4B
0x662AD6: push    0; a2
0x662AD8: mov     ecx, esi; this
0x662ADA: call    Actor_GetActorBaseForm
0x662ADF: test    eax, eax
0x662AE1: jz      short loc_662AE8
0x662AE3: add     eax, 44h ; 'D'
0x662AE6: jmp     short loc_662AEA
0x662AE8: xor     eax, eax
0x662AEA: push    eax
0x662AEB: push    esi; a1
0x662AEC: call    ContainerExtraData_GetContainerExtraDataForRef
0x662AF1: add     esp, 8
0x662AF4: mov     ebp, eax
0x662AF6: xor     esi, esi
0x662AF8: jmp     short loc_662B00
0x662AFA: align 10h
0x662B00: mov     ecx, ds:dword_B14E60[esi]
0x662B06: push    0
0x662B08: push    ecx
0x662B09: mov     ecx, ebp
0x662B0B: call    ContainerExtraData_GetEquippedInstance
0x662B10: mov     ebx, eax
0x662B12: test    ebx, ebx
0x662B14: jz      short loc_662B43
0x662B16: mov     eax, [ebx+8]
0x662B19: push    0; int
0x662B1B: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x662B20: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x662B25: push    0; int
0x662B27: push    eax; void *
0x662B28: call    OblivionDynamicCast
0x662B2D: mov     edi, eax
0x662B2F: add     esp, 14h
0x662B32: test    edi, edi
0x662B34: jz      short loc_662B3B
0x662B36: mov     eax, [edi+4]
0x662B39: jmp     short loc_662B3D
0x662B3B: xor     eax, eax
0x662B3D: cmp     eax, [esp+1Ch+arg_0]
0x662B41: jz      short loc_662B57
0x662B43: add     esi, 4
0x662B46: cmp     esi, 28h ; '('
0x662B49: jb      short loc_662B00
0x662B4B: pop     edi
0x662B4C: pop     esi
0x662B4D: pop     ebp
0x662B4E: xor     al, al
0x662B50: pop     ebx
0x662B51: add     esp, 0Ch
0x662B54: retn    0Ch
0x662B57: mov     edx, [eax+24h]
0x662B5A: lea     esi, [eax+24h]
0x662B5D: mov     eax, [edx]
0x662B5F: push    0
0x662B61: mov     ecx, esi
0x662B63: call    eax
0x662B65: fstp    st
0x662B67: mov     ecx, ebx
0x662B69: call    sub_4849C0
0x662B6E: fstp    [esp+1Ch+var_4]
0x662B72: movzx   ecx, word ptr [edi+8]
0x662B76: mov     edx, [esi]
0x662B78: mov     eax, [esp+1Ch+var_C]
0x662B7C: mov     edx, [edx]
0x662B7E: mov     [esp+1Ch+arg_0], ecx
0x662B82: push    eax
0x662B83: mov     ecx, esi
0x662B85: fild    [esp+20h+arg_0]
0x662B89: fstp    [esp+20h+var_8]
0x662B8D: call    edx
0x662B8F: push    ecx
0x662B90: fstp    [esp+20h+var_20]; float
0x662B93: call    Calc_EnchantmentDrain?
0x662B98: fstp    [esp+20h+arg_0]
0x662B9C: add     esp, 4
0x662B9F: fldz
0x662BA1: fld     st
0x662BA3: fld     [esp+1Ch+arg_0]
0x662BA7: fucom   st(1)
0x662BA9: fnstsw  ax
0x662BAB: fstp    st(1)
0x662BAD: test    ah, 44h
0x662BB0: fld     [esp+1Ch+var_8]
0x662BB4: jp      short loc_662BC2
0x662BB6: fstp    st(1)
0x662BB8: fst     [esp+1Ch+arg_0]
0x662BBC: fld     [esp+1Ch+arg_0]
0x662BC0: fxch    st(1)
0x662BC2: fdiv    st, st(1)
0x662BC4: mov     eax, [esp+1Ch+arg_8]
0x662BC8: fstp    [esp+1Ch+arg_0]
0x662BCC: fld     [esp+1Ch+arg_0]
0x662BD0: fst     dword ptr [eax]
0x662BD2: fld     [esp+1Ch+var_4]
0x662BD6: fcom    st(3)
0x662BD8: fnstsw  ax
0x662BDA: fstp    st(3)
0x662BDC: test    ah, 1
0x662BDF: jnz     short loc_662BF7
0x662BE1: fstp    st
0x662BE3: mov     ecx, [esp+1Ch+arg_4]
0x662BE7: fdivp   st(1), st
0x662BE9: pop     edi
0x662BEA: pop     esi
0x662BEB: pop     ebp
0x662BEC: mov     al, 1
0x662BEE: pop     ebx
0x662BEF: fstp    dword ptr [ecx]
0x662BF1: add     esp, 0Ch
0x662BF4: retn    0Ch
0x662BF7: mov     edx, [esp+1Ch+arg_4]
0x662BFB: fstp    st(1)
0x662BFD: pop     edi
0x662BFE: fstp    st(1)
0x662C00: pop     esi
0x662C01: fstp    dword ptr [edx]
0x662C03: pop     ebp
0x662C04: mov     al, 1
0x662C06: pop     ebx
0x662C07: add     esp, 0Ch
0x662C0A: retn    0Ch
