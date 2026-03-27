0x4FF4C0: sub     esp, 430h
0x4FF4C6: mov     eax, ds:0B30AACh
0x4FF4CB: xor     eax, esp
0x4FF4CD: mov     [esp+430h+var_4], eax
0x4FF4D4: push    edi
0x4FF4D5: mov     edi, [esp+434h+arg_0]
0x4FF4DC: mov     eax, [edi]
0x4FF4DE: lea     edx, [eax+1]
0x4FF4E1: mov     cl, [eax]
0x4FF4E3: add     eax, 1
0x4FF4E6: test    cl, cl
0x4FF4E8: jnz     short loc_4FF4E1
0x4FF4EA: sub     eax, edx
0x4FF4EC: cmp     [edi+4], eax
0x4FF4EF: jb      short loc_4FF50E
0x4FF4F1: mov     eax, 0FFFFh
0x4FF4F6: pop     edi
0x4FF4F7: mov     ecx, [esp+430h+var_4]
0x4FF4FE: xor     ecx, esp
0x4FF500: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FF505: add     esp, 430h
0x4FF50B: retn    4
0x4FF50E: push    ebx
0x4FF50F: push    esi
0x4FF510: push    41Ch; Size
0x4FF515: call    FormHeapAlloc
0x4FF51A: xor     ebx, ebx
0x4FF51C: add     esp, 4
0x4FF51F: cmp     eax, ebx
0x4FF521: jz      short loc_4FF52E
0x4FF523: mov     ecx, eax
0x4FF525: call    sub_4FCC40
0x4FF52A: mov     esi, eax
0x4FF52C: jmp     short loc_4FF530
0x4FF52E: xor     esi, esi
0x4FF530: mov     eax, [edi+1Ch]
0x4FF533: add     eax, 1
0x4FF536: push    esi
0x4FF537: push    edi
0x4FF538: mov     [esi], eax
0x4FF53A: call    sub_4FCF10
0x4FF53F: add     esp, 8
0x4FF542: cmp     eax, ebx
0x4FF544: jnz     short loc_4FF562
0x4FF546: mov     ecx, [esi+418h]
0x4FF54C: push    esi
0x4FF54D: mov     [edi+14h], ecx
0x4FF550: call    FormHeapFree
0x4FF555: add     esp, 4
0x4FF558: mov     eax, 0FFFFh
0x4FF55D: jmp     loc_4FF62A
0x4FF562: add     [edi+4], eax
0x4FF565: push    ebp; ArgList
0x4FF566: push    200h
0x4FF56B: lea     edx, [esp+444h+ArgList]
0x4FF56F: push    ebx
0x4FF570: push    edx
0x4FF571: mov     [esp+44Ch+var_22C], ebx
0x4FF578: mov     [esp+44Ch+var_220], ebx
0x4FF57F: mov     [esp+44Ch+var_228], bl
0x4FF586: mov     [esp+44Ch+var_224], ebx
0x4FF58D: mov     [esp+44Ch+var_21C], ebx
0x4FF594: call    __memset
0x4FF599: push    1
0x4FF59B: push    1
0x4FF59D: lea     ebx, [esi+208h]
0x4FF5A3: push    ebx
0x4FF5A4: lea     ebp, [esi+4]
0x4FF5A7: push    ebp
0x4FF5A8: lea     eax, [esp+45Ch+ArgList]
0x4FF5AC: push    eax
0x4FF5AD: push    edi
0x4FF5AE: call    sub_4FD7C0
0x4FF5B3: add     esp, 24h
0x4FF5B6: test    eax, eax
0x4FF5B8: jnz     short loc_4FF5D1
0x4FF5BA: push    ebp; ArgList
0x4FF5BB: push    offset aSyntaxErrorSCo; "Syntax Error\r\n%s\r\nCould not parse t"...
0x4FF5C0: push    edi; int
0x4FF5C1: call    sub_4FCE30
0x4FF5C6: push    esi
0x4FF5C7: call    FormHeapFree
0x4FF5CC: add     esp, 10h
0x4FF5CF: jmp     short loc_4FF624
0x4FF5D1: mov     ecx, [esp+440h+var_22C]
0x4FF5D8: mov     [esi+414h], ecx
0x4FF5DE: cmp     [esp+440h+var_228], 58h ; 'X'
0x4FF5E6: setz    al
0x4FF5E9: test    al, al
0x4FF5EB: jz      short loc_4FF644
0x4FF5ED: mov     eax, [esp+440h+var_224]
0x4FF5F4: lea     edx, [eax-100h]
0x4FF5FA: cmp     edx, 82h ; '‚'
0x4FF600: ja      short loc_4FF664
0x4FF602: cmp     dword ptr [edi+8], 1
0x4FF606: jz      short loc_4FF664
0x4FF608: lea     eax, [esp+440h+ArgList]
0x4FF60C: push    eax; ArgList
0x4FF60D: push    offset aScriptCommandS; "Script command \"%s\" is a console-only"...
0x4FF612: push    edi; int
0x4FF613: call    sub_4FCE30
0x4FF618: add     esp, 0Ch
0x4FF61B: push    esi
0x4FF61C: call    FormHeapFree
0x4FF621: add     esp, 4
0x4FF624: mov     eax, 0FFFFh
0x4FF629: pop     ebp
0x4FF62A: mov     ecx, [esp+43Ch+var_4]
0x4FF631: pop     esi
0x4FF632: pop     ebx
0x4FF633: pop     edi
0x4FF634: xor     ecx, esp
0x4FF636: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FF63B: add     esp, 430h
0x4FF641: retn    4
0x4FF644: add     dword ptr [edi+1Ch], 1
0x4FF648: lea     ecx, [esp+440h+ArgList]
0x4FF64C: push    ecx; ArgList
0x4FF64D: push    offset aScriptComman_0; "Script command \"%s\" not found."
0x4FF652: push    edi; int
0x4FF653: call    sub_4FCE30
0x4FF658: add     esp, 0Ch
0x4FF65B: mov     dword ptr [edi+14h], 0Dh
0x4FF662: jmp     short loc_4FF61B
0x4FF664: mov     edx, [ebx]
0x4FF666: lea     ecx, [edx+esi+4]
0x4FF66A: mov     [esi+410h], eax
0x4FF670: mov     edx, ebp
0x4FF672: mov     al, [ecx]
0x4FF674: mov     [edx], al
0x4FF676: add     ecx, 1
0x4FF679: add     edx, 1
0x4FF67C: test    al, al
0x4FF67E: jnz     short loc_4FF672
0x4FF680: mov     eax, [ebx]
0x4FF682: sub     [esi+204h], eax
0x4FF688: mov     ecx, [esi]
0x4FF68A: mov     [edi+1Ch], ecx
0x4FF68D: cmp     dword ptr [esi+410h], 1Dh
0x4FF694: jnz     short loc_4FF6DB
0x4FF696: lea     ecx, [esp+440h+a2]
0x4FF69D: mov     [esp+440h+var_430], 0
0x4FF6A5: call    sub_4FCC00
0x4FF6AA: push    0
0x4FF6AC: push    0
0x4FF6AE: lea     edx, [esp+448h+var_430]
0x4FF6B2: push    edx
0x4FF6B3: push    ebp
0x4FF6B4: lea     eax, [esp+450h+a2]
0x4FF6BB: push    eax
0x4FF6BC: push    edi
0x4FF6BD: call    sub_4FD7C0
0x4FF6C2: add     esp, 18h
0x4FF6C5: test    eax, eax
0x4FF6C7: jz      short loc_4FF6EF
0x4FF6C9: push    0; a3
0x4FF6CB: lea     ecx, [esp+444h+a2]
0x4FF6D2: push    ecx; a2
0x4FF6D3: lea     ecx, [edi+0Ch]; this
0x4FF6D6: call    BSStringT_Set
0x4FF6DB: push    esi
0x4FF6DC: lea     ecx, [edi+50h]
0x4FF6DF: call    BSSimpleList_PushBack
0x4FF6E4: mov     eax, [esi+410h]
0x4FF6EA: jmp     loc_4FF629
0x4FF6EF: push    offset aSyntaxError__1; "Syntax Error.  Missing script name."
0x4FF6F4: push    edi; int
0x4FF6F5: call    sub_4FCE30
0x4FF6FA: push    esi
0x4FF6FB: mov     dword ptr [edi+14h], 1
0x4FF702: call    FormHeapFree
0x4FF707: add     esp, 0Ch
0x4FF70A: jmp     loc_4FF624
