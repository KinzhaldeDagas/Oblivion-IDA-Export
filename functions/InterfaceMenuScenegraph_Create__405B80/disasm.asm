0x405B80: push    0FFFFFFFFh
0x405B82: push    offset SEH_8C8970
0x405B87: mov     eax, large fs:0
0x405B8D: push    eax
0x405B8E: push    ecx
0x405B8F: push    esi
0x405B90: push    edi
0x405B91: mov     eax, ___security_cookie
0x405B96: xor     eax, esp
0x405B98: push    eax
0x405B99: lea     eax, [esp+1Ch+var_C]
0x405B9D: mov     large fs:0, eax
0x405BA3: push    0F0h ; 'ð'; Size
0x405BA8: call    FormHeapAlloc
0x405BAD: add     esp, 4
0x405BB0: mov     [esp+1Ch+var_10], eax
0x405BB4: test    eax, eax
0x405BB6: mov     [esp+1Ch+var_4], 0
0x405BBE: jz      short loc_405BD4
0x405BC0: push    0
0x405BC2: push    1
0x405BC4: push    offset aMenu; "Menu"
0x405BC9: mov     ecx, eax; this
0x405BCB: call    ??0SceneGraph@@QAE@XZ; SceneGraph::SceneGraph(void)
0x405BD0: mov     esi, eax
0x405BD2: jmp     short loc_405BD6
0x405BD4: xor     esi, esi
0x405BD6: mov     edi, g_InterfaceScenegraph
0x405BDC: cmp     edi, esi
0x405BDE: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x405BE6: jz      short loc_405C1C
0x405BE8: test    edi, edi
0x405BEA: jz      short loc_405C08
0x405BEC: lea     eax, [edi+4]
0x405BEF: push    eax; lpAddend
0x405BF0: call    ds:InterlockedDecrement
0x405BF6: test    eax, eax
0x405BF8: jnz     short loc_405C08
0x405BFA: test    edi, edi
0x405BFC: jz      short loc_405C08
0x405BFE: mov     edx, [edi]
0x405C00: mov     eax, [edx]
0x405C02: push    1
0x405C04: mov     ecx, edi
0x405C06: call    eax
0x405C08: test    esi, esi
0x405C0A: mov     g_InterfaceScenegraph, esi
0x405C10: jz      short loc_405C1C
0x405C12: add     esi, 4
0x405C15: push    esi; lpAddend
0x405C16: call    ds:InterlockedIncrement
0x405C1C: mov     ecx, dword ptr [esp+1Ch+var_C]
0x405C20: mov     large fs:0, ecx
0x405C27: pop     ecx
0x405C28: pop     edi
0x405C29: pop     esi
0x405C2A: add     esp, 10h
0x405C2D: retn
