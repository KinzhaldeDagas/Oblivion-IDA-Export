0x5F403F: mov     ecx, esi; this
0x5F4041: call    TESObjectREFR_GetName
0x5F4046: push    eax; ArgList
0x5F4047: push    offset aSDoesnTHaveANo; "%s doesn't have a NORMAL power attack a"...
0x5F404C: call    PrintError
0x5F4051: add     esp, 8
0x5F4054: mov     ecx, [esp+arg_20]
0x5F4058: mov     large fs:0, ecx
0x5F405F: pop     ecx
0x5F4060: pop     edi
0x5F4061: pop     esi
0x5F4062: pop     ebp
0x5F4063: pop     ebx
0x5F4064: add     esp, 1Ch
0x5F4067: retn
