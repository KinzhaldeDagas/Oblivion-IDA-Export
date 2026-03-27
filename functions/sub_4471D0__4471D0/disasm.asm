0x4471D0: push    0FFFFFFFFh
0x4471D2: push    offset SEH_7C4B50
0x4471D7: mov     eax, large fs:0
0x4471DD: push    eax
0x4471DE: push    ecx
0x4471DF: push    ebx
0x4471E0: push    ebp
0x4471E1: push    esi
0x4471E2: push    edi
0x4471E3: mov     eax, ds:0B30AACh
0x4471E8: xor     eax, esp
0x4471EA: push    eax
0x4471EB: lea     eax, [esp+24h+var_C]
0x4471EF: mov     large fs:0, eax
0x4471F5: mov     ebp, [esp+24h+arg_C]
0x4471F9: xor     esi, esi
0x4471FB: cmp     ebp, esi
0x4471FD: jz      loc_4472A7
0x447203: push    58h ; 'X'; Size
0x447205: call    FormHeapAlloc
0x44720A: add     esp, 4
0x44720D: mov     [esp+24h+arg_C], eax
0x447211: cmp     eax, esi
0x447213: mov     [esp+24h+var_4], esi
0x447217: jz      short loc_447222
0x447219: mov     ecx, eax
0x44721B: call    TESObjectCELL_constr
0x447220: mov     esi, eax
0x447222: mov     edi, [esp+24h+arg_8]
0x447226: mov     ebx, [esp+24h+arg_4]
0x44722A: mov     eax, [ebp+0Ch]
0x44722D: mov     ecx, ds:0B33B00h
0x447233: push    edi
0x447234: push    ebx
0x447235: push    eax
0x447236: mov     [esp+30h+var_4], 0FFFFFFFFh
0x44723E: mov     [esp+30h+var_10], esi
0x447242: call    sub_459790
0x447247: test    eax, eax
0x447249: jz      short loc_447255
0x44724B: push    1; a3
0x44724D: push    eax; a2
0x44724E: mov     ecx, esi; this
0x447250: call    TESForm_SetFormID
0x447255: mov     eax, [esp+24h+arg_0]
0x447259: test    eax, eax
0x44725B: jz      short loc_44726A
0x44725D: mov     edx, [esi]
0x44725F: push    eax
0x447260: mov     eax, [edx+0D8h]
0x447266: mov     ecx, esi
0x447268: call    eax
0x44726A: push    0
0x44726C: mov     ecx, esi
0x44726E: call    TESObjectCELL__SetIsInterior
0x447273: push    2
0x447275: mov     ecx, esi
0x447277: call    sub_4C97E0
0x44727C: mov     ecx, esi
0x44727E: call    sub_4CA710
0x447283: push    edi
0x447284: push    ebx
0x447285: mov     ecx, esi
0x447287: call    sub_4C9AC0
0x44728C: push    esi
0x44728D: mov     ecx, ebp
0x44728F: call    sub_4EFEF0
0x447294: test    al, al
0x447296: jnz     short loc_4472AB
0x447298: test    esi, esi
0x44729A: jz      short loc_4472A7
0x44729C: mov     edx, [esi]
0x44729E: mov     eax, [edx+10h]
0x4472A1: push    1
0x4472A3: mov     ecx, esi
0x4472A5: call    eax
0x4472A7: xor     eax, eax
0x4472A9: jmp     short loc_4472E8
0x4472AB: mov     ecx, ds:0B33B00h
0x4472B1: call    sub_45A500
0x4472B6: test    al, al
0x4472B8: setz    cl
0x4472BB: mov     byte ptr [esp+24h+arg_C], al
0x4472BF: push    ecx
0x4472C0: mov     ecx, ds:0B33B00h
0x4472C6: call    sub_45A530
0x4472CB: mov     edx, [esi]
0x4472CD: mov     eax, [edx+6Ch]
0x4472D0: mov     ecx, esi
0x4472D2: call    eax
0x4472D4: mov     ecx, [esp+24h+arg_C]
0x4472D8: push    ecx
0x4472D9: mov     ecx, ds:0B33B00h
0x4472DF: call    sub_45A530
0x4472E4: mov     eax, [esp+24h+var_10]
0x4472E8: mov     ecx, dword ptr [esp+24h+var_C]
0x4472EC: mov     large fs:0, ecx
0x4472F3: pop     ecx
0x4472F4: pop     edi
0x4472F5: pop     esi
0x4472F6: pop     ebp
0x4472F7: pop     ebx
0x4472F8: add     esp, 10h
0x4472FB: retn    10h
