0x6EA430: sub     esp, 54h
0x6EA433: fldz
0x6EA435: push    ebx
0x6EA436: push    esi
0x6EA437: push    edi
0x6EA438: mov     edi, ecx
0x6EA43A: lea     esi, [edi+30h]
0x6EA43D: fst     dword ptr [esi]
0x6EA43F: xor     bl, bl
0x6EA441: fst     dword ptr [esi+4]
0x6EA444: mov     [esp+60h+var_51], 0
0x6EA449: fst     dword ptr [esi+8]
0x6EA44C: fst     dword ptr [esi+0Ch]
0x6EA44F: cmp     [edi+0Dh], bl
0x6EA452: fst     [esp+60h+var_50]
0x6EA456: jbe     loc_6EA64D
0x6EA45C: push    ebp
0x6EA45D: movzx   eax, bl
0x6EA460: lea     ebp, [eax+eax*2]
0x6EA463: mov     eax, [edi+14h]
0x6EA466: add     ebp, ebp
0x6EA468: add     ebp, ebp
0x6EA46A: add     ebp, ebp
0x6EA46C: mov     ecx, [eax+ebp]
0x6EA46F: test    ecx, ecx
0x6EA471: lea     edx, [eax+ebp]
0x6EA474: jz      loc_6EA612
0x6EA47A: fcom    dword ptr [edx+8]
0x6EA47D: fnstsw  ax
0x6EA47F: test    ah, 5
0x6EA482: jp      loc_6EA612
0x6EA488: test    ecx, ecx
0x6EA48A: fld     [esp+64h+arg_0]
0x6EA48E: fstp    [esp+64h+var_4C]
0x6EA492: jz      loc_6EA612
0x6EA498: fcom    dword ptr [edx+8]
0x6EA49B: fnstsw  ax
0x6EA49D: test    ah, 44h
0x6EA4A0: jnp     loc_6EA612
0x6EA4A6: test    byte ptr [edi+0Ch], 1
0x6EA4AA: jz      short loc_6EA4B3
0x6EA4AC: fld     dword ptr [edx+14h]
0x6EA4AF: fstp    [esp+64h+var_4C]
0x6EA4B3: fld     [esp+64h+var_4C]
0x6EA4B7: fld     st
0x6EA4B9: fld     dword ptr ds:0A79F00h
0x6EA4BF: fucompp
0x6EA4C1: fnstsw  ax
0x6EA4C3: test    ah, 44h
0x6EA4C6: jnp     loc_6EA610
0x6EA4CC: mov     edx, [ecx]
0x6EA4CE: fstp    st(1)
0x6EA4D0: mov     edx, [edx+58h]
0x6EA4D3: lea     eax, [esp+64h+var_40]
0x6EA4D7: push    eax
0x6EA4D8: mov     eax, [esp+68h+arg_4]
0x6EA4DC: push    eax
0x6EA4DD: push    ecx
0x6EA4DE: fstp    [esp+70h+var_70]
0x6EA4E1: call    edx
0x6EA4E3: test    al, al
0x6EA4E5: fldz
0x6EA4E7: jz      loc_6EA612
0x6EA4ED: fcom    [esp+64h+var_50]
0x6EA4F1: fnstsw  ax
0x6EA4F3: test    ah, 5
0x6EA4F6: jp      short loc_6EA553
0x6EA4F8: fld     dword ptr [esi+4]
0x6EA4FB: fmul    [esp+64h+var_3C]
0x6EA4FF: fld     dword ptr [esi]
0x6EA501: fmul    [esp+64h+var_40]
0x6EA505: faddp   st(1), st
0x6EA507: fld     dword ptr [esi+8]
0x6EA50A: fmul    [esp+64h+var_38]
0x6EA50E: faddp   st(1), st
0x6EA510: fld     dword ptr [esi+0Ch]
0x6EA513: fmul    [esp+64h+var_34]
0x6EA517: faddp   st(1), st
0x6EA519: fstp    [esp+64h+var_4C]
0x6EA51D: fcomp   [esp+64h+var_4C]
0x6EA521: fnstsw  ax
0x6EA523: test    ah, 41h
0x6EA526: jnz     short loc_6EA555
0x6EA528: lea     eax, [esp+64h+var_30]
0x6EA52C: push    eax
0x6EA52D: lea     ecx, [esp+68h+var_40]
0x6EA531: call    sub_714CC0
0x6EA536: mov     ecx, [eax]
0x6EA538: mov     [esp+64h+var_40], ecx
0x6EA53C: mov     edx, [eax+4]
0x6EA53F: mov     [esp+64h+var_3C], edx
0x6EA543: mov     ecx, [eax+8]
0x6EA546: mov     [esp+64h+var_38], ecx
0x6EA54A: mov     edx, [eax+0Ch]
0x6EA54D: mov     [esp+64h+var_34], edx
0x6EA551: jmp     short loc_6EA555
0x6EA553: fstp    st
0x6EA555: mov     eax, [edi+14h]
0x6EA558: fld     dword ptr [eax+ebp+8]
0x6EA55C: push    ecx
0x6EA55D: lea     ecx, [esp+68h+var_20]
0x6EA561: fstp    [esp+68h+var_68]; float
0x6EA564: push    ecx; int
0x6EA565: lea     ecx, [esp+6Ch+var_40]
0x6EA569: call    sub_72F930
0x6EA56E: fld     [esp+64h+var_50]
0x6EA572: mov     edx, [eax]
0x6EA574: mov     [esp+64h+var_40], edx
0x6EA578: mov     ecx, [eax+4]
0x6EA57B: mov     [esp+64h+var_3C], ecx
0x6EA57F: mov     edx, [eax+8]
0x6EA582: push    ecx
0x6EA583: lea     ecx, [esp+68h+var_10]
0x6EA587: fstp    [esp+68h+var_68]; float
0x6EA58A: mov     [esp+68h+var_38], edx
0x6EA58E: mov     eax, [eax+0Ch]
0x6EA591: push    ecx; int
0x6EA592: mov     ecx, esi
0x6EA594: mov     [esp+6Ch+var_34], eax
0x6EA598: call    sub_72F930
0x6EA59D: mov     edx, [eax]
0x6EA59F: mov     [esi], edx
0x6EA5A1: mov     ecx, [eax+4]
0x6EA5A4: mov     [esi+4], ecx
0x6EA5A7: mov     edx, [eax+8]
0x6EA5AA: mov     [esi+8], edx
0x6EA5AD: mov     eax, [eax+0Ch]
0x6EA5B0: mov     [esi+0Ch], eax
0x6EA5B3: fld     dword ptr [edi+3Ch]
0x6EA5B6: fstp    [esp+64h+var_44]
0x6EA5BA: mov     ecx, esi
0x6EA5BC: fld     dword ptr [edi+38h]
0x6EA5BF: fstp    [esp+64h+var_48]
0x6EA5C3: fld     dword ptr [edi+34h]
0x6EA5C6: fstp    [esp+64h+var_4C]
0x6EA5CA: fld     [esp+64h+var_40]
0x6EA5CE: fadd    dword ptr [esi]
0x6EA5D0: fstp    dword ptr [esi]
0x6EA5D2: fld     [esp+64h+var_3C]
0x6EA5D6: fadd    [esp+64h+var_4C]
0x6EA5DA: fstp    dword ptr [esi+4]
0x6EA5DD: fld     [esp+64h+var_38]
0x6EA5E1: fadd    [esp+64h+var_48]
0x6EA5E5: fstp    dword ptr [esi+8]
0x6EA5E8: fld     [esp+64h+var_34]
0x6EA5EC: fadd    [esp+64h+var_44]
0x6EA5F0: fstp    dword ptr [esi+0Ch]
0x6EA5F3: call    sub_715340
0x6EA5F8: mov     ecx, [edi+14h]
0x6EA5FB: fld     dword ptr [ecx+ebp+8]
0x6EA5FF: mov     [esp+64h+var_51], 1
0x6EA604: fadd    [esp+64h+var_50]
0x6EA608: fstp    [esp+64h+var_50]
0x6EA60C: fldz
0x6EA60E: jmp     short loc_6EA612
0x6EA610: fstp    st
0x6EA612: add     bl, 1
0x6EA615: cmp     bl, [edi+0Dh]
0x6EA618: jb      loc_6EA45D
0x6EA61E: cmp     [esp+64h+var_51], 0
0x6EA623: fstp    st
0x6EA625: pop     ebp
0x6EA626: jz      short loc_6EA64F
0x6EA628: mov     ecx, [esi]
0x6EA62A: mov     eax, [esp+60h+arg_8]
0x6EA62E: mov     [eax], ecx
0x6EA630: mov     edx, [esi+4]
0x6EA633: mov     [eax+4], edx
0x6EA636: mov     ecx, [esi+8]
0x6EA639: mov     [eax+8], ecx
0x6EA63C: mov     edx, [esi+0Ch]
0x6EA63F: pop     edi
0x6EA640: pop     esi
0x6EA641: mov     [eax+0Ch], edx
0x6EA644: mov     al, 1
0x6EA646: pop     ebx
0x6EA647: add     esp, 54h
0x6EA64A: retn    0Ch
0x6EA64D: fstp    st
0x6EA64F: mov     edx, ds:0B3EBA0h
0x6EA655: mov     [esi], edx
0x6EA657: mov     eax, ds:0B3EBA4h
0x6EA65C: mov     [esi+4], eax
0x6EA65F: mov     ecx, ds:0B3EBA8h
0x6EA665: mov     eax, [esp+60h+arg_8]
0x6EA669: mov     [esi+8], ecx
0x6EA66C: mov     edx, ds:0B3EBACh
0x6EA672: mov     [esi+0Ch], edx
0x6EA675: mov     ecx, [esi]
0x6EA677: mov     [eax], ecx
0x6EA679: mov     edx, [esi+4]
0x6EA67C: mov     [eax+4], edx
0x6EA67F: mov     ecx, [esi+8]
0x6EA682: mov     [eax+8], ecx
0x6EA685: mov     edx, [esi+0Ch]
0x6EA688: pop     edi
0x6EA689: pop     esi
0x6EA68A: mov     [eax+0Ch], edx
0x6EA68D: xor     al, al
0x6EA68F: pop     ebx
0x6EA690: add     esp, 54h
0x6EA693: retn    0Ch
