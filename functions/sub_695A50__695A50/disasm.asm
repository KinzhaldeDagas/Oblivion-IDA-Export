0x695A50: push    0FFFFFFFFh
0x695A52: push    offset SEH_695A50
0x695A57: mov     eax, large fs:0
0x695A5D: push    eax
0x695A5E: push    ebx
0x695A5F: push    esi
0x695A60: push    edi
0x695A61: mov     eax, ds:0B30AACh
0x695A66: xor     eax, esp
0x695A68: push    eax
0x695A69: lea     eax, [esp+1Ch+var_C]
0x695A6D: mov     large fs:0, eax
0x695A73: mov     esi, ecx
0x695A75: mov     eax, [esp+1Ch+arg_4]
0x695A79: mov     ecx, [esp+1Ch+arg_0]
0x695A7D: push    eax
0x695A7E: push    ecx
0x695A7F: mov     ecx, esi
0x695A81: call    sub_69F1E0
0x695A86: mov     ecx, esi
0x695A88: call    sub_695010
0x695A8D: push    esi; Concurrency::details::SchedulerBase *
0x695A8E: mov     ecx, esi; this
0x695A90: call    TESObjectREFR_GetParentCell
0x695A95: mov     ecx, eax
0x695A97: call    sub_4D35D0
0x695A9C: cmp     dword ptr [esi+80h], 2
0x695AA3: jz      short loc_695AF5
0x695AA5: mov     eax, [esi+74h]
0x695AA8: cmp     dword ptr [eax+84h], 0
0x695AAF: jz      short loc_695AF5
0x695AB1: mov     edi, [esi+88h]
0x695AB7: test    edi, edi
0x695AB9: mov     eax, [eax+84h]
0x695ABF: mov     ebx, [eax+0Ch]
0x695AC2: jz      short loc_695ADE
0x695AC4: mov     ecx, edi; this
0x695AC6: call    sub_6B73E0
0x695ACB: push    edi
0x695ACC: call    FormHeapFree
0x695AD1: add     esp, 4
0x695AD4: mov     dword ptr [esi+88h], 0
0x695ADE: push    1; a5
0x695AE0: push    102h; a4
0x695AE5: push    1; a3
0x695AE7: push    ebx; a2
0x695AE8: mov     ecx, esi; this
0x695AEA: call    sub_65AC50
0x695AEF: mov     [esi+88h], eax
0x695AF5: mov     edx, [esi]
0x695AF7: mov     eax, [edx+154h]
0x695AFD: mov     ecx, esi
0x695AFF: call    eax
0x695B01: test    eax, eax
0x695B03: jz      short loc_695B2C
0x695B05: mov     edx, [esi]
0x695B07: fld     dword ptr [esi+84h]
0x695B0D: mov     eax, [edx+154h]
0x695B13: fstp    [esp+1Ch+arg_4]
0x695B17: mov     ecx, esi
0x695B19: call    eax
0x695B1B: fld     [esp+1Ch+arg_4]
0x695B1F: fabs
0x695B21: fstp    [esp+1Ch+arg_4]
0x695B25: fld     [esp+1Ch+arg_4]
0x695B29: fstp    dword ptr [eax+60h]
0x695B2C: mov     ecx, [esi+8Ch]
0x695B32: mov     edx, [esi]
0x695B34: mov     eax, [edx+154h]
0x695B3A: mov     [esp+1Ch+arg_0], ecx
0x695B3E: mov     ecx, esi
0x695B40: mov     dword ptr [esi+8Ch], 0
0x695B4A: call    eax
0x695B4C: test    eax, eax
0x695B4E: jz      loc_695C22
0x695B54: mov     eax, [esi+74h]
0x695B57: cmp     dword ptr [eax+70h], 0
0x695B5B: jz      loc_695C22
0x695B61: push    1Ch; Size
0x695B63: call    FormHeapAlloc
0x695B68: mov     ebx, eax
0x695B6A: add     esp, 4
0x695B6D: mov     [esp+1Ch+arg_4], ebx
0x695B71: test    ebx, ebx
0x695B73: mov     [esp+1Ch+var_4], 0
0x695B7B: jz      short loc_695B9D
0x695B7D: mov     eax, [esi+74h]
0x695B80: mov     eax, [eax+70h]
0x695B83: mov     edx, [esi]
0x695B85: mov     edi, [eax+0Ch]
0x695B88: mov     eax, [edx+154h]
0x695B8E: mov     ecx, esi
0x695B90: call    eax
0x695B92: push    eax
0x695B93: push    edi
0x695B94: mov     ecx, ebx
0x695B96: call    MagicCaster_CastingVFX_constr
0x695B9B: jmp     short loc_695B9F
0x695B9D: xor     eax, eax
0x695B9F: cmp     dword ptr [esi+80h], 2
0x695BA6: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x695BAE: mov     [esi+8Ch], eax
0x695BB4: jnz     short loc_695C22
0x695BB6: test    eax, eax
0x695BB8: jz      short loc_695C22
0x695BBA: mov     edx, [esi]
0x695BBC: mov     eax, [edx+154h]
0x695BC2: mov     ecx, esi
0x695BC4: call    eax
0x695BC6: test    eax, eax
0x695BC8: jz      short loc_695BCF
0x695BCA: mov     eax, [eax+0Ch]
0x695BCD: jmp     short loc_695BD1
0x695BCF: xor     eax, eax
0x695BD1: push    eax
0x695BD2: push    offset stru_B3CAC0
0x695BD7: call    NiRTTI_Cast
0x695BDC: add     esp, 8
0x695BDF: test    eax, eax
0x695BE1: jz      short loc_695C22
0x695BE3: push    offset aSpecialidle_ar; "SpecialIdle_AreaEffect"
0x695BE8: mov     ecx, eax
0x695BEA: call    sub_4715A0
0x695BEF: test    eax, eax
0x695BF1: jz      short loc_695C22
0x695BF3: fld     dword ptr [eax+30h]
0x695BF6: push    ecx
0x695BF7: fmul    qword ptr ds:0A31C70h
0x695BFD: mov     ecx, [esi+8Ch]
0x695C03: fstp    [esp+20h+arg_4]
0x695C07: fld     [esp+20h+arg_4]
0x695C0B: fstp    [esp+20h+var_20]; float
0x695C0E: push    0; char
0x695C10: call    MagicCaster_CastingVFX_ClearSomething???
0x695C15: fld     [esp+1Ch+arg_0]
0x695C19: mov     ecx, [esi+8Ch]
0x695C1F: fstp    dword ptr [ecx+10h]
0x695C22: mov     ecx, [esp+1Ch+var_C]
0x695C26: mov     large fs:0, ecx
0x695C2D: pop     ecx
0x695C2E: pop     edi
0x695C2F: pop     esi
0x695C30: pop     ebx
0x695C31: add     esp, 0Ch
0x695C34: retn    8
