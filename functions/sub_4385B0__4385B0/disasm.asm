0x4385B0: push    0FFFFFFFFh; Verified queued-record factory: validates the model path and Ni2DBuffer, allocates a 0x40-byte QueuedDistantLOD task around a 0x20-byte DistantLODQueuedInstanceData record, attaches the form texture-hash cache, and queues the task. Each record contains position, three rotation angles, normalized scale, and a retained cell Ni2DBuffer.
0x4385B2: push    offset SEH_4385B0
0x4385B7: mov     eax, large fs:0
0x4385BD: push    eax
0x4385BE: push    esi
0x4385BF: push    edi
0x4385C0: mov     eax, ___security_cookie
0x4385C5: xor     eax, esp
0x4385C7: push    eax
0x4385C8: lea     eax, [esp+18h+var_C]
0x4385CC: mov     large fs:0, eax
0x4385D2: mov     edi, [esp+18h+modelPath]
0x4385D6: test    edi, edi
0x4385D8: jz      short loc_438651
0x4385DA: cmp     byte ptr [edi], 0
0x4385DD: jz      short loc_438651
0x4385DF: mov     esi, [esp+18h+instanceData]
0x4385E3: test    esi, esi
0x4385E5: jz      short loc_438651
0x4385E7: cmp     dword ptr [esi+1Ch], 0
0x4385EB: jz      short loc_438651
0x4385ED: push    40h ; '@'; Size
0x4385EF: call    FormHeapAlloc
0x4385F4: add     esp, 4
0x4385F7: mov     [esp+18h+modelPath], eax
0x4385FB: test    eax, eax
0x4385FD: mov     [esp+18h+var_4], 0
0x438605: jz      short loc_438616
0x438607: push    esi; instanceData
0x438608: push    5; priority
0x43860A: push    edi; modelPath
0x43860B: mov     ecx, eax; this
0x43860D: call    ??0QueuedDistantLOD@@QAE@XZ; Verified QueuedDistantLOD constructor: stores its per-instance context pointer at task +0x38; context is a 0x20-byte DistantLODQueuedInstanceData record. Priority is supplied by the factory as 5.
0x438612: mov     esi, eax
0x438614: jmp     short loc_438618
0x438616: xor     esi, esi
0x438618: test    esi, esi
0x43861A: mov     [esp+18h+modelPath], esi
0x43861E: jz      short loc_43862A
0x438620: lea     eax, [esi+8]
0x438623: push    eax; lpAddend
0x438624: call    ds:InterlockedIncrement
0x43862A: mov     edx, [esi]
0x43862C: mov     eax, [esp+18h+textureHashCache]
0x438630: mov     edx, [edx+30h]
0x438633: push    eax
0x438634: mov     ecx, esi
0x438636: mov     [esp+1Ch+var_4], 1
0x43863E: call    edx
0x438640: lea     ecx, [esp+18h+modelPath]; void *
0x438644: mov     [esp+18h+var_4], 0FFFFFFFFh
0x43864C: call    sub_4BDDC0
0x438651: mov     ecx, dword ptr [esp+18h+var_C]
0x438655: mov     large fs:0, ecx
0x43865C: pop     ecx
0x43865D: pop     edi
0x43865E: pop     esi
0x43865F: add     esp, 0Ch
0x438662: retn    0Ch
0x9AC670: mov     eax, [ebp+4]
0x9AC673: push    eax
0x9AC674: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AC679: pop     ecx
0x9AC67A: retn
0x9AC67B: lea     ecx, [ebp+4]; void *
0x9AC67E: jmp     sub_4BDDC0
0x9AC683: mov     edx, [esp+instanceData]
0x9AC687: lea     eax, [edx-8]
0x9AC68A: mov     ecx, [edx-0Ch]
0x9AC68D: xor     ecx, eax
0x9AC68F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AC694: mov     eax, offset stru_AD9340
0x9AC699: jmp     ___CxxFrameHandler3
