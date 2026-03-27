0x46DBE0: push    ecx
0x46DBE1: cmp     dword ptr [ecx+8], 0
0x46DBE5: push    ebx
0x46DBE6: lea     ebx, [ecx+4]
0x46DBE9: jnz     short loc_46DBF4
0x46DBEB: cmp     dword ptr [ebx], 0
0x46DBEE: jz      loc_46DC96
0x46DBF4: push    ebp
0x46DBF5: mov     edx, ebx
0x46DBF7: test    edx, edx
0x46DBF9: push    esi
0x46DBFA: push    edi
0x46DBFB: mov     [esp+14h+Size], 1
0x46DC03: jz      short loc_46DC2E
0x46DC05: mov     eax, [edx]
0x46DC07: test    eax, eax
0x46DC09: jz      short loc_46DC27
0x46DC0B: lea     esi, [eax+1]
0x46DC0E: mov     edi, edi
0x46DC10: mov     cl, [eax]
0x46DC12: add     eax, 1
0x46DC15: test    cl, cl
0x46DC17: jnz     short loc_46DC10
0x46DC19: mov     ecx, [esp+14h+Size]
0x46DC1D: sub     eax, esi
0x46DC1F: lea     eax, [ecx+eax+1]
0x46DC23: mov     [esp+14h+Size], eax
0x46DC27: mov     edx, [edx+4]
0x46DC2A: test    edx, edx
0x46DC2C: jnz     short loc_46DC05
0x46DC2E: mov     ecx, [esp+14h+Size]
0x46DC32: push    ecx; Size
0x46DC33: call    FormHeapAlloc
0x46DC38: add     esp, 4
0x46DC3B: test    ebx, ebx
0x46DC3D: mov     ebp, eax
0x46DC3F: mov     edi, ebp
0x46DC41: jz      short loc_46DC77
0x46DC43: mov     esi, [ebx]
0x46DC45: test    esi, esi
0x46DC47: jz      short loc_46DC70
0x46DC49: mov     edx, edi
0x46DC4B: mov     eax, esi
0x46DC4D: sub     edx, esi
0x46DC4F: nop
0x46DC50: mov     cl, [eax]
0x46DC52: mov     [edx+eax], cl
0x46DC55: add     eax, 1
0x46DC58: test    cl, cl
0x46DC5A: jnz     short loc_46DC50
0x46DC5C: mov     eax, esi
0x46DC5E: lea     edx, [eax+1]
0x46DC61: mov     cl, [eax]
0x46DC63: add     eax, 1
0x46DC66: test    cl, cl
0x46DC68: jnz     short loc_46DC61
0x46DC6A: sub     eax, edx
0x46DC6C: lea     edi, [edi+eax+1]
0x46DC70: mov     ebx, [ebx+4]
0x46DC73: test    ebx, ebx
0x46DC75: jnz     short loc_46DC43
0x46DC77: mov     edx, [esp+14h+Size]
0x46DC7B: mov     eax, [esp+14h+arg_0]
0x46DC7F: push    edx; Size
0x46DC80: push    ebp; Src
0x46DC81: push    eax; int
0x46DC82: mov     byte ptr [edi], 0
0x46DC85: call    TESForm_PutFormRecordChunkData
0x46DC8A: push    ebp
0x46DC8B: call    FormHeapFree
0x46DC90: add     esp, 10h
0x46DC93: pop     edi
0x46DC94: pop     esi
0x46DC95: pop     ebp
0x46DC96: pop     ebx
0x46DC97: pop     ecx
0x46DC98: retn    8
