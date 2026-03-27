0x431FF0: push    ebx
0x431FF1: mov     ebx, ds:InterlockedIncrement
0x431FF7: push    esi
0x431FF8: push    edi
0x431FF9: mov     edi, [esp+0Ch+arg_0]
0x431FFD: push    0
0x431FFF: push    ecx
0x432000: mov     eax, esp
0x432002: mov     dword ptr [edi+0Ch], 1
0x432009: mov     [eax], edi
0x43200B: lea     eax, [edi+8]
0x43200E: mov     [esp+14h+arg_0], esp
0x432012: push    eax; lpAddend
0x432013: mov     esi, ecx
0x432015: call    ebx ; InterlockedIncrement
0x432017: mov     ecx, [edi+14h]
0x43201A: mov     eax, [edi+10h]
0x43201D: mov     edx, [esi]
0x43201F: push    ecx
0x432020: push    eax
0x432021: mov     eax, [edx+0Ch]
0x432024: mov     ecx, esi
0x432026: call    eax
0x432028: test    al, al
0x43202A: jz      short loc_43207B
0x43202C: mov     ecx, [edi+14h]
0x43202F: mov     eax, [edi+10h]
0x432032: mov     edx, [esi]
0x432034: push    ecx
0x432035: push    eax
0x432036: mov     eax, [edx+1Ch]
0x432039: mov     ecx, esi
0x43203B: call    eax
0x43203D: mov     ecx, [esi+2Ch]
0x432040: lea     edx, [ecx+eax*4]
0x432043: push    edx; lpAddend
0x432044: call    ebx ; InterlockedIncrement
0x432046: mov     eax, [esi]
0x432048: mov     edx, [eax+4Ch]
0x43204B: push    edi
0x43204C: mov     ecx, esi
0x43204E: call    edx
0x432050: mov     ecx, [esi+28h]
0x432053: mov     eax, [ecx+eax*4]
0x432056: mov     edx, [eax+0Ch]
0x432059: test    edx, edx
0x43205B: lea     esi, [eax+0Ch]
0x43205E: jnz     short loc_432073
0x432060: push    esi; lpAddend
0x432061: call    ebx ; InterlockedIncrement
0x432063: mov     eax, [esi+8]
0x432066: push    0; lpPreviousCount
0x432068: push    1; lReleaseCount
0x43206A: push    eax; hSemaphore
0x43206B: call    ds:ReleaseSemaphore
0x432071: mov     ecx, [esi]
0x432073: mov     al, 1
0x432075: pop     edi
0x432076: pop     esi
0x432077: pop     ebx
0x432078: retn    4
0x43207B: pop     edi
0x43207C: pop     esi
0x43207D: xor     al, al
0x43207F: pop     ebx
0x432080: retn    4
