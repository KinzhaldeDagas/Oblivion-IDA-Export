0x6D91B0: sub     esp, 7Ch
0x6D91B3: push    ebx
0x6D91B4: mov     ebx, ecx
0x6D91B6: cmp     dword ptr [ebx+30h], 0
0x6D91BA: jz      loc_6D926E
0x6D91C0: fld     [esp+80h+arg_0]
0x6D91C7: push    ecx
0x6D91C8: fstp    [esp+84h+applicationTime]; applicationTime
0x6D91CB: call    NiTimeController_IsUpdateUnchanged; Return true only when an active NiTimeController can reuse its previous interpolation result. Active bit is NiTimeController.flags +0x08 bit 3. On an application-time change, computeScaledTimeOnUpdate +0x2C normally calls virtual ComputeScaledTime and refreshes cachedScaledTime +0x28; forceUpdate +0x38 forces one changed result and is cleared. If +0x2C is zero, report changed without recomputing +0x28.
0x6D91D0: test    al, al
0x6D91D2: jnz     loc_6D926E
0x6D91D8: push    esi
0x6D91D9: push    edi
0x6D91DA: lea     eax, [esp+88h+var_7C]
0x6D91DE: push    eax
0x6D91DF: lea     ecx, [esp+8Ch+var_74]
0x6D91E3: push    ecx
0x6D91E4: lea     edx, [esp+90h+var_78]
0x6D91E8: push    edx
0x6D91E9: mov     ecx, ebx
0x6D91EB: call    sub_6EC8C0
0x6D91F0: fld     dword ptr [ebx+28h]
0x6D91F3: mov     ecx, dword ptr [esp+88h+var_7C]
0x6D91F7: push    ecx; char
0x6D91F8: mov     ecx, [esp+8Ch+var_78]
0x6D91FC: lea     edx, [ebx+3Ch]
0x6D91FF: push    edx; int
0x6D9200: mov     edx, [esp+90h+var_74]
0x6D9204: push    ecx; int
0x6D9205: push    edx; int
0x6D9206: push    eax; int
0x6D9207: push    ecx
0x6D9208: fstp    [esp+0A0h+var_A0]; float
0x6D920B: call    NiFloatKey_EvaluateTrack; Oblivion scalar key-track evaluator. Returns the sole/first value for one key or sentinel time; otherwise resumes from the caller cursor, rewinds to key 0 when sample time precedes it, finds the bracketing timestamps using the supplied key stride, computes normalized segment time, dispatches by interpolation type, and stores the lower-key cursor.
0x6D9210: mov     esi, [ebx+30h]
0x6D9213: fstp    [esp+0A0h+var_70]
0x6D9217: fld     [esp+0A0h+var_70]
0x6D921B: add     esi, 30h ; '0'
0x6D921E: mov     ecx, 9
0x6D9223: fchs
0x6D9225: lea     edi, [esp+0A0h+var_6C]
0x6D9229: fstp    [esp+0A0h+angleZ]; angleZ
0x6D922D: rep movsd
0x6D922F: add     esp, 14h
0x6D9232: lea     ecx, [esp+8Ch+right]; this
0x6D9236: call    NiMatrix33_InitRotationZ; Verified matrix coefficients make this a Z-axis rotation: Z stays fixed; only the X/Y submatrix contains sin/cos.
0x6D923B: lea     eax, [esp+88h+right]
0x6D923F: push    eax; right
0x6D9240: lea     ecx, [esp+8Ch+out]
0x6D9244: push    ecx; out
0x6D9245: lea     ecx, [esp+90h+var_6C]; this
0x6D9249: call    NiMAtrix33_Multiply; Verified row-major multiplication output is `this * right`; QueuedDistantLOD_ApplyTransform therefore composes BaseRotation, X, Y, then Z matrices in that order.
0x6D924E: mov     ecx, 9
0x6D9253: mov     esi, eax
0x6D9255: lea     edi, [esp+88h+var_6C]
0x6D9259: rep movsd
0x6D925B: mov     edi, [ebx+30h]
0x6D925E: add     edi, 30h ; '0'
0x6D9261: mov     ecx, 9
0x6D9266: lea     esi, [esp+88h+var_6C]
0x6D926A: rep movsd
0x6D926C: pop     edi
0x6D926D: pop     esi
0x6D926E: pop     ebx
0x6D926F: add     esp, 7Ch
0x6D9272: retn    4
