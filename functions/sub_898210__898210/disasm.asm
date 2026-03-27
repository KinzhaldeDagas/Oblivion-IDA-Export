0x898210: sub     esp, 28h
0x898213: mov     eax, ds:0B30AACh
0x898218: xor     eax, esp
0x89821A: mov     [esp+28h+var_4], eax
0x89821E: push    ebx
0x89821F: push    esi
0x898220: mov     esi, [esp+30h+arg_0]
0x898224: push    edi
0x898225: push    esi
0x898226: mov     edi, ecx
0x898228: call    sub_711E60
0x89822D: mov     eax, ds:0BA7B80h
0x898232: push    eax; ArgList
0x898233: call    TESOutput_PrintString
0x898238: movzx   ebx, word ptr [esi+0Ah]
0x89823C: movzx   ecx, word ptr [esi+8]
0x898240: add     esp, 4
0x898243: cmp     ebx, ecx
0x898245: mov     dword ptr [esp+34h+var_28], eax
0x898249: jb      short loc_898259
0x89824B: movzx   edx, word ptr [esi+0Eh]
0x89824F: add     edx, ebx
0x898251: push    edx
0x898252: mov     ecx, esi
0x898254: call    NiTArray_SetSize
0x898259: lea     eax, [esp+34h+var_28]
0x89825D: push    eax
0x89825E: push    ebx
0x89825F: mov     ecx, esi
0x898261: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x898266: mov     ecx, [edi+10h]
0x898269: push    ecx
0x89826A: lea     edx, [esp+38h+var_24]
0x89826E: push    offset a0x8x; "0x%8X"
0x898273: push    edx
0x898274: call    __sprintf
0x898279: lea     eax, [esp+40h+var_24]
0x89827D: push    eax; int
0x89827E: push    offset aBhkworldobject; "bhkWorldObject"
0x898283: call    TESOutput_PrintLabeledString
0x898288: movzx   ebx, word ptr [esi+0Ah]
0x89828C: movzx   ecx, word ptr [esi+8]
0x898290: add     esp, 14h
0x898293: cmp     ebx, ecx
0x898295: mov     dword ptr [esp+34h+var_28], eax
0x898299: jb      short loc_8982A9
0x89829B: movzx   edx, word ptr [esi+0Eh]
0x89829F: add     edx, ebx
0x8982A1: push    edx
0x8982A2: mov     ecx, esi
0x8982A4: call    NiTArray_SetSize
0x8982A9: lea     eax, [esp+34h+var_28]
0x8982AD: push    eax
0x8982AE: push    ebx
0x8982AF: mov     ecx, esi
0x8982B1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8982B6: mov     cl, [edi+0Ch]
0x8982B9: and     cl, 1
0x8982BC: mov     [esp+34h+var_28], cl
0x8982C0: mov     edx, dword ptr [esp+34h+var_28]
0x8982C4: push    edx; char
0x8982C5: push    offset aBactive; "bActive"
0x8982CA: call    TESOutput_PrintLabeledBool
0x8982CF: movzx   ebx, word ptr [esi+0Ah]
0x8982D3: mov     dword ptr [esp+3Ch+var_28], eax
0x8982D7: movzx   eax, word ptr [esi+8]
0x8982DB: add     esp, 8
0x8982DE: cmp     ebx, eax
0x8982E0: jb      short loc_8982F0
0x8982E2: movzx   ecx, word ptr [esi+0Eh]
0x8982E6: add     ecx, ebx
0x8982E8: push    ecx
0x8982E9: mov     ecx, esi
0x8982EB: call    NiTArray_SetSize
0x8982F0: lea     edx, [esp+34h+var_28]
0x8982F4: push    edx
0x8982F5: push    ebx
0x8982F6: mov     ecx, esi
0x8982F8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8982FD: mov     al, [edi+0Ch]
0x898300: shr     al, 6
0x898303: and     al, 1
0x898305: mov     [esp+34h+var_28], al
0x898309: mov     ecx, dword ptr [esp+34h+var_28]
0x89830D: push    ecx; char
0x89830E: push    offset aBreset; "bReset"
0x898313: call    TESOutput_PrintLabeledBool
0x898318: movzx   ebx, word ptr [esi+0Ah]
0x89831C: movzx   edx, word ptr [esi+8]
0x898320: add     esp, 8
0x898323: cmp     ebx, edx
0x898325: mov     dword ptr [esp+34h+var_28], eax
0x898329: jb      short loc_898339
0x89832B: movzx   eax, word ptr [esi+0Eh]
0x89832F: add     eax, ebx
0x898331: push    eax
0x898332: mov     ecx, esi
0x898334: call    NiTArray_SetSize
0x898339: lea     ecx, [esp+34h+var_28]
0x89833D: push    ecx
0x89833E: push    ebx
0x89833F: mov     ecx, esi
0x898341: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x898346: mov     dl, [edi+0Ch]
0x898349: shr     dl, 2
0x89834C: and     dl, 1
0x89834F: mov     [esp+34h+var_28], dl
0x898353: mov     eax, dword ptr [esp+34h+var_28]
0x898357: push    eax; char
0x898358: push    offset aBnotify; "bNotify"
0x89835D: call    TESOutput_PrintLabeledBool
0x898362: movzx   ebx, word ptr [esi+0Ah]
0x898366: movzx   ecx, word ptr [esi+8]
0x89836A: add     esp, 8
0x89836D: cmp     ebx, ecx
0x89836F: mov     dword ptr [esp+34h+var_28], eax
0x898373: jb      short loc_898383
0x898375: movzx   edx, word ptr [esi+0Eh]
0x898379: add     edx, ebx
0x89837B: push    edx
0x89837C: mov     ecx, esi
0x89837E: call    NiTArray_SetSize
0x898383: lea     eax, [esp+34h+var_28]
0x898387: push    eax
0x898388: push    ebx
0x898389: mov     ecx, esi
0x89838B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x898390: mov     cl, [edi+0Ch]
0x898393: shr     cl, 3
0x898396: and     cl, 1
0x898399: mov     [esp+34h+var_28], cl
0x89839D: mov     edx, dword ptr [esp+34h+var_28]
0x8983A1: push    edx; char
0x8983A2: push    offset aBsetlocal; "bSetLocal"
0x8983A7: call    TESOutput_PrintLabeledBool
0x8983AC: movzx   ebx, word ptr [esi+0Ah]
0x8983B0: mov     dword ptr [esp+3Ch+var_28], eax
0x8983B4: movzx   eax, word ptr [esi+8]
0x8983B8: add     esp, 8
0x8983BB: cmp     ebx, eax
0x8983BD: jb      short loc_8983CD
0x8983BF: movzx   ecx, word ptr [esi+0Eh]
0x8983C3: add     ecx, ebx
0x8983C5: push    ecx
0x8983C6: mov     ecx, esi
0x8983C8: call    NiTArray_SetSize
0x8983CD: lea     edx, [esp+34h+var_28]
0x8983D1: push    edx
0x8983D2: push    ebx
0x8983D3: mov     ecx, esi
0x8983D5: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8983DA: mov     eax, [edi]
0x8983DC: mov     edx, [eax+74h]
0x8983DF: mov     ecx, edi
0x8983E1: call    edx
0x8983E3: push    eax; char
0x8983E4: push    offset aBkeyframe; "bKeyframe"
0x8983E9: call    TESOutput_PrintLabeledBool
0x8983EE: movzx   ebx, word ptr [esi+0Ah]
0x8983F2: mov     dword ptr [esp+3Ch+var_28], eax
0x8983F6: movzx   eax, word ptr [esi+8]
0x8983FA: add     esp, 8
0x8983FD: cmp     ebx, eax
0x8983FF: jb      short loc_89840F
0x898401: movzx   ecx, word ptr [esi+0Eh]
0x898405: add     ecx, ebx
0x898407: push    ecx
0x898408: mov     ecx, esi
0x89840A: call    NiTArray_SetSize
0x89840F: lea     edx, [esp+34h+var_28]
0x898413: push    edx
0x898414: push    ebx
0x898415: mov     ecx, esi
0x898417: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89841C: xor     ebx, ebx
0x89841E: mov     ecx, edi
0x898420: mov     [esp+34h+var_28], bl
0x898424: call    sub_452A60
0x898429: cmp     eax, ebx
0x89842B: jz      short loc_898442
0x89842D: fldz
0x89842F: mov     [esp+34h+var_28], 1
0x898434: fcomp   dword ptr [eax+7Ch]
0x898437: fnstsw  ax
0x898439: test    ah, 41h
0x89843C: jz      short loc_898442
0x89843E: mov     [esp+34h+var_28], bl
0x898442: mov     eax, dword ptr [esp+34h+var_28]
0x898446: push    eax; char
0x898447: push    offset aBfacedown; "bFaceDown"
0x89844C: call    TESOutput_PrintLabeledBool
0x898451: movzx   edi, word ptr [esi+0Ah]
0x898455: movzx   ecx, word ptr [esi+8]
0x898459: add     esp, 8
0x89845C: cmp     edi, ecx
0x89845E: mov     dword ptr [esp+34h+var_28], eax
0x898462: jb      short loc_898472
0x898464: movzx   edx, word ptr [esi+0Eh]
0x898468: add     edx, edi
0x89846A: push    edx
0x89846B: mov     ecx, esi
0x89846D: call    NiTArray_SetSize
0x898472: lea     eax, [esp+34h+var_28]
0x898476: push    eax
0x898477: push    edi
0x898478: mov     ecx, esi
0x89847A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89847F: mov     ecx, [esp+34h+var_4]
0x898483: pop     edi
0x898484: pop     esi
0x898485: pop     ebx
0x898486: xor     ecx, esp
0x898488: call    @__security_check_cookie@4; __security_check_cookie(x)
0x89848D: add     esp, 28h
0x898490: retn    4
