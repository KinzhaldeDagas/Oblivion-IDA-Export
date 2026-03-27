0x4FD7C0: push    ebx
0x4FD7C1: push    ebp
0x4FD7C2: mov     ebp, dword ptr [esp+8+ArgList]
0x4FD7C6: push    esi
0x4FD7C7: mov     esi, [esp+0Ch+arg_C]
0x4FD7CB: push    edi; ArgList
0x4FD7CC: lea     esp, [esp+0]
0x4FD7D0: mov     ebx, [esp+10h+arg_8]
0x4FD7D4: push    esi
0x4FD7D5: push    ebx
0x4FD7D6: call    sub_4FCBD0
0x4FD7DB: mov     eax, [esi]
0x4FD7DD: lea     edx, [eax+ebx]
0x4FD7E0: add     esp, 8
0x4FD7E3: xor     edi, edi
0x4FD7E5: cmp     byte ptr [edx], 22h ; '"'
0x4FD7E8: jnz     loc_4FD8D3
0x4FD7EE: lea     ecx, [eax+ebx]
0x4FD7F1: mov     al, [ecx]
0x4FD7F3: test    al, al
0x4FD7F5: mov     [esp+10h+arg_C], edi
0x4FD7F9: jz      loc_4FD94A
0x4FD7FF: nop
0x4FD800: cmp     al, 22h ; '"'
0x4FD802: jnz     short loc_4FD809
0x4FD804: add     [esp+10h+arg_C], 1
0x4FD809: mov     al, [ecx+1]
0x4FD80C: add     ecx, 1
0x4FD80F: test    al, al
0x4FD811: jnz     short loc_4FD800
0x4FD813: mov     eax, [esp+10h+arg_C]
0x4FD817: cmp     eax, 2
0x4FD81A: jl      loc_4FD94A
0x4FD820: test    al, 1
0x4FD822: jnz     loc_4FD94A
0x4FD828: push    22h ; '"'; Val
0x4FD82A: push    edx; Str
0x4FD82B: call    _strchr
0x4FD830: mov     ebx, eax
0x4FD832: mov     byte ptr [ebx], 20h ; ' '
0x4FD835: mov     eax, [esi]
0x4FD837: add     eax, [esp+18h+arg_8]
0x4FD83B: push    22h ; '"'; Val
0x4FD83D: push    eax; Str
0x4FD83E: call    _strchr
0x4FD843: lea     ecx, [ebx+1]
0x4FD846: mov     edi, ebp
0x4FD848: add     esp, 10h
0x4FD84B: mov     byte ptr [eax], 0
0x4FD84E: sub     edi, ecx
0x4FD850: mov     dl, [ecx]
0x4FD852: mov     [edi+ecx], dl
0x4FD855: add     ecx, 1
0x4FD858: test    dl, dl
0x4FD85A: jnz     short loc_4FD850
0x4FD85C: mov     edi, ebp
0x4FD85E: lea     edx, [edi+1]
0x4FD861: mov     cl, [edi]
0x4FD863: add     edi, 1
0x4FD866: test    cl, cl
0x4FD868: jnz     short loc_4FD861
0x4FD86A: sub     edi, edx
0x4FD86C: mov     edx, [esp+10h+arg_8]
0x4FD870: mov     byte ptr [ebx], 22h ; '"'
0x4FD873: mov     byte ptr [eax], 22h ; '"'
0x4FD876: lea     ecx, [edi+2]
0x4FD879: add     [esi], ecx
0x4FD87B: mov     eax, [esi]
0x4FD87D: cmp     byte ptr [eax+edx], 2Eh ; '.'
0x4FD881: jnz     short loc_4FD8C5
0x4FD883: cmp     [esp+10h+arg_10], 0
0x4FD888: jz      loc_4FD963
0x4FD88E: cmp     dword ptr [ebp+200h], 0
0x4FD895: ja      loc_4FD97C
0x4FD89B: add     eax, 1
0x4FD89E: mov     [esi], eax
0x4FD8A0: mov     eax, dword ptr [esp+10h+arg_14]
0x4FD8A4: push    eax; char
0x4FD8A5: mov     edi, [esp+14h+arg_0]
0x4FD8A9: push    0; char
0x4FD8AB: push    ebp; Str
0x4FD8AC: mov     ecx, edi
0x4FD8AE: call    sub_4FD0A0
0x4FD8B3: test    al, al
0x4FD8B5: jz      loc_4FD995
0x4FD8BB: mov     [esp+10h+arg_10], 1
0x4FD8C0: jmp     loc_4FD7D0
0x4FD8C5: test    edi, edi
0x4FD8C7: mov     byte ptr [edi+ebp], 0
0x4FD8CB: jnz     loc_4FD9DD
0x4FD8D1: mov     ebx, edx
0x4FD8D3: mov     ecx, [esi]
0x4FD8D5: movsx   edx, byte ptr [ecx+ebx]
0x4FD8D9: push    edx; C
0x4FD8DA: call    _isalnum
0x4FD8DF: add     esp, 4
0x4FD8E2: test    eax, eax
0x4FD8E4: jnz     short loc_4FD8FB
0x4FD8E6: mov     eax, [esi]
0x4FD8E8: mov     al, [ebx+eax]
0x4FD8EB: cmp     al, 2Eh ; '.'
0x4FD8ED: jz      short loc_4FD8FB
0x4FD8EF: cmp     al, 2Dh ; '-'
0x4FD8F1: jz      short loc_4FD8FB
0x4FD8F3: cmp     al, 5Fh ; '_'
0x4FD8F5: jnz     loc_4FD9DD
0x4FD8FB: mov     ecx, [esi]
0x4FD8FD: mov     dl, [ebx+ecx]
0x4FD900: mov     [edi+ebp], dl
0x4FD903: add     dword ptr [esi], 1
0x4FD906: add     edi, 1
0x4FD909: cmp     byte ptr [edi+ebp-1], 2Eh ; '.'
0x4FD90E: jnz     short loc_4FD921
0x4FD910: movsx   eax, byte ptr [ebp+0]
0x4FD914: push    eax; C
0x4FD915: call    _isalpha
0x4FD91A: add     esp, 4
0x4FD91D: test    eax, eax
0x4FD91F: jnz     short loc_4FD927
0x4FD921: mov     byte ptr [edi+ebp], 0
0x4FD925: jmp     short loc_4FD8D3
0x4FD927: cmp     [esp+10h+arg_10], 0
0x4FD92C: jz      short loc_4FD9AB
0x4FD92E: cmp     dword ptr [ebp+200h], 0
0x4FD935: jnz     loc_4FD9C4
0x4FD93B: mov     ecx, dword ptr [esp+10h+arg_14]
0x4FD93F: mov     byte ptr [edi+ebp-1], 0
0x4FD944: push    ecx
0x4FD945: jmp     loc_4FD8A5
0x4FD94A: mov     edx, [esp+10h+arg_0]
0x4FD94E: push    offset aSyntaxError_Mi; "Syntax Error.  Mismatched quotes."
0x4FD953: push    edx; int
0x4FD954: call    sub_4FCE30
0x4FD959: add     esp, 8
0x4FD95C: pop     edi
0x4FD95D: pop     esi
0x4FD95E: pop     ebp
0x4FD95F: xor     eax, eax
0x4FD961: pop     ebx
0x4FD962: retn
0x4FD963: mov     eax, [esp+10h+arg_0]
0x4FD967: push    offset aSyntaxError_Re; "Syntax Error.  Reference not allowed in"...
0x4FD96C: push    eax; int
0x4FD96D: call    sub_4FCE30
0x4FD972: add     esp, 8
0x4FD975: pop     edi
0x4FD976: pop     esi
0x4FD977: pop     ebp
0x4FD978: xor     eax, eax
0x4FD97A: pop     ebx
0x4FD97B: retn
0x4FD97C: mov     ecx, [esp+10h+arg_0]
0x4FD980: push    offset aSyntaxError_In; "Syntax Error.  Invalid reference syntax"...
0x4FD985: push    ecx; int
0x4FD986: call    sub_4FCE30
0x4FD98B: add     esp, 8
0x4FD98E: pop     edi
0x4FD98F: pop     esi
0x4FD990: pop     ebp
0x4FD991: xor     eax, eax
0x4FD993: pop     ebx
0x4FD994: retn
0x4FD995: push    ebp; ArgList
0x4FD996: push    offset aUnknownObjectS; "Unknown object '%s'."
0x4FD99B: push    edi; int
0x4FD99C: call    sub_4FCE30
0x4FD9A1: add     esp, 0Ch
0x4FD9A4: pop     edi
0x4FD9A5: pop     esi
0x4FD9A6: pop     ebp
0x4FD9A7: xor     eax, eax
0x4FD9A9: pop     ebx
0x4FD9AA: retn
0x4FD9AB: mov     edx, [esp+10h+arg_0]
0x4FD9AF: push    offset aSyntaxError_Re; "Syntax Error.  Reference not allowed in"...
0x4FD9B4: push    edx; int
0x4FD9B5: call    sub_4FCE30
0x4FD9BA: add     esp, 8
0x4FD9BD: pop     edi
0x4FD9BE: pop     esi
0x4FD9BF: pop     ebp
0x4FD9C0: xor     eax, eax
0x4FD9C2: pop     ebx
0x4FD9C3: retn
0x4FD9C4: mov     eax, [esp+10h+arg_0]
0x4FD9C8: push    offset aSyntaxError_In; "Syntax Error.  Invalid reference syntax"...
0x4FD9CD: push    eax; int
0x4FD9CE: call    sub_4FCE30
0x4FD9D3: add     esp, 8
0x4FD9D6: pop     edi
0x4FD9D7: pop     esi
0x4FD9D8: pop     ebp
0x4FD9D9: xor     eax, eax
0x4FD9DB: pop     ebx
0x4FD9DC: retn
0x4FD9DD: cmp     [esp+10h+arg_10], 0
0x4FD9E2: jz      loc_4FDAE6
0x4FD9E8: cmp     dword ptr [ebp+200h], 0
0x4FD9EF: jbe     loc_4FDAC6
0x4FD9F5: mov     esi, [esp+10h+arg_0]
0x4FD9F9: push    ebp; Str2
0x4FD9FA: mov     ecx, esi
0x4FD9FC: call    sub_4FD5F0
0x4FDA01: test    al, al
0x4FDA03: jnz     short loc_4FDA28
0x4FDA05: push    ebp
0x4FDA06: call    ScriptRunner_LookupCommandByName?
0x4FDA0B: add     esp, 4
0x4FDA0E: test    al, al
0x4FDA10: jnz     short loc_4FDA28
0x4FDA12: push    ebp; ArgList
0x4FDA13: push    offset aUnknownVariabl; "Unknown variable or function '%s'."
0x4FDA18: push    esi; int
0x4FDA19: call    sub_4FCE30
0x4FDA1E: add     esp, 0Ch
0x4FDA21: pop     edi
0x4FDA22: pop     esi
0x4FDA23: pop     ebp
0x4FDA24: xor     eax, eax
0x4FDA26: pop     ebx
0x4FDA27: retn
0x4FDA28: mov     ecx, [ebp+200h]
0x4FDA2E: push    ecx
0x4FDA2F: mov     ecx, esi
0x4FDA31: call    sub_4FCD20
0x4FDA36: push    0; int
0x4FDA38: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4FDA3D: mov     esi, eax
0x4FDA3F: mov     edx, [esi+8]
0x4FDA42: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FDA47: push    0; int
0x4FDA49: push    edx; void *
0x4FDA4A: call    OblivionDynamicCast
0x4FDA4F: push    0; int
0x4FDA51: push    offset ??_R0?AVTESQuest@@@8; struct TypeDescriptor *
0x4FDA56: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4FDA5B: mov     ebx, eax
0x4FDA5D: mov     eax, [esi+8]
0x4FDA60: push    0; int
0x4FDA62: push    eax; void *
0x4FDA63: call    OblivionDynamicCast
0x4FDA68: add     esp, 28h
0x4FDA6B: test    ebx, ebx
0x4FDA6D: jnz     short loc_4FDAA0
0x4FDA6F: test    eax, eax
0x4FDA71: jnz     short loc_4FDAA4
0x4FDA73: cmp     [esp+10h+arg_14], al
0x4FDA77: jnz     short loc_4FDAC6
0x4FDA79: mov     ecx, [esi+8]
0x4FDA7C: mov     edx, [ecx]
0x4FDA7E: mov     eax, [edx+0D4h]
0x4FDA84: call    eax
0x4FDA86: mov     ecx, [esp+10h+arg_0]
0x4FDA8A: push    eax; ArgList
0x4FDA8B: push    offset aSyntaxError__0; "Syntax error.  Invalid reference '%s' ("...
0x4FDA90: push    ecx; int
0x4FDA91: call    sub_4FCE30
0x4FDA96: add     esp, 0Ch
0x4FDA99: pop     edi
0x4FDA9A: pop     esi
0x4FDA9B: pop     ebp
0x4FDA9C: xor     eax, eax
0x4FDA9E: pop     ebx
0x4FDA9F: retn
0x4FDAA0: test    eax, eax
0x4FDAA2: jz      short loc_4FDAC6
0x4FDAA4: cmp     byte ptr [ebp+204h], 58h ; 'X'
0x4FDAAB: jnz     short loc_4FDAC6
0x4FDAAD: mov     edx, [esp+10h+arg_0]
0x4FDAB1: push    offset aSyntaxError_Fu; "Syntax error.  Functions may not be cal"...
0x4FDAB6: push    edx; int
0x4FDAB7: call    sub_4FCE30
0x4FDABC: add     esp, 8
0x4FDABF: pop     edi
0x4FDAC0: pop     esi
0x4FDAC1: pop     ebp
0x4FDAC2: xor     eax, eax
0x4FDAC4: pop     ebx
0x4FDAC5: retn
0x4FDAC6: cmp     byte ptr [ebp+204h], 0
0x4FDACD: jnz     short loc_4FDAE6
0x4FDACF: mov     ecx, [esp+10h+arg_0]
0x4FDAD3: push    ebp; Str2
0x4FDAD4: call    sub_4FD5F0
0x4FDAD9: test    al, al
0x4FDADB: jnz     short loc_4FDAE6
0x4FDADD: push    ebp
0x4FDADE: call    ScriptRunner_LookupCommandByName?
0x4FDAE3: add     esp, 4
0x4FDAE6: mov     eax, edi
0x4FDAE8: pop     edi
0x4FDAE9: pop     esi
0x4FDAEA: pop     ebp
0x4FDAEB: pop     ebx
0x4FDAEC: retn
