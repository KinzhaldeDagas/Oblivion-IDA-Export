0x4CE540: push    ecx
0x4CE541: push    esi
0x4CE542: mov     esi, [esp+8+arg_8]
0x4CE546: mov     eax, [esi]
0x4CE548: test    eax, eax
0x4CE54A: push    edi
0x4CE54B: mov     [esp+0Ch+var_4], 0
0x4CE553: jnz     short loc_4CE5AA
0x4CE555: test    byte ptr [ecx+24h], 1
0x4CE559: jnz     short loc_4CE55E
0x4CE55B: mov     eax, [ecx+50h]
0x4CE55E: mov     ecx, [esp+0Ch+arg_0]
0x4CE562: push    0
0x4CE564: push    eax
0x4CE565: mov     eax, [esp+14h+arg_4]
0x4CE569: push    eax
0x4CE56A: push    ecx
0x4CE56B: mov     ecx, ds:0B33A98h
0x4CE571: call    sub_447740
0x4CE576: mov     edi, eax
0x4CE578: test    edi, edi
0x4CE57A: jz      loc_4CE603
0x4CE580: push    esi
0x4CE581: lea     edx, [esp+10h+var_4]
0x4CE585: push    edx
0x4CE586: lea     ecx, [edi+28h]
0x4CE589: call    sub_41F9F0
0x4CE58E: cmp     [esp+0Ch+var_4], 0
0x4CE593: jnz     short loc_4CE5A4
0x4CE595: push    esi
0x4CE596: lea     eax, [esp+10h+var_4]
0x4CE59A: push    eax
0x4CE59B: push    edi
0x4CE59C: call    TESObjectCELL__CreateCanopyShadowMaskForCell
0x4CE5A1: add     esp, 0Ch
0x4CE5A4: mov     eax, [esi]
0x4CE5A6: test    eax, eax
0x4CE5A8: jz      short loc_4CE603
0x4CE5AA: cmp     dword ptr [eax+4], 0
0x4CE5AE: jnz     short loc_4CE5E3
0x4CE5B0: push    3
0x4CE5B2: call    nullsub_returnTrue_0arg
0x4CE5B7: mov     ecx, [esp+10h+var_4]
0x4CE5BB: mov     ecx, [ecx+24h]
0x4CE5BE: mov     edx, [ecx]
0x4CE5C0: mov     eax, [edx+14h]
0x4CE5C3: add     esp, 4
0x4CE5C6: call    eax
0x4CE5C8: mov     edx, [esi]
0x4CE5CA: mov     ecx, [eax]
0x4CE5CC: push    0
0x4CE5CE: push    0
0x4CE5D0: push    edx
0x4CE5D1: push    0
0x4CE5D3: push    eax
0x4CE5D4: mov     eax, [ecx+4Ch]
0x4CE5D7: call    eax
0x4CE5D9: push    2
0x4CE5DB: call    nullsub_returnTrue_0arg
0x4CE5E0: add     esp, 4
0x4CE5E3: mov     ecx, [esi]
0x4CE5E5: mov     eax, [ecx+4]
0x4CE5E8: mov     ecx, [esp+0Ch+arg_C]
0x4CE5EC: cmp     byte ptr [eax+ecx], 0
0x4CE5F0: jz      short loc_4CE5FC
0x4CE5F2: pop     edi
0x4CE5F3: mov     byte ptr [eax+ecx], 0FFh
0x4CE5F7: pop     esi
0x4CE5F8: pop     ecx
0x4CE5F9: retn    14h
0x4CE5FC: mov     dl, [esp+0Ch+arg_10]
0x4CE600: mov     [eax+ecx], dl
0x4CE603: pop     edi
0x4CE604: pop     esi
0x4CE605: pop     ecx
0x4CE606: retn    14h
