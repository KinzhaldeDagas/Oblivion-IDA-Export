0x7485F0: sub     esp, 8
0x7485F3: cmp     byte ptr ds:0B27EB2h, 0
0x7485FA: push    esi
0x7485FB: mov     esi, ds:0A28158h
0x748601: jz      short loc_74861C
0x748603: push    offset stru_B407B0; lpFrequency
0x748608: call    dword ptr ds:0A2815Ch
0x74860E: push    offset stru_B40790.SpinCount; lpPerformanceCount
0x748613: call    esi ; QueryPerformanceCounter
0x748615: mov     byte ptr ds:0B27EB2h, 0
0x74861C: lea     eax, [esp+0Ch+PerformanceCount]
0x748620: push    eax; lpPerformanceCount
0x748621: call    esi ; QueryPerformanceCounter
0x748623: mov     ecx, dword ptr [esp+0Ch+PerformanceCount]
0x748627: sub     ecx, ds:0B407A8h
0x74862D: mov     edx, dword ptr [esp+0Ch+PerformanceCount+4]
0x748631: sbb     edx, ds:0B407ACh
0x748637: mov     dword ptr [esp+0Ch+PerformanceCount], ecx
0x74863B: mov     dword ptr [esp+0Ch+PerformanceCount+4], edx
0x74863F: fild    qword ptr [esp+0Ch+PerformanceCount]
0x748643: fild    qword ptr ds:0B407B0h
0x748649: pop     esi
0x74864A: fdivp   st(1), st
0x74864C: fstp    dword ptr [esp+8+PerformanceCount]
0x74864F: fld     dword ptr [esp+8+PerformanceCount]
0x748652: add     esp, 8
0x748655: retn
