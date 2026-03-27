0x5C91E0: push    0FFFFFFFFh
0x5C91E2: push    offset SEH_5C91E0
0x5C91E7: mov     eax, large fs:0
0x5C91ED: push    eax
0x5C91EE: sub     esp, 0CCh
0x5C91F4: push    ebx
0x5C91F5: push    ebp
0x5C91F6: push    esi
0x5C91F7: push    edi
0x5C91F8: mov     eax, ds:0B30AACh
0x5C91FD: xor     eax, esp
0x5C91FF: push    eax
0x5C9200: lea     eax, [esp+0ECh+var_C]
0x5C9207: mov     large fs:0, eax
0x5C920D: mov     ecx, ds:0B333C4h
0x5C9213: mov     eax, [ecx]
0x5C9215: mov     edx, [eax+170h]
0x5C921B: call    edx
0x5C921D: mov     ecx, ds:0B333C4h; this
0x5C9223: xor     ebx, ebx
0x5C9225: push    ebx; a2
0x5C9226: mov     edi, eax
0x5C9228: call    Player_GetAnimData
0x5C922D: test    eax, eax
0x5C922F: jz      short loc_5C925A
0x5C9231: mov     ecx, ds:0B333C4h; this
0x5C9237: push    ebx; a2
0x5C9238: call    Player_GetAnimData
0x5C923D: cmp     [eax+98h], ebx
0x5C9243: jz      short loc_5C925A
0x5C9245: mov     ecx, ds:0B333C4h; this
0x5C924B: push    ebx; a2
0x5C924C: call    Player_GetAnimData
0x5C9251: mov     eax, [eax+98h]
0x5C9257: mov     ebx, [eax+7Ch]
0x5C925A: mov     ecx, ds:0B333C4h
0x5C9260: mov     eax, [ecx]
0x5C9262: mov     edx, [eax+134h]
0x5C9268: push    0
0x5C926A: call    edx
0x5C926C: mov     ebp, ds:0A2807Ch
0x5C9272: mov     esi, eax
0x5C9274: test    esi, esi
0x5C9276: jz      short loc_5C92BD
0x5C9278: cmp     dword ptr [esi+1Ch], 0
0x5C927C: jz      short loc_5C92BD
0x5C927E: push    ebx
0x5C927F: push    esi
0x5C9280: call    sub_716620
0x5C9285: mov     ecx, [esi+1Ch]
0x5C9288: mov     eax, [ecx]
0x5C928A: mov     eax, [eax+88h]
0x5C9290: add     esp, 8
0x5C9293: push    esi
0x5C9294: lea     edx, [esp+0F0h+var_D4]
0x5C9298: push    edx
0x5C9299: call    eax
0x5C929B: mov     eax, [esp+0ECh+var_D4]
0x5C929F: test    eax, eax
0x5C92A1: jz      short loc_5C92BD
0x5C92A3: mov     esi, eax
0x5C92A5: add     eax, 4
0x5C92A8: push    eax; lpAddend
0x5C92A9: call    ebp ; InterlockedDecrement
0x5C92AB: test    eax, eax
0x5C92AD: jnz     short loc_5C92BD
0x5C92AF: test    esi, esi
0x5C92B1: jz      short loc_5C92BD
0x5C92B3: mov     edx, [esi]
0x5C92B5: mov     eax, [edx]
0x5C92B7: push    1
0x5C92B9: mov     ecx, esi
0x5C92BB: call    eax
0x5C92BD: mov     ecx, ds:0B333C4h
0x5C92C3: mov     edx, [ecx]
0x5C92C5: mov     eax, [edx+130h]
0x5C92CB: push    0
0x5C92CD: call    eax
0x5C92CF: mov     esi, eax
0x5C92D1: test    esi, esi
0x5C92D3: jz      short loc_5C931A
0x5C92D5: cmp     dword ptr [esi+1Ch], 0
0x5C92D9: jz      short loc_5C931A
0x5C92DB: push    ebx
0x5C92DC: push    esi
0x5C92DD: call    sub_716620
0x5C92E2: mov     ecx, [esi+1Ch]
0x5C92E5: mov     edx, [ecx]
0x5C92E7: mov     edx, [edx+88h]
0x5C92ED: add     esp, 8
0x5C92F0: push    esi
0x5C92F1: lea     eax, [esp+0F0h+var_D8]
0x5C92F5: push    eax
0x5C92F6: call    edx
0x5C92F8: mov     eax, dword ptr [esp+0ECh+var_D8]
0x5C92FC: test    eax, eax
0x5C92FE: jz      short loc_5C931A
0x5C9300: mov     esi, eax
0x5C9302: add     eax, 4
0x5C9305: push    eax; lpAddend
0x5C9306: call    ebp ; InterlockedDecrement
0x5C9308: test    eax, eax
0x5C930A: jnz     short loc_5C931A
0x5C930C: test    esi, esi
0x5C930E: jz      short loc_5C931A
0x5C9310: mov     eax, [esi]
0x5C9312: mov     edx, [eax]
0x5C9314: push    1
0x5C9316: mov     ecx, esi
0x5C9318: call    edx
0x5C931A: mov     eax, ds:0B333C4h
0x5C931F: mov     ecx, [eax+58h]
0x5C9322: mov     edx, [ecx]
0x5C9324: mov     eax, [edx+5Ch]
0x5C9327: call    eax
0x5C9329: mov     ecx, edi
0x5C932B: call    sub_405CE0
0x5C9330: mov     ecx, ds:0B333C4h
0x5C9336: mov     edx, [ecx]
0x5C9338: mov     eax, [edx+168h]
0x5C933E: call    eax
0x5C9340: mov     ecx, ds:0B333C4h
0x5C9346: push    eax
0x5C9347: push    ecx
0x5C9348: mov     ecx, edi
0x5C934A: call    sub_525A70
0x5C934F: lea     ecx, [esp+0E4h+var_C8]
0x5C9353: call    FaceGenHeadParameters_Ctor
0x5C9358: mov     ecx, [edi+0E8h]
0x5C935E: lea     edx, [esp+0E4h+var_C8]
0x5C9362: push    edx
0x5C9363: push    edi
0x5C9364: mov     [esp+0ECh+arg_0], 0
0x5C936F: call    TESRace_GetFaceGenHeadParameters
0x5C9374: mov     ecx, ds:0B333C4h
0x5C937A: mov     edx, [ecx]
0x5C937C: lea     eax, [esp+0E4h+var_C8]
0x5C9380: push    eax
0x5C9381: mov     eax, [edx+130h]
0x5C9387: push    0
0x5C9389: call    eax
0x5C938B: push    eax
0x5C938C: call    BSFaceGen_DoSomethingWithFaceGenNode
0x5C9391: add     esp, 8
0x5C9394: lea     ecx, [esp+0E8h+var_CC]
0x5C9398: push    ecx
0x5C9399: mov     ecx, ds:0B333C4h
0x5C939F: mov     edx, [ecx]
0x5C93A1: mov     eax, [edx+134h]
0x5C93A7: push    0
0x5C93A9: call    eax
0x5C93AB: push    eax
0x5C93AC: call    BSFaceGen_DoSomethingWithFaceGenNode
0x5C93B1: add     esp, 8
0x5C93B4: call    UpdatePlayerHead
0x5C93B9: lea     ecx, [esp+0ECh+var_D0]
0x5C93BD: mov     [esp+0ECh+var_4], 0FFFFFFFFh
0x5C93C8: call    FaceGenHeadParameters_Dtor
0x5C93CD: mov     ecx, dword ptr [esp+0ECh+var_C]
0x5C93D4: mov     large fs:0, ecx
0x5C93DB: pop     ecx
0x5C93DC: pop     edi
0x5C93DD: pop     esi
0x5C93DE: pop     ebp
0x5C93DF: pop     ebx
0x5C93E0: add     esp, 0D8h
0x5C93E6: retn
