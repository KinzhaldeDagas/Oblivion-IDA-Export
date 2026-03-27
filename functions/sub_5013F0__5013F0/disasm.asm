0x5013F0: cmp     byte ptr ds:0B3BDA0h, 0
0x5013F7: setz    al
0x5013FA: cmp     byte ptr ds:0B361ACh, 0
0x501401: mov     ds:0B3BDA0h, al
0x501406: jz      short loc_501429
0x501408: test    al, al
0x50140A: mov     eax, offset aOn_0
0x50140F: jnz     short loc_501416
0x501411: mov     eax, offset aOff
0x501416: push    eax
0x501417: push    offset aAiProcessingFo; "AI Processing for actors in high is  %s"
0x50141C: call    Interface_ConsolePrint
0x501421: mov     al, ds:0B3BDA0h
0x501426: add     esp, 8
0x501429: test    al, al
0x50142B: jnz     short loc_501437
0x50142D: mov     ecx, offset ActorProcessManager_ptr
0x501432: call    sub_675880
0x501437: mov     al, 1
0x501439: retn
