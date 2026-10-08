0x4377D0: push    0FFFFFFFFh
0x4377D2: push    offset SEH_4377D0
0x4377D7: mov     eax, large fs:0
0x4377DD: push    eax
0x4377DE: push    ecx
0x4377DF: push    ebx
0x4377E0: push    esi
0x4377E1: mov     eax, ___security_cookie
0x4377E6: xor     eax, esp
0x4377E8: push    eax
0x4377E9: lea     eax, [esp+1Ch+var_C]
0x4377ED: mov     large fs:0, eax
0x4377F3: mov     esi, ecx
0x4377F5: mov     [esp+1Ch+var_10], esi
0x4377F9: mov     eax, dword ptr [esp+1Ch+a2]
0x4377FD: push    eax; a2
0x4377FE: call    sub_436500
0x437803: xor     ebx, ebx
0x437805: mov     [esi+18h], ebx
0x437808: mov     [esi+1Ch], ebx
0x43780B: mov     [esi+20h], ebx
0x43780E: mov     [esi+24h], ebx
0x437811: mov     dword ptr [esi], offset ??_7QueuedKF@@6B@; const QueuedKF::`vftable'
0x437817: mov     [esp+1Ch+var_4], ebx
0x43781B: mov     [esi+28h], ebx
0x43781E: mov     ecx, [esp+1Ch+arg_0]
0x437822: push    ecx
0x437823: mov     ecx, esi
0x437825: mov     byte ptr [esp+20h+var_4], 1
0x43782A: mov     [esi+2Ch], bl
0x43782D: call    sub_434600; QueuedFileEntry path copy helper. Allocates and copies source path string into entry +0x20.
0x437832: push    1
0x437834: push    ebx
0x437835: mov     ecx, esi
0x437837: call    sub_434CB0; QueuedFileEntry archive lookup helper. Hashes copied path at +0x20 and stores resolved archive/file entry pointer at +0x24.
0x43783C: mov     eax, esi
0x43783E: mov     ecx, [esp+1Ch+var_C]
0x437842: mov     large fs:0, ecx
0x437849: pop     ecx
0x43784A: pop     esi
0x43784B: pop     ebx
0x43784C: add     esp, 10h
0x43784F: retn    8
0x435AF0: mov     eax, [ecx]
0x435AF2: test    eax, eax
0x435AF4: jz      short locret_435B00
0x435AF6: add     eax, 0Ch
0x435AF9: push    eax; lpAddend
0x435AFA: call    ds:InterlockedDecrement
0x435B00: retn
0x9AC4F0: mov     ecx, [ebp-10h]; this
0x9AC4F3: jmp     ??1LipTask@@UAE@XZ; LipTask::~LipTask(void)
0x9AC4F8: mov     ecx, [ebp-10h]
0x9AC4FB: add     ecx, 28h ; '('
0x9AC4FE: jmp     loc_435AF0
0x9AC503: mov     edx, dword ptr [esp+a2]
0x9AC507: lea     eax, [edx-0Ch]
0x9AC50A: mov     ecx, [edx-10h]
0x9AC50D: xor     ecx, eax
0x9AC50F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AC514: mov     eax, offset stru_AD91C4
0x9AC519: jmp     ___CxxFrameHandler3
