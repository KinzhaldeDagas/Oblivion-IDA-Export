0x685BE0: mov     eax, ds:0B33EA0h
0x685BE5: fild    dword ptr ds:0B33EA0h
0x685BEB: sub     esp, 8
0x685BEE: test    eax, eax
0x685BF0: push    ebx
0x685BF1: push    ebp
0x685BF2: push    esi
0x685BF3: push    edi
0x685BF4: jge     short loc_685BFC
0x685BF6: fadd    dword ptr ds:0A2FC78h
0x685BFC: mov     ebp, [esp+18h+arg_8]
0x685C00: fstp    [esp+18h+var_8]
0x685C04: mov     [esp+18h+var_4], 0
0x685C0C: mov     esi, offset dword_B3C08C
0x685C11: xor     ebx, ebx
0x685C13: mov     edi, [esi]
0x685C15: test    edi, edi
0x685C17: jz      short loc_685C77
0x685C19: fld     [esp+18h+var_8]
0x685C1D: fsub    dword ptr [edi+1Ch]
0x685C20: fcomp   qword ptr ds:0A2FC70h
0x685C26: fnstsw  ax
0x685C28: test    ah, 5
0x685C2B: jp      loc_685CE4
0x685C31: mov     ecx, [esp+18h+arg_0]
0x685C35: cmp     [edi], ecx
0x685C37: jnz     short loc_685C77
0x685C39: fld     dword ptr ds:0A417B4h
0x685C3F: mov     edx, [esp+18h+arg_4]
0x685C43: push    ecx
0x685C44: fstp    [esp+1Ch+var_1C]; float
0x685C47: push    edx; int
0x685C48: lea     eax, [edi+4]
0x685C4B: push    eax; int
0x685C4C: call    sub_47D810
0x685C51: add     esp, 0Ch
0x685C54: test    al, al
0x685C56: jz      short loc_685C77
0x685C58: fld     dword ptr ds:0A417B4h
0x685C5E: push    ecx
0x685C5F: fstp    [esp+1Ch+var_1C]; float
0x685C62: lea     ecx, [edi+10h]
0x685C65: push    ebp; int
0x685C66: push    ecx; int
0x685C67: call    sub_47D810
0x685C6C: add     esp, 0Ch
0x685C6F: test    al, al
0x685C71: jz      short loc_685C77
0x685C73: mov     [esp+18h+var_4], edi
0x685C77: mov     ebx, esi
0x685C79: mov     esi, [esi+4]
0x685C7C: test    esi, esi
0x685C7E: jnz     short loc_685C13
0x685C80: mov     eax, [esp+18h+var_4]
0x685C84: test    eax, eax
0x685C86: jnz     loc_685D3D
0x685C8C: push    24h ; '$'; Size
0x685C8E: call    FormHeapAlloc
0x685C93: fld     [esp+1Ch+var_8]
0x685C97: mov     edx, [esp+1Ch+arg_0]
0x685C9B: mov     ecx, [esp+1Ch+arg_4]
0x685C9F: mov     [eax], edx
0x685CA1: mov     edx, [ecx]
0x685CA3: mov     [eax+4], edx
0x685CA6: mov     edx, [ecx+4]
0x685CA9: mov     [eax+8], edx
0x685CAC: mov     ecx, [ecx+8]
0x685CAF: mov     [eax+0Ch], ecx
0x685CB2: mov     edx, [ebp+0]
0x685CB5: mov     [eax+10h], edx
0x685CB8: mov     ecx, [ebp+4]
0x685CBB: mov     [eax+14h], ecx
0x685CBE: mov     edx, [ebp+8]
0x685CC1: fstp    dword ptr [eax+1Ch]
0x685CC4: mov     cl, [esp+1Ch+arg_C]
0x685CC8: add     esp, 4
0x685CCB: mov     [eax+20h], cl
0x685CCE: push    eax
0x685CCF: mov     ecx, offset dword_B3C08C
0x685CD4: mov     [eax+18h], edx
0x685CD7: call    BSSimpleList_PushFront
0x685CDC: pop     edi
0x685CDD: pop     esi
0x685CDE: pop     ebp
0x685CDF: pop     ebx
0x685CE0: add     esp, 8
0x685CE3: retn
0x685CE4: test    ebx, ebx
0x685CE6: jz      short loc_685D01
0x685CE8: push    edi
0x685CE9: mov     ecx, ebx
0x685CEB: call    BSSimpleList_Remove
0x685CF0: push    edi
0x685CF1: call    FormHeapFree
0x685CF6: mov     esi, [ebx+4]
0x685CF9: add     esp, 4
0x685CFC: jmp     loc_685C7C
0x685D01: mov     eax, [esi+4]
0x685D04: test    eax, eax
0x685D06: jz      short loc_685D29
0x685D08: mov     edx, [eax+4]
0x685D0B: mov     [esi+4], edx
0x685D0E: mov     ecx, [eax]
0x685D10: push    eax
0x685D11: mov     [esi], ecx
0x685D13: call    FormHeapFree
0x685D18: add     esp, 4
0x685D1B: push    edi
0x685D1C: call    FormHeapFree
0x685D21: add     esp, 4
0x685D24: jmp     loc_685C7C
0x685D29: push    edi
0x685D2A: mov     dword ptr [esi], 0
0x685D30: call    FormHeapFree
0x685D35: add     esp, 4
0x685D38: jmp     loc_685C7C
0x685D3D: fld     [esp+18h+var_8]
0x685D41: mov     dl, [esp+18h+arg_C]
0x685D45: pop     edi
0x685D46: fstp    dword ptr [eax+1Ch]
0x685D49: pop     esi
0x685D4A: pop     ebp
0x685D4B: mov     [eax+20h], dl
0x685D4E: pop     ebx
0x685D4F: add     esp, 8
0x685D52: retn
