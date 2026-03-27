0x926090: sub     esp, 0Ch
0x926093: push    ebx
0x926094: mov     ebx, large fs:2Ch
0x92609B: push    ebp
0x92609C: mov     ebp, ds:0BA9DE4h
0x9260A2: mov     eax, [ebx+ebp*4]
0x9260A5: mov     edx, [eax+1A8h]
0x9260AB: push    esi; dwMilliseconds
0x9260AC: mov     esi, ecx
0x9260AE: mov     ecx, [eax+1A4h]
0x9260B4: cmp     ecx, edx
0x9260B6: push    edi; hHandle
0x9260B7: jnb     short loc_9260DD
0x9260B9: mov     edi, eax
0x9260BB: mov     ecx, [edi+1A4h]
0x9260C1: mov     dword ptr [ecx], offset aTtgetnextjob; "TtGetNextJob"
0x9260C7: rdtsc
0x9260C9: mov     [esp+1Ch+var_C], eax
0x9260CD: mov     edx, [esp+1Ch+var_C]
0x9260D1: mov     [ecx+4], edx
0x9260D4: add     ecx, 0Ch
0x9260D7: mov     [edi+1A4h], ecx
0x9260DD: mov     edi, [esp+1Ch+arg_0]
0x9260E1: lea     eax, [edi+edi*4]
0x9260E4: lea     ecx, [esi+eax*4+40h]
0x9260E8: mov     [esp+1Ch+var_C], ecx
0x9260EC: lea     esp, [esp+0]
0x9260F0: mov     ecx, esi; lpCriticalSection
0x9260F2: call    sub_8A7720
0x9260F7: mov     eax, [esp+1Ch+var_C]
0x9260FB: xor     ecx, ecx
0x9260FD: lea     ecx, [ecx+0]
0x926100: mov     edx, [eax+8]
0x926103: test    edx, edx
0x926105: jnz     loc_9261B7
0x92610B: cmp     ecx, 1
0x92610E: jz      short loc_92611F
0x926110: mov     eax, edi
0x926112: xor     eax, 1
0x926115: lea     edx, [eax+eax*4]
0x926118: lea     eax, [esi+edx*4+40h]
0x92611C: inc     ecx
0x92611D: jmp     short loc_926100
0x92611F: mov     eax, [esi+68h]
0x926122: test    eax, eax
0x926124: push    esi; lpCriticalSection
0x926125: jz      loc_9262CE
0x92612B: inc     dword ptr [esi+6Ch]
0x92612E: call    dword ptr ds:0A28074h
0x926134: mov     eax, [ebx+ebp*4]
0x926137: mov     ecx, [eax+1A4h]
0x92613D: cmp     ecx, [eax+1A8h]
0x926143: jnb     short loc_92616D
0x926145: mov     edi, eax
0x926147: mov     ecx, [edi+1A4h]
0x92614D: mov     dword ptr [ecx], offset aTtwaitforsigna; "TtWaitForSignal"
0x926153: rdtsc
0x926155: mov     [esp+1Ch+var_8], eax
0x926159: mov     edx, [esp+1Ch+var_8]
0x92615D: mov     [ecx+4], edx
0x926160: add     ecx, 0Ch
0x926163: mov     [edi+1A4h], ecx
0x926169: mov     edi, [esp+1Ch+arg_0]
0x92616D: lea     ecx, [esi+70h]
0x926170: call    WaitForSingleObject_0
0x926175: mov     eax, [ebx+ebp*4]
0x926178: mov     ecx, [eax+1A4h]
0x92617E: cmp     ecx, [eax+1A8h]
0x926184: jnb     loc_9260F0
0x92618A: mov     edi, eax
0x92618C: mov     ecx, [edi+1A4h]
0x926192: mov     dword ptr [ecx], offset aEt; "Et"
0x926198: rdtsc
0x92619A: mov     [esp+14h+arg_0], eax
0x92619E: mov     edx, [esp+14h+arg_0]
0x9261A2: mov     [ecx+4], edx
0x9261A5: add     ecx, 0Ch
0x9261A8: mov     [edi+1A4h], ecx
0x9261AE: mov     edi, [esp+14h+arg_8]
0x9261B2: jmp     loc_9260F0
0x9261B7: mov     ecx, [eax]
0x9261B9: mov     edx, [eax+0Ch]
0x9261BC: lea     ecx, [ecx+ecx*2]
0x9261BF: lea     ecx, [edx+ecx*4]
0x9261C2: movzx   edx, byte ptr [ecx]
0x9261C5: test    edx, edx
0x9261C7: jz      loc_9262A0
0x9261CD: cmp     edx, 6
0x9261D0: jz      short loc_9261FF
0x9261D2: mov     edi, [ecx]
0x9261D4: mov     edx, [esp+1Ch+arg_4]
0x9261D8: mov     [edx], edi
0x9261DA: mov     edi, [ecx+4]
0x9261DD: mov     [edx+4], edi
0x9261E0: mov     ecx, [ecx+8]
0x9261E3: mov     [edx+8], ecx
0x9261E6: mov     edi, [eax]
0x9261E8: mov     edx, [eax+10h]
0x9261EB: inc     edi
0x9261EC: mov     ecx, edi
0x9261EE: cmp     ecx, edx
0x9261F0: mov     [eax], edi
0x9261F2: jnz     short loc_9261FA
0x9261F4: mov     dword ptr [eax], 0
0x9261FA: dec     dword ptr [eax+8]
0x9261FD: jmp     short loc_926251
0x9261FF: mov     edi, [esp+1Ch+arg_4]
0x926203: mov     edx, ecx
0x926205: mov     ebp, [edx]
0x926207: mov     [edi], ebp
0x926209: mov     ebp, [edx+4]
0x92620C: mov     [edi+4], ebp
0x92620F: mov     edx, [edx+8]
0x926212: mov     ebp, ds:0BA9DE4h
0x926218: mov     [edi+8], edx
0x92621B: mov     edx, [ecx+8]
0x92621E: mov     edi, 4
0x926223: cmp     edx, edi
0x926225: jle     short loc_9261E6
0x926227: mov     eax, [ecx+4]
0x92622A: add     edx, 0FFFFFFFCh
0x92622D: add     eax, edi
0x92622F: mov     [ecx+4], eax
0x926232: mov     eax, [esp+1Ch+arg_4]
0x926236: mov     [ecx+8], edx
0x926239: mov     [eax+8], edi
0x92623C: mov     eax, [esi+6Ch]
0x92623F: test    eax, eax
0x926241: jz      short loc_926251
0x926243: dec     eax
0x926244: push    1; lReleaseCount
0x926246: lea     ecx, [esi+70h]
0x926249: mov     [esi+6Ch], eax
0x92624C: call    ReleaseSemaphore_0
0x926251: mov     eax, [esi+68h]
0x926254: inc     eax
0x926255: push    esi; lpCriticalSection
0x926256: mov     [esi+68h], eax
0x926259: call    dword ptr ds:0A28074h
0x92625F: mov     eax, [ebx+ebp*4]
0x926262: mov     ecx, [eax+1A4h]
0x926268: cmp     ecx, [eax+1A8h]
0x92626E: jnb     short loc_926294
0x926270: mov     ebx, eax
0x926272: mov     ecx, [ebx+1A4h]
0x926278: mov     dword ptr [ecx], offset aEt; "Et"
0x92627E: rdtsc
0x926280: mov     [esp+20h+arg_0], eax
0x926284: mov     edx, [esp+20h+arg_0]
0x926288: mov     [ecx+4], edx
0x92628B: add     ecx, 0Ch
0x92628E: mov     [ebx+1A4h], ecx
0x926294: pop     edi
0x926295: pop     esi
0x926296: pop     ebp
0x926297: xor     eax, eax
0x926299: pop     ebx
0x92629A: add     esp, 0Ch
0x92629D: retn    8
0x9262A0: mov     edi, [ecx]
0x9262A2: mov     edx, [esp+1Ch+arg_4]
0x9262A6: mov     [edx], edi
0x9262A8: mov     edi, [ecx+4]
0x9262AB: mov     [edx+4], edi
0x9262AE: mov     edi, [ecx+4]
0x9262B1: cmp     edi, 1
0x9262B4: jle     loc_9261E6
0x9262BA: inc     word ptr [ecx+2]
0x9262BE: dec     edi
0x9262BF: mov     [ecx+4], edi
0x9262C2: mov     dword ptr [edx+4], 1
0x9262C9: jmp     loc_92623C
0x9262CE: call    dword ptr ds:0A28074h
0x9262D4: mov     eax, [ebx+ebp*4]
0x9262D7: mov     ecx, [eax+1A4h]
0x9262DD: cmp     ecx, [eax+1A8h]
0x9262E3: jnb     short loc_926309
0x9262E5: mov     ebx, eax
0x9262E7: mov     ecx, [ebx+1A4h]
0x9262ED: mov     dword ptr [ecx], offset aEt; "Et"
0x9262F3: rdtsc
0x9262F5: mov     [esp+20h+arg_0], eax
0x9262F9: mov     edx, [esp+20h+arg_0]
0x9262FD: mov     [ecx+4], edx
0x926300: add     ecx, 0Ch
0x926303: mov     [ebx+1A4h], ecx
0x926309: pop     edi
0x92630A: pop     esi
0x92630B: pop     ebp
0x92630C: mov     eax, 1
0x926311: pop     ebx
0x926312: add     esp, 0Ch
0x926315: retn    8
