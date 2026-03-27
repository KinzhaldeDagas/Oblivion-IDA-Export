0x7BA2F0: push    0FFFFFFFFh
0x7BA2F2: push    offset SEH_803C90
0x7BA2F7: mov     eax, large fs:0
0x7BA2FD: push    eax
0x7BA2FE: push    ecx
0x7BA2FF: push    ebx
0x7BA300: push    esi
0x7BA301: mov     eax, ds:0B30AACh
0x7BA306: xor     eax, esp
0x7BA308: push    eax
0x7BA309: lea     eax, [esp+1Ch+var_C]
0x7BA30D: mov     large fs:0, eax
0x7BA313: xor     ebx, ebx
0x7BA315: cmp     ds:0B42F31h, bl
0x7BA31B: jnz     short loc_7BA334
0x7BA31D: call    sub_7BA0F0
0x7BA322: mov     ecx, [esp+1Ch+var_C]
0x7BA326: mov     large fs:0, ecx
0x7BA32D: pop     ecx
0x7BA32E: pop     esi
0x7BA32F: pop     ebx
0x7BA330: add     esp, 10h
0x7BA333: retn
0x7BA334: call    sub_7B84E0
0x7BA339: mov     eax, ds:0B42EBCh
0x7BA33E: mov     ecx, [eax+0Ch]
0x7BA341: mov     esi, eax
0x7BA343: call    NiTMap_Clear
0x7BA348: mov     ecx, [esi+8]
0x7BA34B: call    NiTMap_Clear
0x7BA350: call    sub_7E30F0
0x7BA355: call    sub_7F3BA0
0x7BA35A: mov     ecx, ds:0B42D7Ch
0x7BA360: cmp     ecx, ebx
0x7BA362: jz      short loc_7BA37A
0x7BA364: mov     esi, ecx
0x7BA366: call    ImageSpaceShaderList__Destroy
0x7BA36B: push    esi
0x7BA36C: call    FormHeapFree
0x7BA371: add     esp, 4
0x7BA374: mov     ds:0B42D7Ch, ebx
0x7BA37A: mov     ecx, ds:0B42F50h; this
0x7BA380: cmp     ecx, ebx
0x7BA382: jz      short loc_7BA39A
0x7BA384: mov     esi, ecx
0x7BA386: call    BSTextureManager_Delete
0x7BA38B: push    esi
0x7BA38C: call    FormHeapFree
0x7BA391: add     esp, 4
0x7BA394: mov     ds:0B42F50h, ebx
0x7BA39A: push    ebx
0x7BA39B: call    sub_7AB1D0
0x7BA3A0: push    48h ; 'H'; Size
0x7BA3A2: mov     ds:0B42EB8h, ebx
0x7BA3A8: call    FormHeapAlloc
0x7BA3AD: add     esp, 8
0x7BA3B0: mov     [esp+1Ch+var_10], eax
0x7BA3B4: cmp     eax, ebx
0x7BA3B6: mov     [esp+1Ch+var_4], ebx
0x7BA3BA: jz      short loc_7BA3C5
0x7BA3BC: mov     ecx, eax
0x7BA3BE: call    BSTextureManager_Create
0x7BA3C3: jmp     short loc_7BA3C7
0x7BA3C5: xor     eax, eax
0x7BA3C7: mov     ecx, ds:0B43104h
0x7BA3CD: push    ecx
0x7BA3CE: mov     ecx, eax
0x7BA3D0: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7BA3D8: mov     ds:0B42F50h, eax
0x7BA3DD: call    sub_7C2450
0x7BA3E2: push    1
0x7BA3E4: call    sub_7AB1D0
0x7BA3E9: add     esp, 4
0x7BA3EC: cmp     ds:0B43104h, ebx
0x7BA3F2: jz      short loc_7BA426
0x7BA3F4: cmp     ds:0B42F3Eh, bl
0x7BA3FA: jz      short loc_7BA426
0x7BA3FC: push    1Ch; Size
0x7BA3FE: call    FormHeapAlloc
0x7BA403: add     esp, 4
0x7BA406: mov     [esp+1Ch+var_10], eax
0x7BA40A: cmp     eax, ebx
0x7BA40C: mov     [esp+1Ch+var_4], 1
0x7BA414: jz      short loc_7BA41F
0x7BA416: mov     ecx, eax
0x7BA418: call    ImageSpaceshaderList__Create; Treat this list as a de facto subclass of a standard NiTPointerList as this is bigger of 3 UInt32
0x7BA41D: jmp     short loc_7BA421
0x7BA41F: xor     eax, eax
0x7BA421: mov     ds:0B42D7Ch, eax
0x7BA426: mov     ecx, [esp+1Ch+var_C]
0x7BA42A: mov     large fs:0, ecx
0x7BA431: pop     ecx
0x7BA432: pop     esi
0x7BA433: pop     ebx
0x7BA434: add     esp, 10h
0x7BA437: retn
