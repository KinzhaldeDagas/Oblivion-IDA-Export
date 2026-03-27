0x413AC7: push    ecx
0x413AC8: call    ActorValue_GetName
0x413ACD: mov     edx, [esp+4+arg_C]
0x413AD1: push    eax
0x413AD2: push    esi
0x413AD3: push    offset aSS; "%s %s"
0x413AD8: push    edx
0x413AD9: call    __sprintf
0x413ADE: add     esp, 14h
0x413AE1: pop     esi
0x413AE2: add     esp, 8
0x413AE5: retn    4
