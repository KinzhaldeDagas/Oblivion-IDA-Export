0x6CE540: sub     esp, 24h
0x6CE543: fld     [esp+24h+arg_C]
0x6CE547: mov     edx, [esp+24h+arg_0]
0x6CE54B: push    ebx
0x6CE54C: push    ebp
0x6CE54D: push    ecx
0x6CE54E: fstp    [esp+30h+var_30]; float
0x6CE551: mov     ebp, ecx
0x6CE553: mov     ecx, [esp+30h+arg_8]
0x6CE557: fld     [esp+30h+arg_4]
0x6CE55B: mov     al, [ebp+0Fh]
0x6CE55E: push    ecx; float
0x6CE55F: push    ecx
0x6CE560: fstp    dword ptr [esp+38h+var_38]; char
0x6CE563: push    edx; int
0x6CE564: mov     ecx, ebp
0x6CE566: mov     [esp+3Ch+var_21], al
0x6CE56A: call    sub_6CC5C0
0x6CE56F: mov     bl, al
0x6CE571: cmp     bl, ds:0A79EFCh
0x6CE577: jz      short loc_6CE5F1
0x6CE579: movzx   ecx, bl
0x6CE57C: imul    ecx, 68h ; 'h'
0x6CE57F: add     ecx, [ebp+50h]
0x6CE582: call    sub_6C3500
0x6CE587: mov     al, [ebp+0Eh]
0x6CE58A: cmp     al, 1
0x6CE58C: jnz     short loc_6CE59B
0x6CE58E: mov     [ebp+54h], al
0x6CE591: pop     ebp
0x6CE592: mov     al, bl
0x6CE594: pop     ebx
0x6CE595: add     esp, 24h
0x6CE598: retn    10h
0x6CE59B: cmp     al, 2
0x6CE59D: jnz     short loc_6CE5F1
0x6CE59F: push    edi
0x6CE5A0: lea     edi, [ebp+30h]
0x6CE5A3: mov     ecx, edi
0x6CE5A5: call    sub_6CBC10
0x6CE5AA: test    al, al
0x6CE5AC: jnz     short loc_6CE5E0
0x6CE5AE: movzx   eax, [esp+30h+var_21]
0x6CE5B3: mov     ecx, [ebp+50h]
0x6CE5B6: imul    eax, 68h ; 'h'
0x6CE5B9: push    esi
0x6CE5BA: lea     esi, [eax+ecx+4]
0x6CE5BE: mov     ecx, esi
0x6CE5C0: call    sub_6CBC10
0x6CE5C5: test    al, al
0x6CE5C7: jnz     short loc_6CE5DF
0x6CE5C9: push    esi
0x6CE5CA: lea     edx, [esp+38h+var_20]
0x6CE5CE: push    edx
0x6CE5CF: mov     ecx, edi
0x6CE5D1: call    sub_6CB640
0x6CE5D6: mov     ecx, 8
0x6CE5DB: mov     esi, eax
0x6CE5DD: rep movsd
0x6CE5DF: pop     esi
0x6CE5E0: movzx   ecx, [esp+30h+var_21]
0x6CE5E5: imul    ecx, 68h ; 'h'
0x6CE5E8: add     ecx, [ebp+50h]
0x6CE5EB: call    sub_6C3500
0x6CE5F0: pop     edi
0x6CE5F1: pop     ebp
0x6CE5F2: mov     al, bl
0x6CE5F4: pop     ebx
0x6CE5F5: add     esp, 24h
0x6CE5F8: retn    10h
