0x4BCCB0: push    ebx; Verified completion callback: on taskStatus zero, releases the task-data scene node and Ni2DBuffer; regardless of status, it removes the packed cell key from the owner map at task+0x28. Exact status-code semantics remain Unknown.
0x4BCCB1: mov     ebx, [esp+4+taskStatus]
0x4BCCB5: push    ebp
0x4BCCB6: push    ebx
0x4BCCB7: mov     ebp, ecx
0x4BCCB9: call    QueuedTreeModel_ReleaseBuildResources; Verified DistantLOD task completion callback: status 0 releases the task-data scene node and cellLODBuffer; nonzero status leaves these resources for task destruction. In all cases it removes the packed cell key from the owner map.
0x4BCCBE: test    bl, bl
0x4BCCC0: jnz     short loc_4BCD21
0x4BCCC2: mov     ebx, ds:0A2807Ch
0x4BCCC8: push    esi
0x4BCCC9: mov     esi, [ebp+2Ch]
0x4BCCCC: add     esi, 20h ; ' '
0x4BCCCF: push    edi
0x4BCCD0: mov     edi, [esi]
0x4BCCD2: test    edi, edi
0x4BCCD4: jz      short loc_4BCCF4
0x4BCCD6: lea     eax, [edi+4]
0x4BCCD9: push    eax; lpAddend
0x4BCCDA: call    ebx ; InterlockedDecrement
0x4BCCDC: test    eax, eax
0x4BCCDE: jnz     short loc_4BCCEE
0x4BCCE0: test    edi, edi
0x4BCCE2: jz      short loc_4BCCEE
0x4BCCE4: mov     edx, [edi]
0x4BCCE6: mov     eax, [edx]
0x4BCCE8: push    1
0x4BCCEA: mov     ecx, edi
0x4BCCEC: call    eax
0x4BCCEE: mov     dword ptr [esi], 0
0x4BCCF4: mov     edi, [ebp+2Ch]
0x4BCCF7: mov     esi, [edi+1Ch]
0x4BCCFA: add     edi, 1Ch
0x4BCCFD: test    esi, esi
0x4BCCFF: jz      short loc_4BCD1F
0x4BCD01: lea     ecx, [esi+4]
0x4BCD04: push    ecx; lpAddend
0x4BCD05: call    ebx ; InterlockedDecrement
0x4BCD07: test    eax, eax
0x4BCD09: jnz     short loc_4BCD19
0x4BCD0B: test    esi, esi
0x4BCD0D: jz      short loc_4BCD19
0x4BCD0F: mov     edx, [esi]
0x4BCD11: mov     eax, [edx]
0x4BCD13: push    1
0x4BCD15: mov     ecx, esi
0x4BCD17: call    eax
0x4BCD19: mov     dword ptr [edi], 0
0x4BCD1F: pop     edi
0x4BCD20: pop     esi
0x4BCD21: mov     eax, [ebp+2Ch]
0x4BCD24: mov     ecx, [eax+4]
0x4BCD27: mov     eax, [eax]
0x4BCD29: mov     ebp, [ebp+28h]
0x4BCD2C: push    ecx; group_y
0x4BCD2D: push    eax; group_x
0x4BCD2E: call    TESObjectCELL_PackExteriorGroupLabel; Verified exact key encoding used by the DistantLOD cell model map: packed label = (signed cellX << 16) | unsigned cellY.
0x4BCD33: mov     edx, [ebp+0]
0x4BCD36: add     esp, 8
0x4BCD39: push    eax
0x4BCD3A: mov     eax, [edx+10h]
0x4BCD3D: mov     ecx, ebp
0x4BCD3F: call    eax
0x4BCD41: pop     ebp
0x4BCD42: pop     ebx
0x4BCD43: retn    4
