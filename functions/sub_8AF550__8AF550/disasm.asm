0x8AF550: push    0FFFFFFFFh
0x8AF552: push    offset SEH_8C5340
0x8AF557: mov     eax, large fs:0
0x8AF55D: push    eax
0x8AF55E: push    ebx
0x8AF55F: push    esi
0x8AF560: push    edi
0x8AF561: mov     eax, ds:0B30AACh
0x8AF566: xor     eax, esp
0x8AF568: push    eax
0x8AF569: lea     eax, [esp+1Ch+var_C]
0x8AF56D: mov     large fs:0, eax
0x8AF573: mov     edi, ecx
0x8AF575: mov     ebx, [esp+1Ch+arg_0]
0x8AF579: test    ebx, ebx
0x8AF57B: jz      short loc_8AF5EB
0x8AF57D: mov     ecx, ds:0BA7D98h
0x8AF583: mov     eax, [ecx]
0x8AF585: mov     edx, [eax+10h]
0x8AF588: push    24h ; '$'
0x8AF58A: push    10h
0x8AF58C: call    edx
0x8AF58E: mov     word ptr [eax+4], 10h
0x8AF594: mov     [esp+1Ch+arg_0], eax
0x8AF598: fld     dword ptr [ebx+4]
0x8AF59B: push    ecx
0x8AF59C: mov     ecx, eax
0x8AF59E: fstp    [esp+20h+var_20]
0x8AF5A1: mov     [esp+20h+var_4], 0
0x8AF5A9: call    sub_8ED410
0x8AF5AE: mov     esi, eax
0x8AF5B0: mov     eax, [edi]
0x8AF5B2: mov     edx, [eax+4Ch]
0x8AF5B5: push    esi
0x8AF5B6: mov     ecx, edi
0x8AF5B8: mov     [esp+20h+var_4], 0FFFFFFFFh
0x8AF5C0: call    edx
0x8AF5C2: cmp     word ptr [esi+4], 0
0x8AF5C7: jz      short loc_8AF5E1
0x8AF5C9: add     word ptr [esi+6], 0FFFFh
0x8AF5CE: movzx   eax, word ptr [esi+6]
0x8AF5D2: test    ax, ax
0x8AF5D5: jnz     short loc_8AF5E1
0x8AF5D7: mov     eax, [esi]
0x8AF5D9: mov     edx, [eax]
0x8AF5DB: push    1
0x8AF5DD: mov     ecx, esi
0x8AF5DF: call    edx
0x8AF5E1: mov     eax, [edi]
0x8AF5E3: mov     edx, [eax+7Ch]
0x8AF5E6: push    ebx
0x8AF5E7: mov     ecx, edi
0x8AF5E9: call    edx
0x8AF5EB: mov     ecx, [esp+1Ch+var_C]
0x8AF5EF: mov     large fs:0, ecx
0x8AF5F6: pop     ecx
0x8AF5F7: pop     edi
0x8AF5F8: pop     esi
0x8AF5F9: pop     ebx
0x8AF5FA: add     esp, 0Ch
0x8AF5FD: retn    4
