0x410390: sub     esp, 20h
0x410393: push    esi
0x410394: mov     esi, ds:PeekMessageA
0x41039A: push    1; wRemoveMsg
0x41039C: push    0; wMsgFilterMax
0x41039E: push    0; wMsgFilterMin
0x4103A0: push    0; hWnd
0x4103A2: lea     eax, [esp+34h+Msg]
0x4103A6: push    eax; lpMsg
0x4103A7: call    esi ; PeekMessageA
0x4103A9: test    eax, eax
0x4103AB: jz      short loc_4103E3
0x4103AD: push    ebx
0x4103AE: mov     ebx, ds:DispatchMessageA
0x4103B4: push    edi
0x4103B5: mov     edi, ds:TranslateMessage
0x4103BB: jmp     short loc_4103C0
0x4103BD: align 10h
0x4103C0: lea     ecx, [esp+2Ch+Msg]
0x4103C4: push    ecx; lpMsg
0x4103C5: call    edi ; TranslateMessage
0x4103C7: lea     edx, [esp+2Ch+Msg]
0x4103CB: push    edx; lpMsg
0x4103CC: call    ebx ; DispatchMessageA
0x4103CE: push    1; wRemoveMsg
0x4103D0: push    0; wMsgFilterMax
0x4103D2: push    0; wMsgFilterMin
0x4103D4: push    0; hWnd
0x4103D6: lea     eax, [esp+3Ch+Msg]
0x4103DA: push    eax; lpMsg
0x4103DB: call    esi ; PeekMessageA
0x4103DD: test    eax, eax
0x4103DF: jnz     short loc_4103C0
0x4103E1: pop     edi
0x4103E2: pop     ebx
0x4103E3: mov     ecx, g_Renderer
0x4103E9: mov     eax, [ecx+280h]
0x4103EF: mov     edx, [eax]
0x4103F1: push    eax
0x4103F2: mov     eax, [edx+0Ch]
0x4103F5: call    eax
0x4103F7: test    eax, eax
0x4103F9: jl      loc_4104B3
0x4103FF: cmp     byte_B33426, 0
0x410406: jnz     loc_4104B3
0x41040C: push    1; arg1
0x41040E: push    0; canCreate
0x410410: call    InterfaceManager_GetSingleton
0x410415: add     esp, 8
0x410418: test    eax, eax
0x41041A: jz      short loc_41043C
0x41041C: mov     eax, ObjectPtr
0x410421: test    eax, eax
0x410423: jz      short loc_41043C
0x410425: cmp     dword ptr [eax+20h], 2
0x410429: jz      short loc_41043C
0x41042B: push    3E9h
0x410430: call    Menu_GetOpenMenuTile
0x410435: add     esp, 4
0x410438: test    eax, eax
0x41043A: jnz     short loc_4104B3
0x41043C: cmp     [esp+24h+arg_0], 0
0x410441: jnz     short loc_41044C
0x410443: cmp     byte_B33425, 0
0x41044A: jz      short loc_41047A
0x41044C: mov     ecx, OSGlobals
0x410452: mov     esi, [ecx+20h]
0x410455: mov     ecx, esi; this
0x410457: call    InputGlobals__PollAndUpdateInputState
0x41045C: push    1; a3
0x41045E: push    5; a2
0x410460: mov     ecx, esi; this
0x410462: call    InputGlobals__QueryControlState
0x410467: test    eax, eax
0x410469: jnz     short loc_410481
0x41046B: push    1; a3
0x41046D: push    1Dh; a2
0x41046F: mov     ecx, esi; this
0x410471: call    InputGlobals__QueryControlState
0x410476: test    eax, eax
0x410478: jnz     short loc_410481
0x41047A: mov     al, 1
0x41047C: pop     esi
0x41047D: add     esp, 20h
0x410480: retn
0x410481: mov     eax, hHandle
0x410486: test    eax, eax
0x410488: jz      short loc_4104AC
0x41048A: lea     edx, [esp+24h+ExitCode]
0x41048E: push    edx; lpExitCode
0x41048F: push    eax; hThread
0x410490: call    ds:GetExitCodeThread
0x410496: cmp     [esp+24h+ExitCode], 103h
0x41049E: setz    al
0x4104A1: test    al, al
0x4104A3: jz      short loc_4104AC
0x4104A5: mov     byte_B33426, 1
0x4104AC: mov     ecx, esi; this
0x4104AE: call    InputGlobals__PollAndUpdateInputState
0x4104B3: xor     al, al
0x4104B5: pop     esi
0x4104B6: add     esp, 20h
0x4104B9: retn
