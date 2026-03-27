0x6A2967: mov     ecx, [ebp+0Ch]
0x6A296A: lea     eax, [esp+arg_14]
0x6A296E: push    eax
0x6A296F: call    EffectItem_GetName
0x6A2974: mov     ecx, ds:0B38EA0h
0x6A297A: mov     eax, [eax]
0x6A297C: push    ecx
0x6A297D: push    eax
0x6A297E: lea     edx, [esp+0Ch+string]
0x6A2982: push    offset aSS; "%s %s"
0x6A2987: push    edx
0x6A2988: call    __sprintf
0x6A298D: mov     eax, [esp+14h+arg_10]
0x6A2991: push    eax
0x6A2992: call    FormHeapFree
0x6A2997: fld     dword ptr ds:0A30634h
0x6A299D: add     esp, 10h
0x6A29A0: fstp    [esp+8+duration]; duration
0x6A29A3: push    1; unk2
0x6A29A5: lea     ecx, [esp+0Ch+string]
0x6A29A9: push    0; unk1
0x6A29AB: push    ecx; string
0x6A29AC: call    GameUI_QueueMessage
0x6A29B1: add     esp, 10h
