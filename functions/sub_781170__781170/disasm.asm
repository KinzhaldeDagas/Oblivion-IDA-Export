0x781170: sub     esp, 11Ch
0x781176: mov     eax, ds:0B30AACh
0x78117B: xor     eax, esp
0x78117D: mov     [esp+11Ch+var_4], eax
0x781184: mov     eax, [esp+11Ch+arg_8]
0x78118B: push    ebx
0x78118C: mov     ebx, dword ptr [esp+120h+ArgList]
0x781193: test    ebx, ebx
0x781195: push    ebp
0x781196: mov     ebp, dword ptr [esp+124h+arg_4]
0x78119D: push    esi
0x78119E: mov     esi, [esp+128h+arg_C]
0x7811A5: push    edi; ArgList
0x7811A6: mov     edi, [esp+12Ch+arg_10]
0x7811AD: mov     [esp+12Ch+var_10C], ecx
0x7811B1: mov     ecx, [esp+12Ch+arg_14]
0x7811B8: mov     dword ptr [esi], 0
0x7811BE: mov     [esp+12Ch+Src], eax
0x7811C2: mov     [esp+12Ch+var_110], ecx
0x7811C6: mov     dword ptr [edi], 0
0x7811CC: jz      loc_781322
0x7811D2: cmp     byte ptr [ebx], 0
0x7811D5: jz      loc_781322
0x7811DB: push    104h
0x7811E0: lea     edx, [esp+130h+var_108]
0x7811E4: push    edx
0x7811E5: push    ebx
0x7811E6: call    sub_77EC60
0x7811EB: add     esp, 0Ch
0x7811EE: test    al, al
0x7811F0: jnz     short loc_781209
0x7811F2: push    ebx; ArgList
0x7811F3: push    offset aFailedToFind_2; "Failed to find shader program file %s\n"
0x7811F8: push    0; int
0x7811FA: push    1; int
0x7811FC: call    sub_738460
0x781201: add     esp, 10h
0x781204: jmp     loc_781333
0x781209: mov     eax, [esp+12Ch+var_110]
0x78120D: push    eax
0x78120E: mov     eax, [esp+130h+var_10C]
0x781212: lea     ecx, [esp+130h+var_11C]
0x781216: push    ecx
0x781217: mov     ecx, [eax+4]
0x78121A: or      ecx, ds:0B428BCh
0x781220: lea     edx, [esp+134h+var_118]
0x781224: push    edx
0x781225: mov     edx, [esp+138h+Src]
0x781229: push    ecx
0x78122A: push    edx
0x78122B: push    ebp
0x78122C: push    0
0x78122E: push    0
0x781230: lea     eax, [esp+14Ch+var_108]
0x781234: push    eax
0x781235: call    D3DXCompileShaderFromFileA_0
0x78123A: test    eax, eax
0x78123C: jge     loc_7812CE
0x781242: mov     eax, [esp+12Ch+var_11C]
0x781246: xor     esi, esi
0x781248: test    eax, eax
0x78124A: jz      short loc_7812A0
0x78124C: mov     ecx, [eax]
0x78124E: mov     edx, [ecx+0Ch]
0x781251: push    eax
0x781252: call    edx
0x781254: test    eax, eax
0x781256: mov     [esp+12Ch+Src], eax
0x78125A: jz      short loc_781292
0x78125C: mov     eax, [esp+12Ch+var_11C]
0x781260: mov     ecx, [eax]
0x781262: mov     edx, [ecx+10h]
0x781265: push    eax
0x781266: call    edx
0x781268: mov     edi, eax
0x78126A: push    edi; Size
0x78126B: call    FormHeapAlloc
0x781270: mov     esi, eax
0x781272: mov     eax, [esp+130h+Src]
0x781276: push    eax; Src
0x781277: push    edi; SizeInBytes
0x781278: push    esi; Dst
0x781279: call    sub_434900
0x78127E: push    esi
0x78127F: push    ebx
0x781280: push    ebp; ArgList
0x781281: push    offset aFailedToCompil; "Failed to compile shader %s in file %s"...
0x781286: push    0; int
0x781288: push    1; int
0x78128A: call    sub_738460
0x78128F: add     esp, 28h
0x781292: mov     eax, [esp+12Ch+var_11C]
0x781296: mov     ecx, [eax]
0x781298: mov     edx, [ecx+8]
0x78129B: push    eax
0x78129C: call    edx
0x78129E: jmp     short loc_7812B3
0x7812A0: push    ebx
0x7812A1: push    ebp; ArgList
0x7812A2: push    offset aFailedToComp_0; "Failed to compile shader %s in file %s"...
0x7812A7: push    0; int
0x7812A9: push    1; int
0x7812AB: call    sub_738460
0x7812B0: add     esp, 14h
0x7812B3: push    esi
0x7812B4: call    FormHeapFree
0x7812B9: mov     eax, [esp+130h+var_118]
0x7812BD: add     esp, 4
0x7812C0: test    eax, eax
0x7812C2: jz      short loc_781333
0x7812C4: mov     ecx, [eax]
0x7812C6: mov     edx, [ecx+8]
0x7812C9: push    eax
0x7812CA: call    edx
0x7812CC: jmp     short loc_781333
0x7812CE: mov     eax, [esp+12Ch+var_118]
0x7812D2: mov     ecx, [eax]
0x7812D4: mov     edx, [ecx+10h]
0x7812D7: push    eax
0x7812D8: call    edx
0x7812DA: push    eax; Size
0x7812DB: mov     [edi], eax
0x7812DD: call    FormHeapAlloc
0x7812E2: mov     [esi], eax
0x7812E4: mov     eax, [esp+130h+var_118]
0x7812E8: mov     ecx, [eax]
0x7812EA: mov     edx, [ecx+0Ch]
0x7812ED: mov     edi, [edi]
0x7812EF: add     esp, 4
0x7812F2: push    eax
0x7812F3: call    edx
0x7812F5: push    edi; Size
0x7812F6: push    eax; Src
0x7812F7: mov     eax, [esi]
0x7812F9: push    eax; Dst
0x7812FA: call    _memcpy
0x7812FF: mov     eax, [esp+138h+var_118]
0x781303: mov     ecx, [eax]
0x781305: mov     edx, [ecx+8]
0x781308: add     esp, 0Ch
0x78130B: push    eax
0x78130C: call    edx
0x78130E: mov     eax, [esp+12Ch+var_11C]
0x781312: test    eax, eax
0x781314: jz      short loc_78131E
0x781316: mov     ecx, [eax]
0x781318: mov     edx, [ecx+8]
0x78131B: push    eax
0x78131C: call    edx
0x78131E: mov     al, 1
0x781320: jmp     short loc_781335
0x781322: push    offset aInvalidShaderF; "Invalid shader file name\n"
0x781327: push    0; int
0x781329: push    1; int
0x78132B: call    sub_738460
0x781330: add     esp, 0Ch
0x781333: xor     al, al
0x781335: mov     ecx, [esp+12Ch+var_4]
0x78133C: pop     edi
0x78133D: pop     esi
0x78133E: pop     ebp
0x78133F: pop     ebx
0x781340: xor     ecx, esp
0x781342: call    @__security_check_cookie@4; __security_check_cookie(x)
0x781347: add     esp, 11Ch
0x78134D: retn    18h
