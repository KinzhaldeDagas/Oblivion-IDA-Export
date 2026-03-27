0x67F830: push    ebp
0x67F831: mov     ebp, esp
0x67F833: and     esp, 0FFFFFFF8h
0x67F836: sub     esp, 34h
0x67F839: push    ebx
0x67F83A: push    esi
0x67F83B: push    edi; ArgList
0x67F83C: mov     edi, [ebp+arg_0]
0x67F83F: test    edi, edi
0x67F841: jz      loc_67FA62
0x67F847: cmp     [ebp+arg_8], 0
0x67F84B: jz      loc_67FA62
0x67F851: mov     ecx, [ebp+arg_4]
0x67F854: test    ecx, ecx
0x67F856: jz      loc_67FA62
0x67F85C: lea     eax, [esp+40h+var_C]
0x67F860: push    eax
0x67F861: push    edi
0x67F862: call    sub_6803A0
0x67F867: test    al, al
0x67F869: jz      loc_67FA55
0x67F86F: lea     ecx, [esp+40h+var_2C]
0x67F873: push    ecx
0x67F874: mov     ecx, ds:0B3BE00h
0x67F87A: push    edi
0x67F87B: mov     [esp+48h+var_2C], 0
0x67F883: call    NiTMap_GetAt
0x67F888: test    al, al
0x67F88A: jz      loc_67FA62
0x67F890: mov     esi, [esp+40h+var_2C]
0x67F894: test    esi, esi
0x67F896: jz      loc_67FA62
0x67F89C: mov     ecx, esi
0x67F89E: call    sub_6A9030
0x67F8A3: test    eax, eax
0x67F8A5: mov     [esp+40h+var_1C], eax
0x67F8A9: jz      loc_67FA62
0x67F8AF: jmp     short loc_67F8B5
0x67F8B1: mov     esi, [esp+40h+var_2C]
0x67F8B5: lea     edx, [esp+40h+var_30]
0x67F8B9: push    edx
0x67F8BA: lea     eax, [esp+44h+var_28]
0x67F8BE: push    eax
0x67F8BF: lea     ecx, [esp+48h+var_1C]
0x67F8C3: push    ecx
0x67F8C4: mov     ecx, esi
0x67F8C6: mov     [esp+4Ch+var_30], 0
0x67F8CE: call    sub_452600
0x67F8D3: mov     ebx, [esp+40h+var_30]
0x67F8D7: test    ebx, ebx
0x67F8D9: jz      loc_67FA43
0x67F8DF: jmp     short loc_67F8E5
0x67F8E1: mov     ebx, [esp+40h+var_30]
0x67F8E5: cmp     dword ptr [ebx+4], 0
0x67F8E9: jnz     short loc_67F8F4
0x67F8EB: cmp     dword ptr [ebx], 0
0x67F8EE: jz      loc_67FA43
0x67F8F4: mov     esi, [ebx]
0x67F8F6: push    edi
0x67F8F7: mov     ecx, esi
0x67F8F9: call    sub_680790
0x67F8FE: test    al, al
0x67F900: jz      loc_67FA34
0x67F906: mov     edx, ds:0B3BE08h
0x67F90C: push    1
0x67F90E: push    edx
0x67F90F: push    esi
0x67F910: lea     eax, [esp+4Ch+var_C]
0x67F914: push    eax
0x67F915: push    edi
0x67F916: call    sub_680AA0
0x67F91B: fstp    [esp+54h+var_28]
0x67F91F: mov     ecx, [ebp+arg_4]
0x67F922: add     esp, 14h
0x67F925: call    sub_6804B0
0x67F92A: fadd    [esp+40h+var_28]
0x67F92E: mov     ecx, esi
0x67F930: xor     bl, bl
0x67F932: fstp    dword ptr [esp+40h+var_28]
0x67F936: call    sub_680550
0x67F93B: test    al, al
0x67F93D: jnz     short loc_67F94A
0x67F93F: mov     ecx, esi
0x67F941: call    sub_6804D0
0x67F946: test    al, al
0x67F948: jz      short loc_67F96A
0x67F94A: fld     dword ptr [esp+40h+var_28]
0x67F94E: mov     ecx, esi
0x67F950: fstp    [esp+40h+var_18]
0x67F954: mov     bl, 1
0x67F956: call    sub_6804B0
0x67F95B: fcomp   [esp+40h+var_18]
0x67F95F: fnstsw  ax
0x67F961: test    ah, 41h
0x67F964: jnp     loc_67FA30
0x67F96A: fld     dword ptr [esp+40h+var_28]
0x67F96E: push    ecx
0x67F96F: mov     ecx, esi
0x67F971: fstp    [esp+44h+var_44]
0x67F974: call    sub_680930
0x67F979: mov     ecx, [ebp+arg_4]
0x67F97C: push    edi
0x67F97D: push    ecx
0x67F97E: mov     ecx, esi
0x67F980: call    sub_680460
0x67F985: mov     ecx, esi
0x67F987: call    sub_680550
0x67F98C: test    al, al
0x67F98E: jnz     short loc_67F9BA
0x67F990: mov     ecx, esi
0x67F992: call    sub_6804B0
0x67F997: fld     dword ptr ds:0B1545Ch
0x67F99D: fcompp
0x67F99F: fnstsw  ax
0x67F9A1: test    ah, 41h
0x67F9A4: jnz     short loc_67F9BA
0x67F9A6: push    1
0x67F9A8: mov     ecx, esi
0x67F9AA: call    sub_680570
0x67F9AF: mov     ecx, [ebp+arg_8]
0x67F9B2: push    esi
0x67F9B3: call    sub_680BB0
0x67F9B8: jmp     short loc_67F9C7
0x67F9BA: test    bl, bl
0x67F9BC: jz      short loc_67F9C7
0x67F9BE: mov     ecx, [ebp+arg_8]
0x67F9C1: push    esi
0x67F9C2: call    sub_680C60
0x67F9C7: push    edi
0x67F9C8: mov     ecx, esi
0x67F9CA: call    sub_6803F0
0x67F9CF: mov     ecx, ds:0B3BE10h
0x67F9D5: cmp     eax, ecx
0x67F9D7: jnz     short loc_67FA30
0x67F9D9: mov     edx, ds:0B3BE08h
0x67F9DF: push    0
0x67F9E1: push    edx
0x67F9E2: push    esi
0x67F9E3: push    offset qword_B3BE2C
0x67F9E8: push    ecx
0x67F9E9: call    sub_680AA0
0x67F9EE: fstp    [esp+54h+var_18]
0x67F9F2: add     esp, 14h
0x67F9F5: mov     ecx, esi
0x67F9F7: call    sub_6804B0
0x67F9FC: fadd    [esp+40h+var_18]
0x67FA00: cmp     dword ptr ds:0B3BE04h, 0
0x67FA07: fstp    dword ptr [esp+40h+var_28]
0x67FA0B: fld     dword ptr [esp+40h+var_28]
0x67FA0F: jz      short loc_67FA20
0x67FA11: fld     dword ptr ds:0B1545Ch
0x67FA17: fcomp   st(1)
0x67FA19: fnstsw  ax
0x67FA1B: test    ah, 41h
0x67FA1E: jnz     short loc_67FA2E
0x67FA20: fstp    dword ptr ds:0B1545Ch
0x67FA26: mov     ds:0B3BE04h, esi
0x67FA2C: jmp     short loc_67FA30
0x67FA2E: fstp    st
0x67FA30: mov     ebx, [esp+40h+var_30]
0x67FA34: mov     ebx, [ebx+4]
0x67FA37: test    ebx, ebx
0x67FA39: mov     [esp+40h+var_30], ebx
0x67FA3D: jnz     loc_67F8E1
0x67FA43: cmp     [esp+40h+var_1C], 0
0x67FA48: jnz     loc_67F8B1
0x67FA4E: pop     edi
0x67FA4F: pop     esi
0x67FA50: pop     ebx
0x67FA51: mov     esp, ebp
0x67FA53: pop     ebp
0x67FA54: retn
0x67FA55: push    offset aFailedToFindCo; "Failed to find coord for space."
0x67FA5A: call    PrintError
0x67FA5F: add     esp, 4
0x67FA62: pop     edi
0x67FA63: pop     esi
0x67FA64: pop     ebx
0x67FA65: mov     esp, ebp
0x67FA67: pop     ebp
0x67FA68: retn
