0x410E40: push    ecx; lpThreadId
0x410E41: mov     ecx, [esp+4+lpParameter]
0x410E45: lea     eax, [esp+4+ThreadId]
0x410E48: push    eax; dwCreationFlags
0x410E49: push    4; lpParameter
0x410E4B: push    ecx; lpStartAddress
0x410E4C: push    offset StartAddress; lpStartAddress
0x410E51: push    0; dwStackSize
0x410E53: push    0; lpThreadAttributes
0x410E55: call    ds:CreateThread
0x410E5B: mov     edx, [esp+4+ThreadId]
0x410E5E: push    offset aMovieplayer; "MoviePlayer"
0x410E63: push    edx
0x410E64: mov     hHandle, eax
0x410E69: call    sub_747830
0x410E6E: mov     al, [esp+0Ch+arg_4]
0x410E72: mov     byte_B33427, al
0x410E77: mov     eax, [esp+0Ch+arg_8]
0x410E7B: add     esp, 8
0x410E7E: cmp     eax, 0FFFFFFFFh
0x410E81: jnz     short loc_410E8C
0x410E83: mov     ecx, dword_B030C4
0x410E89: push    ecx
0x410E8A: jmp     short loc_410E8D
0x410E8C: push    eax
0x410E8D: call    BSThread_SetPriority
0x410E92: mov     edx, hHandle
0x410E98: add     esp, 4
0x410E9B: push    edx; hThread
0x410E9C: call    ds:ResumeThread
0x410EA2: pop     ecx
0x410EA3: retn
