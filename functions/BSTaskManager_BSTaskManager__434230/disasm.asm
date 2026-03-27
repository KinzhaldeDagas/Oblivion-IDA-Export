0x434230: push    0FFFFFFFFh
0x434232: push    offset SEH_434230
0x434237: mov     eax, large fs:0
0x43423D: push    eax
0x43423E: push    ecx
0x43423F: push    ebx
0x434240: push    ebp
0x434241: push    esi
0x434242: push    edi
0x434243: mov     eax, ___security_cookie
0x434248: xor     eax, esp
0x43424A: push    eax
0x43424B: lea     eax, [esp+24h+var_C]
0x43424F: mov     large fs:0, eax
0x434255: mov     esi, ecx
0x434257: mov     [esp+24h+var_10], esi
0x43425B: mov     edi, [esp+24h+a3]
0x43425F: mov     ebp, [esp+24h+arg_4]
0x434263: mov     eax, [esp+24h+arg_0]
0x434267: push    0Ch; a4
0x434269: push    edi; a3
0x43426A: add     eax, ebp
0x43426C: push    eax; a2
0x43426D: call    LockFreeMap__LockFreeMap
0x434272: xor     ecx, ecx
0x434274: xor     ebx, ebx
0x434276: mov     eax, edi
0x434278: mov     edx, 4
0x43427D: mul     edx
0x43427F: seto    cl
0x434282: mov     dword ptr [esi], offset ??_7?$BSTaskManager@_J@@6B@; const BSTaskManager<__int64>::`vftable'
0x434288: mov     [esi+1Ch], ebx
0x43428B: mov     [esp+24h+var_4], ebx
0x43428F: mov     [esi+20h], ebx
0x434292: mov     [esi+24h], ebp
0x434295: neg     ecx
0x434297: or      ecx, eax
0x434299: push    ecx; Size
0x43429A: call    FormHeapAlloc
0x43429F: lea     ecx, ds:0[edi*4]
0x4342A6: push    ecx
0x4342A7: push    ebx
0x4342A8: push    eax
0x4342A9: mov     [esi+2Ch], eax
0x4342AC: call    __memset
0x4342B1: mov     eax, [esi+24h]
0x4342B4: xor     ecx, ecx
0x4342B6: mov     edx, 4
0x4342BB: mul     edx
0x4342BD: seto    cl
0x4342C0: neg     ecx
0x4342C2: or      ecx, eax
0x4342C4: push    ecx; Size
0x4342C5: call    FormHeapAlloc
0x4342CA: add     esp, 14h
0x4342CD: xor     ebp, ebp
0x4342CF: cmp     [esi+24h], ebx
0x4342D2: mov     [esi+28h], eax
0x4342D5: jbe     short loc_43432A
0x4342D7: push    28h ; '('; Size
0x4342D9: call    FormHeapAlloc
0x4342DE: mov     edi, eax
0x4342E0: add     esp, 4
0x4342E3: mov     [esp+24h+a3], edi
0x4342E7: cmp     edi, ebx
0x4342E9: mov     byte ptr [esp+24h+var_4], 1
0x4342EE: jz      short loc_43430B
0x4342F0: push    offset aBstaskmanagert; "BSTaskManagerThread"
0x4342F5: lea     eax, [ebp+2]
0x4342F8: push    eax; a2
0x4342F9: mov     ecx, edi; lpParameter
0x4342FB: call    BSTaskThread__BSTaskThread
0x434300: mov     dword ptr [edi], offset ??_7?$BSTaskManagerThread@_J@@6B@; const BSTaskManagerThread<__int64>::`vftable'
0x434306: mov     [edi+24h], esi
0x434309: jmp     short loc_43430D
0x43430B: xor     edi, edi
0x43430D: mov     ecx, [esi+28h]
0x434310: mov     [ecx+ebp*4], edi
0x434313: mov     edx, [esi+28h]
0x434316: mov     ecx, [edx+ebp*4]; this
0x434319: mov     byte ptr [esp+24h+var_4], bl
0x43431D: call    BSTaskThread__Resume
0x434322: add     ebp, 1
0x434325: cmp     ebp, [esi+24h]
0x434328: jb      short loc_4342D7
0x43432A: mov     eax, esi
0x43432C: mov     ecx, [esp+24h+var_C]
0x434330: mov     large fs:0, ecx
0x434337: pop     ecx
0x434338: pop     edi
0x434339: pop     esi
0x43433A: pop     ebp
0x43433B: pop     ebx
0x43433C: add     esp, 10h
0x43433F: retn    0Ch
