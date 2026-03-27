0x43C530: push    ecx
0x43C531: mov     eax, [esp+4+arg_0]
0x43C535: test    eax, eax
0x43C537: push    esi
0x43C538: mov     esi, [ecx+18h]
0x43C53B: push    edi
0x43C53C: mov     edi, ds:InterlockedIncrement
0x43C542: push    ecx
0x43C543: mov     ecx, esp
0x43C545: mov     [esp+10h+var_4], esp
0x43C549: mov     [ecx], eax
0x43C54B: jz      short loc_43C553
0x43C54D: add     eax, 8
0x43C550: push    eax; lpAddend
0x43C551: call    edi ; InterlockedIncrement
0x43C553: mov     ecx, [esi+28h]
0x43C556: call    sub_43A5F0
0x43C55B: mov     eax, [esi+0Ch]
0x43C55E: add     esi, 0Ch
0x43C561: test    eax, eax
0x43C563: jnz     short loc_43C578
0x43C565: push    esi; lpAddend
0x43C566: call    edi ; InterlockedIncrement
0x43C568: mov     ecx, [esi+8]
0x43C56B: push    0; lpPreviousCount
0x43C56D: push    1; lReleaseCount
0x43C56F: push    ecx; hSemaphore
0x43C570: call    ds:ReleaseSemaphore
0x43C576: mov     edx, [esi]
0x43C578: pop     edi
0x43C579: pop     esi
0x43C57A: pop     ecx
0x43C57B: retn    4
