0x52C870: sub     esp, 10h
0x52C873: mov     eax, [esp+10h+arg_0]
0x52C877: push    ebp
0x52C878: push    edi
0x52C879: push    0; int
0x52C87B: push    offset ??_R0?AVTESRace@@@8; struct TypeDescriptor *
0x52C880: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52C885: mov     edi, ecx
0x52C887: push    0; int
0x52C889: push    eax; void *
0x52C88A: mov     [esp+2Ch+var_10], edi
0x52C88E: call    OblivionDynamicCast
0x52C893: mov     ebp, eax
0x52C895: add     esp, 14h
0x52C898: test    ebp, ebp
0x52C89A: mov     [esp+18h+var_4], ebp
0x52C89E: jnz     short loc_52C8AA
0x52C8A0: pop     edi
0x52C8A1: mov     al, 1
0x52C8A3: pop     ebp
0x52C8A4: add     esp, 10h
0x52C8A7: retn    4
0x52C8AA: push    ebp; a2
0x52C8AB: mov     ecx, edi; this
0x52C8AD: call    TESForm_CompareAllComponentsTo
0x52C8B2: test    al, al
0x52C8B4: jnz     short loc_52C8A0
0x52C8B6: push    ebx
0x52C8B7: mov     eax, 24h ; '$'
0x52C8BC: lea     ecx, [ebp+50h]
0x52C8BF: lea     edx, [edi+50h]
0x52C8C2: push    esi
0x52C8C3: mov     esi, [edx]
0x52C8C5: cmp     esi, [ecx]
0x52C8C7: jnz     short loc_52C8DB
0x52C8C9: sub     eax, 4
0x52C8CC: add     ecx, 4
0x52C8CF: add     edx, 4
0x52C8D2: cmp     eax, 4
0x52C8D5: jnb     short loc_52C8C3
0x52C8D7: test    eax, eax
0x52C8D9: jz      short loc_52C938
0x52C8DB: movzx   esi, byte ptr [edx]
0x52C8DE: movzx   ebx, byte ptr [ecx]
0x52C8E1: sub     esi, ebx
0x52C8E3: jnz     short loc_52C92A
0x52C8E5: sub     eax, 1
0x52C8E8: add     ecx, 1
0x52C8EB: add     edx, 1
0x52C8EE: test    eax, eax
0x52C8F0: jz      short loc_52C938
0x52C8F2: movzx   esi, byte ptr [edx]
0x52C8F5: movzx   ebx, byte ptr [ecx]
0x52C8F8: sub     esi, ebx
0x52C8FA: jnz     short loc_52C92A
0x52C8FC: sub     eax, 1
0x52C8FF: add     ecx, 1
0x52C902: add     edx, 1
0x52C905: test    eax, eax
0x52C907: jz      short loc_52C938
0x52C909: movzx   esi, byte ptr [edx]
0x52C90C: movzx   ebx, byte ptr [ecx]
0x52C90F: sub     esi, ebx
0x52C911: jnz     short loc_52C92A
0x52C913: sub     eax, 1
0x52C916: add     ecx, 1
0x52C919: add     edx, 1
0x52C91C: test    eax, eax
0x52C91E: jz      short loc_52C938
0x52C920: movzx   esi, byte ptr [edx]
0x52C923: movzx   ecx, byte ptr [ecx]
0x52C926: sub     esi, ecx
0x52C928: jz      short loc_52C938
0x52C92A: test    esi, esi
0x52C92C: mov     eax, 1
0x52C931: jg      short loc_52C93A
0x52C933: or      eax, 0FFFFFFFFh
0x52C936: jmp     short loc_52C93A
0x52C938: xor     eax, eax
0x52C93A: test    eax, eax
0x52C93C: jnz     loc_52CBB7
0x52C942: mov     ecx, [edi+300h]
0x52C948: test    ecx, ecx
0x52C94A: jnz     short loc_52C94E
0x52C94C: mov     ecx, edi
0x52C94E: mov     eax, [ebp+300h]
0x52C954: test    eax, eax
0x52C956: jnz     short loc_52C95A
0x52C958: mov     eax, ebp
0x52C95A: cmp     ecx, eax
0x52C95C: jnz     loc_52CBB7
0x52C962: mov     ecx, [edi+304h]
0x52C968: test    ecx, ecx
0x52C96A: jnz     short loc_52C96E
0x52C96C: mov     ecx, edi
0x52C96E: mov     eax, [ebp+304h]
0x52C974: test    eax, eax
0x52C976: jnz     short loc_52C97A
0x52C978: mov     eax, ebp
0x52C97A: cmp     ecx, eax
0x52C97C: jnz     loc_52CBB7
0x52C982: mov     edx, [edi+94h]
0x52C988: cmp     edx, [ebp+94h]
0x52C98E: jnz     loc_52CBB7
0x52C994: mov     eax, [edi+98h]
0x52C99A: cmp     eax, [ebp+98h]
0x52C9A0: jnz     loc_52CBB7
0x52C9A6: mov     cl, [edi+9Ch]
0x52C9AC: cmp     cl, [ebp+9Ch]
0x52C9B2: jnz     loc_52CBB7
0x52C9B8: mov     ecx, edi
0x52C9BA: call    sub_52B4C0
0x52C9BF: fstp    [esp+20h+var_C]
0x52C9C3: mov     ecx, ebp
0x52C9C5: call    sub_52B4C0
0x52C9CA: fld     [esp+20h+var_C]
0x52C9CE: fucompp
0x52C9D0: fnstsw  ax
0x52C9D2: test    ah, 44h
0x52C9D5: jp      loc_52CBB7
0x52C9DB: mov     ecx, edi
0x52C9DD: call    sub_52B4F0
0x52C9E2: fstp    [esp+20h+var_C]
0x52C9E6: mov     ecx, ebp
0x52C9E8: call    sub_52B4F0
0x52C9ED: fld     [esp+20h+var_C]
0x52C9F1: fucompp
0x52C9F3: fnstsw  ax
0x52C9F5: test    ah, 44h
0x52C9F8: jp      loc_52CBB7
0x52C9FE: mov     edx, [edi+74h]
0x52CA01: mov     edx, [edx+0Ch]
0x52CA04: lea     ecx, [edi+74h]
0x52CA07: lea     eax, [ebp+74h]
0x52CA0A: push    eax
0x52CA0B: call    edx
0x52CA0D: test    al, al
0x52CA0F: jnz     loc_52CBB7
0x52CA15: mov     eax, [edi+80h]
0x52CA1B: mov     eax, [eax+0Ch]
0x52CA1E: lea     ecx, [edi+80h]
0x52CA24: lea     edx, [ebp+80h]
0x52CA2A: push    edx
0x52CA2B: call    eax
0x52CA2D: test    al, al
0x52CA2F: jnz     loc_52CBB7
0x52CA35: xor     esi, esi
0x52CA37: lea     ebx, [edi+1B8h]
0x52CA3D: add     edi, 0E0h ; 'à'
0x52CA43: push    esi
0x52CA44: mov     ecx, ebp
0x52CA46: call    sub_52BC50
0x52CA4B: push    eax
0x52CA4C: mov     eax, [edi]
0x52CA4E: mov     edx, [eax+0Ch]
0x52CA51: mov     ecx, edi
0x52CA53: call    edx
0x52CA55: test    al, al
0x52CA57: jnz     loc_52CBB7
0x52CA5D: push    esi
0x52CA5E: mov     ecx, ebp
0x52CA60: call    sub_52BD00
0x52CA65: push    eax
0x52CA66: mov     eax, [ebx]
0x52CA68: mov     eax, [eax+0Ch]
0x52CA6B: mov     ecx, ebx
0x52CA6D: call    eax
0x52CA6F: test    al, al
0x52CA71: jnz     loc_52CBB7
0x52CA77: add     esi, 1
0x52CA7A: add     edi, 18h
0x52CA7D: add     ebx, 0Ch
0x52CA80: cmp     esi, 9
0x52CA83: jb      short loc_52CA43
0x52CA85: mov     eax, [esp+20h+var_10]
0x52CA89: mov     ebp, [esp+20h+var_10]
0x52CA8D: lea     ecx, [eax+224h]
0x52CA93: mov     [esp+20h+arg_0], ecx
0x52CA97: mov     ecx, [esp+20h+var_4]
0x52CA9B: xor     ebx, ebx
0x52CA9D: add     ebp, 0B0h ; '°'
0x52CAA3: sub     ecx, eax
0x52CAA5: mov     dword ptr [esp+20h+var_C], ecx
0x52CAA9: lea     esp, [esp+0]
0x52CAB0: mov     esi, [esp+20h+arg_0]
0x52CAB4: xor     edi, edi
0x52CAB6: mov     eax, dword ptr [esp+20h+var_C]
0x52CABA: mov     edx, [esi]
0x52CABC: mov     edx, [edx+0Ch]
0x52CABF: add     eax, esi
0x52CAC1: push    eax
0x52CAC2: mov     ecx, esi
0x52CAC4: call    edx
0x52CAC6: test    al, al
0x52CAC8: jnz     loc_52CBB7
0x52CACE: add     edi, 1
0x52CAD1: add     esi, 0Ch
0x52CAD4: cmp     edi, 5
0x52CAD7: jb      short loc_52CAB6
0x52CAD9: mov     ecx, dword ptr [esp+20h+var_C]
0x52CADD: mov     eax, [ebp+0]
0x52CAE0: mov     eax, [eax+0Ch]
0x52CAE3: lea     edx, [ecx+ebp]
0x52CAE6: push    edx
0x52CAE7: mov     ecx, ebp
0x52CAE9: call    eax
0x52CAEB: test    al, al
0x52CAED: jnz     loc_52CBB7
0x52CAF3: add     [esp+20h+arg_0], 3Ch ; '<'
0x52CAF8: add     ebx, 1
0x52CAFB: add     ebp, 18h
0x52CAFE: cmp     ebx, 2
0x52CB01: jb      short loc_52CAB0
0x52CB03: mov     edi, [esp+20h+var_10]
0x52CB07: mov     ebx, [esp+20h+var_4]
0x52CB0B: lea     ecx, [edi+8Ch]
0x52CB11: lea     esi, [ebx+8Ch]
0x52CB17: call    BSSimpleList_Count
0x52CB1C: mov     ecx, esi
0x52CB1E: mov     ebp, eax
0x52CB20: call    BSSimpleList_Count
0x52CB25: cmp     ebp, eax
0x52CB27: jnz     loc_52CBB7
0x52CB2D: test    esi, esi
0x52CB2F: jz      short loc_52CB4D
0x52CB31: mov     eax, [esi]
0x52CB33: test    eax, eax
0x52CB35: jz      short loc_52CB4D
0x52CB37: mov     ecx, [eax+0Ch]
0x52CB3A: push    ecx
0x52CB3B: mov     ecx, edi
0x52CB3D: call    sub_52B520
0x52CB42: test    eax, eax
0x52CB44: jz      short loc_52CBB7
0x52CB46: mov     esi, [esi+4]
0x52CB49: test    esi, esi
0x52CB4B: jnz     short loc_52CB31
0x52CB4D: lea     ecx, [edi+0A8h]
0x52CB53: lea     esi, [ebx+0A8h]
0x52CB59: call    BSSimpleList_Count
0x52CB5E: mov     ecx, esi
0x52CB60: mov     ebp, eax
0x52CB62: call    BSSimpleList_Count
0x52CB67: cmp     ebp, eax
0x52CB69: jnz     short loc_52CBB7
0x52CB6B: test    esi, esi
0x52CB6D: jz      short loc_52CB8C
0x52CB6F: nop
0x52CB70: mov     eax, [esi]
0x52CB72: test    eax, eax
0x52CB74: jz      short loc_52CB8C
0x52CB76: mov     edx, [eax+0Ch]
0x52CB79: push    edx
0x52CB7A: mov     ecx, edi
0x52CB7C: call    sub_52B5E0
0x52CB81: test    eax, eax
0x52CB83: jz      short loc_52CBB7
0x52CB85: mov     esi, [esi+4]
0x52CB88: test    esi, esi
0x52CB8A: jnz     short loc_52CB70
0x52CB8C: lea     eax, [edi+29Ch]
0x52CB92: push    eax
0x52CB93: lea     ecx, [ebx+29Ch]
0x52CB99: push    ecx
0x52CB9A: call    sub_551990
0x52CB9F: add     esp, 8
0x52CBA2: test    al, al
0x52CBA4: jz      short loc_52CBC3
0x52CBA6: push    0; Seed
0x52CBA8: call    GetRandomLargeInteger?
0x52CBAD: add     esp, 4
0x52CBB0: mov     [edi+2FCh], ax
0x52CBB7: pop     esi
0x52CBB8: pop     ebx
0x52CBB9: pop     edi
0x52CBBA: mov     al, 1
0x52CBBC: pop     ebp
0x52CBBD: add     esp, 10h
0x52CBC0: retn    4
0x52CBC3: mov     dx, [edi+2FCh]
0x52CBCA: cmp     dx, [ebx+2FCh]
0x52CBD1: pop     esi
0x52CBD2: pop     ebx
0x52CBD3: pop     edi
0x52CBD4: setnz   al
0x52CBD7: pop     ebp
0x52CBD8: add     esp, 10h
0x52CBDB: retn    4
