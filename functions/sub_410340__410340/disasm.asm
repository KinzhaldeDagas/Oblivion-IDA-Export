0x410340: cmp     ObjectPtr, 0
0x410347: jz      short locret_410385
0x410349: cmp     dword_B3342C, 0
0x410350: jz      short loc_41035F
0x410352: push    offset aTryingToPauseA; "Trying to pause a movie while another m"...
0x410357: call    PrintError
0x41035C: add     esp, 4
0x41035F: mov     eax, ObjectPtr
0x410364: mov     ecx, [eax]
0x410366: push    1
0x410368: push    ecx
0x410369: call    ds:_BinkPause@8; BinkPause(x,x)
0x41036F: mov     edx, ObjectPtr
0x410375: mov     dword_B3342C, edx
0x41037B: mov     ObjectPtr, 0
0x410385: retn
