0x725270: push    ebp
0x725271: mov     ebp, esp
0x725273: and     esp, 0FFFFFFC0h
0x725276: sub     esp, 34h
0x725279: mov     eax, ds:0B3FD78h
0x72527E: push    ebx
0x72527F: push    esi
0x725280: push    edi
0x725281: mov     edi, ecx
0x725283: push    eax; ArgList
0x725284: mov     [esp+44h+var_4], edi
0x725288: call    TESOutput_PrintString
0x72528D: mov     esi, [ebp+arg_0]
0x725290: movzx   ebx, word ptr [esi+0Ah]
0x725294: movzx   ecx, word ptr [esi+8]
0x725298: add     esp, 4
0x72529B: cmp     ebx, ecx
0x72529D: mov     [esp+40h+var_8], eax
0x7252A1: jb      short loc_7252B1
0x7252A3: movzx   edx, word ptr [esi+0Eh]
0x7252A7: add     edx, ebx
0x7252A9: push    edx
0x7252AA: mov     ecx, esi
0x7252AC: call    NiTArray_SetSize
0x7252B1: lea     eax, [esp+40h+var_8]
0x7252B5: push    eax
0x7252B6: push    ebx
0x7252B7: mov     ecx, esi
0x7252B9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7252BE: push    offset aM_kcenter; "m_kCenter"
0x7252C3: lea     ecx, [edi+8]
0x7252C6: call    sub_707280
0x7252CB: movzx   ebx, word ptr [esi+0Ah]
0x7252CF: movzx   ecx, word ptr [esi+8]
0x7252D3: cmp     ebx, ecx
0x7252D5: mov     [esp+40h+var_8], eax
0x7252D9: jb      short loc_7252E9
0x7252DB: movzx   edx, word ptr [esi+0Eh]
0x7252DF: add     edx, ebx
0x7252E1: push    edx
0x7252E2: mov     ecx, esi
0x7252E4: call    NiTArray_SetSize
0x7252E9: lea     eax, [esp+40h+var_8]
0x7252ED: push    eax
0x7252EE: push    ebx
0x7252EF: mov     ecx, esi
0x7252F1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7252F6: push    offset aM_kworldcenter; "m_kWorldCenter"
0x7252FB: lea     ecx, [edi+14h]
0x7252FE: call    sub_707280
0x725303: movzx   ebx, word ptr [esi+0Ah]
0x725307: movzx   ecx, word ptr [esi+8]
0x72530B: cmp     ebx, ecx
0x72530D: mov     [esp+40h+var_8], eax
0x725311: jb      short loc_725321
0x725313: movzx   edx, word ptr [esi+0Eh]
0x725317: add     edx, ebx
0x725319: push    edx
0x72531A: mov     ecx, esi
0x72531C: call    NiTArray_SetSize
0x725321: lea     eax, [esp+40h+var_8]
0x725325: push    eax
0x725326: push    ebx
0x725327: mov     ecx, esi
0x725329: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72532E: xor     eax, eax
0x725330: cmp     [edi+20h], eax
0x725333: mov     dword ptr [esp+40h+ArgList], eax
0x725337: jbe     loc_7253FD
0x72533D: mov     [esp+40h+var_8], eax
0x725341: jmp     short loc_725345
0x725343: mov     edi, edx
0x725345: push    80h ; '€'; Size
0x72534A: call    FormHeapAlloc
0x72534F: mov     ecx, [edi+24h]
0x725352: mov     edx, [esp+44h+var_8]
0x725356: fld     dword ptr [edx+ecx+4]
0x72535A: mov     ebx, eax
0x72535C: lea     eax, [edx+ecx]
0x72535F: sub     esp, 0Ch
0x725362: fstp    [esp+50h+var_48]
0x725366: fld     dword ptr [eax]
0x725368: mov     eax, dword ptr [esp+50h+ArgList]
0x72536C: fstp    [esp+50h+var_50]
0x72536F: push    eax; ArgList
0x725370: push    offset aRangeDGG; "range[%d] = %g   %g"
0x725375: push    80h ; '€'; SizeInBytes
0x72537A: push    ebx; DstBuf
0x72537B: call    sub_6C5D40
0x725380: movzx   edi, word ptr [esi+0Ah]
0x725384: movzx   ecx, word ptr [esi+8]
0x725388: add     esp, 20h
0x72538B: cmp     edi, ecx
0x72538D: jb      short loc_72539D
0x72538F: movzx   edx, word ptr [esi+0Eh]
0x725393: add     edx, edi
0x725395: push    edx
0x725396: mov     ecx, esi
0x725398: call    NiTArray_SetSize
0x72539D: movzx   eax, word ptr [esi+0Ah]
0x7253A1: cmp     edi, eax
0x7253A3: jb      short loc_7253B7
0x7253A5: test    ebx, ebx
0x7253A7: lea     ecx, [edi+1]
0x7253AA: mov     [esi+0Ah], cx
0x7253AE: jz      short loc_7253DA
0x7253B0: add     word ptr [esi+0Ch], 1
0x7253B5: jmp     short loc_7253DA
0x7253B7: test    ebx, ebx
0x7253B9: jz      short loc_7253CB
0x7253BB: mov     edx, [esi+4]
0x7253BE: cmp     dword ptr [edx+edi*4], 0
0x7253C2: jnz     short loc_7253DA
0x7253C4: add     word ptr [esi+0Ch], 1
0x7253C9: jmp     short loc_7253DA
0x7253CB: mov     eax, [esi+4]
0x7253CE: cmp     dword ptr [eax+edi*4], 0
0x7253D2: jz      short loc_7253DA
0x7253D4: add     word ptr [esi+0Ch], 0FFFFh
0x7253DA: mov     eax, dword ptr [esp+40h+ArgList]
0x7253DE: mov     ecx, [esi+4]
0x7253E1: mov     edx, [esp+40h+var_4]
0x7253E5: add     [esp+40h+var_8], 10h
0x7253EA: add     eax, 1
0x7253ED: mov     [ecx+edi*4], ebx
0x7253F0: cmp     eax, [edx+20h]
0x7253F3: mov     dword ptr [esp+40h+ArgList], eax
0x7253F7: jb      loc_725343
0x7253FD: pop     edi
0x7253FE: pop     esi
0x7253FF: pop     ebx
0x725400: mov     esp, ebp
0x725402: pop     ebp
0x725403: retn    4
