0x6BD860: push    0FFFFFFFFh
0x6BD862: push    offset SEH_6C20D0
0x6BD867: mov     eax, large fs:0
0x6BD86D: push    eax
0x6BD86E: sub     esp, 18h
0x6BD871: push    ebx
0x6BD872: push    ebp
0x6BD873: push    esi
0x6BD874: push    edi
0x6BD875: mov     eax, ds:0B30AACh
0x6BD87A: xor     eax, esp
0x6BD87C: push    eax
0x6BD87D: lea     eax, [esp+38h+var_C]
0x6BD881: mov     large fs:0, eax
0x6BD887: mov     edi, [esp+38h+arg_8]
0x6BD88B: fld     [esp+38h+arg_0]
0x6BD88F: mov     eax, [esp+38h+arg_4]
0x6BD893: mov     edx, [edi]
0x6BD895: mov     ebp, [eax]
0x6BD897: push    24h ; '$'; char
0x6BD899: lea     ecx, [esp+3Ch+var_24]
0x6BD89D: push    ecx; int
0x6BD89E: push    edx; int
0x6BD89F: push    ebp; int
0x6BD8A0: push    ecx
0x6BD8A1: fstp    [esp+4Ch+var_4C]; float
0x6BD8A4: call    sub_6D31B0
0x6BD8A9: add     esp, 14h
0x6BD8AC: test    al, al
0x6BD8AE: jz      loc_6BD9EF
0x6BD8B4: mov     esi, [edi]
0x6BD8B6: add     esi, 1
0x6BD8B9: xor     ecx, ecx
0x6BD8BB: mov     eax, esi
0x6BD8BD: mov     edx, 24h ; '$'
0x6BD8C2: mul     edx
0x6BD8C4: seto    cl
0x6BD8C7: neg     ecx
0x6BD8C9: or      ecx, eax
0x6BD8CB: xor     eax, eax
0x6BD8CD: add     ecx, 4
0x6BD8D0: setb    al
0x6BD8D3: neg     eax
0x6BD8D5: or      eax, ecx
0x6BD8D7: push    eax; Size
0x6BD8D8: call    FormHeapAlloc
0x6BD8DD: add     esp, 4
0x6BD8E0: mov     [esp+38h+var_20], eax
0x6BD8E4: test    eax, eax
0x6BD8E6: mov     [esp+38h+var_4], 0
0x6BD8EE: jz      short loc_6BD90C
0x6BD8F0: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6BD8F5: push    offset sub_6C0AD0; a4
0x6BD8FA: push    esi; size
0x6BD8FB: lea     ebx, [eax+4]
0x6BD8FE: push    24h ; '$'; a2
0x6BD900: push    ebx; a1
0x6BD901: mov     [eax], esi
0x6BD903: call    ArrayConstructor
0x6BD908: mov     esi, ebx
0x6BD90A: jmp     short loc_6BD90E
0x6BD90C: xor     esi, esi
0x6BD90E: mov     eax, [esp+38h+var_24]
0x6BD912: lea     ecx, [eax+eax*8]
0x6BD915: add     ecx, ecx
0x6BD917: add     ecx, ecx
0x6BD919: push    ecx; Size
0x6BD91A: push    ebp; Src
0x6BD91B: push    esi; Dst
0x6BD91C: mov     [esp+44h+var_4], 0FFFFFFFFh
0x6BD924: call    _memcpy
0x6BD929: mov     ecx, [edi]
0x6BD92B: mov     edx, [esp+44h+var_24]
0x6BD92F: add     esp, 0Ch
0x6BD932: cmp     ecx, edx
0x6BD934: jbe     short loc_6BD958
0x6BD936: sub     ecx, edx
0x6BD938: lea     eax, [edx+edx*8]
0x6BD93B: lea     edx, [ecx+ecx*8]
0x6BD93E: add     edx, edx
0x6BD940: add     eax, eax
0x6BD942: add     eax, eax
0x6BD944: add     edx, edx
0x6BD946: push    edx; Size
0x6BD947: lea     ecx, [eax+ebp]
0x6BD94A: push    ecx; Src
0x6BD94B: lea     edx, [eax+esi+24h]
0x6BD94F: push    edx; Dst
0x6BD950: call    _memcpy
0x6BD955: add     esp, 0Ch
0x6BD958: mov     eax, [edi]
0x6BD95A: fld     [esp+38h+arg_0]
0x6BD95E: push    24h ; '$'; char
0x6BD960: push    eax; int
0x6BD961: push    2; int
0x6BD963: push    ebp; int
0x6BD964: push    ecx
0x6BD965: lea     ecx, [esp+4Ch+var_1C]
0x6BD969: fstp    [esp+4Ch+var_4C]; float
0x6BD96C: push    ecx; int
0x6BD96D: call    sub_6BD1F0
0x6BD972: fld     [esp+50h+arg_0]
0x6BD976: mov     eax, [esp+50h+var_24]
0x6BD97A: lea     edx, [eax+eax*8]
0x6BD97D: lea     eax, [esi+edx*4]
0x6BD980: fstp    dword ptr [eax]
0x6BD982: mov     ecx, [esp+50h+var_1C]
0x6BD986: mov     [eax+4], ecx
0x6BD989: mov     edx, [esp+50h+var_18]
0x6BD98D: mov     [eax+8], edx
0x6BD990: mov     ecx, [esp+50h+var_14]
0x6BD994: mov     [eax+0Ch], ecx
0x6BD997: mov     edx, [esp+50h+var_10]
0x6BD99B: mov     [eax+10h], edx
0x6BD99E: add     dword ptr [edi], 1
0x6BD9A1: add     esp, 18h
0x6BD9A4: test    ebp, ebp
0x6BD9A6: jz      short loc_6BD9C5
0x6BD9A8: mov     eax, [ebp-4]
0x6BD9AB: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6BD9B0: lea     ebx, [ebp-4]
0x6BD9B3: push    eax; int
0x6BD9B4: push    24h ; '$'; unsigned int
0x6BD9B6: push    ebp; void *
0x6BD9B7: call    $LN21
0x6BD9BC: push    ebx
0x6BD9BD: call    FormHeapFree
0x6BD9C2: add     esp, 4
0x6BD9C5: mov     ecx, [esp+38h+arg_4]
0x6BD9C9: mov     [ecx], esi
0x6BD9CB: mov     edx, [edi]
0x6BD9CD: push    24h ; '$'
0x6BD9CF: push    edx
0x6BD9D0: push    esi
0x6BD9D1: call    sub_6BD6B0
0x6BD9D6: add     esp, 0Ch
0x6BD9D9: mov     al, 1
0x6BD9DB: mov     ecx, [esp+38h+var_C]
0x6BD9DF: mov     large fs:0, ecx
0x6BD9E6: pop     ecx
0x6BD9E7: pop     edi
0x6BD9E8: pop     esi
0x6BD9E9: pop     ebp
0x6BD9EA: pop     ebx
0x6BD9EB: add     esp, 24h
0x6BD9EE: retn
0x6BD9EF: xor     al, al
0x6BD9F1: mov     ecx, [esp+38h+var_C]
0x6BD9F5: mov     large fs:0, ecx
0x6BD9FC: pop     ecx
0x6BD9FD: pop     edi
0x6BD9FE: pop     esi
0x6BD9FF: pop     ebp
0x6BDA00: pop     ebx
0x6BDA01: add     esp, 24h
0x6BDA04: retn
