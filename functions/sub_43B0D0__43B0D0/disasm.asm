0x43B0D0: push    0FFFFFFFFh; Verified shared texture dependency helper used by tree, landscape, and generated landscape-LOD paths. It queries the texture/resource cache; on a miss it creates and queues a QueuedTexture, while a hit with a parent creates an attached wrapper task so the dependency participates in parent completion. Caller priority and parent task are forwarded.
0x43B0D2: push    offset SEH_43B0D0
0x43B0D7: mov     eax, large fs:0
0x43B0DD: push    eax
0x43B0DE: push    ecx
0x43B0DF: push    ebx
0x43B0E0: push    ebp
0x43B0E1: push    esi
0x43B0E2: push    edi
0x43B0E3: mov     eax, ___security_cookie
0x43B0E8: xor     eax, esp
0x43B0EA: push    eax
0x43B0EB: lea     eax, [esp+24h+var_C]
0x43B0EF: mov     large fs:0, eax
0x43B0F5: mov     ecx, dword ptr unk_B35300
0x43B0FB: mov     eax, [ecx]
0x43B0FD: mov     esi, [esp+24h+path]
0x43B101: mov     edx, [eax+4]
0x43B104: xor     ebx, ebx
0x43B106: push    ebx
0x43B107: push    esi
0x43B108: call    edx
0x43B10A: mov     edi, eax
0x43B10C: cmp     edi, ebx
0x43B10E: mov     [esp+24h+path], edi
0x43B112: jz      short loc_43B11E
0x43B114: lea     eax, [edi+4]
0x43B117: push    eax; lpAddend
0x43B118: call    ds:InterlockedIncrement
0x43B11E: cmp     edi, ebx
0x43B120: mov     [esp+24h+var_4], ebx
0x43B124: jz      loc_43B1E9
0x43B12A: mov     ebp, [esp+24h+parent]
0x43B12E: cmp     ebp, ebx
0x43B130: jz      loc_43B1C5
0x43B136: push    30h ; '0'; Size
0x43B138: call    FormHeapAlloc
0x43B13D: add     esp, 4
0x43B140: mov     [esp+24h+parent], eax
0x43B144: cmp     eax, ebx
0x43B146: mov     byte ptr [esp+24h+var_4], 1
0x43B14B: jz      short loc_43B15E
0x43B14D: mov     ecx, dword ptr [esp+24h+taskType]
0x43B151: push    ecx
0x43B152: push    edi
0x43B153: mov     ecx, eax
0x43B155: call    sub_4371A0
0x43B15A: mov     esi, eax
0x43B15C: jmp     short loc_43B160
0x43B15E: xor     esi, esi
0x43B160: cmp     esi, ebx
0x43B162: mov     dword ptr [esp+24h+taskType], esi
0x43B166: jz      short loc_43B172
0x43B168: lea     edx, [esi+8]
0x43B16B: push    edx; lpAddend
0x43B16C: call    ds:InterlockedIncrement
0x43B172: push    ebp
0x43B173: mov     ecx, esi
0x43B175: mov     byte ptr [esp+28h+var_4], 2
0x43B17A: call    sub_43AC40
0x43B17F: mov     eax, [esi]
0x43B181: mov     edx, [eax+28h]
0x43B184: mov     ecx, esi
0x43B186: call    edx
0x43B188: lea     eax, [esi+8]
0x43B18B: mov     byte ptr [esp+24h+var_4], bl
0x43B18F: mov     ebx, ds:InterlockedDecrement
0x43B195: push    eax; lpAddend
0x43B196: call    ebx ; InterlockedDecrement
0x43B198: test    eax, eax
0x43B19A: jnz     short loc_43B1A6
0x43B19C: mov     edx, [esi]
0x43B19E: mov     eax, [edx]
0x43B1A0: push    1
0x43B1A2: mov     ecx, esi
0x43B1A4: call    eax
0x43B1A6: lea     ecx, [edi+4]
0x43B1A9: push    ecx; lpAddend
0x43B1AA: mov     [esp+28h+var_4], 0FFFFFFFFh
0x43B1B2: call    ebx ; InterlockedDecrement
0x43B1B4: test    eax, eax
0x43B1B6: jnz     loc_43B25B
0x43B1BC: mov     edx, [edi]
0x43B1BE: mov     ecx, edi
0x43B1C0: jmp     loc_43B255
0x43B1C5: lea     ecx, [edi+4]
0x43B1C8: push    ecx; lpAddend
0x43B1C9: mov     [esp+28h+var_4], 0FFFFFFFFh
0x43B1D1: call    ds:InterlockedDecrement
0x43B1D7: test    eax, eax
0x43B1D9: jnz     short loc_43B1E5
0x43B1DB: mov     edx, [edi]
0x43B1DD: mov     eax, [edx]
0x43B1DF: push    1
0x43B1E1: mov     ecx, edi
0x43B1E3: call    eax
0x43B1E5: xor     al, al
0x43B1E7: jmp     short loc_43B25D
0x43B1E9: push    30h ; '0'; Size
0x43B1EB: call    FormHeapAlloc
0x43B1F0: add     esp, 4
0x43B1F3: mov     [esp+24h+var_10], eax
0x43B1F7: cmp     eax, ebx
0x43B1F9: mov     byte ptr [esp+24h+var_4], 3
0x43B1FE: jz      short loc_43B211
0x43B200: mov     ecx, dword ptr [esp+24h+taskType]
0x43B204: push    ecx; taskType
0x43B205: push    esi; path
0x43B206: mov     ecx, eax; this
0x43B208: call    QueuedTexture_ctor; Verified base initializer for QueuedTexture: initializes IOTask fields, stores normalized path and resolves archive/file entry via HashFilePath + ArchiveManager_LazyFileLookup.
0x43B20D: mov     esi, eax
0x43B20F: jmp     short loc_43B213
0x43B211: xor     esi, esi
0x43B213: cmp     esi, ebx
0x43B215: mov     dword ptr [esp+24h+taskType], esi
0x43B219: jz      short loc_43B225
0x43B21B: lea     edx, [esi+8]
0x43B21E: push    edx; lpAddend
0x43B21F: call    ds:InterlockedIncrement
0x43B225: mov     eax, [esp+24h+parent]
0x43B229: push    eax
0x43B22A: mov     ecx, esi
0x43B22C: mov     byte ptr [esp+28h+var_4], 4
0x43B231: call    sub_43AC40
0x43B236: mov     edx, [esi]
0x43B238: mov     eax, [edx+20h]
0x43B23B: mov     ecx, esi
0x43B23D: call    eax
0x43B23F: lea     ecx, [esi+8]
0x43B242: push    ecx; lpAddend
0x43B243: mov     byte ptr [esp+28h+var_4], bl
0x43B247: call    ds:InterlockedDecrement
0x43B24D: test    eax, eax
0x43B24F: jnz     short loc_43B25B
0x43B251: mov     edx, [esi]
0x43B253: mov     ecx, esi
0x43B255: mov     eax, [edx]
0x43B257: push    1
0x43B259: call    eax
0x43B25B: mov     al, 1
0x43B25D: mov     ecx, [esp+24h+var_C]
0x43B261: mov     large fs:0, ecx
0x43B268: pop     ecx
0x43B269: pop     edi
0x43B26A: pop     esi
0x43B26B: pop     ebp
0x43B26C: pop     ebx
0x43B26D: add     esp, 10h
0x43B270: retn    0Ch
0x9ACA00: lea     ecx, [ebp+4]; slot
0x9ACA03: jmp     NiPointerSlot_Release
0x9ACA08: mov     eax, [ebp+0Ch]
0x9ACA0B: push    eax
0x9ACA0C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9ACA11: pop     ecx
0x9ACA12: retn
0x9ACA13: lea     ecx, [ebp+8]; void *
0x9ACA16: jmp     sub_4BDDC0
0x9ACA1B: mov     eax, [ebp-10h]
0x9ACA1E: push    eax
0x9ACA1F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9ACA24: pop     ecx
0x9ACA25: retn
0x9ACA26: lea     ecx, [ebp+8]; void *
0x9ACA29: jmp     sub_4BDDC0
0x9ACA2E: mov     edx, dword ptr [esp+taskType]
0x9ACA32: lea     eax, [edx-14h]
0x9ACA35: mov     ecx, [edx-18h]
0x9ACA38: xor     ecx, eax
0x9ACA3A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ACA3F: mov     eax, offset stru_AD9674
0x9ACA44: jmp     ___CxxFrameHandler3
