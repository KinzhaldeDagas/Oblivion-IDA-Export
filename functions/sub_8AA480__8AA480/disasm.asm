0x8AA480: push    0FFFFFFFFh
0x8AA482: push    offset SEH_8AA480
0x8AA487: mov     eax, large fs:0
0x8AA48D: push    eax
0x8AA48E: sub     esp, 1Ch
0x8AA491: push    ebx
0x8AA492: push    ebp
0x8AA493: push    esi
0x8AA494: push    edi
0x8AA495: mov     eax, ds:0B30AACh
0x8AA49A: xor     eax, esp
0x8AA49C: push    eax
0x8AA49D: lea     eax, [esp+3Ch+var_C]
0x8AA4A1: mov     large fs:0, eax
0x8AA4A7: mov     esi, ecx
0x8AA4A9: mov     edi, [esp+3Ch+arg_0]
0x8AA4AD: cmp     edi, [esi+8]
0x8AA4B0: jz      loc_8AA63E
0x8AA4B6: cmp     edi, [esi+0Ch]
0x8AA4B9: fld     dword ptr ds:0A30634h
0x8AA4BF: jnb     loc_8AA555
0x8AA4C5: fldz
0x8AA4C7: lea     edx, [edi+edi*2]
0x8AA4CA: fdiv    qword ptr ds:0A309F0h
0x8AA4D0: add     edx, edx
0x8AA4D2: add     edx, edx
0x8AA4D4: mov     ebx, edi
0x8AA4D6: or      ebp, 0FFFFFFFFh
0x8AA4D9: fstp    [esp+3Ch+arg_0]
0x8AA4DD: fld     [esp+3Ch+arg_0]
0x8AA4E1: mov     eax, [esi+4]
0x8AA4E4: fst     [esp+3Ch+var_10]
0x8AA4E8: lea     ecx, [edx+eax]
0x8AA4EB: fld     st(1)
0x8AA4ED: fcomp   dword ptr [ecx]
0x8AA4EF: fnstsw  ax
0x8AA4F1: test    ah, 44h
0x8AA4F4: jp      short loc_8AA51A
0x8AA4F6: fld     dword ptr [ecx+4]
0x8AA4F9: fld     [esp+3Ch+var_10]
0x8AA4FD: fld     st
0x8AA4FF: fucomp  st(2)
0x8AA501: fnstsw  ax
0x8AA503: fstp    st(1)
0x8AA505: test    ah, 44h
0x8AA508: jp      short loc_8AA518
0x8AA50A: fld     dword ptr [ecx+8]
0x8AA50D: fucompp
0x8AA50F: fnstsw  ax
0x8AA511: test    ah, 44h
0x8AA514: jnp     short loc_8AA545
0x8AA516: jmp     short loc_8AA51A
0x8AA518: fstp    st
0x8AA51A: fxch    st(1)
0x8AA51C: fst     [esp+3Ch+var_24]
0x8AA520: mov     eax, [esp+3Ch+var_24]
0x8AA524: fxch    st(1)
0x8AA526: mov     [ecx], eax
0x8AA528: fst     [esp+3Ch+var_1C]
0x8AA52C: fld     [esp+3Ch+var_1C]
0x8AA530: fstp    [esp+3Ch+var_20]
0x8AA534: mov     eax, [esp+3Ch+var_20]
0x8AA538: mov     [ecx+4], eax
0x8AA53B: mov     eax, [esp+3Ch+var_1C]
0x8AA53F: mov     [ecx+8], eax
0x8AA542: add     [esi+10h], ebp
0x8AA545: add     ebx, 1
0x8AA548: add     edx, 0Ch
0x8AA54B: cmp     ebx, [esi+0Ch]
0x8AA54E: jb      short loc_8AA4E1
0x8AA550: fstp    st
0x8AA552: mov     [esi+0Ch], edi
0x8AA555: test    edi, edi
0x8AA557: fstp    st
0x8AA559: mov     ebp, [esi+4]
0x8AA55C: mov     [esp+3Ch+arg_0], ebp
0x8AA560: mov     [esi+8], edi
0x8AA563: jbe     loc_8AA62E
0x8AA569: xor     ecx, ecx
0x8AA56B: mov     eax, edi
0x8AA56D: mov     edx, 0Ch
0x8AA572: mul     edx
0x8AA574: seto    cl
0x8AA577: neg     ecx
0x8AA579: or      ecx, eax
0x8AA57B: push    ecx; Size
0x8AA57C: call    FormHeapAlloc
0x8AA581: mov     ebx, eax
0x8AA583: add     esp, 4
0x8AA586: mov     [esp+3Ch+var_28], ebx
0x8AA58A: test    ebx, ebx
0x8AA58C: mov     [esp+3Ch+var_4], 0
0x8AA594: jz      short loc_8AA5A6
0x8AA596: push    offset sub_8AA460
0x8AA59B: push    edi
0x8AA59C: push    0Ch
0x8AA59E: push    ebx
0x8AA59F: call    sub_401080
0x8AA5A4: jmp     short loc_8AA5A8
0x8AA5A6: xor     ebx, ebx
0x8AA5A8: xor     edx, edx
0x8AA5AA: cmp     [esi+0Ch], edx
0x8AA5AD: mov     [esi+4], ebx
0x8AA5B0: jbe     short loc_8AA5D7
0x8AA5B2: xor     ecx, ecx
0x8AA5B4: mov     eax, [esi+4]
0x8AA5B7: mov     edi, [ecx+ebp]
0x8AA5BA: add     eax, ecx
0x8AA5BC: mov     [eax], edi
0x8AA5BE: mov     edi, [ecx+ebp+4]
0x8AA5C2: mov     [eax+4], edi
0x8AA5C5: mov     edi, [ecx+ebp+8]
0x8AA5C9: add     edx, 1
0x8AA5CC: mov     [eax+8], edi
0x8AA5CF: add     ecx, 0Ch
0x8AA5D2: cmp     edx, [esi+0Ch]
0x8AA5D5: jb      short loc_8AA5B4
0x8AA5D7: mov     ecx, [esi+0Ch]
0x8AA5DA: cmp     ecx, [esi+8]
0x8AA5DD: jnb     short loc_8AA635
0x8AA5DF: fld     dword ptr ds:0A30634h
0x8AA5E5: lea     edx, [ecx+ecx*2]
0x8AA5E8: fstp    [esp+3Ch+var_24]
0x8AA5EC: mov     ebp, [esp+3Ch+var_24]
0x8AA5F0: fldz
0x8AA5F2: add     edx, edx
0x8AA5F4: fdiv    qword ptr ds:0A309F0h
0x8AA5FA: add     edx, edx
0x8AA5FC: fstp    [esp+3Ch+var_1C]
0x8AA600: fld     [esp+3Ch+var_1C]
0x8AA604: mov     edi, [esp+3Ch+var_1C]
0x8AA608: fstp    [esp+3Ch+var_20]
0x8AA60C: mov     ebx, [esp+3Ch+var_20]
0x8AA610: mov     eax, [esi+4]
0x8AA613: add     eax, edx
0x8AA615: mov     [eax], ebp
0x8AA617: mov     [eax+4], ebx
0x8AA61A: add     ecx, 1
0x8AA61D: mov     [eax+8], edi
0x8AA620: add     edx, 0Ch
0x8AA623: cmp     ecx, [esi+8]
0x8AA626: jb      short loc_8AA610
0x8AA628: mov     ebp, [esp+3Ch+arg_0]
0x8AA62C: jmp     short loc_8AA635
0x8AA62E: mov     dword ptr [esi+4], 0
0x8AA635: push    ebp
0x8AA636: call    FormHeapFree
0x8AA63B: add     esp, 4
0x8AA63E: mov     ecx, [esp+3Ch+var_C]
0x8AA642: mov     large fs:0, ecx
0x8AA649: pop     ecx
0x8AA64A: pop     edi
0x8AA64B: pop     esi
0x8AA64C: pop     ebp
0x8AA64D: pop     ebx
0x8AA64E: add     esp, 28h
0x8AA651: retn    4
